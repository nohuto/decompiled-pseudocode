/*
 * XREFs of ?ProcessHasBeenRunningLongEnough@?$CWatchdogTimer@$00@@AEAAJPEA_N@Z @ 0x18009F60C
 * Callers:
 *     ?ShouldReportHangToWatson@?$CWatchdogTimer@$00@@AEAA_NXZ @ 0x18009FAA8 (-ShouldReportHangToWatson@-$CWatchdogTimer@$00@@AEAA_NXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180043F18 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009B080 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18009FA70 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall CWatchdogTimer<1>::ProcessHasBeenRunningLongEnough(__int64 a1, bool *a2)
{
  HANDLE CurrentProcess; // rax
  const char *v5; // r9
  double v7; // xmm0_8
  double v8; // xmm0_8
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  struct _FILETIME UserTime; // [rsp+40h] [rbp-39h] BYREF
  double v14; // [rsp+48h] [rbp-31h] BYREF
  struct _FILETIME CreationTime; // [rsp+50h] [rbp-29h] BYREF
  unsigned __int64 v16; // [rsp+58h] [rbp-21h] BYREF
  struct _FILETIME v17; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-9h] BYREF
  struct _FILETIME *v20; // [rsp+90h] [rbp+17h]
  int v21; // [rsp+98h] [rbp+1Fh]
  int v22; // [rsp+9Ch] [rbp+23h]
  unsigned __int64 *v23; // [rsp+A0h] [rbp+27h]
  int v24; // [rsp+A8h] [rbp+2Fh]
  int v25; // [rsp+ACh] [rbp+33h]
  double *v26; // [rsp+B0h] [rbp+37h]
  int v27; // [rsp+B8h] [rbp+3Fh]
  int v28; // [rsp+BCh] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  CurrentProcess = GetCurrentProcess();
  if ( !GetProcessTimes(CurrentProcess, &CreationTime, &UserTime, &UserTime, &UserTime) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xC4,
             (__int64)"avcore\\audiocore\\server\\inc\\WatchdogTimer.h",
             v5);
  GetSystemTimePreciseAsFileTime(&v16);
  v17 = CreationTime;
  v18 = v16;
  if ( v16 >= *(_QWORD *)&CreationTime )
  {
    v7 = (double)((int)v16 - CreationTime.dwLowDateTime);
    if ( (__int64)(v16 - *(_QWORD *)&CreationTime) < 0 )
      v7 = v7 + 1.844674407370955e19;
    v8 = v7 / 10000000.0;
    v9 = *(const struct _TlgProvider_t **)(a1 + 8);
    v14 = v8;
    if ( *(_DWORD *)v9 > 5u )
    {
      if ( TlgKeywordOn(v9, 1uLL) )
      {
        v22 = 0;
        v25 = 0;
        v28 = 0;
        v20 = &v17;
        v23 = &v18;
        v26 = &v14;
        v21 = 8;
        v24 = 8;
        v27 = 8;
        TlgWrite(v10, &unk_180144EFF, v11, v12, 5u, &pData);
        v8 = v14;
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
      (unsigned int)"avcore\\audiocore\\server\\inc\\WatchdogTimer.h",
      (const char *)0x8000FFFFLL,
      (int)"Time went backwards: this process was created at %I64u hns, but it is now only %I64u hns",
      *(const char **)&CreationTime,
      v16);
    return 2147549183LL;
  }
}
