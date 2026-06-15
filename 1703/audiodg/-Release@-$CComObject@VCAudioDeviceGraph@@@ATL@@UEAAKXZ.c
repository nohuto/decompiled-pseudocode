/*
 * XREFs of ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x140005F20
 * Callers:
 *     ?Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ @ 0x140005CE0 (-Cleanup@CSystemAudioDeviceSharedBase@@MEAAXXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ @ 0x14001E8F0 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x14001E900 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140002DE0 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??_G?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z @ 0x140005FD0 (--_G-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CAudioDeviceGraph>::Release(volatile signed __int32 *Block)
{
  unsigned __int32 v2; // ebx
  __int64 (__fastcall *v4)(void *); // rax
  void (*v5)(void); // rax

  v2 = _InterlockedDecrement(Block + 6);
  if ( v2 )
    return v2;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  if ( Block )
  {
    v4 = *(__int64 (__fastcall **)(void *))(*(_QWORD *)Block + 184LL);
    if ( v4 == ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor' )
      ATL::CComObject<CAudioDeviceGraph>::`scalar deleting destructor'((void *)Block);
    else
      ((void (__fastcall *)(volatile signed __int32 *, __int64))v4)(Block, 1LL);
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
