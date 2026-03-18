/*
 * XREFs of ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053F04
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053FC0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C00027C0 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0058C00 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitPageDirectory(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_ALLOC **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  char v12; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( VIDMM_PAGE_TABLE_BASE::IsResident(this) )
    return 0LL;
  v7 = *(_QWORD *)(v5 + 8);
  if ( !v7 )
    return 0LL;
  v8 = *((_QWORD *)a2 + 10);
  *(_BYTE *)(v7 + 97) = 0;
  result = VIDMM_GLOBAL::PageInOneAllocation(
             v8,
             *((_QWORD *)this + 2),
             (*((_DWORD *)a2 + 34) & 4) != 0 ? 0 : 7,
             0LL,
             &v12,
             v6);
  if ( v12 )
    result = 3221226029LL;
  if ( (int)result >= 0 )
  {
    v10 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(*(_QWORD *)(v10 + 136) + 80LL) & 0x1000) != 0 )
      *(_QWORD *)(*((_QWORD *)this + 1) + 144LL) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v10 + 104) + 8LL) + 24LL)
                                                                                             + 104LL))(
                                                     *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 104) + 8LL) + 24LL),
                                                     *(_QWORD *)(*(_QWORD *)(v10 + 104) + 24LL));
    v11 = *(unsigned int *)this;
    if ( (v11 & 0x10) != 0 )
      ++*(_QWORD *)(32 * ((v11 >> 7) & 0x1F) + *((_QWORD *)a2 + 14) + 8);
    return 0LL;
  }
  return result;
}
