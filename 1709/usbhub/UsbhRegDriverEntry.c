/*
 * XREFs of UsbhRegDriverEntry @ 0x1C0024560
 * Callers:
 *     <none>
 * Callees:
 *     UsbhRegCreateUsbflagsKey @ 0x1C00202EC (UsbhRegCreateUsbflagsKey.c)
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C004E24C (WPP_RECORDER_SF_SD.c)
 */

__int64 __fastcall UsbhRegDriverEntry(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64)); // rax
  char v6; // al
  int v7; // r8d
  int v8; // r9d
  _UNKNOWN **v9; // rbx
  unsigned __int16 v10; // bx
  WCHAR *PoolWithTag; // rax
  const WCHAR *v12; // rdi
  wchar_t *Buffer; // rbx
  unsigned int v14; // edi
  PVOID v15; // rax
  char v16; // al
  int v17; // r8d
  int v18; // r9d
  _UNKNOWN **v19; // rbx
  int v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+20h] [rbp-58h]
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  __int64 v25; // [rsp+88h] [rbp+10h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      a3,
      86,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      *(_QWORD *)(a2 + 8));
  v25 = 0LL;
  KseQueryDeviceFlags(L"USBHUB:GLOBAL_FLAGS", L"USBHUB", &v25);
  if ( (v25 & 1) != 0 )
    dword_1C006A68C = 1;
  v4 = 112;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      61,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids);
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64)))MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64)))RtlQueryRegistryValues;
  v21 = 0;
  v6 = SystemRoutineAddress(1LL, L"usb", &GlobalUsbhubLegacyValues);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      62,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      v6);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      v7,
      63,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      (__int64)L"usb");
  v9 = &off_1C005B768;
  do
  {
    if ( !*(v9 - 3) )
      break;
    if ( *((_DWORD *)v9 + 2) == 4 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_SD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(_DWORD *)*v9,
        v7,
        v8,
        v21,
        (__int64)*(v9 - 1),
        *(_DWORD *)*v9);
    v9 += 7;
    v4 -= 56;
  }
  while ( v4 >= 0x38 );
  v10 = *(_WORD *)a2 + 12;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v10, 0x42554855u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v10);
    RtlInitUnicodeString(&Destination, v12);
    Destination.MaximumLength = v10;
    RtlCopyUnicodeString(&Destination, (PCUNICODE_STRING)a2);
    if ( RtlAppendUnicodeToString(&Destination, L"\\hubg") >= 0 )
    {
      Buffer = Destination.Buffer;
      v14 = 1120;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          61,
          (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids);
      RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
      v15 = MmGetSystemRoutineAddress(&DestinationString);
      if ( !v15 )
        v15 = RtlQueryRegistryValues;
      v22 = 0;
      v16 = ((__int64 (__fastcall *)(_QWORD, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), _QWORD))v15)(
              0LL,
              Buffer,
              &GlobalUsbhubValues,
              0LL);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          62,
          (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
          v16);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v17,
          63,
          (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
          (__int64)Buffer);
      v19 = &off_1C005B308;
      do
      {
        if ( !*(v19 - 3) )
          break;
        if ( *((_DWORD *)v19 + 2) == 4 && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_SD(
            WPP_GLOBAL_Control->DeviceExtension,
            *(_DWORD *)*v19,
            v17,
            v18,
            v22,
            (__int64)*(v19 - 1),
            *(_DWORD *)*v19);
        v19 += 7;
        v14 -= 56;
      }
      while ( v14 >= 0x38 );
    }
    RtlFreeUnicodeString(&Destination);
  }
  if ( (UsbhRegCreateUsbflagsKey() & 0xC0000000) == 0xC0000000 )
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 2;
  return 0LL;
}
