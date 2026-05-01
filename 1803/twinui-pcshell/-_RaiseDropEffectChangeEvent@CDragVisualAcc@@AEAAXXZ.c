/*
 * XREFs of ?_RaiseDropEffectChangeEvent@CDragVisualAcc@@AEAAXXZ @ 0x1802F9D60
 * Callers:
 *     ?SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z @ 0x1802F9A50 (-SetDropEffect@CDragVisualAcc@@UEAAXPEBG@Z.c)
 * Callees:
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x18029B8CC (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 */

void __fastcall CDragVisualAcc::_RaiseDropEffectChangeEvent(IRawElementProviderSimple *pProvider)
{
  struct IRawElementProviderSimpleVtbl *lpVtbl; // rax
  const WCHAR *v3; // rcx
  __int128 v4; // xmm0
  struct IRawElementProviderSimpleVtbl *v5; // xmm1_8
  __int128 v6; // xmm0
  struct IRawElementProviderSimpleVtbl *v7; // xmm1_8
  VARIANTARG pvarg; // [rsp+20h] [rbp-60h] BYREF
  VARIANT newValue; // [rsp+40h] [rbp-40h] BYREF
  VARIANT oldValue; // [rsp+60h] [rbp-20h] BYREF
  PCWSTR prgsz; // [rsp+90h] [rbp+10h] BYREF

  lpVtbl = pProvider[20].lpVtbl;
  v3 = &word_18035ABCC;
  if ( lpVtbl )
    v3 = (const WCHAR *)lpVtbl;
  prgsz = v3;
  if ( (int)InitVariantFromString(v3, &pvarg) >= 0 )
  {
    *(_OWORD *)&newValue.vt = *(_OWORD *)&pvarg.vt;
    v4 = *(_OWORD *)&pProvider[11].lpVtbl;
    newValue.pRecInfo = pvarg.pRecInfo;
    v5 = pProvider[13].lpVtbl;
    *(_OWORD *)&oldValue.vt = v4;
    oldValue.pRecInfo = (IRecordInfo *)v5;
    UiaRaiseAutomationPropertyChangedEvent(pProvider, 30139, &oldValue, &newValue);
    VariantClear(&pvarg);
    if ( InitVariantFromStringArray(&prgsz, 1u, &pvarg) >= 0 )
    {
      *(_OWORD *)&oldValue.vt = *(_OWORD *)&pvarg.vt;
      v6 = *(_OWORD *)&pProvider[11].lpVtbl;
      oldValue.pRecInfo = pvarg.pRecInfo;
      v7 = pProvider[13].lpVtbl;
      *(_OWORD *)&newValue.vt = v6;
      newValue.pRecInfo = (IRecordInfo *)v7;
      UiaRaiseAutomationPropertyChangedEvent(pProvider, 30140, &newValue, &oldValue);
      VariantClear(&pvarg);
    }
  }
}
