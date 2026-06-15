/*
 * XREFs of ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x14000FF60
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x14000FE00 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ @ 0x14001E5F0 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x14001E600 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140010000 (--_G-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x1400129A0 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CAudioDeviceGraph>::Release(CAudioDeviceGraph *this)
{
  unsigned __int32 v2; // edi
  __int64 (__fastcall *v4)(CAudioDeviceGraph *); // rax
  void (*v5)(void); // rax

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( this )
    {
      v4 = *(__int64 (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 184LL);
      if ( v4 == ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor' )
        ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor'(this);
      else
        ((void (__fastcall *)(CAudioDeviceGraph *, __int64))v4)(this, 1LL);
    }
    v5 = *(void (**)(void))(*(_QWORD *)ATL::_pAtlModule + 16LL);
    if ( (char *)v5 == (char *)CAudioDGModule::Unlock )
      CAudioDGModule::Unlock(ATL::_pAtlModule);
    else
      v5();
  }
  return v2;
}
