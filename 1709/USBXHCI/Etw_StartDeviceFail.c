/*
 * XREFs of Etw_StartDeviceFail @ 0x1C0038BB4
 * Callers:
 *     Register_ControllerReset @ 0x1C0002420 (Register_ControllerReset.c)
 *     Register_BiosHandoff @ 0x1C0002780 (Register_BiosHandoff.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     McTemplateK0pqzr1q @ 0x1C000848C (McTemplateK0pqzr1q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall Etw_StartDeviceFail(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rdx
  struct _DEVICE_OBJECT *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int16 Length; // cx
  NTSTATUS result; // eax
  unsigned __int64 v11; // rcx
  PULONG ResultLength; // [rsp+20h] [rbp-E0h]
  int v13; // [rsp+30h] [rbp-D0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v15[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[512]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = *a1;
  DestinationString.Buffer = (wchar_t *)v16;
  *(_DWORD *)&DestinationString.Length = 33423360;
  v6 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 264))(
                                  WdfDriverGlobals,
                                  v3);
  if ( IoGetDeviceProperty(v6, DevicePropertyDeviceDescription, 0x1FCu, v16, v15) < 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"USB eXtensible Host Controller");
    Length = DestinationString.Length;
  }
  else
  {
    Length = LOWORD(v15[0]) - 2;
    DestinationString.Length = LOWORD(v15[0]) - 2;
  }
  result = (NTSTATUS)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 4) != 0 )
  {
    v13 = a3;
    v11 = ((unsigned __int64)Length + 2) >> 1;
    LODWORD(ResultLength) = v11;
    return McTemplateK0pqzr1q(v11, v7, v8, a1[1], ResultLength, DestinationString.Buffer, v13);
  }
  return result;
}
