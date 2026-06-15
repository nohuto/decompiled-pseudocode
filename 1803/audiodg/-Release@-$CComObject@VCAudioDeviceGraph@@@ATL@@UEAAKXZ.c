/*
 * XREFs of ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140012EB0
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140012D50 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ @ 0x14001D7C0 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x14001D7D0 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140012F40 (--_G-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x14001D4E0 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CAudioDeviceGraph>::Release(CAudioDeviceGraph *this)
{
  unsigned int v2; // edi
  __int64 (__fastcall *v3)(CAudioDeviceGraph *); // rax

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference((int *)this + 6);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( this )
    {
      v3 = *(__int64 (__fastcall **)(CAudioDeviceGraph *))(*(_QWORD *)this + 184LL);
      if ( v3 == ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor' )
        ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor'(this);
      else
        ((void (__fastcall *)(CAudioDeviceGraph *, _QWORD))v3)(this, v2 + 1);
    }
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
