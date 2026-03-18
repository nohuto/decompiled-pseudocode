/*
 * XREFs of KiOutSwapKernelStacks @ 0x1400B29D4
 * Callers:
 *     KeSwapProcessOrStack @ 0x140176C50 (KeSwapProcessOrStack.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x140008690 (KiDecrementProcessStackCount.c)
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     KeEnumerateKernelStackSegments @ 0x1400B2CA8 (KeEnumerateKernelStackSegments.c)
 *     KiWaitForContextSwap @ 0x1400EB990 (KiWaitForContextSwap.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

ULONG __fastcall KiOutSwapKernelStacks(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // r14d
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r9
  _QWORD *v10; // r8
  ULONG result; // eax
  unsigned __int64 *v12; // r14
  unsigned __int64 v13; // rsi
  __int64 v14; // rbx
  int v15[4]; // [rsp+28h] [rbp-E0h] BYREF
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh]
  __int64 v18; // [rsp+40h] [rbp-C8h]
  __int64 v19; // [rsp+48h] [rbp-C0h]
  __int64 v20; // [rsp+50h] [rbp-B8h]
  _QWORD v21[5]; // [rsp+F8h] [rbp-10h] BYREF

  v2 = 0LL;
  v3 = KiProcessorBlock[KiLastProcessor];
  v4 = MEMORY[0xFFFFF78000000320] - KiStackProtectTime;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v15[0] = 0;
  while ( 1 )
  {
    LOBYTE(a2) = 1;
    KiSetVpThreadSpinLockCount(CurrentPrcb, a2);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v3 + 22800), 0LL) )
      break;
    KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
    do
      KeYieldProcessorEx(v15);
    while ( *(_QWORD *)(v3 + 22800) );
  }
  v7 = *(_QWORD **)(v3 + 22784);
  while ( v7 != (_QWORD *)(v3 + 22784) )
  {
    if ( (unsigned int)v2 >= 5 )
      break;
    v8 = (unsigned __int64)(v7 - 27);
    v7 = (_QWORD *)*v7;
    if ( v4 < *(_DWORD *)(v8 + 436) )
      break;
    if ( *(char *)(v8 + 195) >= 25 )
    {
      v9 = *(_QWORD *)(v8 + 216);
      v10 = *(_QWORD **)(v8 + 224);
      if ( *(_QWORD *)(v9 + 8) != v8 + 216 || *v10 != v8 + 216 )
        __fastfail(3u);
    }
    else
    {
      _interlockedbittestandreset((volatile signed __int32 *)(v8 + 120), 0x11u);
      if ( _interlockedbittestandset((volatile signed __int32 *)(v8 + 120), 0x14u) )
        v21[v2] = v8 | 1;
      else
        v21[v2] = v8;
      v2 = (unsigned int)(v2 + 1);
      v9 = *(_QWORD *)(v8 + 216);
      v10 = *(_QWORD **)(v8 + 224);
      if ( *(_QWORD *)(v9 + 8) != v8 + 216 || *v10 != v8 + 216 )
        __fastfail(3u);
    }
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)(v8 + 712) = 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 22800), 0LL);
  KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  __writecr8(CurrentIrql);
  ++KiLastProcessor;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( KiLastProcessor == result )
    KiLastProcessor = 0;
  if ( (_DWORD)v2 )
  {
    v12 = &v21[v2];
    do
    {
      --v12;
      LODWORD(v2) = v2 - 1;
      v13 = *v12 & 0xFFFFFFFFFFFFFFFEuLL;
      v14 = *v12 & 1;
      if ( !v14 )
        v13 = *v12;
      KiWaitForContextSwap(v13);
      if ( (unsigned int)v14 != 1 )
        KiDecrementProcessStackCount(*(_QWORD *)(v13 + 184));
      result = MiFlags;
      if ( (MiFlags & 0x40) != 0 )
      {
        v16 = 0;
        LOWORD(v17) = 0;
        v19 = 0LL;
        v20 = 0LL;
        v18 = 20LL;
        KeEnumerateKernelStackSegments(v13, MiOutPageSingleKernelStack, &v16);
        result = MiFlushTbList(&v16);
      }
    }
    while ( (_DWORD)v2 );
  }
  return result;
}
