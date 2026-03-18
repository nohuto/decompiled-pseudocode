/*
 * XREFs of ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0053510
 * Callers:
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0053254 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0054380 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00547D0 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C005B25C (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C005C8C0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D1C4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C007CD24 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00018AC (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0002544 (--3@YAXPEAX@Z.c)
 *     McTemplateK0pqxx @ 0x1C0023024 (McTemplateK0pqxx.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0050998 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0053254 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0055770 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  struct VIDMM_VAD *v3; // rbx
  CVirtualAddressAllocator *v4; // r15
  char *v5; // rax
  __int64 v6; // r8
  unsigned int v7; // edi
  struct _LIST_ENTRY *v8; // rdx
  char *v9; // rcx
  char *v10; // rdx
  __int64 v11; // rax
  CVirtualAddressAllocator *v12; // rax
  __int64 v13; // rcx
  char *v14; // rdi
  char *v15; // rdi
  unsigned int *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rcx
  char **v19; // rax
  unsigned int v20; // edi
  volatile signed __int32 **v21; // r14
  volatile signed __int32 *v22; // rcx
  struct _RTL_BALANCED_NODE *v23; // rdi
  struct _RTL_BALANCED_NODE *v24; // rax
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  struct VIDMM_VAD **v28; // rax
  char **v29; // rdx
  volatile signed __int32 *v30; // rax
  __int64 v31; // [rsp+20h] [rbp-38h]
  __int64 v32; // [rsp+68h] [rbp+10h] BYREF

  v3 = a2;
  v4 = this;
  if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    McTemplateK0pqxx(
      (__int64)this,
      &DestroyGpuVirtualAddressRange,
      a3,
      this,
      *((_DWORD *)a2 + 18),
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4));
  v5 = (char *)v3 + 56;
  if ( *((_QWORD *)v3 + 7) )
  {
    this = *(CVirtualAddressAllocator **)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v29 = (char **)*((_QWORD *)v3 + 8), *v29 != v5) )
      __fastfail(3u);
    *v29 = (char *)this;
    *((_QWORD *)this + 1) = v29;
    *(_QWORD *)v5 = 0LL;
  }
  if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v31) = *((_DWORD *)v3 + 18);
    McTemplateK0pqxx(
      (__int64)this,
      &DestroyGpuVirtualAddressRange,
      a3,
      v4,
      v31,
      *((_QWORD *)v3 + 3),
      *((_QWORD *)v3 + 4));
  }
  RtlAvlRemoveNode((char *)v4 + 48, v3);
  *((_DWORD *)v3 + 18) &= 0xFFFFFFF0;
  v7 = 0;
  if ( (*((_DWORD *)v3 + 18) & 0x7F0) != 0 )
  {
    do
    {
      while ( 1 )
      {
        v8 = (struct _LIST_ENTRY *)*((_QWORD *)v3 + 3 * v7 + 12);
        if ( v8 == (struct _LIST_ENTRY *)((char *)v3 + 24 * v7 + 96) )
          break;
        CVirtualAddressAllocator::RemoveVaRangeFromVad(v4, v8, 0, 1);
      }
      ++v7;
    }
    while ( v7 < ((*((_DWORD *)v3 + 18) >> 4) & 0x7Fu) );
  }
  v9 = (char *)v3 + 80;
  while ( 1 )
  {
    v10 = *(char **)v9;
    if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || (v11 = *(_QWORD *)v10, *(char **)(*(_QWORD *)v10 + 8LL) != v10) )
      __fastfail(3u);
    *(_QWORD *)v9 = v11;
    *(_QWORD *)(v11 + 8) = v9;
    if ( v10 == v9 )
      break;
    **((_QWORD **)v10 + 2) = 0LL;
    *(_QWORD *)v10 = 0LL;
    *((_QWORD *)v10 + 1) = 0LL;
  }
  v12 = (CVirtualAddressAllocator *)*((_QWORD *)v3 + 6);
  if ( v12 != (CVirtualAddressAllocator *)((char *)v4 + 24) )
  {
    v13 = *((_QWORD *)v12 - 1);
    v14 = (char *)v12 - 40;
    if ( *((_QWORD *)v3 + 3) == v13 && (*((_DWORD *)v14 + 18) & 0xF) == 1 )
    {
      if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      {
        LODWORD(v31) = *((_DWORD *)v14 + 18);
        McTemplateK0pqxx(v13, &DestroyGpuVirtualAddressRange, v6, v4, v31, *((_QWORD *)v14 + 3), v13);
      }
      RtlAvlRemoveNode((char *)v4 + 40, v14);
      *((_DWORD *)v14 + 18) &= 0xFFFFFFF0;
      *((_QWORD *)v14 + 4) = *((_QWORD *)v3 + 4);
      v27 = *((_QWORD *)v3 + 5);
      if ( *(struct VIDMM_VAD **)(v27 + 8) != (struct VIDMM_VAD *)((char *)v3 + 40)
        || (v28 = (struct VIDMM_VAD **)*((_QWORD *)v3 + 6), *v28 != (struct VIDMM_VAD *)((char *)v3 + 40)) )
      {
        __fastfail(3u);
      }
      *v28 = (struct VIDMM_VAD *)v27;
      *(_QWORD *)(v27 + 8) = v28;
      CVirtualAddressAllocator::FreeVad(v3);
      v3 = (struct VIDMM_VAD *)v14;
    }
  }
  v15 = (char *)v3 + 40;
  v16 = (unsigned int *)*((_QWORD *)v3 + 5);
  if ( v16 != (unsigned int *)((char *)v4 + 24) )
  {
    v17 = *((_QWORD *)v16 - 2);
    if ( *((_QWORD *)v3 + 4) == v17 )
    {
      v6 = v16[8];
      if ( (v16[8] & 0xF) == 1 )
      {
        if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        {
          LODWORD(v31) = v16[8];
          McTemplateK0pqxx(v17, &DestroyGpuVirtualAddressRange, v6, v4, v31, v17, *((_QWORD *)v16 - 1));
        }
        RtlAvlRemoveNode((char *)v4 + 40, v16 - 10);
        v16[8] &= 0xFFFFFFF0;
        *((_QWORD *)v16 - 2) = *((_QWORD *)v3 + 3);
        v18 = *(_QWORD *)v15;
        if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 || (v19 = (char **)*((_QWORD *)v3 + 6), *v19 != v15) )
          __fastfail(3u);
        *v19 = (char *)v18;
        v20 = 0;
        *(_QWORD *)(v18 + 8) = v19;
        if ( (*((_DWORD *)v3 + 18) & 0x7F0) != 0 )
        {
          do
          {
            v21 = (volatile signed __int32 **)((char *)v3 + 24 * v20 + 96);
            while ( 1 )
            {
              v22 = *v21;
              if ( *v21 == (volatile signed __int32 *)v21 )
                break;
              if ( *((volatile signed __int32 ***)v22 + 1) != v21
                || (v30 = *(volatile signed __int32 **)v22, *(volatile signed __int32 **)(*(_QWORD *)v22 + 8LL) != v22) )
              {
                __fastfail(3u);
              }
              *v21 = v30;
              *((_QWORD *)v30 + 1) = v21;
              *(_QWORD *)v22 = 0LL;
              *((_QWORD *)v22 + 1) = 0LL;
              VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v22 - 2);
            }
            ++v20;
          }
          while ( v20 < ((*((_DWORD *)v3 + 18) >> 4) & 0x7Fu) );
        }
        operator delete(v3);
        v3 = (struct VIDMM_VAD *)(v16 - 10);
      }
    }
  }
  LOBYTE(v6) = 0;
  v23 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v4 + 5);
  v32 = *((_QWORD *)v3 + 4) - *((_QWORD *)v3 + 3);
  if ( v23 )
  {
    while ( 1 )
    {
      if ( (int)CompareVadSizeAvl(&v32, v23) < 0 )
      {
        v24 = v23->Children[0];
        if ( !v23->Children[0] )
        {
          LOBYTE(v6) = 0;
          break;
        }
      }
      else
      {
        v24 = v23->Children[1];
        if ( !v24 )
        {
          LOBYTE(v6) = 1;
          break;
        }
      }
      v23 = v24;
    }
  }
  RtlAvlInsertNodeEx((char *)v4 + 40, v23, v6, v3);
  v26 = *((_DWORD *)v3 + 18) & 0xFFFFE7F0 | 1;
  *((_DWORD *)v3 + 18) = v26;
  if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v31) = v26;
    McTemplateK0pqxx(v26, &CreateGpuVirtualAddressRange, v25, v4, v31, *((_QWORD *)v3 + 3), *((_QWORD *)v3 + 4));
  }
}
