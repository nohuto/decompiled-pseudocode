/*
 * XREFs of ?Initialize@CForegroundInfo@@SAJXZ @ 0x1C01212CC
 * Callers:
 *     InitializeInputComponents @ 0x1C012E614 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CForegroundInfo::Initialize(__int64 a1, __int64 a2)
{
  CInputDest *v2; // rax
  CInputDest *v3; // rbx

  if ( gpForegroundInfo )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v2 = (CInputDest *)Win32AllocPoolZInit(0xB8uLL, 0x72705443u);
  v3 = v2;
  if ( v2 )
  {
    memset(v2, 0, 0xB0uLL);
    *((_BYTE *)v3 + 176) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  gpForegroundInfo = v3;
  return v3 == 0LL ? 0xC0000017 : 0;
}
