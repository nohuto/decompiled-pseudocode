/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180003480
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180001F30 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVC.c)
 *     ?Release@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180008570 (-Release@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WDA@EAAKXZ @ 0x180008580 (-Release@CMemoryManager@System@Windows@@WDA@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WDI@EAAKXZ @ 0x180008590 (-Release@CMemoryManager@System@Windows@@WDI@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WEA@EAAKXZ @ 0x1800085A0 (-Release@CMemoryManager@System@Windows@@WEA@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WEI@EAAKXZ @ 0x1800085B0 (-Release@CMemoryManager@System@Windows@@WEI@EAAKXZ.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180003C40 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::Release(
        Windows::System::CMemoryManager *this,
        __int64 a2,
        __int64 a3)
{
  unsigned __int32 v3; // ebx
  void (*v5)(void); // rax
  int v6; // edi

  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 29);
  if ( !v3 )
  {
    v6 = *((_DWORD *)this + 34);
    (*(void (__fastcall **)(Windows::System::CMemoryManager *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
    if ( (v6 & 4) == 0 || !Microsoft::WRL::Details::ModuleBase::module_ )
      return v3;
    v5 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
    goto LABEL_7;
  }
  if ( (*((_BYTE *)this + 136) & 4) != 0 || v3 != 1 )
    return v3;
  v5 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
  if ( (char *)v5 != (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
  {
LABEL_7:
    v5();
    return v3;
  }
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(
    Microsoft::WRL::Details::ModuleBase::module_,
    Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount,
    a3);
  return 1LL;
}
