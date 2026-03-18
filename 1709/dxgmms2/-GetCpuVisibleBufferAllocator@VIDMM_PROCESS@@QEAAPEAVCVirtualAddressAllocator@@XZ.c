/*
 * XREFs of ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00A1D1C
 * Callers:
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z @ 0x1C00A1F00 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@_KPEAPEAXPEA_K@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1@Z @ 0x1C00A2208 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0053F58 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1C00541C4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0054AB8 (-DestroyVaAllocator@CVirtualAddressAllocator@@QEAAXXZ.c)
 */

struct CVirtualAddressAllocator *__fastcall VIDMM_PROCESS::GetCpuVisibleBufferAllocator(VIDMM_PROCESS *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  CVirtualAddressAllocator *v4; // rax
  CVirtualAddressAllocator *v5; // r10
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  CVirtualAddressAllocator *v10; // rcx
  unsigned __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    v2 = *((_QWORD *)this + 4);
    if ( (*(_BYTE *)(v2 + 307) & 8) == 0 )
      break;
    v3 = *(_QWORD *)(*(_QWORD *)(v2 + 440) + 64LL);
    if ( v3 )
      this = *(VIDMM_PROCESS **)(v3 + 8);
    else
      this = 0LL;
  }
  if ( !*((_QWORD *)this + 20) )
  {
    v4 = (CVirtualAddressAllocator *)operator new[](0x90uLL, 0x4B677844u, PagedPool);
    v5 = v4;
    if ( v4 )
    {
      *((_QWORD *)v4 + 2) = 0LL;
      *((_QWORD *)v4 + 8) = 0LL;
      *((_QWORD *)v4 + 7) = 0LL;
      *((_DWORD *)v4 + 18) = 64;
      *((_QWORD *)v4 + 11) = 0LL;
      *((_QWORD *)v4 + 12) = 0LL;
      *((_QWORD *)v4 + 13) = 0LL;
      *((_QWORD *)v4 + 14) = 0LL;
      *((_QWORD *)v4 + 16) = (char *)v4 + 120;
      *((_QWORD *)v4 + 15) = (char *)v4 + 120;
      *((_DWORD *)v4 + 34) = 0;
    }
    else
    {
      v5 = 0LL;
    }
    *((_QWORD *)this + 20) = v5;
    if ( !v5 )
      return 0LL;
    v7 = CVirtualAddressAllocator::InitializeVaAllocator(v5, *(_QWORD *)(*((_QWORD *)this + 4) + 504LL), 0, 0LL, 0LL);
    v10 = (CVirtualAddressAllocator *)*((_QWORD *)this + 20);
    if ( v7 < 0 )
    {
      CVirtualAddressAllocator::DestroyVaAllocator(v10, v8, v9);
      *((_QWORD *)this + 20) = 0LL;
      return 0LL;
    }
    CVirtualAddressAllocator::ReserveVirtualAddressRangeNoAccess(
      (struct _KTHREAD **)v10,
      0x1000uLL,
      v9,
      0LL,
      0LL,
      0x1000u,
      &v11);
  }
  return (struct CVirtualAddressAllocator *)*((_QWORD *)this + 20);
}
