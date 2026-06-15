/*
 * XREFs of ?QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013E40
 * Callers:
 *     ?GetExtendedProperties@CAPOWrapperSrv@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x140013080 (-GetExtendedProperties@CAPOWrapperSrv@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0010_0002@@@Z @ 0x1400130F0 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140013610 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?QueryInterface@CSystemEffectWrapper@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E510 (-QueryInterface@CSystemEffectWrapper@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E520 (-QueryInterface@CSystemEffectWrapper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E530 (-QueryInterface@CSystemEffectWrapper@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E540 (-QueryInterface@CSystemEffectWrapper@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E550 (-QueryInterface@CSystemEffectWrapper@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E560 (-QueryInterface@CSystemEffectWrapper@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E570 (-QueryInterface@CSystemEffectWrapper@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemEffectWrapper::QueryInterface(CSystemEffectWrapper *this, const struct _GUID *a2, void **a3)
{
  __int64 (__fastcall ***v3)(_QWORD, const struct _GUID *, void **); // r9
  __int64 (__fastcall **v4)(void **, const struct _GUID *, void **); // rax
  void **v5; // rcx
  __int64 (__fastcall *v6)(void **, const struct _GUID *, void **); // rax

  v3 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **))*((_QWORD *)this + 14);
  if ( v3 )
    return (**v3)(*((_QWORD *)this + 14), a2, a3);
  v4 = (__int64 (__fastcall **)(void **, const struct _GUID *, void **))*((_QWORD *)this - 1);
  v5 = (void **)((char *)this - 8);
  v6 = *v4;
  if ( v6 == CSystemEffectWrapper::NDQueryInterface )
    return CSystemEffectWrapper::NDQueryInterface(v5, a2, a3);
  else
    return v6(v5, a2, a3);
}
