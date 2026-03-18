/*
 * XREFs of ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C01331F0
 * Callers:
 *     InitializeInputComponents @ 0x1C012E614 (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C0120EB0 (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CDeviceIdentity::Initialize(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax

  v2 = 0;
  if ( gpDeviceIdentity )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v3 = (_QWORD *)Win32AllocPool(24LL, 0x70446549u);
  if ( v3 )
  {
    v3[2] = 0LL;
    *v3 = 0LL;
    v3[1] = 0LL;
    *((_DWORD *)v3 + 4) = 1;
  }
  else
  {
    v3 = 0LL;
  }
  gpDeviceIdentity = (struct CDeviceIdentity *)v3;
  if ( !v3 )
    return (unsigned int)-1073741801;
  InputExtensibilityCallout::RegisterCoreMsgProvider(
    (__int64)lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_,
    0LL,
    1,
    2,
    (__int64)v3,
    (__int64)lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_);
  if ( !gpDeviceIdentity )
    return (unsigned int)-1073741801;
  return v2;
}
