/*
 * XREFs of MiFreeToSubAllocatedRegion @ 0x14056A828
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x14050946C (MiAllocateFromSubAllocatedRegion.c)
 *     MmDeleteTeb @ 0x14056A768 (MmDeleteTeb.c)
 *     MiFreeRfgControlStack @ 0x1406EDAF0 (MiFreeRfgControlStack.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140036470 (RtlClearBitsEx.c)
 *     MiUnlockAndDereferenceVad @ 0x14003D4E0 (MiUnlockAndDereferenceVad.c)
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400A1640 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1400A1880 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLocateVadEvent @ 0x14010C834 (MiLocateVadEvent.c)
 *     MiDecommitRegion @ 0x1404952E0 (MiDecommitRegion.c)
 */

void __fastcall MiFreeToSubAllocatedRegion(char *P, int a2, unsigned __int64 a3, __int64 a4)
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
  __int64 *v18; // rcx
  unsigned int v19; // edx
  unsigned int v20; // r8d
  bool v21; // bl
  int v22; // eax
  _QWORD *v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 *v27; // rcx
  __int64 *v28; // rdx
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
  VadEvent = MiLocateVadEvent((__int64)P, v7);
  if ( !VadEvent )
    goto LABEL_24;
  v14 = (~(v12 - 1) & (v12 + a4 - 1)) / v12;
  v15 = (a3 - ((*((unsigned int *)P + 6) | ((unsigned __int64)(unsigned __int8)P[32] << 32)) << 12)) / v12;
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v13);
  RtlClearBitsEx((__int64)(VadEvent + 1), v15, v14);
  *((_DWORD *)VadEvent + 12) -= v14;
  v16 = *((unsigned int *)VadEvent + 12);
  v17 = *((unsigned int *)VadEvent + 13);
  if ( v14 + v16 >= v17 && (unsigned int)v16 < (unsigned int)v17 )
  {
    v23 = VadEvent + 3;
    v24 = 16LL * ((_DWORD)VadEvent[7] & 3) + *(_QWORD *)(Process + 1296) + 168LL;
    v25 = *(_QWORD *)v24;
    if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
      __fastfail(3u);
    *v23 = v25;
    VadEvent[4] = (__int64 *)v24;
    *(_QWORD *)(v25 + 8) = v23;
    *(_QWORD *)v24 = v23;
  }
  v18 = (__int64 *)*((_QWORD *)P + 7);
  v19 = 0;
  v20 = 0;
  while ( v18 )
  {
    if ( *((_DWORD *)v18 + 16) == 2 )
    {
      if ( v20 <= 1 )
        ++v20;
      if ( a3 <= v18[2] && a3 + a4 - 1 >= (v18[1] & 0xFFFFFFFFFFFFF000uLL) && v19 <= 1 )
        ++v19;
    }
    v18 = (__int64 *)*v18;
  }
  v21 = *((unsigned int *)VadEvent + 12) == v8;
  v22 = 1;
  if ( v20 != 1 )
    v21 = 0;
  if ( v19 != 1 )
    v22 = 0;
  if ( !v21 )
  {
    if ( !v22 )
      goto LABEL_23;
    MiDecommitRegion((__int64)P, a3, a3 + a4 - 1);
  }
  if ( v21 )
  {
    v26 = VadEvent + 3;
    v27 = VadEvent[3];
    if ( (__int64 **)v27[1] != VadEvent + 3 || (v28 = VadEvent[4], (_QWORD *)*v28 != v26) )
      __fastfail(3u);
    *v28 = (__int64)v27;
    v27[1] = (__int64)v28;
    *v26 = 0LL;
    VadEvent[4] = 0LL;
  }
LABEL_23:
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  v10 = P;
  if ( !v21 )
  {
LABEL_24:
    MiUnlockAndDereferenceVad(v10);
    return;
  }
  MiDeleteVad((__int64)P, 0);
}
