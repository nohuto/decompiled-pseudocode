/*
 * XREFs of ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$01@@AEAAJPEA_N@Z @ 0x140039BA8
 * Callers:
 *     ?ShouldReportHangToWatson@?$CWatchdogTimer@$01@@AEAA_NXZ @ 0x14003A23C (-ShouldReportHangToWatson@-$CWatchdogTimer@$01@@AEAA_NXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14001B050 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140032510 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _TlgWrite @ 0x140034DB0 (_TlgWrite.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14003A108 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CWatchdogTimer<2>::ProcessHasBeenRunningLongEnough(__int64 a1, bool *a2)
{
  HANDLE CurrentProcess; // rax
  const char *v5; // r9
  double v7; // xmm0_8
  double v8; // xmm0_8
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r9
  struct _FILETIME UserTime; // [rsp+40h] [rbp-39h] BYREF
  double v13; // [rsp+48h] [rbp-31h] BYREF
  struct _FILETIME CreationTime; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-21h] BYREF
  struct _FILETIME v16; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-9h] BYREF
  struct _FILETIME *v19; // [rsp+90h] [rbp+17h]
  int v20; // [rsp+98h] [rbp+1Fh]
  int v21; // [rsp+9Ch] [rbp+23h]
  unsigned __int64 *v22; // [rsp+A0h] [rbp+27h]
  int v23; // [rsp+A8h] [rbp+2Fh]
  int v24; // [rsp+ACh] [rbp+33h]
  double *v25; // [rsp+B0h] [rbp+37h]
  int v26; // [rsp+B8h] [rbp+3Fh]
  int v27; // [rsp+BCh] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  CurrentProcess = GetCurrentProcess();
  if ( !GetProcessTimes(CurrentProcess, &CreationTime, &UserTime, &UserTime, &UserTime) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xC4,
             (__int64)"avcore\\audiocore\\server\\inc\\watchdogtimer.h",
             v5);
  GetSystemTimePreciseAsFileTime(&v15);
  v16 = CreationTime;
  v17 = v15;
  if ( v15 >= *(_QWORD *)&CreationTime )
  {
    v7 = (double)((int)v15 - CreationTime.dwLowDateTime);
    if ( (__int64)(v15 - *(_QWORD *)&CreationTime) < 0 )
      v7 = v7 + 1.844674407370955e19;
    v8 = v7 / 10000000.0;
    v9 = *(const struct _TlgProvider_t **)(a1 + 8);
    v13 = v8;
    if ( *(_DWORD *)v9 > 5u )
    {
      if ( TlgKeywordOn(v9, 2uLL) )
      {
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v19 = &v16;
        v22 = &v17;
        v25 = &v13;
        v20 = 8;
        v23 = 8;
        v26 = 8;
        TlgWrite(v10, &unk_14006FC4E, 0LL, v11, 5u, &pData);
        v8 = v13;
      }
    }
    *a2 = v8 >= 300.0;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0xDB,
      (unsigned int)"avcore\\audiocore\\server\\inc\\watchdogtimer.h",
      (const char *)0x8000FFFFLL,
      (int)"Time went backwards: this process was created at %I64u hns, but it is now only %I64u hns",
      *(const char **)&CreationTime,
      v15);
    return 2147549183LL;
  }
}
