/*
 * XREFs of ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140009030
 * Callers:
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x14001EDF0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x14001EE00 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAKXZ @ 0x14001EE10 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBCI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAKXZ @ 0x14001EE20 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBDA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ @ 0x14001EE30 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140002DE0 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??_G?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z @ 0x140008EB0 (--_G-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceShared>::Release(CSystemAudioDeviceSharedBase *this)
{
  unsigned __int32 v2; // ebx
  CSystemAudioDeviceSharedBase *(__fastcall *v4)(CSystemAudioDeviceSharedBase *, char); // rax
  void (*v5)(void); // rax

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 92);
  if ( v2 )
    return v2;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  if ( this )
  {
    v4 = *(CSystemAudioDeviceSharedBase *(__fastcall **)(CSystemAudioDeviceSharedBase *, char))(*(_QWORD *)this + 184LL);
    if ( v4 == ATL::CComObject<CSystemAudioDeviceShared>::`scalar deleting destructor' )
      ATL::CComObject<CSystemAudioDeviceShared>::`scalar deleting destructor'(this, 1);
    else
      v4(this, 1);
  }
  v5 = *(void (**)(void))(*(_QWORD *)ATL::_pAtlModule + 16LL);
  if ( (char *)v5 != (char *)CAudioDGModule::Unlock )
  {
    v5();
    return v2;
  }
  CAudioDGModule::Unlock(ATL::_pAtlModule);
  return 0LL;
}
