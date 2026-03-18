/*
 * XREFs of RIMDeliverConfigRequest @ 0x1C0007C54
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C00079F4 (RIMAllocateHidConfigDesc.c)
 *     RIMConfigurePointerDevice @ 0x1C008D290 (RIMConfigurePointerDevice.c)
 *     RIMDoOnPowerNotification @ 0x1C009AC10 (RIMDoOnPowerNotification.c)
 *     EnablePTPDevices @ 0x1C00D8C90 (EnablePTPDevices.c)
 *     RIMRevokeConfigurationChange @ 0x1C0106CF0 (RIMRevokeConfigurationChange.c)
 *     RIMUnRevokeConfigurationChange @ 0x1C0106D10 (RIMUnRevokeConfigurationChange.c)
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x1C0007364 (RimDeviceTypeToRimInputTypeString.c)
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0007B88 (WPP_RECORDER_SF_dd.c)
 *     rimHidP_SetUsageValue @ 0x1C0007ED4 (rimHidP_SetUsageValue.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0009EC4 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C000B1BC (rimHidP_GetSpecificValueCaps.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0055740 (RIMGetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     rimHidP_SetUsages @ 0x1C0106F4C (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMDeliverConfigRequest(__int64 a1, __int64 a2, unsigned __int16 a3, int a4)
{
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  PKEVENT v11; // rsi
  int v12; // edx
  const wchar_t *v14; // rax
  LPCGUID v15; // r9
  __int64 IoControlCode; // [rsp+28h] [rbp-D8h]
  PVOID InputBuffer; // [rsp+30h] [rbp-D0h]
  ULONG InputBufferLength; // [rsp+38h] [rbp-C8h]
  NTSTATUS SpecificValueCaps; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v20; // [rsp+58h] [rbp-A8h] BYREF
  __int16 v21; // [rsp+60h] [rbp-A0h] BYREF
  void *EventHandle; // [rsp+68h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  _LARGE_INTEGER Timeout; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v26[80]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v27[80]; // [rsp+E0h] [rbp-20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int16 *v31; // [rsp+170h] [rbp+70h]
  int v32; // [rsp+178h] [rbp+78h]
  int v33; // [rsp+17Ch] [rbp+7Ch]
  int *v34; // [rsp+180h] [rbp+80h]
  int v35; // [rsp+188h] [rbp+88h]
  int v36; // [rsp+18Ch] [rbp+8Ch]
  NTSTATUS *p_SpecificValueCaps; // [rsp+190h] [rbp+90h]
  int v38; // [rsp+198h] [rbp+98h]
  int v39; // [rsp+19Ch] [rbp+9Ch]
  int v40; // [rsp+208h] [rbp+108h] BYREF

  v40 = a4;
  v20 = a3;
  v21 = 1;
  WPP_RECORDER_SF_dd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x36u,
    (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids,
    a3,
    a4);
  memset(*(void **)(a2 + 32), 0, *(unsigned __int16 *)(a2 + 48));
  if ( v20 == 82 )
  {
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 82, (__int64)v26, (__int64)&v21, *(_QWORD *)(a2 + 16));
    v6 = SpecificValueCaps;
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_18;
    **(_BYTE **)(a2 + 32) = v26[2];
    v7 = rimHidP_SetUsageValue(
           2,
           13,
           0,
           v20,
           v40,
           *(_QWORD *)(a2 + 16),
           *(_QWORD *)(a2 + 32),
           *(unsigned __int16 *)(a2 + 48));
    goto LABEL_4;
  }
  SpecificValueCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, v20, (__int64)v27, (__int64)&v21, *(_QWORD *)(a2 + 16));
  v6 = SpecificValueCaps;
  if ( SpecificValueCaps != 1114112 )
  {
LABEL_18:
    v10 = 1;
    if ( (unsigned __int16)(v20 - 87) <= 1u )
    {
      LOBYTE(v10) = 3;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        19,
        56,
        (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids);
      v6 = 0;
      SpecificValueCaps = 0;
    }
LABEL_11:
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_20;
  }
  **(_BYTE **)(a2 + 32) = v27[2];
  if ( v40 )
  {
    InputBufferLength = *(unsigned __int16 *)(a2 + 48);
    InputBuffer = *(PVOID *)(a2 + 32);
    IoControlCode = *(_QWORD *)(a2 + 16);
    LODWORD(FileHandle) = 2;
    LODWORD(EventHandle) = 5767255;
    v7 = rimHidP_SetUsages(
           2,
           13,
           0,
           (unsigned int)&EventHandle,
           (__int64)&FileHandle,
           IoControlCode,
           (__int64)InputBuffer,
           InputBufferLength);
LABEL_4:
    v6 = v7;
    SpecificValueCaps = v7;
    goto LABEL_5;
  }
  v6 = SpecificValueCaps;
LABEL_5:
  if ( v6 != 1114112 )
    goto LABEL_18;
  Object[0] = 0LL;
  Timeout.QuadPart = 0LL;
  FileHandle = 0LL;
  EventHandle = 0LL;
  SpecificValueCaps = RIMGetDeviceObjectPointer(
                        (int)a1 + 208,
                        v8,
                        v9,
                        (unsigned int)&FileHandle,
                        (__int64)Object,
                        (__int64)&Timeout);
  if ( SpecificValueCaps >= 0 )
  {
    v11 = IoCreateNotificationEvent(0LL, &EventHandle);
    SpecificValueCaps = ZwDeviceIoControlFile(
                          FileHandle,
                          EventHandle,
                          0LL,
                          0LL,
                          (PIO_STATUS_BLOCK)(a1 + 256),
                          0xB0191u,
                          *(PVOID *)(a2 + 32),
                          *(unsigned __int16 *)(a2 + 48),
                          0LL,
                          0);
    if ( SpecificValueCaps == 259 )
    {
      if ( v11 )
      {
        Timeout.QuadPart = -10000000LL;
        LOBYTE(v12) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v12,
          19,
          55,
          (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids);
        SpecificValueCaps = KeWaitForSingleObject(v11, Executive, 0, 0, &Timeout);
      }
      else
      {
        SpecificValueCaps = -1073741536;
      }
    }
    ObfDereferenceObject(Object[0]);
    ZwClose(FileHandle);
    ZwClose(EventHandle);
    v6 = SpecificValueCaps;
    goto LABEL_11;
  }
LABEL_20:
  if ( (unsigned int)dword_1C0188840 > 5 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0188840, 0x400000000000uLL) )
  {
    v14 = RimDeviceTypeToRimInputTypeString(a1, *(unsigned __int8 *)(a1 + 48));
    TlgCreateWsz(&pDesc, v14);
    TlgCreateWsz(&v30, *(LPCWSTR *)(a1 + 216));
    v33 = 0;
    v36 = 0;
    v39 = 0;
    v34 = &v40;
    p_SpecificValueCaps = &SpecificValueCaps;
    v31 = &v20;
    v32 = 2;
    v35 = 4;
    v38 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C0188840, &unk_1C016A32D, 0LL, v15, 7u, &pData);
  }
  LOBYTE(v10) = 2;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v10,
    17,
    57,
    (__int64)&WPP_dd343f82a01434a1b0208a4850fbfc44_Traceguids);
  return (unsigned int)SpecificValueCaps;
}
