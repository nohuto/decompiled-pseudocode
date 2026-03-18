/*
 * XREFs of ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0072D64
 * Callers:
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0072D64 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00749C4 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C00026B0 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C0013EAC (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C0013EE0 (-GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0052860 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0053290 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C006D398 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0072D64 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  VIDMM_PAGE_DIRECTORY *v2; // rbx
  unsigned int NumPde; // esi
  struct CVirtualAddressAllocator *v4; // r11
  unsigned int v5; // edi
  __int64 v6; // rbp
  __int64 v7; // rbp
  unsigned int v9; // r10d
  struct CVirtualAddressAllocator *v10; // r11
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // ebx
  __int64 SegmentOffsetInPages; // rax
  struct _MDL *v16; // r10
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  struct VIDMM_ALLOC *v22; // [rsp+70h] [rbp-38h] BYREF
  unsigned int v25; // [rsp+C0h] [rbp+18h]
  __int64 i; // [rsp+C8h] [rbp+20h]

  v2 = this;
  NumPde = CVirtualAddressAllocator::GetNumPde(a2, this);
  if ( (*(_DWORD *)v2 & 0x1020) == 0x1020 )
    NumPde *= 2;
  v5 = 0;
  v25 = 0;
  if ( !NumPde )
    return 0LL;
  v6 = 0LL;
  for ( i = 0LL; ; i += 8LL )
  {
    v7 = *(_QWORD *)(*((_QWORD *)v2 + 4) + v6);
    if ( v7 )
      break;
LABEL_6:
    ++v5;
    v6 = i + 8;
    v25 = v5;
    if ( v5 >= NumPde )
      return 0LL;
  }
  if ( (*(_DWORD *)v2 & 0x20) == 0 )
  {
    VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace((VIDMM_PAGE_DIRECTORY *)v7, v4);
    goto LABEL_14;
  }
  if ( !VIDMM_ALLOC::GetGpuVirtualAddress(*(VIDMM_ALLOC **)(v7 + 16), (*(_DWORD *)v2 >> 7) & 0x1F) )
  {
    if ( !CVirtualAddressAllocator::MapVirtualAddressRange(
            (__int64)v10,
            v7,
            0LL,
            5,
            *(unsigned int *)(*(_QWORD *)(v7 + 8) + 16LL),
            0LL,
            *(_QWORD *)(*((_QWORD *)v10 + 10) + 40880LL),
            *(_QWORD *)(*((_QWORD *)v10 + 10) + 40888LL),
            0x1000u,
            (struct _LIST_ENTRY *)1,
            0LL,
            v9,
            0LL) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v20 + 24) = 2952LL;
      WdLogEvent5_WdAssertion(v20);
      return 3221225473LL;
    }
    v10 = a2;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 128LL);
  v14 = *(_DWORD *)(32LL * ((*(_DWORD *)v2 >> 7) & 0x1F) + *((_QWORD *)v10 + 14) + 28);
  VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl((VIDMM_PAGE_TABLE_BASE *)v7);
  SegmentOffsetInPages = VIDMM_PAGE_TABLE_BASE::GetSegmentOffsetInPages((VIDMM_PAGE_TABLE_BASE *)v7);
  v19 = CVirtualAddressAllocator::CommitVirtualAddressRange(
          a2,
          (struct VIDMM_MAPPED_VA_RANGE *)(v13 - 24),
          (*(_DWORD *)this >> 7) & 0x1F,
          v14,
          SegmentOffsetInPages << 12,
          v16,
          0,
          &v22);
  if ( v19 >= 0 )
  {
    v2 = this;
    v5 = v25;
LABEL_14:
    v4 = a2;
    goto LABEL_6;
  }
  v21 = WdLogNewEntry5_WdAssertion(v18, v17);
  *(_QWORD *)(v21 + 24) = 2977LL;
  WdLogEvent5_WdAssertion(v21);
  return (unsigned int)v19;
}
