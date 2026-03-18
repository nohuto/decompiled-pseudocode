/*
 * XREFs of xxxSwitchDesktopWithFade @ 0x1C00F61D8
 * Callers:
 *     NtUserSwitchDesktop @ 0x1C00F60D0 (NtUserSwitchDesktop.c)
 * Callees:
 *     xxxSwitchDesktop @ 0x1C005089C (xxxSwitchDesktop.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     RestoreGammaRamp @ 0x1C00F6040 (RestoreGammaRamp.c)
 *     FadeDesktop @ 0x1C00F64F0 (FadeDesktop.c)
 *     PrepareGammaRampData @ 0x1C00F6DC0 (PrepareGammaRampData.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxSwitchDesktopWithFade(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  int v5; // r14d
  unsigned int *v7; // rbx
  unsigned int v9; // esi
  int v10; // r13d
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v24; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v25[4]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp+40h] BYREF

  v5 = 0;
  v7 = 0LL;
  v27 = 0;
  v24 = 0LL;
  v9 = 0;
  v23 = 0;
  v10 = 0;
  if ( PsGetCurrentProcessId() != (HANDLE)gpidLogon )
    return 3221225506LL;
  if ( a2 == grpdeskRitInput )
    return 0LL;
  if ( (!a2
     || !grpdeskRitInput
     || (*(_DWORD *)(**(_QWORD **)(a2 + 8) + 52LL) & 1) == 0
     || (*(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1) == 0
     || !a5)
    && !gfIsFadingInProgress )
  {
    gfIsFadingInProgress = 1;
    v10 = 1;
    v16 = PrepareGammaRampData(&v27, &v24, &v23);
    v7 = v24;
    if ( v16 >= 0 )
      PushW32ThreadLock((__int64)v24, v25, (__int64)RestoreGammaRamp, v18);
    if ( v23 )
    {
      v5 = 1;
      if ( gdwInAtomicOperation )
      {
        v17 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v17, gdwInAtomicOperation);
      v9 = v27;
      FadeDesktop(v27, v7, a4 >> 1, 0LL);
      EnterCrit(0LL, 1LL);
    }
    else
    {
      v9 = v27;
    }
  }
  v12 = xxxSwitchDesktop(a1, a2, 0, a5);
  if ( v5 )
  {
    v19 = gdwInAtomicOperation;
    if ( gdwInAtomicOperation )
    {
      v19 = gdwExtraInstrumentations;
      v11 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v19, v11);
    FadeDesktop(v9, v7, a4 >> 1, 1LL);
    EnterCrit(0LL, 1LL);
  }
  if ( v7 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v13, v14);
    *(_QWORD *)(ThreadWin32Thread + 16) = v25[0];
    RestoreGammaRamp(v24, v21, v22);
  }
  if ( v10 )
    gfIsFadingInProgress = 0;
  return v12;
}
