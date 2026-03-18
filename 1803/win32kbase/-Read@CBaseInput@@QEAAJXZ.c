/*
 * XREFs of ?Read@CBaseInput@@QEAAJXZ @ 0x1C01241A0
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C01235D0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     UserActivateMITInputProcessing @ 0x1C0130CD4 (UserActivateMITInputProcessing.c)
 * Callees:
 *     RIMReadInput @ 0x1C00E42E0 (RIMReadInput.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C01228A4 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::Read(CBaseInput *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 DispatcherHandleByName; // rdi

  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName((__int64)this, 1LL, 0);
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  return RIMReadInput(
           *((char **)this + 1),
           (__int64)this + 64,
           *((_DWORD *)this + 14),
           DispatcherHandleByName,
           0,
           (__int64)this + 48,
           (__int64)this + 24,
           (__int64)this + 32);
}
