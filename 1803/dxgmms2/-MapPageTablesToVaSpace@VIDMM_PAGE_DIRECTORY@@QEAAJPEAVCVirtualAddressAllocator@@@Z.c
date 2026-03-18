/*
 * XREFs of ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00AB7C4
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C007E874 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00AB7C4 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0004F9C (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C00257E4 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ @ 0x1C002581C (-GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE@@QEBA_KXZ.c)
 *     ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C0056744 (-GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A980 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005B3D0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00AB7C4 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  VIDMM_PAGE_DIRECTORY *v2; // rbx
  unsigned int NumPde; // esi
  struct CVirtualAddressAllocator *v4; // r10
  unsigned int v5; // edi
  __int64 v6; // rbp
  __int64 v7; // rbp
  unsigned int v8; // r9d
  struct CVirtualAddressAllocator *v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  int v13; // ebx
  __int64 SegmentOffsetInPages; // rax
  struct _MDL *v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ebx
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
LABEL_14:
    ++v5;
    v6 = i + 8;
    v25 = v5;
    if ( v5 >= NumPde )
      return 0LL;
  }
  if ( (*(_DWORD *)v2 & 0x20) == 0 )
  {
    VIDMM_PAGE_DIRECTORY::MapPageTablesToVaSpace((VIDMM_PAGE_DIRECTORY *)v7, v4);
    goto LABEL_13;
  }
  if ( !VIDMM_ALLOC::GetGpuVirtualAddress(*(VIDMM_ALLOC **)(v7 + 16), (*(_DWORD *)v2 >> 7) & 0x1F) )
  {
    if ( !CVirtualAddressAllocator::MapVirtualAddressRange(
            (struct VIDMM_VAD **)v9,
            v7,
            0LL,
            5,
            *(unsigned int *)(*(_QWORD *)(v7 + 8) + 16LL),
            0LL,
            *(_QWORD *)(*((_QWORD *)v9 + 10) + 41456LL),
            *(_QWORD *)(*((_QWORD *)v9 + 10) + 41464LL),
            0x1000u,
            1LL,
            0LL,
            v8,
            0LL) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v11, v10);
      *(_QWORD *)(v20 + 24) = 2963LL;
      WdLogEvent5_WdAssertion(v20);
      return 3221225473LL;
    }
    v9 = a2;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 128LL);
  v13 = *(_DWORD *)(32LL * ((*(_DWORD *)v2 >> 7) & 0x1F) + *((_QWORD *)v9 + 14) + 28);
  VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl((VIDMM_PAGE_TABLE_BASE *)v7);
  SegmentOffsetInPages = VIDMM_PAGE_TABLE_BASE::GetSegmentOffsetInPages((VIDMM_PAGE_TABLE_BASE *)v7);
  v18 = CVirtualAddressAllocator::CommitVirtualAddressRange(
          a2,
          (struct VIDMM_MAPPED_VA_RANGE *)(v12 - 24),
          (*(_DWORD *)this >> 7) & 0x1F,
          v13,
          SegmentOffsetInPages << 12,
          v15,
          0,
          &v22);
  if ( v18 >= 0 )
  {
    v2 = this;
    v5 = v25;
LABEL_13:
    v4 = a2;
    goto LABEL_14;
  }
  v21 = WdLogNewEntry5_WdAssertion(v17, v16);
  *(_QWORD *)(v21 + 24) = 2988LL;
  WdLogEvent5_WdAssertion(v21);
  return (unsigned int)v18;
}
