/*
 * XREFs of MiFreeToSubAllocatedRegion @ 0x140499C38
 * Callers:
 *     MmDeleteTeb @ 0x140499B6C (MmDeleteTeb.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405160A8 (MiAllocateFromSubAllocatedRegion.c)
 *     MiFreeRfgControlStack @ 0x1406BFE90 (MiFreeRfgControlStack.c)
 * Callees:
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14009A7F0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14009A810 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     RtlClearBitsEx @ 0x1400CDB30 (RtlClearBitsEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     MiLocateVadEvent @ 0x1400CE790 (MiLocateVadEvent.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiDecommitRegion @ 0x140499E58 (MiDecommitRegion.c)
 */

void __fastcall MiFreeToSubAllocatedRegion(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  int v7; // edx
  __int64 v8; // r15
  struct _KTHREAD *CurrentThread; // r13
  char *v10; // rcx
  __int64 **VadEvent; // rbp
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 *v21; // rcx
  unsigned int v22; // edx
  unsigned int v23; // r8d
  bool v24; // bl
  int v25; // eax
  _QWORD *v26; // rax
  __int64 *v27; // rdx
  __int64 *v28; // rcx
  __int64 Process; // [rsp+28h] [rbp-30h]

  if ( a2 == 3 )
  {
    v7 = 128;
    v8 = 2LL;
  }
  else
  {
    v7 = 64;
    v8 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  VadEvent = MiLocateVadEvent(a1, v7);
  if ( !VadEvent )
    goto LABEL_34;
  v14 = (~(v12 - 1) & (v12 + a4 - 1)) / v12;
  v15 = (a3 - ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12)) / v12;
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v13);
  RtlClearBitsEx((__int64)(VadEvent + 1), v15, v14);
  *((_DWORD *)VadEvent + 12) -= v14;
  v16 = *((unsigned int *)VadEvent + 12);
  v17 = *((unsigned int *)VadEvent + 13);
  if ( v14 + v16 >= v17 && (unsigned int)v16 < (unsigned int)v17 )
  {
    v18 = VadEvent + 3;
    v19 = 16LL * ((_DWORD)VadEvent[7] & 3) + *(_QWORD *)(Process + 1296) + 168LL;
    v20 = *(_QWORD *)v19;
    if ( *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19 )
      __fastfail(3u);
    *v18 = v20;
    VadEvent[4] = (__int64 *)v19;
    *(_QWORD *)(v20 + 8) = v18;
    *(_QWORD *)v19 = v18;
  }
  v21 = *(__int64 **)(a1 + 56);
  v22 = 0;
  v23 = 0;
  while ( v21 )
  {
    if ( *((_DWORD *)v21 + 16) == 2 )
    {
      if ( v23 <= 1 )
        ++v23;
      if ( a3 <= v21[2] && a3 + a4 - 1 >= (v21[1] & 0xFFFFFFFFFFFFF000uLL) && v22 <= 1 )
        ++v22;
    }
    v21 = (__int64 *)*v21;
  }
  v24 = *((unsigned int *)VadEvent + 12) == v8;
  v25 = 1;
  if ( v23 != 1 )
    v24 = 0;
  if ( v22 != 1 )
    v25 = 0;
  if ( !v24 )
  {
    if ( !v25 )
      goto LABEL_31;
    MiDecommitRegion(a1, a3, a3 + a4 - 1);
  }
  if ( v24 )
  {
    v26 = VadEvent + 3;
    v27 = VadEvent[3];
    v28 = VadEvent[4];
    if ( (__int64 **)v27[1] != VadEvent + 3 || (_QWORD *)*v28 != v26 )
      __fastfail(3u);
    *v28 = (__int64)v27;
    v27[1] = (__int64)v28;
    *v26 = 0LL;
    VadEvent[4] = 0LL;
  }
LABEL_31:
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  v10 = (char *)a1;
  if ( v24 )
  {
    MiDeleteVad(a1, 0);
    return;
  }
LABEL_34:
  MiUnlockAndDereferenceVad(v10);
}
