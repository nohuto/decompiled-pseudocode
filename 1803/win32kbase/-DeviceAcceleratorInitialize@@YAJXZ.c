/*
 * XREFs of ?DeviceAcceleratorInitialize@@YAJXZ @ 0x1C0131570
 * Callers:
 *     InputInitialize @ 0x1C01315F8 (InputInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 DeviceAcceleratorInitialize(void)
{
  unsigned int v0; // ebx
  CDeviceAcceleration **i; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int DefaultMouseSensitivity; // esi
  __int64 v5; // rax

  v0 = 0;
  for ( i = &qword_1C019AA88; ; i += 3 )
  {
    if ( (int)IsEditionGetDefaultMouseSensitivitySupported() < 0 )
      DefaultMouseSensitivity = 10;
    else
      DefaultMouseSensitivity = EditionGetDefaultMouseSensitivity(v0);
    if ( *((_DWORD *)i + 2) != v0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
    if ( *i )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
    v5 = ((__int64 (__fastcall *)(_QWORD))*(i - 1))(DefaultMouseSensitivity);
    *i = (CDeviceAcceleration *)v5;
    if ( !v5 )
      break;
    if ( ++v0 >= 2 )
      return 0LL;
  }
  return 3221225473LL;
}
