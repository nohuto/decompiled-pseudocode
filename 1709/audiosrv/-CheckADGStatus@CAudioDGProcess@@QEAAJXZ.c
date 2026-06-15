/*
 * XREFs of ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18001D5C8
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002AD2C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x18001DDD4 (-CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x18001DF54 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x180089EEC (WPP_SF_dd.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall CAudioDGProcess::CheckADGStatus(CAudioDGProcess *this)
{
  LPCRITICAL_SECTION v1; // rsi
  int result; // eax
  int LockSemaphore; // ebx
  CAudioDGProcess *v4; // rcx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  __int64 v7; // rdx
  LPCGUID v8; // r8
  LPCGUID v9; // r9
  int v10; // [rsp+38h] [rbp-39h] BYREF
  DWORD ExitCode; // [rsp+3Ch] [rbp-35h] BYREF
  int v12; // [rsp+40h] [rbp-31h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-29h] BYREF
  char v14; // [rsp+50h] [rbp-21h]
  __int64 v15; // [rsp+58h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+17h] BYREF
  int *v18; // [rsp+98h] [rbp+27h]
  int v19; // [rsp+A0h] [rbp+2Fh]
  int v20; // [rsp+A4h] [rbp+33h]
  int *v21; // [rsp+A8h] [rbp+37h]
  int v22; // [rsp+B0h] [rbp+3Fh]
  int v23; // [rsp+B4h] [rbp+43h]

  v15 = -2LL;
  v1 = g_ADGProcess;
  result = CAudioDGProcess::WaitForADGStartup((CAudioDGProcess *)g_ADGProcess, &ExitCode);
  v10 = result;
  if ( result >= 0 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v1 + 48);
    v14 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    if ( BYTE4(v1[2].OwningThread) )
    {
      LockSemaphore = (int)v1[2].LockSemaphore;
      v10 = LockSemaphore;
      v4 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control )
      {
LABEL_7:
        if ( LockSemaphore < 0 )
        {
          if ( v4 != (CAudioDGProcess *)&WPP_GLOBAL_Control
            && (*((_BYTE *)v4 + 28) & 4) != 0
            && *((_BYTE *)v4 + 25) >= 2u )
          {
            WPP_SF_d(
              *((_QWORD *)v4 + 2),
              38LL,
              &WPP_c059856c368f347c07e9a39e19191005_Traceguids,
              (unsigned int)LockSemaphore);
            LockSemaphore = v10;
          }
          if ( (unsigned int)dword_18014A3F0 > 2 )
          {
            TlgCreateSz(&pDesc, "CAudioDGProcess::CheckADGStatus");
            v12 = 622;
            v18 = &v12;
            v19 = 4;
            v20 = 0;
            v21 = &v10;
            v22 = 4;
            v23 = 0;
            TlgWrite((TraceLoggingHProvider)&dword_18014A3F0, &unk_1801122EC, v8, v9, 5u, &pData);
            LockSemaphore = v10;
          }
        }
        if ( v14 )
          LeaveCriticalSection(lpCriticalSection);
        return LockSemaphore;
      }
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
      {
LABEL_5:
        if ( v4 != (CAudioDGProcess *)&WPP_GLOBAL_Control && (*((_BYTE *)v4 + 28) & 4) != 0 && *((_BYTE *)v4 + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)v4 + 2),
            37LL,
            &WPP_c059856c368f347c07e9a39e19191005_Traceguids,
            (unsigned int)LockSemaphore);
          LockSemaphore = v10;
          v4 = WPP_GLOBAL_Control;
        }
        goto LABEL_7;
      }
      v7 = 36LL;
    }
    else
    {
      if ( GetExitCodeProcess(*(HANDLE *)&v1[2].LockCount, &ExitCode) && ExitCode == 259 )
      {
        LockSemaphore = CAudioDGProcess::CheckADGStartupStatus((CAudioDGProcess *)v1);
        v10 = LockSemaphore;
      }
      else
      {
        LockSemaphore = GetLastError();
        ExitCode = LockSemaphore;
        if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_c059856c368f347c07e9a39e19191005_Traceguids);
          LockSemaphore = ExitCode;
        }
        if ( LockSemaphore > 0 )
          LockSemaphore = (unsigned __int16)LockSemaphore | 0x80070000;
        v10 = LockSemaphore;
      }
      LODWORD(v1[2].LockSemaphore) = LockSemaphore;
      BYTE4(v1[2].OwningThread) = 1;
      v4 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CAudioDGProcess *)&WPP_GLOBAL_Control )
        goto LABEL_7;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
        goto LABEL_5;
      v7 = 35LL;
    }
    WPP_SF_d(*((_QWORD *)v4 + 2), v7, &WPP_c059856c368f347c07e9a39e19191005_Traceguids, (unsigned int)LockSemaphore);
    v4 = WPP_GLOBAL_Control;
    LockSemaphore = v10;
    goto LABEL_5;
  }
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      33LL,
      &WPP_c059856c368f347c07e9a39e19191005_Traceguids,
      (unsigned int)result);
    result = v10;
  }
  if ( (unsigned int)dword_18014A3F0 > 2 )
  {
    TlgCreateSz(&pDesc, "CAudioDGProcess::CheckADGStatus");
    v12 = 586;
    v18 = &v12;
    v19 = 4;
    v20 = 0;
    v21 = &v10;
    v22 = 4;
    v23 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_18014A3F0, &unk_1801122EC, v5, v6, 5u, &pData);
    return v10;
  }
  return result;
}
