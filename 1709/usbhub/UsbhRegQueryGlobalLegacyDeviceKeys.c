/*
 * XREFs of UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C0020080
 * Callers:
 *     UsbhGetRegUsbDeviceFlags @ 0x1C0021180 (UsbhGetRegUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     RtlStringCbPrintfW @ 0x1C0022640 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0029310 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C004E24C (WPP_RECORDER_SF_SD.c)
 */

__int64 __fastcall UsbhRegQueryGlobalLegacyDeviceKeys(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rsi
  wchar_t *PoolWithTag; // rax
  wchar_t *v5; // r14
  int v6; // r8d
  unsigned int v7; // r15d
  unsigned int v8; // edi
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const WCHAR *, void **); // rax
  unsigned int v10; // eax
  int v11; // r9d
  int **v12; // rbx
  __int64 v14; // [rsp+20h] [rbp-E0h]
  int v15; // [rsp+20h] [rbp-E0h]
  __int16 v16; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  int v18; // [rsp+58h] [rbp-A8h] BYREF
  __int16 *v19; // [rsp+60h] [rbp-A0h]
  int v20; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v21; // [rsp+70h] [rbp-90h]
  void *v22; // [rsp+90h] [rbp-70h] BYREF
  int v23; // [rsp+98h] [rbp-68h]
  wchar_t *v24; // [rsp+A0h] [rbp-60h]
  int *v25; // [rsp+A8h] [rbp-58h] BYREF
  int v26; // [rsp+B0h] [rbp-50h]
  __int64 v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+C0h] [rbp-40h]
  void *v29; // [rsp+C8h] [rbp-38h]
  int v30; // [rsp+D0h] [rbp-30h]
  const wchar_t *v31; // [rsp+D8h] [rbp-28h]
  int *v32; // [rsp+E0h] [rbp-20h]
  int v33; // [rsp+E8h] [rbp-18h]
  __int64 v34; // [rsp+F0h] [rbp-10h]
  int v35; // [rsp+F8h] [rbp-8h]
  __int64 v36; // [rsp+100h] [rbp+0h]
  int v37; // [rsp+108h] [rbp+8h]
  __int64 v38; // [rsp+110h] [rbp+10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      72,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids);
  v3 = PdoExt(a2);
  v3[356] &= ~0x800u;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x36uLL, 0x42554855u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x36uLL);
  v16 = 0;
  LODWORD(v14) = *((unsigned __int16 *)v3 + 701);
  v7 = RtlStringCbPrintfW(v5, 0x36uLL, L"IgnoreHWSerNum%04x%04x", *((unsigned __int16 *)v3 + 700), v14);
  if ( (v7 & 0xC0000000) != 0xC0000000 )
  {
    v23 = 0;
    v19 = &v16;
    v22 = &UsbhQueryGlobalLegacyDeviceValue;
    v25 = &v18;
    v8 = 168;
    v24 = v5;
    v31 = L"GenericUSBDeviceString";
    v21 = v3 + 546;
    v32 = &v20;
    v18 = 3;
    v26 = 3;
    v27 = 0LL;
    v28 = 2;
    v29 = &UsbhQueryGlobalLegacyDeviceValue;
    v30 = 0;
    v20 = 0;
    v33 = 0;
    v34 = 0LL;
    v35 = 0;
    v36 = 0LL;
    v37 = 0;
    v38 = 0LL;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        61,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids);
    RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const WCHAR *, void **))MmGetSystemRoutineAddress(&DestinationString);
    if ( !SystemRoutineAddress )
      SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const WCHAR *, void **))RtlQueryRegistryValues;
    v15 = 0;
    v10 = SystemRoutineAddress(2LL, L"usbflags", &v22);
    v7 = v10;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        62,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        v10);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v6,
        63,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        (__int64)L"usbflags");
    v12 = &v25;
    do
    {
      if ( !*(v12 - 3) )
        break;
      if ( *((_DWORD *)v12 + 2) == 4 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_SD(WPP_GLOBAL_Control->DeviceExtension, **v12, v6, v11, v15, (__int64)*(v12 - 1), **v12);
      v12 += 7;
      v8 -= 56;
    }
    while ( v8 >= 0x38 );
    if ( (v7 & 0xC0000000) != 0xC0000000 && (_BYTE)v16 )
      v3[356] |= 0x800u;
  }
  if ( v3[547] )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v6,
        73,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        *((_QWORD *)v3 + 274));
  }
  ExFreePoolWithTag(v5, 0);
  return v7;
}
