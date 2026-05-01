/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180003850
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180001C30 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMem.c)
 *     ?Release@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x1800082A0 (-Release@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WBA@EAAKXZ @ 0x1800082B0 (-Release@CMemoryManager@System@Windows@@WBA@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WBI@EAAKXZ @ 0x1800082C0 (-Release@CMemoryManager@System@Windows@@WBI@EAAKXZ.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180003AB0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::Release(Windows::System::CMemoryManager *this)
{
  unsigned __int32 v1; // ebx
  void (*v3)(void); // rax
  int v4; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 9);
  if ( !v1 )
  {
    v4 = *((_DWORD *)this + 14);
    (*(void (__fastcall **)(Windows::System::CMemoryManager *, __int64))(*(_QWORD *)this + 56LL))(this, 1LL);
    if ( (v4 & 4) == 0 || !Microsoft::WRL::Details::ModuleBase::module_ )
      return v1;
    v3 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
    goto LABEL_7;
  }
  if ( (*((_BYTE *)this + 56) & 4) != 0 || v1 != 1 )
    return v1;
  v3 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
  if ( (char *)v3 != (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
  {
LABEL_7:
    v3();
    return v1;
  }
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
  return 1LL;
}
