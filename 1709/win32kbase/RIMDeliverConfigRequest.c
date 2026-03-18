/*
 * XREFs of RIMDeliverConfigRequest @ 0x1C0008920
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C00087B0 (RIMAllocateHidConfigDesc.c)
 *     RIMConfigurePointerDevice @ 0x1C000B1CC (RIMConfigurePointerDevice.c)
 *     RIMDoOnPowerNotification @ 0x1C00A3B70 (RIMDoOnPowerNotification.c)
 *     EnablePTPDevices @ 0x1C00DEFD0 (EnablePTPDevices.c)
 *     RIMRevokeConfigurationChange @ 0x1C01079C0 (RIMRevokeConfigurationChange.c)
 *     RIMUnRevokeConfigurationChange @ 0x1C01079F0 (RIMUnRevokeConfigurationChange.c)
 * Callees:
 *     rimHidP_SetUsageValue @ 0x1C0008BA0 (rimHidP_SetUsageValue.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0008C0C (WPP_RECORDER_SF_dd.c)
 *     _TlgCreateWsz @ 0x1C000C4FC (_TlgCreateWsz.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C000C538 (RimDeviceTypeToRimInputTypeString.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000E444 (RIMGetDeviceObjectPointer.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C001266C (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C00128A8 (rimHidP_GetSpecificValueCaps.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     rimHidP_SetUsages @ 0x1C0107C38 (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMDeliverConfigRequest(__int64 a1, __int64 a2, __int16 a3, int a4)
{
  __int64 v4; // rbx
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // r8d
  int v10; // edx
  PKEVENT v11; // rsi
  int v12; // edx
  const WCHAR *v14; // rax
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
  int v40; // [rsp+1F8h] [rbp+F8h] BYREF

  v40 = a4;
  v20 = a3;
  v21 = 1;
  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_dd(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    53,
    (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids,
    a3,
    a4);
  memset(*(void **)(v4 + 32), 0, *(unsigned __int16 *)(v4 + 48));
  if ( v20 == 82 )
  {
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 82, (__int64)v26, (__int64)&v21, *(_QWORD *)(v4 + 16));
    v6 = SpecificValueCaps;
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_18;
    **(_BYTE **)(v4 + 32) = v26[2];
    v7 = rimHidP_SetUsageValue(
           2,
           13,
           0,
           v20,
           v40,
           *(_QWORD *)(v4 + 16),
           *(_QWORD *)(v4 + 32),
           *(unsigned __int16 *)(v4 + 48));
    goto LABEL_4;
  }
  SpecificValueCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, v20, (__int64)v27, (__int64)&v21, *(_QWORD *)(v4 + 16));
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
        55,
        (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
      v6 = 0;
      SpecificValueCaps = 0;
    }
LABEL_11:
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_20;
  }
  **(_BYTE **)(v4 + 32) = v27[2];
  if ( v40 )
  {
    InputBufferLength = *(unsigned __int16 *)(v4 + 48);
    InputBuffer = *(PVOID *)(v4 + 32);
    IoControlCode = *(_QWORD *)(v4 + 16);
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
                          *(PVOID *)(v4 + 32),
                          *(unsigned __int16 *)(v4 + 48),
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
          54,
          (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
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
  if ( dword_1C018D230 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C018D230, 0x400000000000uLL) )
  {
    v14 = (const WCHAR *)RimDeviceTypeToRimInputTypeString(a1, *(unsigned __int8 *)(a1 + 48));
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
    TlgWrite((TraceLoggingHProvider)&dword_1C018D230, &unk_1C016A601, 0LL, v15, 7u, &pData);
  }
  LOBYTE(v10) = 2;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v10,
    17,
    56,
    (__int64)&WPP_724c9181c0143c76e6272c82980fed29_Traceguids);
  return (unsigned int)SpecificValueCaps;
}
