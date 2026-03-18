/*
 * XREFs of MiFreeToSubAllocatedRegion @ 0x140562CBC
 * Callers:
 *     MmDeleteTeb @ 0x140562BFC (MmDeleteTeb.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140592B34 (MiAllocateFromSubAllocatedRegion.c)
 *     MiFreeRfgControlStack @ 0x140756F80 (MiFreeRfgControlStack.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140009400 (RtlClearBitsEx.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14000AE70 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14000AE94 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiDeleteVad @ 0x1400F1A40 (MiDeleteVad.c)
 *     MiLocateVadEvent @ 0x1401147D0 (MiLocateVadEvent.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     MiDecommitRegion @ 0x1404AE180 (MiDecommitRegion.c)
 */

void __fastcall MiFreeToSubAllocatedRegion(_QWORD *P, int a2, unsigned __int64 a3, __int64 a4)
{
  bool v6; // zf
  int v7; // edx
  struct _KTHREAD *CurrentThread; // r9
  __int64 v10; // r15
  __int64 Process; // r12
  __int64 v12; // rdx
  PVOID v13; // rcx
  __int64 **VadEvent; // rbp
  unsigned __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r8
  unsigned int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // r8d
  __int64 v24; // rax
  __int64 *i; // rcx
  bool v26; // bl
  int v27; // eax
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  _QWORD *v31; // rax
  __int64 *v32; // rcx
  __int64 *v33; // rdx
  __int64 v34; // [rsp+28h] [rbp-30h]

  v6 = a2 == 3;
  v7 = 128;
  CurrentThread = KeGetCurrentThread();
  v10 = 2LL;
  v34 = (__int64)CurrentThread;
  if ( !v6 )
    v10 = 0LL;
  Process = (__int64)CurrentThread->ApcState.Process;
  if ( !v6 )
    v7 = 64;
  VadEvent = MiLocateVadEvent((__int64)P, v7);
  if ( !VadEvent )
    goto LABEL_25;
  v17 = (~(v15 - 1) & (v15 + a4 - 1)) / v15;
  v18 = (a3 - ((*((unsigned int *)P + 6) | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12)) / v15;
  LOCK_PAGE_TABLE_COMMITMENT(v16, Process);
  RtlClearBitsEx((__int64)(VadEvent + 1), v18, v17);
  v19 = *((unsigned int *)VadEvent + 13);
  v20 = *((_DWORD *)VadEvent + 12) - v17;
  v21 = v20;
  *((_DWORD *)VadEvent + 12) = v20;
  if ( v17 + v20 >= v19 )
  {
    v21 = v20;
    if ( v20 < (unsigned int)v19 )
    {
      v28 = VadEvent + 3;
      v29 = *(_QWORD *)(Process + 1296) + 16 * (((_DWORD)VadEvent[7] & 3) + 16LL);
      v30 = *(_QWORD *)v29;
      if ( *(_QWORD *)(*(_QWORD *)v29 + 8LL) != v29 )
        __fastfail(3u);
      *v28 = v30;
      VadEvent[4] = (__int64 *)v29;
      *(_QWORD *)(v30 + 8) = v28;
      *(_QWORD *)v29 = v28;
      v21 = *((_DWORD *)VadEvent + 12);
    }
  }
  v22 = 0;
  v23 = 0;
  v24 = v21;
  for ( i = (__int64 *)P[7]; i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 16) == 2 )
    {
      if ( v23 <= 1 )
        ++v23;
      if ( a3 <= i[2] && a3 + a4 - 1 >= (i[1] & 0xFFFFFFFFFFFFF000uLL) && v22 <= 1 )
        ++v22;
    }
  }
  v26 = v24 == v10;
  v27 = 1;
  if ( v23 != 1 )
    v26 = 0;
  if ( v22 != 1 )
    v27 = 0;
  if ( v26 )
  {
    v31 = VadEvent + 3;
    v32 = VadEvent[3];
    if ( (__int64 **)v32[1] != VadEvent + 3 || (v33 = VadEvent[4], (_QWORD *)*v33 != v31) )
      __fastfail(3u);
    *v33 = (__int64)v32;
    v32[1] = (__int64)v33;
    *v31 = 0LL;
    VadEvent[4] = 0LL;
  }
  else if ( v27 )
  {
    MiDecommitRegion((__int64)P, a3, a3 + a4 - 1);
  }
  UNLOCK_PAGE_TABLE_COMMITMENT(v34, Process);
  v13 = P;
  if ( v26 )
    MiDeleteVad((unsigned int *)P, 0LL, 0);
  else
LABEL_25:
    MiUnlockAndDereferenceVad(v13, v12, v15, v16);
}
