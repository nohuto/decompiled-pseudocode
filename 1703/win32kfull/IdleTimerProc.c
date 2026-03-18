/*
 * XREFs of IdleTimerProc @ 0x1C004A1EC
 * Callers:
 *     xxxHungAppDemon @ 0x1C0049F40 (xxxHungAppDemon.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C00C9168 (_PostTransformableMessage.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
char IdleTimerProc()
{
  int IsDisplayRequired; // eax
  signed int v1; // edi
  char v2; // bl
  signed int v3; // ebx
  __int64 GlobalTickCount; // rbx
  __int64 v5; // rcx
  int *v6; // rcx
  __int64 v7; // rbx
  int v9; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v10[4]; // [rsp+38h] [rbp-48h] BYREF
  int v11; // [rsp+48h] [rbp-38h] BYREF
  __int64 v12; // [rsp+50h] [rbp-30h]
  int v13; // [rsp+58h] [rbp-28h] BYREF
  __int64 v14; // [rsp+60h] [rbp-20h]
  int v15[4]; // [rsp+68h] [rbp-18h] BYREF

  RIMWatchDog();
  LOBYTE(IsDisplayRequired) = gPowerState;
  if ( (gPowerState & 1) != 0 )
    return IsDisplayRequired;
  LOBYTE(IsDisplayRequired) = gafAsyncKeyState[0];
  if ( (gafAsyncKeyState[0] & 4) != 0 )
    return IsDisplayRequired;
  if ( (gafAsyncKeyState[0] & 0x10) != 0 )
    return IsDisplayRequired;
  LOBYTE(IsDisplayRequired) = gafAsyncKeyState[1];
  if ( (IsDisplayRequired & 1) != 0 || (IsDisplayRequired & 4) != 0 || (IsDisplayRequired & 0x10) != 0 )
    return IsDisplayRequired;
  EtwTraceIdleStatus();
  if ( gbLockScreenAutoLockActive )
    v1 = giPowerOffTimeOutMs - 5000;
  else
    v1 = 0;
  if ( v1 > 0 && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, v1) )
  {
    GlobalTickCount = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 1LL);
    if ( GlobalTickCount != CInputGlobals::GetLastInputTime(gpInputGlobals)
      && (!(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets)
      && (int)PostWinlogonMessage(1024LL, 3LL) >= 0 )
    {
      EtwTraceIdleActionExpiration(6LL, (unsigned int)v1);
      CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 1LL);
      dword_1C032C7D4 = v1;
    }
  }
  if ( dword_1C032C7D4 <= 0
    || !CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, dword_1C032C7D4)
    || CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, dword_1C032C7D4 + 10000) )
  {
    v2 = 0;
    dword_1C032C7D4 = 0;
  }
  else
  {
    v2 = 1;
  }
  if ( giPowerOffTimeOutMs > 0
    && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, giPowerOffTimeOutMs)
    && !v2
    && (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 3LL) )
  {
    EtwTraceIdleActionExpiration(2LL, giPowerOffTimeOutMs);
  }
  if ( (gPowerTransitionsState[0] || gPowerTransitionsState[5] || gPowerTransitionsState[6]) && !v2 )
  {
    if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v9) )
    {
      if ( gpqForeground )
      {
        v5 = *(_QWORD *)(gpqForeground + 88LL);
        if ( v5 )
        {
LABEL_55:
          PostTransformableMessage(v5, 274, 61808, 2, 0);
          goto LABEL_18;
        }
      }
      v6 = &v11;
      v12 = v9;
      v11 = 5;
    }
    else
    {
      if ( gPowerTransitionsState[5] || !(unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) )
        goto LABEL_18;
      if ( gpqForeground )
      {
        v5 = *(_QWORD *)(gpqForeground + 88LL);
        if ( v5 )
          goto LABEL_55;
      }
      v13 = 5;
      v6 = &v13;
      v14 = 17LL;
    }
    QueuePowerRequest(v6, 0LL);
  }
LABEL_18:
  if ( giPowerSessionActivityTimeOutMs > 0
    && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, giPowerSessionActivityTimeOutMs)
    && !gPowerAdaptiveState )
  {
    gPowerAdaptiveState = 1;
    if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 4LL) )
      EtwTraceIdleActionExpiration(5LL, giPowerSessionActivityTimeOutMs);
    v10[0] = 9;
    QueuePowerRequest(v10, 0LL);
  }
  if ( giScreenSaveTimeOutMs > 0 && CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, giScreenSaveTimeOutMs) )
  {
    if ( gbLockConsoleActive )
    {
      v7 = CInputGlobals::GetGlobalTickCount(gpInputGlobals, 1LL);
      if ( v7 != CInputGlobals::GetLastInputTime(gpInputGlobals) )
      {
        EtwTraceIdleActionExpiration(3LL, giScreenSaveTimeOutMs);
        if ( !(unsigned int)PowerIsDisplayRequired() || gbBlockSendInputResets )
          PostWinlogonMessage(1027LL, 0LL);
      }
    }
    else
    {
      v10[0] = 6;
      QueuePowerRequest(v10, 0LL);
    }
  }
  LOBYTE(IsDisplayRequired) = giDimTimeOutMs;
  v3 = 0;
  if ( giDimTimeOutMs > 0 )
  {
    LOBYTE(IsDisplayRequired) = gbManualDimTimeOut;
    if ( gbManualDimTimeOut )
    {
      v3 = giDimTimeOutMs;
    }
    else
    {
      LOBYTE(IsDisplayRequired) = giPowerOffTimeOutMs;
      if ( giPowerOffTimeOutMs - 15000 >= 45000 )
        v3 = giPowerOffTimeOutMs - 15000;
    }
  }
  if ( v3 > 0 )
  {
    LOBYTE(IsDisplayRequired) = giPowerOffTimeOutMs;
    if ( giPowerOffTimeOutMs <= 0 || v3 < giPowerOffTimeOutMs )
    {
      LOBYTE(IsDisplayRequired) = CInputGlobals::IsTimeFromLastInputEvent(gpInputGlobals, v3);
      if ( (_BYTE)IsDisplayRequired )
      {
        if ( (unsigned __int8)CInputGlobals::UpdateGlobalTickCount(gpInputGlobals, 5LL) )
          EtwTraceIdleActionExpiration(4LL, (unsigned int)v3);
        IsDisplayRequired = PowerIsDisplayRequired();
        if ( !IsDisplayRequired )
        {
          LOBYTE(IsDisplayRequired) = gPowerDisplayState;
          if ( *((_DWORD *)&gPowerDisplayState + 16) == 1 )
          {
            IsDisplayRequired = PowerIsDisplayBurstActive(0LL);
            if ( !IsDisplayRequired )
            {
              v15[0] = 7;
              LOBYTE(IsDisplayRequired) = QueuePowerRequest(v15, 0LL);
            }
          }
        }
      }
    }
  }
  return IsDisplayRequired;
}
