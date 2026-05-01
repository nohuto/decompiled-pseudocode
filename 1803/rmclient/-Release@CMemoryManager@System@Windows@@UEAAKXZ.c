/*
 * XREFs of ?Release@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180003130
 * Callers:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180001460 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVC.c)
 *     ?Release@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180007E70 (-Release@CMemoryManager@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WCI@EAAKXZ @ 0x180007E80 (-Release@CMemoryManager@System@Windows@@WCI@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WDA@EAAKXZ @ 0x180007E90 (-Release@CMemoryManager@System@Windows@@WDA@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WDI@EAAKXZ @ 0x180007EA0 (-Release@CMemoryManager@System@Windows@@WDI@EAAKXZ.c)
 *     ?Release@CMemoryManager@System@Windows@@WEA@EAAKXZ @ 0x180007EB0 (-Release@CMemoryManager@System@Windows@@WEA@EAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1800075A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall Windows::System::CMemoryManager::Release(
        Windows::System::CMemoryManager *this,
        volatile int *a2)
{
  unsigned int result; // eax
  _DWORD *v3; // r10
  unsigned int v4; // ebx
  int v5; // edi
  void (*v6)(void); // rax

  result = Microsoft::WRL::Details::SafeUnknownDecrementReference(
             (Windows::System::CMemoryManager *)((char *)this + 108),
             a2);
  v4 = result;
  v5 = v3[32] & 4;
  if ( !result )
  {
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 56LL))(v3, 1LL);
    if ( !v5 || !Microsoft::WRL::Details::ModuleBase::module_ )
      return v4;
    v6 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
LABEL_5:
    v6();
    return v4;
  }
  if ( !v5 && result == 1 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
    if ( (char *)v6 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
    {
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
      return 1;
    }
    goto LABEL_5;
  }
  return result;
}
