/*
 * XREFs of ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C0120B50
 * Callers:
 *     InitializeInputComponents @ 0x1C012E614 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     CreateKernelSemaphore @ 0x1C00A0C50 (CreateKernelSemaphore.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0120FC8 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall InputExtensibilityCallout::Initialize(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  char *v3; // rax
  char *v4; // rdi

  v2 = 0;
  if ( gpInputExtensibilityCallout )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v3 = (char *)Win32AllocPoolZInit(0x1C0uLL, 0x70444E43u);
  v4 = v3;
  if ( v3 )
  {
    memset(v3, 0, 0x1C0uLL);
    v4[8] = 0;
    *((_DWORD *)v4 + 3) = 0;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    memset(v4 + 48, 0, 0x190uLL);
  }
  else
  {
    v4 = 0LL;
  }
  gpInputExtensibilityCallout = (InputExtensibilityCallout *)v4;
  if ( v4 )
  {
    *((_QWORD *)gpInputExtensibilityCallout + 2) = CreateKernelSemaphore(0, 0x7FFFFFFF);
    if ( !*((_QWORD *)gpInputExtensibilityCallout + 2) )
      return 3221225495LL;
  }
  else
  {
    v2 = -1073741801;
    InputExtensibilityCallout::UnInitialize();
  }
  return v2;
}
