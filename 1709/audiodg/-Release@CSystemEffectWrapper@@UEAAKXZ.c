/*
 * XREFs of ?Release@CSystemEffectWrapper@@UEAAKXZ @ 0x140013D30
 * Callers:
 *     ??_G?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z @ 0x1400125B0 (--_G-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAPEAXI@Z.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140013940 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?Release@CSystemEffectWrapper@@W7EAAKXZ @ 0x14001F390 (-Release@CSystemEffectWrapper@@W7EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WBA@EAAKXZ @ 0x14001F3A0 (-Release@CSystemEffectWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WBI@EAAKXZ @ 0x14001F3B0 (-Release@CSystemEffectWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WCA@EAAKXZ @ 0x14001F3C0 (-Release@CSystemEffectWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WCI@EAAKXZ @ 0x14001F3D0 (-Release@CSystemEffectWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WDA@EAAKXZ @ 0x14001F3E0 (-Release@CSystemEffectWrapper@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemEffectWrapper::Release(CSystemEffectWrapper *this)
{
  __int64 v2; // rcx
  CSystemEffectWrapper *v3; // rcx
  __int64 (*v4)(void); // rax

  v2 = *((_QWORD *)this + 13);
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
