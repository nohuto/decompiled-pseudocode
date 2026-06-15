/*
 * XREFs of ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140015E40
 * Callers:
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x14001EAD0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x14001EAE0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAKXZ @ 0x14001EAF0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAKXZ @ 0x14001EB00 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ @ 0x14001EB10 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x1400129A0 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??_G?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x140015D50 (--_G-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceShared>::Release(volatile signed __int32 *Block)
{
  unsigned __int32 v2; // edi
  CSystemAudioDeviceShared *(__fastcall *v4)(CSystemAudioDeviceShared *, char); // rax
  void (*v5)(void); // rax

  v2 = _InterlockedDecrement(Block + 92);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( Block )
    {
      v4 = *(CSystemAudioDeviceShared *(__fastcall **)(CSystemAudioDeviceShared *, char))(*(_QWORD *)Block + 184LL);
      if ( v4 == ATL::CComObject<CSystemAudioDeviceShared>::`scalar deleting destructor' )
        ATL::CComObject<CSystemAudioDeviceShared>::`scalar deleting destructor'((CSystemAudioDeviceShared *)Block, 1);
      else
        v4((CSystemAudioDeviceShared *)Block, 1);
    }
    v5 = *(void (**)(void))(*(_QWORD *)ATL::_pAtlModule + 16LL);
    if ( (char *)v5 == (char *)CAudioDGModule::Unlock )
      CAudioDGModule::Unlock(ATL::_pAtlModule);
    else
      v5();
  }
  return v2;
}
