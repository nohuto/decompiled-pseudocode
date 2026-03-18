/*
 * XREFs of RIMOnTimerNotification @ 0x1C0102C90
 * Callers:
 *     NtRIMOnTimerNotification @ 0x1C00FFCD0 (NtRIMOnTimerNotification.c)
 *     ?OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C011A400 (-OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C011A460 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_DD @ 0x1C005557C (WPP_RECORDER_SF_DD.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C0091614 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C010C9F4 (rimDispatchAutoRepeatCompleteFrame.c)
 *     RIMEndAllStaleContacts @ 0x1C0110C68 (RIMEndAllStaleContacts.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C0139F68 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 */

__int64 __fastcall RIMOnTimerNotification(char *a1, int a2)
{
  int v2; // edi
  int v4; // esi
  int v5; // r15d
  union _LARGE_INTEGER v6; // rbx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  LARGE_INTEGER v10; // rax
  int v11; // edx
  __int64 v12; // rcx
  void *v13; // rcx
  int v14; // edx
  __int64 v15; // rdi
  LONGLONG v16; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 i; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edi
  LONGLONG v22; // rax
  __int64 v23; // rdx
  LONGLONG v24; // rt2
  __int64 Period; // [rsp+28h] [rbp-90h]
  union _LARGE_INTEGER DueTime; // [rsp+40h] [rbp-78h] BYREF
  _DWORD v28[14]; // [rsp+48h] [rbp-70h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    59,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v4 = 1;
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, (PVOID *)&DueTime);
  if ( v5 >= 0 )
  {
    v6 = DueTime;
    RIMLockExclusive(DueTime.QuadPart + 96);
    if ( *(_BYTE *)(v6.QuadPart + 73) || *(_BYTE *)(v6.QuadPart + 75) )
    {
      v5 = -1073741637;
      LOBYTE(v7) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        18,
        67,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
      goto LABEL_42;
    }
    RIMLockExclusive(v6.QuadPart + 696);
    LOBYTE(v8) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      19,
      60,
      (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    if ( v2 )
    {
      if ( *(_QWORD *)(v6.QuadPart + 480) != -1LL )
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          19,
          63,
          (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
        ApiSetGetPowerTransitionsState(v28);
        if ( !v28[0] )
          goto LABEL_39;
        if ( v28[7] )
          goto LABEL_39;
        if ( v28[8] )
          goto LABEL_39;
        if ( !*(_DWORD *)(v6.QuadPart + 592) )
          goto LABEL_39;
        v15 = *(_QWORD *)(v6.QuadPart + 552);
        if ( !v15 )
          goto LABEL_39;
        do
        {
          if ( *(_BYTE *)(v15 + 48) == 2 && (*(_DWORD *)(v15 + 200) & 0x80u) != 0 )
          {
            if ( *(_QWORD *)(v15 + 400) )
            {
              ((void (__fastcall *)(_QWORD, _QWORD))rimDispatchAutoRepeatCompleteFrame)(
                (union _LARGE_INTEGER)v6.QuadPart,
                v15);
              if ( *(_QWORD *)(v15 + 400) )
                v4 = 0;
            }
          }
          v15 = *(_QWORD *)(v15 + 40);
        }
        while ( v15 );
        if ( v4 )
        {
LABEL_39:
          LOBYTE(v14) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v14,
            19,
            66,
            (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
          ZwCancelTimer(*(HANDLE *)(v6.QuadPart + 480), 0LL);
          *(_QWORD *)(v6.QuadPart + 512) = 0LL;
        }
        else
        {
          LOBYTE(v14) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v14,
            19,
            64,
            (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
          v16 = 0x7FFFFFFFFFFFFFFFLL;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          for ( i = *(_QWORD *)(v6.QuadPart + 552); i; i = *(_QWORD *)(i + 40) )
          {
            if ( *(_BYTE *)(i + 48) == 2 && (*(_DWORD *)(i + 200) & 0x80u) != 0 )
            {
              v19 = *(_QWORD *)(i + 400);
              if ( v19 )
              {
                if ( PerformanceCounter.QuadPart - *(_QWORD *)(v19 + 64) < v16 )
                  v16 = PerformanceCounter.QuadPart - *(_QWORD *)(v19 + 64);
              }
            }
          }
          v20 = 1000 * (v16 + *(_QWORD *)(v6.QuadPart + 496));
          v21 = 10;
          v24 = v20 % gliQpcFreq.QuadPart;
          v22 = v20 / gliQpcFreq.QuadPart;
          v23 = v24;
          if ( *(_DWORD *)(v6.QuadPart + 488) )
            v21 = *(_DWORD *)(v6.QuadPart + 488);
          if ( (unsigned int)v22 > v21 )
          {
            WPP_RECORDER_SF_DD(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v23,
              0x14u,
              0x41u,
              (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
              v22,
              v21);
            LODWORD(v22) = v21;
          }
          DueTime.QuadPart = -10000LL * (int)v22;
          ZwSetTimer(*(HANDLE *)(v6.QuadPart + 480), &DueTime, 0LL, 0LL, 0, 0, 0LL);
          *(LARGE_INTEGER *)(v6.QuadPart + 512) = KeQueryPerformanceCounter(0LL);
        }
      }
      goto LABEL_40;
    }
    v10 = KeQueryPerformanceCounter(0LL);
    v12 = *(_QWORD *)(v6.QuadPart + 512);
    if ( v12 && v10.QuadPart - v12 <= *(_QWORD *)(v6.QuadPart + 504) )
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        19,
        62,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    }
    else
    {
      LOBYTE(v11) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        19,
        61,
        (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
      ((void (__fastcall *)(_QWORD))RIMEndAllStaleContacts)((union _LARGE_INTEGER)v6.QuadPart);
      if ( !*(_DWORD *)(v6.QuadPart + 592) )
      {
        ZwCancelTimer(*(HANDLE *)(v6.QuadPart + 472), 0LL);
        v13 = *(void **)(v6.QuadPart + 480);
        if ( v13 != (void *)-1LL )
        {
          ZwCancelTimer(v13, 0LL);
          *(_QWORD *)(v6.QuadPart + 512) = 0LL;
        }
        *(_DWORD *)(v6.QuadPart + 596) = 0;
        ApiSetDwmAsyncNotifyDigitizerActiveContacts(v13, 0LL);
        goto LABEL_40;
      }
    }
    DueTime.QuadPart = -1000000LL;
    ZwSetTimer(*(HANDLE *)(v6.QuadPart + 472), &DueTime, 0LL, 0LL, 0, 0, 0LL);
LABEL_40:
    *(_QWORD *)(v6.QuadPart + 704) = 0LL;
    ExReleasePushLockExclusiveEx(v6.QuadPart + 696, 0LL);
    KeLeaveCriticalRegion();
LABEL_42:
    *(_QWORD *)(v6.QuadPart + 104) = 0LL;
    ExReleasePushLockExclusiveEx(v6.QuadPart + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject((PVOID)v6.QuadPart);
  }
  LODWORD(Period) = v5;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x44u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    Period);
  return (unsigned int)v5;
}
