/*
 * XREFs of ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0120FC8
 * Callers:
 *     ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C0120B50 (-Initialize@InputExtensibilityCallout@@SAJXZ.c)
 *     UnInitializeInputComponents @ 0x1C012EBF8 (UnInitializeInputComponents.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ @ 0x1C01208FC (-CloseCoreMsgPort@InputExtensibilityCallout@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void InputExtensibilityCallout::UnInitialize(void)
{
  InputExtensibilityCallout *v0; // rbx
  InputExtensibilityCallout *v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  InputExtensibilityCallout *v4; // rbx

  v0 = gpInputExtensibilityCallout;
  if ( gpInputExtensibilityCallout )
  {
    v1 = (InputExtensibilityCallout *)*((_QWORD *)gpInputExtensibilityCallout + 2);
    if ( v1 )
    {
      Win32FreePool((__int64)v1);
      *((_QWORD *)v0 + 2) = 0LL;
      *((_QWORD *)gpInputExtensibilityCallout + 2) = 0LL;
    }
    InputExtensibilityCallout::CloseCoreMsgPort(v1);
    v4 = gpInputExtensibilityCallout;
    if ( gpInputExtensibilityCallout )
    {
      if ( *((_QWORD *)gpInputExtensibilityCallout + 4) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
      Win32FreePool((__int64)v4);
    }
    gpInputExtensibilityCallout = 0LL;
  }
}
