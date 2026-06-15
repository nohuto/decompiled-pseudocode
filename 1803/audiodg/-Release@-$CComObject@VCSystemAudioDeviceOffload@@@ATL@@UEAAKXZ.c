/*
 * XREFs of ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ @ 0x14003C2F0
 * Callers:
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ @ 0x14001DED0 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ @ 0x14001DEE0 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCI@EAAKXZ @ 0x14001DEF0 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBCI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDA@EAAKXZ @ 0x14001DF00 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDI@EAAKXZ @ 0x14001DF10 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBDI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBI@EAAKXZ @ 0x14001DF20 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x14001D4E0 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CSystemAudioDeviceOffload>::Release(int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(a1 + 80);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 184LL))(a1, v2 + 1);
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
