/*
 * XREFs of ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180001460
 * Callers:
 *     ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800013C0 (--$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCr.c)
 * Callees:
 *     ?AddRef@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180002B40 (-AddRef@CMemoryManager@System@Windows@@UEAAKXZ.c)
 *     ??0CMemoryManager@System@Windows@@QEAA@XZ @ 0x1800030D8 (--0CMemoryManager@System@Windows@@QEAA@XZ.c)
 *     ?Release@CMemoryManager@System@Windows@@UEAAKXZ @ 0x180003130 (-Release@CMemoryManager@System@Windows@@UEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800070E4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CMemoryManager,Windows::System::CMemoryManager,>(
        Windows::System::CMemoryManager **a1)
{
  unsigned int v2; // edi
  Windows::System::CMemoryManager *v3; // rax
  __int64 v4; // rax
  Windows::System::CMemoryManager *v5; // rbx
  unsigned int (__fastcall *v6)(Windows::System::CMemoryManager *__hidden); // rax
  unsigned int (__fastcall *v7)(Windows::System::CMemoryManager *__hidden); // rax

  v2 = 0;
  *a1 = 0LL;
  v3 = (Windows::System::CMemoryManager *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = Windows::System::CMemoryManager::CMemoryManager(v3);
    v5 = (Windows::System::CMemoryManager *)v4;
    if ( v4 )
    {
      v6 = *(unsigned int (__fastcall **)(Windows::System::CMemoryManager *__hidden))(*(_QWORD *)v4 + 8LL);
      if ( v6 == Windows::System::CMemoryManager::AddRef )
        Windows::System::CMemoryManager::AddRef(v5);
      else
        v6(v5);
    }
    *a1 = v5;
    if ( v5 )
    {
      v7 = *(unsigned int (__fastcall **)(Windows::System::CMemoryManager *__hidden))(*(_QWORD *)v5 + 16LL);
      if ( v7 == Windows::System::CMemoryManager::Release )
        Windows::System::CMemoryManager::Release(v5);
      else
        v7(v5);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
