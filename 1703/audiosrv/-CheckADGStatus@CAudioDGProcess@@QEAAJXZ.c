/*
 * XREFs of ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180017B18
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18001E970 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180017680 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x180017808 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A360 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x180090690 (WPP_SF_dd.c)
 */

// Hidden C++ exception states: #wind=1
signed int __fastcall CAudioDGProcess::CheckADGStatus(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rsi
  signed int result; // eax
  int OwningThread_high; // ebx
  CVolumeStrip *v4; // rcx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  DWORD LastError; // eax
  __int64 v8; // rdx
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  signed int v11; // [rsp+38h] [rbp-49h] BYREF
  DWORD ExitCode; // [rsp+3Ch] [rbp-45h] BYREF
  int v13; // [rsp+40h] [rbp-41h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-39h] BYREF
  char v15; // [rsp+50h] [rbp-31h]
  __int64 v16; // [rsp+58h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+7h] BYREF
  int *v19; // [rsp+98h] [rbp+17h]
  int v20; // [rsp+A0h] [rbp+1Fh]
  int v21; // [rsp+A4h] [rbp+23h]
  signed int *v22; // [rsp+A8h] [rbp+27h]
  int v23; // [rsp+B0h] [rbp+2Fh]
  int v24; // [rsp+B4h] [rbp+33h]

  v16 = -2LL;
  v1 = g_ADGProcess;
  result = CAudioDGProcess::WaitForADGStartup((CAudioDGProcess *)g_ADGProcess, &ExitCode);
  v11 = result;
  if ( result >= 0 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v1 + 48);
    v15 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    if ( LOBYTE(v1[2].OwningThread) )
    {
      OwningThread_high = HIDWORD(v1[2].OwningThread);
      v11 = OwningThread_high;
      v4 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control )
      {
LABEL_10:
        if ( OwningThread_high < 0 )
        {
          if ( v4 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v4 + 28) & 4) != 0 && *((_BYTE *)v4 + 25) >= 2u )
          {
            WPP_SF_d(
              *((_QWORD *)v4 + 2),
              38LL,
              &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
              (unsigned int)OwningThread_high);
            OwningThread_high = v11;
          }
          if ( (unsigned int)dword_18012A2A0 > 2 )
          {
            TlgCreateSz(&pDesc, "CAudioDGProcess::CheckADGStatus");
            v13 = 619;
            v19 = &v13;
            v20 = 4;
            v21 = 0;
            v22 = &v11;
            v23 = 4;
            v24 = 0;
            TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB26, v9, v10, 5u, &pData);
            OwningThread_high = v11;
          }
        }
        if ( v15 )
          LeaveCriticalSection(lpCriticalSection);
        return OwningThread_high;
      }
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
LABEL_6:
        if ( v4 != (CVolumeStrip *)&WPP_GLOBAL_Control && (*((_BYTE *)v4 + 28) & 4) != 0 && *((_BYTE *)v4 + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)v4 + 2),
            37LL,
            &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
            (unsigned int)OwningThread_high);
          OwningThread_high = v11;
          v4 = WPP_GLOBAL_Control;
        }
        goto LABEL_10;
      }
      v8 = 36LL;
    }
    else
    {
      if ( GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, &ExitCode) && ExitCode == 259 )
      {
        OwningThread_high = CAudioDGProcess::CheckADGStartupStatus((HANDLE *)&v1->DebugInfo);
        v11 = OwningThread_high;
      }
      else
      {
        LastError = GetLastError();
        OwningThread_high = LastError;
        ExitCode = LastError;
        if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            34LL,
            &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
            LastError,
            LastError);
          OwningThread_high = ExitCode;
        }
        if ( OwningThread_high > 0 )
          OwningThread_high = (unsigned __int16)OwningThread_high | 0x80070000;
        v11 = OwningThread_high;
      }
      HIDWORD(v1[2].OwningThread) = OwningThread_high;
      LOBYTE(v1[2].OwningThread) = 1;
      v4 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CVolumeStrip *)&WPP_GLOBAL_Control )
        goto LABEL_10;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
        goto LABEL_6;
      v8 = 35LL;
    }
    WPP_SF_d(*((_QWORD *)v4 + 2), v8, &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids, (unsigned int)OwningThread_high);
    v4 = WPP_GLOBAL_Control;
    OwningThread_high = v11;
    goto LABEL_6;
  }
  if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      33LL,
      &WPP_f5e0f8228e953c2ec26d9246ffcc9fec_Traceguids,
      (unsigned int)result);
    result = v11;
  }
  if ( (unsigned int)dword_18012A2A0 > 2 )
  {
    TlgCreateSz(&pDesc, "CAudioDGProcess::CheckADGStatus");
    v13 = 583;
    v19 = &v13;
    v20 = 4;
    v21 = 0;
    v22 = &v11;
    v23 = 4;
    v24 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_18012A2A0, &unk_1800FBB26, v5, v6, 5u, &pData);
    return v11;
  }
  return result;
}
