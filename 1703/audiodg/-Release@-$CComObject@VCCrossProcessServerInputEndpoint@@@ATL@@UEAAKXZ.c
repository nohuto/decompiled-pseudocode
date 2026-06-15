/*
 * XREFs of ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140009270
 * Callers:
 *     ?OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z @ 0x1400094A0 (-OnDisconnectedFromRightSubmix@CPipeInstance@@QEAAX_J@Z.c)
 *     ?RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z @ 0x140010EB0 (-RemoveRenderConnection@CConnectionInstance@@IEAAXPEAUIAudioProcessor@@_K@Z.c)
 *     ?AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z @ 0x140011070 (-AddRenderConnection@CConnectionInstance@@IEAAJPEAUIAudioProcessor@@_K@Z.c)
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x1400200E0 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBIA@EAAKXZ @ 0x1400200F0 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBIA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAKXZ @ 0x140020100 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@WBLI@EAAKXZ.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140002DE0 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??_G?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140009320 (--_G-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::Release(CCrossProcessBaseServerEndpoint *this)
{
  unsigned __int32 v2; // ebx
  __int64 (__fastcall *v4)(CCrossProcessBaseServerEndpoint *); // rax
  void (*v5)(void); // rax

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 116);
  if ( v2 )
    return v2;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  if ( this )
  {
    v4 = *(__int64 (__fastcall **)(CCrossProcessBaseServerEndpoint *))(*(_QWORD *)this + 64LL);
    if ( v4 == ATL::CComObject<CCrossProcessServerInputEndpoint>::`scalar deleting destructor' )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::`scalar deleting destructor'(this);
    else
      ((void (__fastcall *)(CCrossProcessBaseServerEndpoint *, __int64))v4)(this, 1LL);
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
