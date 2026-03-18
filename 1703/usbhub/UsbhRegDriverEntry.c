/*
 * XREFs of UsbhRegDriverEntry @ 0x1C001EF80
 * Callers:
 *     <none>
 * Callees:
 *     UsbhRegCreateUsbflagsKey @ 0x1C001F784 (UsbhRegCreateUsbflagsKey.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00454FC (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_SD @ 0x1C004D560 (WPP_RECORDER_SF_SD.c)
 */

__int64 __fastcall UsbhRegDriverEntry(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64)); // rax
  char v6; // al
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  PDEVICE_OBJECT v10; // r10
  _UNKNOWN **v11; // rbx
  unsigned __int16 v12; // bx
  WCHAR *PoolWithTag; // rax
  const WCHAR *v14; // rdi
  wchar_t *Buffer; // rbx
  unsigned int v16; // edi
  PVOID v17; // rax
  char v18; // al
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  PDEVICE_OBJECT v22; // r10
  _UNKNOWN **v23; // rbx
  int v25; // [rsp+20h] [rbp-58h]
  int v26; // [rsp+20h] [rbp-58h]
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  __int64 v29; // [rsp+88h] [rbp+10h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      a3,
      86,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      *(_QWORD *)(a2 + 8));
  v29 = 0LL;
  KseQueryDeviceFlags(L"USBHUB:GLOBAL_FLAGS", L"USBHUB", &v29);
  if ( (v29 & 1) != 0 )
    dword_1C006968C = 1;
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
  v25 = 0;
  v6 = SystemRoutineAddress(1LL, L"usb", &GlobalUsbhubLegacyValues);
  v10 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      62,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      v6);
    v10 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v8,
        63,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        (__int64)L"usb");
      v10 = WPP_GLOBAL_Control;
    }
  }
  v11 = &off_1C005A598;
  do
  {
    if ( !*(v11 - 3) )
      break;
    if ( *((_DWORD *)v11 + 2) == 4 && LOWORD(v10->DeviceType) )
    {
      WPP_RECORDER_SF_SD(v10->DeviceExtension, v7, v8, v9, v25, (__int64)*(v11 - 1), *(_DWORD *)*v11);
      v10 = WPP_GLOBAL_Control;
    }
    v11 += 7;
    v4 -= 56;
  }
  while ( v4 >= 0x38 );
  v12 = *(_WORD *)a2 + 12;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v12, 0x42554855u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v12);
    RtlInitUnicodeString(&Destination, v14);
    Destination.MaximumLength = v12;
    RtlCopyUnicodeString(&Destination, (PCUNICODE_STRING)a2);
    if ( RtlAppendUnicodeToString(&Destination, L"\\hubg") >= 0 )
    {
      Buffer = Destination.Buffer;
      v16 = 1120;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          61,
          (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids);
      RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
      v17 = MmGetSystemRoutineAddress(&DestinationString);
      if ( !v17 )
        v17 = RtlQueryRegistryValues;
      v26 = 0;
      v18 = ((__int64 (__fastcall *)(_QWORD, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), _QWORD))v17)(
              0LL,
              Buffer,
              &GlobalUsbhubValues,
              0LL);
      v22 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          62,
          (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
          v18);
        v22 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_S(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            v20,
            63,
            (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
            (__int64)Buffer);
          v22 = WPP_GLOBAL_Control;
        }
      }
      v23 = &off_1C005A138;
      do
      {
        if ( !*(v23 - 3) )
          break;
        if ( *((_DWORD *)v23 + 2) == 4 && LOWORD(v22->DeviceType) )
        {
          WPP_RECORDER_SF_SD(v22->DeviceExtension, v19, v20, v21, v26, (__int64)*(v23 - 1), *(_DWORD *)*v23);
          v22 = WPP_GLOBAL_Control;
        }
        v23 += 7;
        v16 -= 56;
      }
      while ( v16 >= 0x38 );
    }
    RtlFreeUnicodeString(&Destination);
  }
  if ( (UsbhRegCreateUsbflagsKey() & 0xC0000000) == 0xC0000000 )
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 2;
  return 0LL;
}
