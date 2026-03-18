/*
 * XREFs of ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0053B5C
 * Callers:
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C006D4B0 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C0053838 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::InitializePageDirectory(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  __int64 v4; // r10
  __int64 v5; // r9
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // r8d
  unsigned int v9; // edx
  unsigned int v10; // edi
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rax
  PVOID v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  SIZE_T v16; // rax
  PVOID v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int VidMmObjects; // ebx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 10) + 40168LL) + 472LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v5 = *((_QWORD *)a2 + 14) + 32LL * ((*(_DWORD *)this >> 7) & 0x1F);
  if ( (*(_DWORD *)this & 0x10) != 0 && !*(_DWORD *)(v5 + 16) )
    return 0LL;
  v6 = *(_DWORD *)this ^ ((unsigned __int16)*(_DWORD *)this ^ (unsigned __int16)(32 * **(_DWORD **)(v4 + 440))) & 0x1000;
  *(_DWORD *)this = v6;
  v7 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v4 + 424) << 13)) & 0xE000;
  *(_DWORD *)this = v7;
  v8 = v7;
  if ( (v7 & 0x10) != 0 )
  {
    v9 = *(_DWORD *)(v5 + 16);
    v10 = *(_DWORD *)(v5 + 20);
  }
  else
  {
    v24 = v7 & 7;
    v9 = *(_DWORD *)(v4 + 48 * v24 + 88);
    v10 = *(_DWORD *)(v4 + 48 * (v24 + 2));
  }
  if ( (v7 & 0x1020) == 0x1020 )
    v9 *= 2;
  v11 = v9;
  v12 = 16LL * v9;
  *(_DWORD *)this = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(v8 >> 6)) & 0x40;
  if ( !is_mul_ok(v9, 0x10uLL) )
    v12 = -1LL;
  v13 = operator new[](v12, 0x37356956u, PagedPool);
  *((_QWORD *)this + 3) = v13;
  if ( !v13 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v15, v14);
    *(_QWORD *)(v25 + 24) = 4104LL;
LABEL_18:
    WdLogEvent5_WdAssertion(v25);
    return 3221225495LL;
  }
  memset(v13, 0, 16LL * (unsigned int)v11);
  v16 = 8 * v11;
  if ( !is_mul_ok(v11, 8uLL) )
    v16 = -1LL;
  v17 = operator new[](v16, 0x33356956u, PagedPool);
  *((_QWORD *)this + 4) = v17;
  if ( !v17 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v25 + 24) = 4112LL;
    goto LABEL_18;
  }
  memset(v17, 0, 8LL * (unsigned int)v11);
  VidMmObjects = VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
                   (struct _VIDMM_GLOBAL_ALLOC **)this,
                   a2,
                   v10,
                   *(_DWORD *)(32LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)a2 + 14) + 24));
  if ( VidMmObjects >= 0 )
    return 0LL;
  v26 = WdLogNewEntry5_WdAssertion(v21, v20);
  *(_QWORD *)(v26 + 24) = 4120LL;
  WdLogEvent5_WdAssertion(v26);
  return (unsigned int)VidMmObjects;
}
