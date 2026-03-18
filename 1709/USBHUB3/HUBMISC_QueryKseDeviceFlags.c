/*
 * XREFs of HUBMISC_QueryKseDeviceFlags @ 0x1C002A94C
 * Callers:
 *     HUBREG_QueryUsbflagsValuesForDevice @ 0x1C006F290 (HUBREG_QueryUsbflagsValuesForDevice.c)
 *     HUBREG_QueryHubErrataFlags @ 0x1C006FC18 (HUBREG_QueryHubErrataFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x1C0010794 (RtlStringCbPrintfW.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall HUBMISC_QueryKseDeviceFlags(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        _WORD *a5,
        _WORD *a6,
        _QWORD *a7,
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        char a12,
        __int64 a13)
{
  _WORD *v13; // rdi
  _WORD *v14; // rbx
  unsigned int v16; // edx
  size_t v17; // r14
  int v18; // eax
  _QWORD *result; // rax
  bool v20; // zf
  _QWORD *v21; // r12
  _QWORD *v22; // r13
  char v23; // r15
  const wchar_t *v24; // r8
  NTSTATUS v25; // eax
  const wchar_t *v26; // r8
  NTSTATUS v27; // eax
  const wchar_t *v28; // r8
  NTSTATUS v29; // eax
  const wchar_t *v30; // r8
  NTSTATUS v31; // eax
  const wchar_t *v32; // r8
  NTSTATUS v33; // eax
  __int64 v34; // [rsp+28h] [rbp-40h]
  __int64 v35; // [rsp+28h] [rbp-40h]
  __int64 v36; // [rsp+28h] [rbp-40h]
  __int64 v37; // [rsp+28h] [rbp-40h]
  __int64 v38; // [rsp+28h] [rbp-40h]
  _QWORD v39[3]; // [rsp+50h] [rbp-18h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+C8h] [rbp+60h] BYREF

  v13 = a6;
  v14 = a5;
  v39[0] = 0LL;
  if ( a4 && a5 && a6 && *a4 && *a5 && *a6 )
    v16 = (unsigned __int16)*a5 + (unsigned __int16)*a6 + (unsigned __int16)*a4 + 88;
  else
    v16 = 82;
  v17 = v16;
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64, _QWORD, _QWORD *, NTSTRSAFE_PWSTR *))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          0LL,
          512LL,
          1681082453LL,
          v16,
          v39,
          &pszDest);
  if ( v18 < 0 )
  {
    LODWORD(v34) = v18;
    result = (_QWORD *)WPP_RECORDER_SF_d(
                         a13,
                         2u,
                         5u,
                         0x59u,
                         (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
                         v34);
    goto LABEL_40;
  }
  v20 = WPP_MAIN_CB.Queue.ListEntry.Flink == 0LL;
  v21 = a9;
  v22 = a11;
  *a7 = 0LL;
  *a8 = 0LL;
  result = a10;
  *v21 = 0LL;
  *result = 0LL;
  *v22 = 0LL;
  if ( !v20 )
  {
    v23 = a12;
    if ( a4 && v14 && v13 && *a4 && *v14 && *v13 )
    {
      v24 = L"USB:USB\\%wZ&%wZ&%wZ\\";
      if ( a12 )
        v24 = L"USB:ROOT_HUB\\%wZ&%wZ&%wZ\\";
      v25 = RtlStringCbPrintfW(pszDest, v17, v24, a4, v14, v13);
      if ( v25 < 0 )
      {
        LODWORD(v35) = v25;
        result = (_QWORD *)WPP_RECORDER_SF_d(
                             a13,
                             2u,
                             5u,
                             0x5Au,
                             (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
                             v35);
        goto LABEL_40;
      }
      ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
        pszDest,
        L"USB",
        a7);
      v26 = L"USB:USB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S&REV_%S";
      if ( v23 )
        v26 = L"USB:ROOT_HUB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S&REV_%S";
      v27 = RtlStringCbPrintfW(pszDest, v17, v26, a4, v14, v13, a1, a2, a3);
      if ( v27 < 0 )
      {
        LODWORD(v36) = v27;
        result = (_QWORD *)WPP_RECORDER_SF_d(
                             a13,
                             2u,
                             5u,
                             0x5Bu,
                             (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
                             v36);
        goto LABEL_40;
      }
      ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
        pszDest,
        L"USB",
        a8);
      v28 = L"USB:USB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S";
      if ( v23 )
        v28 = L"USB:ROOT_HUB\\%wZ&%wZ&%wZ\\VID_%S&PID_%S";
      v29 = RtlStringCbPrintfW(pszDest, v17, v28, a4, v14, v13, a1, a2);
      if ( v29 < 0 )
      {
        LODWORD(v37) = v29;
        result = (_QWORD *)WPP_RECORDER_SF_d(
                             a13,
                             2u,
                             5u,
                             0x5Cu,
                             (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
                             v37);
        goto LABEL_40;
      }
      ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
        pszDest,
        L"USB",
        v21);
    }
    v30 = L"USB:USB\\VID_%S&PID_%S&REV_%S";
    if ( v23 )
      v30 = L"USB:ROOT_HUB\\VID_%S&PID_%S&REV_%S";
    v31 = RtlStringCbPrintfW(pszDest, v17, v30, a1, a2, a3);
    if ( v31 >= 0 )
    {
      ((void (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
        pszDest,
        L"USB",
        a10);
      v32 = L"USB:USB\\VID_%S&PID_%S";
      if ( v23 )
        v32 = L"USB:ROOT_HUB\\VID_%S&PID_%S";
      v33 = RtlStringCbPrintfW(pszDest, v17, v32, a1, a2);
      if ( v33 >= 0 )
      {
        result = (_QWORD *)((__int64 (__fastcall *)(NTSTRSAFE_PWSTR, const wchar_t *, _QWORD *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
                             pszDest,
                             L"USB",
                             v22);
      }
      else
      {
        LODWORD(v38) = v33;
        result = (_QWORD *)WPP_RECORDER_SF_d(
                             a13,
                             2u,
                             5u,
                             0x5Eu,
                             (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
                             v38);
      }
    }
    else
    {
      LODWORD(v38) = v31;
      result = (_QWORD *)WPP_RECORDER_SF_d(
                           a13,
                           2u,
                           5u,
                           0x5Du,
                           (__int64)&WPP_1e5c473914e33d167f0525b500a65e26_Traceguids,
                           v38);
    }
  }
LABEL_40:
  if ( v39[0] )
    return (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return result;
}
