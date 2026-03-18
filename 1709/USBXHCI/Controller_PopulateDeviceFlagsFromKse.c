/*
 * XREFs of Controller_PopulateDeviceFlagsFromKse @ 0x1C00118AC
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C0057684 (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     RtlStringCchPrintfW @ 0x1C0014B94 (RtlStringCchPrintfW.c)
 *     WPP_RECORDER_SF_S @ 0x1C0015010 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_dxS @ 0x1C0015658 (WPP_RECORDER_SF_dxS.c)
 */

__int64 __fastcall Controller_PopulateDeviceFlagsFromKse(__int64 a1, __int64 a2, int a3)
{
  char v3; // r14
  unsigned int v5; // esi
  __int64 *v6; // r13
  _QWORD *v7; // rdi
  char *v8; // r12
  __int64 v9; // r15
  int v10; // edx
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // edx
  __int64 result; // rax
  int v21; // edx
  int v22; // r8d
  int v23; // [rsp+28h] [rbp-E0h]
  int v24; // [rsp+28h] [rbp-E0h]
  __int64 v25; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-98h] BYREF
  __int64 v31; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v32[3]; // [rsp+80h] [rbp-88h] BYREF
  wchar_t pszDest[64]; // [rsp+98h] [rbp-70h] BYREF

  v3 = 0;
  v32[0] = L"USBXHCI";
  v32[1] = L"USBXHCI2";
  if ( WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
  {
    v5 = 0;
    v6 = (__int64 *)(a1 + 272);
    v7 = (_QWORD *)(a1 + 272);
    v8 = (char *)v32 - a1;
    do
    {
      RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ALL");
      v9 = *(_QWORD *)&v8[(_QWORD)v7 - 272];
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v25) >= 0 )
      {
        WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 72), v10, v11, 149, v23, v5, v25, (__int64)pszDest);
        *v7 |= v25;
      }
      if ( *(_DWORD *)(a1 + 180) == 1 )
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X", *(unsigned __int16 *)(a1 + 184));
      else
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S", a1 + 240);
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v26) >= 0 )
      {
        WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 72), v12, v13, 150, v23, v5, v26, (__int64)pszDest);
        v3 = 1;
        *v7 |= v26;
      }
      if ( *(_DWORD *)(a1 + 180) == 1 )
      {
        v24 = *(unsigned __int16 *)(a1 + 188);
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:PCI\\VEN_%04X&DEV_%04X", *(unsigned __int16 *)(a1 + 184));
      }
      else
      {
        v24 = a1 + 245;
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S", a1 + 240);
      }
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v27) >= 0 )
      {
        WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 72), v14, v15, 151, v24, v5, v27, (__int64)pszDest);
        v3 = 1;
        *v7 |= v27;
      }
      if ( *(_DWORD *)(a1 + 180) == 1 )
      {
        v23 = *(unsigned __int16 *)(a1 + 188);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X",
          *(unsigned __int16 *)(a1 + 184));
      }
      else
      {
        v23 = a1 + 245;
        RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S", a1 + 240);
      }
      if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v28) >= 0 )
      {
        WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 72), v16, a3, 152, v23, v5, v28, (__int64)pszDest);
        v3 = 1;
        *v7 |= v28;
      }
      if ( *(_QWORD *)(a1 + 264) != -1LL )
      {
        if ( *(_DWORD *)(a1 + 180) == 1 )
        {
          v23 = *(unsigned __int16 *)(a1 + 188);
          RtlStringCchPrintfW(
            pszDest,
            0x3CuLL,
            L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&REV_%02X&%I64X",
            *(unsigned __int16 *)(a1 + 184));
        }
        else
        {
          v23 = a1 + 245;
          RtlStringCchPrintfW(pszDest, 0x3CuLL, L"USBXHCI:ACPI\\VEN_%S&DEV_%S&REV_%S&%I64X", a1 + 240);
        }
        if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v29) >= 0 )
        {
          WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 72), v17, a3, 153, v23, v5, v29, (__int64)pszDest);
          v3 = 1;
          *v7 |= v29;
        }
      }
      if ( *(_DWORD *)(a1 + 180) == 1 )
      {
        v23 = *(unsigned __int16 *)(a1 + 188);
        RtlStringCchPrintfW(
          pszDest,
          0x3CuLL,
          L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X",
          *(unsigned __int16 *)(a1 + 184));
        if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v30) >= 0 )
        {
          WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 72), v18, a3, 154, v23, v5, v30, (__int64)pszDest);
          v3 = 1;
          *v7 |= v30;
        }
        if ( *(_DWORD *)(a1 + 180) == 1 )
        {
          v23 = *(unsigned __int16 *)(a1 + 188);
          RtlStringCchPrintfW(
            pszDest,
            0x3CuLL,
            L"USBXHCI:PCI\\VEN_%04X&DEV_%04X&SUBSYS_%04X%04X&REV_%02X",
            *(unsigned __int16 *)(a1 + 184));
          if ( ((int (__fastcall *)(wchar_t *, __int64, __int64 *))WPP_MAIN_CB.Queue.Wcb.CurrentIrp)(pszDest, v9, &v31) >= 0 )
          {
            WPP_RECORDER_SF_dxS(*(_QWORD *)(a1 + 72), v19, a3, 155, v23, v5, v31, (__int64)pszDest);
            v3 = 1;
            *v7 |= v31;
          }
        }
      }
      ++v5;
      ++v7;
    }
    while ( v5 < 2 );
    result = *v6;
    if ( (*v6 & 0x10) != 0 )
    {
      v21 = 4;
      v22 = 4108;
    }
    else
    {
      if ( (result & 0x1000000) == 0 )
        goto LABEL_38;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0x9Cu, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
      Controller_HwVerifierBreakIfEnabled(
        (_QWORD *)a1,
        0LL,
        0LL,
        1LL,
        "Controller Firmware has known issues, and newer firmware is available",
        0LL,
        0LL);
      v21 = 0;
      v22 = 4111;
    }
    result = Controller_ReportFatalError(a1, v21, v22, 0, 0LL, 0LL);
LABEL_38:
    if ( v3 )
      return result;
  }
  return WPP_RECORDER_SF_S(*(_QWORD *)(a1 + 72), 3, a3, 157, v23, (__int64)pszDest);
}
