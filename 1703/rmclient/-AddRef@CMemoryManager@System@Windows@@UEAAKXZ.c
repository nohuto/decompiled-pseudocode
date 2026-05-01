/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180002F80
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180001C30 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMem.c)
 *     ?QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800038B0 (-QueryInterface@CMemoryManager@System@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180008100 (-AddRef@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WBA@EAAKXZ @ 0x180008110 (-AddRef@CMemoryManager@System@Windows@@WBA@EAAKXZ.c)
 *     ?AddRef@CMemoryManager@System@Windows@@WBI@EAAKXZ @ 0x180008120 (-AddRef@CMemoryManager@System@Windows@@WBI@EAAKXZ.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180003AA0 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::AddRef(Windows::System::CMemoryManager *this)
{
  unsigned __int32 v1; // ebx
  void (*v3)(void); // rax

  v1 = _InterlockedIncrement((volatile signed __int32 *)this + 9);
  if ( (*((_BYTE *)this + 56) & 4) != 0 || v1 != 2 )
    return v1;
  v3 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
  if ( (char *)v3 != (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
  {
    v3();
    return v1;
  }
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
  return 2LL;
}
