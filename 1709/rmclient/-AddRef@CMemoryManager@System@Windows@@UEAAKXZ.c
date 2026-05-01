/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180002F20
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180001F30 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVC.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800034E0 (-QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800036C0 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 *     ?AddRef@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x1800082F0 (-AddRef@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WDA@EAAKXZ @ 0x180008300 (-AddRef@CMemoryManager@System@Windows@@WDA@EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WDI@EAAKXZ @ 0x180008310 (-AddRef@CMemoryManager@System@Windows@@WDI@EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WEA@EAAKXZ @ 0x180008320 (-AddRef@CMemoryManager@System@Windows@@WEA@EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WEI@EAAKXZ @ 0x180008330 (-AddRef@CMemoryManager@System@Windows@@WEI@EAAKXZ.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180003C30 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::AddRef(
        Windows::System::CMemoryManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int32 v4; // ebx
  void (*v6)(void); // rax

  v4 = _InterlockedIncrement((volatile signed __int32 *)this + 29);
  if ( (*((_BYTE *)this + 136) & 4) != 0 || v4 != 2 )
    return v4;
  v6 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
  if ( (char *)v6 != (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
  {
    v6();
    return v4;
  }
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(
    Microsoft::WRL::Details::ModuleBase::module_,
    Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount,
    a3,
    a4);
  return 2LL;
}
