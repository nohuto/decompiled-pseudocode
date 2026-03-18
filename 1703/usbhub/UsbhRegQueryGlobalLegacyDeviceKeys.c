/*
 * XREFs of UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C001F530
 * Callers:
 *     UsbhGetRegUsbDeviceFlags @ 0x1C001C5C0 (UsbhGetRegUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     RtlStringCbPrintfW @ 0x1C001EAF4 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00454FC (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C004D560 (WPP_RECORDER_SF_SD.c)
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
  int v11; // edx
  int v12; // r9d
  PDEVICE_OBJECT v13; // r10
  int **v14; // rbx
  __int64 v16; // [rsp+20h] [rbp-E0h]
  int v17; // [rsp+20h] [rbp-E0h]
  __int16 v18; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+58h] [rbp-A8h] BYREF
  __int16 *v21; // [rsp+60h] [rbp-A0h]
  int v22; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v23; // [rsp+70h] [rbp-90h]
  void *v24; // [rsp+90h] [rbp-70h] BYREF
  int v25; // [rsp+98h] [rbp-68h]
  wchar_t *v26; // [rsp+A0h] [rbp-60h]
  int *v27; // [rsp+A8h] [rbp-58h] BYREF
  int v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+C0h] [rbp-40h]
  void *v31; // [rsp+C8h] [rbp-38h]
  int v32; // [rsp+D0h] [rbp-30h]
  const wchar_t *v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  int v35; // [rsp+E8h] [rbp-18h]
  __int64 v36; // [rsp+F0h] [rbp-10h]
  int v37; // [rsp+F8h] [rbp-8h]
  __int64 v38; // [rsp+100h] [rbp+0h]
  int v39; // [rsp+108h] [rbp+8h]
  __int64 v40; // [rsp+110h] [rbp+10h]

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
  v18 = 0;
  LODWORD(v16) = *((unsigned __int16 *)v3 + 701);
  v7 = RtlStringCbPrintfW(v5, 0x36uLL, L"IgnoreHWSerNum%04x%04x", *((unsigned __int16 *)v3 + 700), v16);
  if ( (v7 & 0xC0000000) != 0xC0000000 )
  {
    v25 = 0;
    v21 = &v18;
    v24 = &UsbhQueryGlobalLegacyDeviceValue;
    v27 = &v20;
    v8 = 168;
    v26 = v5;
    v33 = L"GenericUSBDeviceString";
    v23 = v3 + 546;
    v34 = &v22;
    v20 = 3;
    v28 = 3;
    v29 = 0LL;
    v30 = 2;
    v31 = &UsbhQueryGlobalLegacyDeviceValue;
    v32 = 0;
    v22 = 0;
    v35 = 0;
    v36 = 0LL;
    v37 = 0;
    v38 = 0LL;
    v39 = 0;
    v40 = 0LL;
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
    v17 = 0;
    v10 = SystemRoutineAddress(2LL, L"usbflags", &v24);
    v7 = v10;
    v13 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        62,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        v10);
      v13 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v6,
          63,
          (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
          (__int64)L"usbflags");
        v13 = WPP_GLOBAL_Control;
      }
    }
    v14 = &v27;
    do
    {
      if ( !*(v14 - 3) )
        break;
      if ( *((_DWORD *)v14 + 2) == 4 && LOWORD(v13->DeviceType) )
      {
        WPP_RECORDER_SF_SD(v13->DeviceExtension, v11, v6, v12, v17, (__int64)*(v14 - 1), **v14);
        v13 = WPP_GLOBAL_Control;
      }
      v14 += 7;
      v8 -= 56;
    }
    while ( v8 >= 0x38 );
    if ( (v7 & 0xC0000000) == 0xC0000000 || !(_BYTE)v18 )
      goto LABEL_17;
    v3[356] |= 0x800u;
  }
  v13 = WPP_GLOBAL_Control;
LABEL_17:
  if ( v3[547] )
  {
    if ( LOWORD(v13->DeviceType) )
      WPP_RECORDER_SF_S(
        v13->DeviceExtension,
        0,
        v6,
        73,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        *((_QWORD *)v3 + 274));
  }
  ExFreePoolWithTag(v5, 0);
  return v7;
}
