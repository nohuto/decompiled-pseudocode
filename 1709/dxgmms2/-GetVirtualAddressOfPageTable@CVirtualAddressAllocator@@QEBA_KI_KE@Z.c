/*
 * XREFs of ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C0054284
 * Callers:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005DB1C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 * Callees:
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0001CA0 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C0001DF0 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C007315C (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 */

unsigned __int64 __fastcall CVirtualAddressAllocator::GetVirtualAddressOfPageTable(
        CVirtualAddressAllocator *this,
        unsigned int a2,
        unsigned __int64 a3,
        char a4)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r11
  unsigned int NumPde; // eax
  __int64 v16; // r11

  v6 = *(_QWORD *)(*((_QWORD *)this + 10) + 40168LL) + 1552LL * a2;
  v7 = a3 >> 12;
  v8 = *(_QWORD *)(32LL * a2 + *((_QWORD *)this + 14));
  if ( *(int *)(v6 + 428) <= 0 )
    return VIDMM_ALLOC::GetGpuVirtualAddress(*(VIDMM_ALLOC **)(v8 + 16), (*(_DWORD *)v8 >> 7) & 0x1F);
  v9 = *(int *)(v6 + 428);
  while ( 1 )
  {
    v10 = (v7 & *(_QWORD *)(v6 + 48 * v9 + 104)) >> *(_QWORD *)(v6 + 48 * v9 + 112);
    if ( v9 == 1 && a4 && (**(_DWORD **)(v6 + 440) & 0x80u) != 0 )
    {
      NumPde = CVirtualAddressAllocator::GetNumPde(this, (struct VIDMM_PAGE_DIRECTORY *)v8);
      v10 = NumPde + v16;
    }
    v11 = *(_QWORD *)(v8 + 32);
    if ( !*(_QWORD *)(v11 + 8 * v10)
      || !VIDMM_PAGE_TABLE_BASE::IsResident(*(VIDMM_PAGE_TABLE_BASE **)(v11 + 8 * v10))
      || (*(_BYTE *)(*(_QWORD *)(v8 + 24) + 16 * v13) & 1) == 0 )
    {
      break;
    }
    --v9;
    v8 = v12;
    if ( v9 <= 0 )
      return VIDMM_ALLOC::GetGpuVirtualAddress(*(VIDMM_ALLOC **)(v8 + 16), (*(_DWORD *)v8 >> 7) & 0x1F);
  }
  return 0LL;
}
