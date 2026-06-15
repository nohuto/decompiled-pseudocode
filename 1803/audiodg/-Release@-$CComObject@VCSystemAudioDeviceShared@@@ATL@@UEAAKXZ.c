/*
 * XREFs of ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140015520
 * Callers:
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x14001DCA0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x14001DCB0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAKXZ @ 0x14001DCC0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAKXZ @ 0x14001DCD0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ @ 0x14001DCE0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     ??_G?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x1400153A0 (--_G-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x14001D4E0 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CSystemAudioDeviceShared>::Release(int *Block)
{
  unsigned int v2; // edi
  CSystemAudioDeviceSharedBase *(__fastcall *v3)(CSystemAudioDeviceSharedBase *, char); // rax

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(Block + 92);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v3 = *(CSystemAudioDeviceSharedBase *(__fastcall **)(CSystemAudioDeviceSharedBase *, char))(*(_QWORD *)Block
                                                                                                + 184LL);
      if ( v3 == ATL::CComObject<CSystemAudioDeviceShared>::`scalar deleting destructor' )
        ATL::CComObject<CSystemAudioDeviceShared>::`scalar deleting destructor'(
          (CSystemAudioDeviceSharedBase *)Block,
          v2 + 1);
      else
        v3((CSystemAudioDeviceSharedBase *)Block, v2 + 1);
    }
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
