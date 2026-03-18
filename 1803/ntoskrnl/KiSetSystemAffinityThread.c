/*
 * XREFs of KiSetSystemAffinityThread @ 0x14003AA28
 * Callers:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 * Callees:
 *     KiPrcbInGroupAffinity @ 0x14003AF18 (KiPrcbInGroupAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140040610 (KiUpdateNodeAffinitizedFlag.c)
 *     KiSelectNextThread @ 0x1400A70C0 (KiSelectNextThread.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400EDC50 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiComputeThreadAffinity @ 0x1401329B0 (KiComputeThreadAffinity.c)
 */

__int64 __fastcall KiSetSystemAffinityThread(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int16 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  int v18; // [rsp+50h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  *(_WORD *)(v4 + 584) = *(_WORD *)(a2 + 8);
  *(_QWORD *)(v4 + 576) = *(_QWORD *)a2;
  if ( a3 < 0x500 )
  {
    *(_DWORD *)(v4 + 588) = a3;
    v14 = a3;
    v9 = 0x140000000uLL;
LABEL_7:
    v7 = *(_QWORD *)(v9 + 8 * v14 + 4512512);
    goto LABEL_8;
  }
  v7 = KiProcessorBlock[*(unsigned int *)(v4 + 588)];
  if ( !(unsigned int)KiPrcbInGroupAffinity(v7) )
  {
    v10 = *(_QWORD *)(v7 + 192);
    v11 = *(_WORD *)(v8 + 8);
    v12 = *(_QWORD *)v8;
    if ( v11 == *(_WORD *)(v10 + 144) )
    {
      v13 = v12 & *(_QWORD *)(v10 + 136);
      if ( v13 )
        v12 = v13;
    }
    _BitScanReverse64(&v12, v12);
    v14 = *(unsigned int *)(v9 + 4LL * ((unsigned int)v12 + (v11 << 6)) + 4525328);
    *(_DWORD *)(v4 + 588) = v14;
    goto LABEL_7;
  }
LABEL_8:
  if ( (*(_DWORD *)(v4 + 116) & 8) != 0 || !(unsigned int)KiComputeThreadAffinity(v4) )
  {
    KiUpdateSharedReadyQueueAffinityThread(v7, v4);
    KiUpdateNodeAffinitizedFlag(v4);
  }
  result = KiPrcbInGroupAffinity(a1);
  if ( !(_DWORD)result )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 0xCu);
    if ( !*(_QWORD *)(a1 + 16) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v18 = 0;
      while ( 1 )
      {
        LOBYTE(v16) = 1;
        KiSetVpThreadSpinLockCount(CurrentPrcb, v16);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
        do
          KeYieldProcessorEx(&v18);
        while ( *(_QWORD *)(a1 + 48) );
      }
      if ( !*(_QWORD *)(a1 + 16) )
        KiSelectNextThread(a1, a4);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      return KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
    }
  }
  return result;
}
