/*
 * XREFs of RIMOnTimerNotification @ 0x1C0102E50
 * Callers:
 *     NtRIMOnTimerNotification @ 0x1C01001C0 (NtRIMOnTimerNotification.c)
 *     ?OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C0119070 (-OnAutoRepeatTimerNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnTimerNotification@CBaseInput@@AEAAJXZ @ 0x1C01190C0 (-OnTimerNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C000E118 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C0097198 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C010B940 (rimDispatchAutoRepeatCompleteFrame.c)
 *     RIMEndAllStaleContacts @ 0x1C010F710 (RIMEndAllStaleContacts.c)
 *     ApiSetDwmAsyncNotifyDigitizerActiveContacts @ 0x1C0139240 (ApiSetDwmAsyncNotifyDigitizerActiveContacts.c)
 */

__int64 __fastcall RIMOnTimerNotification(char *a1, int a2)
{
  int v4; // esi
  int v5; // r15d
  union _LARGE_INTEGER v6; // rbx
  LARGE_INTEGER v7; // rax
  __int64 v8; // rcx
  void *v9; // rcx
  __int64 v10; // rdi
  LONGLONG v11; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 i; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // edi
  LONGLONG v17; // rax
  __int64 v18; // rdx
  LONGLONG v19; // rt2
  __int64 Period; // [rsp+28h] [rbp-90h]
  union _LARGE_INTEGER DueTime; // [rsp+40h] [rbp-78h] BYREF
  _DWORD v23[16]; // [rsp+48h] [rbp-70h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x3Bu,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v4 = 1;
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, (PVOID *)&DueTime);
  if ( v5 >= 0 )
  {
    v6 = DueTime;
    RIMLockExclusive(DueTime.QuadPart + 96);
    if ( *(_BYTE *)(v6.QuadPart + 73) || *(_BYTE *)(v6.QuadPart + 75) )
    {
      v5 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0x43u,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
      goto LABEL_42;
    }
    RIMLockExclusive(v6.QuadPart + 696);
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x3Cu,
      (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    if ( a2 )
    {
      if ( *(_QWORD *)(v6.QuadPart + 480) != -1LL )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0x3Fu,
          (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
        ApiSetGetPowerTransitionsState(v23);
        if ( !v23[0] )
          goto LABEL_39;
        if ( v23[7] )
          goto LABEL_39;
        if ( v23[8] )
          goto LABEL_39;
        if ( !*(_DWORD *)(v6.QuadPart + 592) )
          goto LABEL_39;
        v10 = *(_QWORD *)(v6.QuadPart + 552);
        if ( !v10 )
          goto LABEL_39;
        do
        {
          if ( *(_BYTE *)(v10 + 48) == 2 && (*(_DWORD *)(v10 + 200) & 0x80u) != 0 )
          {
            if ( *(_QWORD *)(v10 + 400) )
            {
              ((void (__fastcall *)(_QWORD, _QWORD))rimDispatchAutoRepeatCompleteFrame)(
                (union _LARGE_INTEGER)v6.QuadPart,
                v10);
              if ( *(_QWORD *)(v10 + 400) )
                v4 = 0;
            }
          }
          v10 = *(_QWORD *)(v10 + 40);
        }
        while ( v10 );
        if ( v4 )
        {
LABEL_39:
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x13u,
            0x42u,
            (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
          ZwCancelTimer(*(HANDLE *)(v6.QuadPart + 480), 0LL);
          *(_QWORD *)(v6.QuadPart + 512) = 0LL;
        }
        else
        {
          WPP_RECORDER_SF_(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            0x13u,
            0x40u,
            (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
          v11 = 0x7FFFFFFFFFFFFFFFLL;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          for ( i = *(_QWORD *)(v6.QuadPart + 552); i; i = *(_QWORD *)(i + 40) )
          {
            if ( *(_BYTE *)(i + 48) == 2 && (*(_DWORD *)(i + 200) & 0x80u) != 0 )
            {
              v14 = *(_QWORD *)(i + 400);
              if ( v14 )
              {
                if ( PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 64) < v11 )
                  v11 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 64);
              }
            }
          }
          v15 = 1000 * (v11 + *(_QWORD *)(v6.QuadPart + 496));
          v16 = 10;
          v19 = v15 % gliQpcFreq.QuadPart;
          v17 = v15 / gliQpcFreq.QuadPart;
          v18 = v19;
          if ( *(_DWORD *)(v6.QuadPart + 488) )
            v16 = *(_DWORD *)(v6.QuadPart + 488);
          if ( (unsigned int)v17 > v16 )
          {
            WPP_RECORDER_SF_DD(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v18,
              0x14u,
              0x41u,
              (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
              v17,
              v16);
            LODWORD(v17) = v16;
          }
          DueTime.QuadPart = -10000LL * (int)v17;
          ZwSetTimer(*(HANDLE *)(v6.QuadPart + 480), &DueTime, 0LL, 0LL, 0, 0, 0LL);
          *(LARGE_INTEGER *)(v6.QuadPart + 512) = KeQueryPerformanceCounter(0LL);
        }
      }
      goto LABEL_40;
    }
    v7 = KeQueryPerformanceCounter(0LL);
    v8 = *(_QWORD *)(v6.QuadPart + 512);
    if ( v8 && v7.QuadPart - v8 <= *(_QWORD *)(v6.QuadPart + 504) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x3Eu,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    }
    else
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x3Du,
        (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
      ((void (__fastcall *)(_QWORD))RIMEndAllStaleContacts)((union _LARGE_INTEGER)v6.QuadPart);
      if ( !*(_DWORD *)(v6.QuadPart + 592) )
      {
        ZwCancelTimer(*(HANDLE *)(v6.QuadPart + 472), 0LL);
        v9 = *(void **)(v6.QuadPart + 480);
        if ( v9 != (void *)-1LL )
        {
          ZwCancelTimer(v9, 0LL);
          *(_QWORD *)(v6.QuadPart + 512) = 0LL;
        }
        *(_DWORD *)(v6.QuadPart + 596) = 0;
        ApiSetDwmAsyncNotifyDigitizerActiveContacts(v9, 0LL);
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
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x44u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    Period);
  return (unsigned int)v5;
}
