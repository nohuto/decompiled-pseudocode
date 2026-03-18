/*
 * XREFs of Controller_PopulateHardwareVerifierFlags @ 0x1C005792C
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0014620 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     RtlUnicodeStringPrintf @ 0x1C0014CC8 (RtlUnicodeStringPrintf.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall Controller_PopulateHardwareVerifierFlags(__int64 a1)
{
  unsigned __int8 v2; // cl
  unsigned __int8 v3; // al
  void *v4; // rsi
  int v5; // ebx
  int v6; // eax
  NTSTATUS v7; // eax
  unsigned __int16 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // [rsp+28h] [rbp-59h]
  __int64 v15; // [rsp+30h] [rbp-51h]
  __int64 v16; // [rsp+48h] [rbp-39h] BYREF
  __int64 v17; // [rsp+50h] [rbp-31h] BYREF
  __int64 v18; // [rsp+58h] [rbp-29h] BYREF
  __int64 v19; // [rsp+60h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-19h] BYREF
  char v21; // [rsp+78h] [rbp-9h] BYREF

  *(_DWORD *)&DestinationString.Length = 3407872;
  v19 = 0LL;
  v2 = *(_BYTE *)(a1 + 256);
  DestinationString.Buffer = (wchar_t *)&v21;
  v18 = 0LL;
  v3 = *(_BYTE *)(a1 + 257);
  v17 = 0LL;
  v16 = 0LL;
  if ( v2 )
  {
    if ( v2 != 1 || v3 )
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1 + 72),
        3u,
        4u,
        0xCAu,
        (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
        v2,
        v3);
    v4 = &g_HwVerifierxHCI10;
  }
  else
  {
    v4 = &g_HwVerifierxHCI96;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015
                                                                                                  + 1832))(
         WdfDriverGlobals,
         0LL,
         &g_HwVerifierKeyName,
         131097LL,
         0LL,
         &v18);
  if ( v5 < 0 )
  {
    v18 = 0LL;
    goto LABEL_51;
  }
  v6 = *(_DWORD *)(a1 + 180);
  if ( v6 == 1 )
  {
    LODWORD(v14) = *(unsigned __int8 *)(a1 + 192);
    v7 = RtlUnicodeStringPrintf(
           &DestinationString,
           L"%04X%04X%02X",
           *(unsigned __int16 *)(a1 + 184),
           *(unsigned __int16 *)(a1 + 188),
           v14);
  }
  else
  {
    if ( v6 != 2 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0xCBu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
      goto LABEL_51;
    }
    v7 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S%S", a1 + 240, a1 + 245, a1 + 250);
  }
  v5 = v7;
  if ( v7 < 0 )
  {
    v8 = 204;
LABEL_15:
    LODWORD(v15) = v5;
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 4u, v8, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v15);
    goto LABEL_51;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         v18,
         &DestinationString,
         131097LL,
         0LL,
         &v17);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
           WdfDriverGlobals,
           v17,
           v4,
           131097LL,
           0LL,
           &v16);
    if ( v5 < 0 )
    {
      v9 = 0LL;
      v16 = 0LL;
      goto LABEL_22;
    }
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
           WdfDriverGlobals,
           v16,
           &g_HwVerifierControllerName,
           8LL,
           &v19,
           0LL,
           0LL);
    if ( v5 >= 0 )
      goto LABEL_54;
  }
  else
  {
    v17 = 0LL;
  }
  v9 = v16;
LABEL_22:
  if ( v5 != -1073741772 )
    goto LABEL_51;
  if ( v9 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
    v16 = 0LL;
  }
  if ( v17 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
    v17 = 0LL;
  }
  v10 = *(_DWORD *)(a1 + 180);
  if ( v10 == 1 )
  {
    v11 = RtlUnicodeStringPrintf(
            &DestinationString,
            L"%04X%04X",
            *(unsigned __int16 *)(a1 + 184),
            *(unsigned __int16 *)(a1 + 188));
  }
  else
  {
    if ( v10 != 2 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0xCDu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
      goto LABEL_52;
    }
    v11 = RtlUnicodeStringPrintf(&DestinationString, L"%S%S", a1 + 240, a1 + 245);
  }
  v5 = v11;
  if ( v11 < 0 )
  {
    v8 = 206;
    goto LABEL_15;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         v18,
         &DestinationString,
         131097LL,
         0LL,
         &v17);
  if ( v5 < 0 )
  {
    v17 = 0LL;
    goto LABEL_38;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
         WdfDriverGlobals,
         v17,
         v4,
         131097LL,
         0LL,
         &v16);
  if ( v5 < 0 )
  {
    v12 = 0LL;
    v16 = 0LL;
    goto LABEL_39;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v16,
         &g_HwVerifierControllerName,
         8LL,
         &v19,
         0LL,
         0LL);
  if ( v5 >= 0 )
  {
LABEL_54:
    *(_QWORD *)(a1 + 376) = v19;
    goto LABEL_55;
  }
LABEL_38:
  v12 = v16;
LABEL_39:
  if ( v5 == -1073741772 )
  {
    if ( v12 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      v16 = 0LL;
    }
    if ( v17 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
      v17 = 0LL;
    }
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
           WdfDriverGlobals,
           v18,
           &g_HwVerifierGlobalName,
           131097LL,
           0LL,
           &v17);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 1832))(
             WdfDriverGlobals,
             v17,
             v4,
             131097LL,
             0LL,
             &v16);
      if ( v5 >= 0 )
        v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
               WdfDriverGlobals,
               v16,
               &g_HwVerifierControllerName,
               8LL,
               &v19,
               0LL,
               0LL);
      else
        v16 = 0LL;
    }
    else
    {
      v17 = 0LL;
    }
  }
LABEL_51:
  if ( v5 >= 0 )
    goto LABEL_54;
LABEL_52:
  *(_QWORD *)(a1 + 376) = 0LL;
  if ( v5 != -1073741772 )
  {
    LODWORD(v15) = v5;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 72),
      2u,
      4u,
      0xCFu,
      (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
      v15);
  }
LABEL_55:
  result = WPP_RECORDER_SF_q(
             *(_QWORD *)(a1 + 72),
             4u,
             4u,
             0xD0u,
             (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
             *(_QWORD *)(a1 + 376));
  if ( v16 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v17 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  if ( v18 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
