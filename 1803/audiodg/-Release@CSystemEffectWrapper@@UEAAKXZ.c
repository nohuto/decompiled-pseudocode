/*
 * XREFs of ?Release@CSystemEffectWrapper@@UEAAKXZ @ 0x140013A50
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140013610 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x1400151E0 (--_G-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z.c)
 *     ?Release@CSystemEffectWrapper@@W7EAAKXZ @ 0x14001E580 (-Release@CSystemEffectWrapper@@W7EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WBA@EAAKXZ @ 0x14001E590 (-Release@CSystemEffectWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WBI@EAAKXZ @ 0x14001E5A0 (-Release@CSystemEffectWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WCA@EAAKXZ @ 0x14001E5B0 (-Release@CSystemEffectWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WCI@EAAKXZ @ 0x14001E5C0 (-Release@CSystemEffectWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WDA@EAAKXZ @ 0x14001E5D0 (-Release@CSystemEffectWrapper@@WDA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WDI@EAAKXZ @ 0x14001E5E0 (-Release@CSystemEffectWrapper@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemEffectWrapper::Release(CSystemEffectWrapper *this)
{
  __int64 v2; // rcx
  CSystemEffectWrapper *v3; // rcx
  __int64 (*v4)(void); // rax

  v2 = *((_QWORD *)this + 14);
  if ( v2 )
  {
    v4 = *(__int64 (**)(void))(*(_QWORD *)v2 + 16LL);
    return v4();
  }
  v3 = (CSystemEffectWrapper *)((char *)this - 8);
  v4 = *(__int64 (**)(void))(*((_QWORD *)this - 1) + 16LL);
  if ( (char *)v4 != (char *)CSystemEffectWrapper::NDRelease )
    return v4();
  return CSystemEffectWrapper::NDRelease(v3);
}
