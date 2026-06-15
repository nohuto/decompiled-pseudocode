/*
 * XREFs of ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ @ 0x14003DF80
 * Callers:
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ @ 0x14001ED00 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ @ 0x14001ED10 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCI@EAAKXZ @ 0x14001ED20 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDA@EAAKXZ @ 0x14001ED30 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDI@EAAKXZ @ 0x14001ED40 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBI@EAAKXZ @ 0x14001ED50 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffload>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(a1 + 80);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 184LL))(a1, 1LL);
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
