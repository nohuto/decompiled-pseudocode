/*
 * XREFs of xxxSwitchDesktopWithFade @ 0x1C00E69B8
 * Callers:
 *     NtUserSwitchDesktop @ 0x1C00E68B0 (NtUserSwitchDesktop.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     xxxSwitchDesktop @ 0x1C00B8B10 (xxxSwitchDesktop.c)
 *     RestoreGammaRamp @ 0x1C00E6820 (RestoreGammaRamp.c)
 *     FadeDesktop @ 0x1C00E6BA0 (FadeDesktop.c)
 *     PrepareGammaRampData @ 0x1C00E7480 (PrepareGammaRampData.c)
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
  __int64 v13; // r9
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 ThreadWin32Thread; // rax
  int v21; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v22; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v23[4]; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+A0h] [rbp+40h] BYREF

  v5 = 0;
  v7 = 0LL;
  v25 = 0;
  v22 = 0LL;
  v9 = 0;
  v21 = 0;
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
    v15 = PrepareGammaRampData(&v25, &v22, &v21);
    v7 = v22;
    if ( v15 >= 0 )
      PushW32ThreadLock((__int64)v22, v23, (__int64)RestoreGammaRamp);
    if ( v21 )
    {
      v5 = 1;
      if ( gdwInAtomicOperation )
      {
        v16 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v16, gdwInAtomicOperation, v17, v18);
      v9 = v25;
      FadeDesktop(v25, v7, a4 >> 1, 0LL);
      EnterCrit(0LL, 1LL);
    }
    else
    {
      v9 = v25;
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
    UserSessionSwitchLeaveCrit(v19, v11, gdwInAtomicOperation, v13);
    FadeDesktop(v9, v7, a4 >> 1, 1LL);
    EnterCrit(0LL, 1LL);
  }
  if ( v7 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(ThreadWin32Thread + 16) = v23[0];
    RestoreGammaRamp(v22);
  }
  if ( v10 )
    gfIsFadingInProgress = 0;
  return v12;
}
