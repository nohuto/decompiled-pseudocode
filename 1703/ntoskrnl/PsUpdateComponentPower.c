/*
 * XREFs of PsUpdateComponentPower @ 0x140116230
 * Callers:
 *     PspSetProcessEnergyTrackingStateCallback @ 0x14045C060 (PspSetProcessEnergyTrackingStateCallback.c)
 *     PspAddProcessToJobChain @ 0x140547D90 (PspAddProcessToJobChain.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x140117428 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     RtlInterlockedTimelineBitmapUpdate @ 0x140238EE0 (RtlInterlockedTimelineBitmapUpdate.c)
 *     PoEnergyContextUpdateComponentPower @ 0x1406D031C (PoEnergyContextUpdateComponentPower.c)
 */

void __fastcall PsUpdateComponentPower(PEPROCESS a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 ExtensionTable; // rax
  volatile signed __int64 *v7; // rdx
  __int64 v8; // rcx
  volatile signed __int64 *v9; // rcx

  ExtensionTable = ExGetExtensionTable(PspDamExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(PEPROCESS, _QWORD, unsigned __int64))(ExtensionTable + 8))(a1, a2, a3);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(PspDamExtensionHost + 64));
  }
  if ( !a1 )
    a1 = PsInitialSystemProcess;
  v7 = (volatile signed __int64 *)a1[2].ActiveProcessors.Bitmap[12];
  if ( !v7 )
    return;
  if ( a2 == 1 )
  {
    if ( !a3 )
      return;
    _InterlockedExchangeAdd64(v7 + 8, a3);
    v8 = 35LL;
    goto LABEL_17;
  }
  if ( a2 == 2 )
  {
    if ( !a3 )
      return;
    _InterlockedExchangeAdd64(v7 + 9, HIDWORD(a3));
    _InterlockedExchangeAdd64(v7 + 11, (unsigned int)a3);
    v8 = 36LL;
    goto LABEL_17;
  }
  if ( a2 != 3 )
  {
    PoEnergyContextUpdateComponentPower(a1, a2, a3);
    return;
  }
  if ( a3 )
  {
    _InterlockedExchangeAdd64(v7 + 10, HIDWORD(a3));
    _InterlockedExchangeAdd64(v7 + 12, (unsigned int)a3);
    v8 = 37LL;
LABEL_17:
    v9 = &v7[v8];
    if ( v9 )
      RtlInterlockedTimelineBitmapUpdate(v9, (unsigned int)KiTimelineBitmapTime);
  }
}
