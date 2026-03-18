/*
 * XREFs of ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C00519B0
 * Callers:
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C00516D0 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0052860 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0052CB0 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C0058168 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0059620 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0059F28 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C0075568 (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0002550 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     Template_pqxx @ 0x1C0021118 (Template_pqxx.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0050690 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C00516D0 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0053814 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
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
  __int64 **v9; // rcx
  __int64 *v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rdx
  struct VIDMM_VAD **v15; // rax
  char *v16; // rdi
  unsigned int *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  char **v20; // rax
  unsigned int v21; // edi
  volatile signed __int32 **v22; // r14
  volatile signed __int32 *v23; // rcx
  struct _RTL_BALANCED_NODE *v24; // rdi
  struct _RTL_BALANCED_NODE *v25; // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // [rsp+20h] [rbp-38h]
  __int64 v31; // [rsp+68h] [rbp+10h] BYREF

  v3 = a2;
  v4 = this;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
    Template_pqxx(
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
    v28 = *(_QWORD *)v5;
    this = (CVirtualAddressAllocator *)*((_QWORD *)v3 + 8);
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *(char **)this != v5 )
      __fastfail(3u);
    *(_QWORD *)this = v28;
    *(_QWORD *)(v28 + 8) = this;
    *(_QWORD *)v5 = 0LL;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
  {
    LODWORD(v30) = *((_DWORD *)v3 + 18);
    Template_pqxx((__int64)this, &DestroyGpuVirtualAddressRange, a3, v4, v30, *((_QWORD *)v3 + 3), *((_QWORD *)v3 + 4));
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
  v9 = (__int64 **)((char *)v3 + 80);
  while ( 1 )
  {
    v10 = *v9;
    v11 = **v9;
    if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v11 + 8) != v10 )
      __fastfail(3u);
    *v9 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v9;
    if ( v10 == (__int64 *)v9 )
      break;
    *(_QWORD *)v10[2] = 0LL;
    *v10 = 0LL;
    v10[1] = 0LL;
  }
  v12 = (_DWORD *)*((_QWORD *)v3 + 6);
  if ( v12 != (_DWORD *)((char *)v4 + 24) )
  {
    v13 = *((_QWORD *)v12 - 1);
    if ( *((_QWORD *)v3 + 3) == v13 && (v12[8] & 0xF) == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
      {
        LODWORD(v30) = v12[8];
        Template_pqxx(v13, &DestroyGpuVirtualAddressRange, v6, v4, v30, *((_QWORD *)v12 - 2), *((_QWORD *)v12 - 1));
      }
      RtlAvlRemoveNode((char *)v4 + 40, v12 - 10);
      v12[8] &= 0xFFFFFFF0;
      *((_QWORD *)v12 - 1) = *((_QWORD *)v3 + 4);
      v14 = *((_QWORD *)v3 + 5);
      v15 = (struct VIDMM_VAD **)*((_QWORD *)v3 + 6);
      if ( *(struct VIDMM_VAD **)(v14 + 8) != (struct VIDMM_VAD *)((char *)v3 + 40)
        || *v15 != (struct VIDMM_VAD *)((char *)v3 + 40) )
      {
        __fastfail(3u);
      }
      *v15 = (struct VIDMM_VAD *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      CVirtualAddressAllocator::FreeVad(v3);
      v3 = (struct VIDMM_VAD *)(v12 - 10);
    }
  }
  v16 = (char *)v3 + 40;
  v17 = (unsigned int *)*((_QWORD *)v3 + 5);
  if ( v17 != (unsigned int *)((char *)v4 + 24) )
  {
    v18 = *((_QWORD *)v17 - 2);
    if ( *((_QWORD *)v3 + 4) == v18 )
    {
      v6 = v17[8];
      if ( (v17[8] & 0xF) == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
        {
          LODWORD(v30) = v17[8];
          Template_pqxx(v18, &DestroyGpuVirtualAddressRange, v6, v4, v30, v18, *((_QWORD *)v17 - 1));
        }
        RtlAvlRemoveNode((char *)v4 + 40, v17 - 10);
        v17[8] &= 0xFFFFFFF0;
        *((_QWORD *)v17 - 2) = *((_QWORD *)v3 + 3);
        v19 = *(_QWORD *)v16;
        v20 = (char **)*((_QWORD *)v3 + 6);
        if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 || *v20 != v16 )
          __fastfail(3u);
        *v20 = (char *)v19;
        v21 = 0;
        *(_QWORD *)(v19 + 8) = v20;
        if ( (*((_DWORD *)v3 + 18) & 0x7F0) != 0 )
        {
          do
          {
            v22 = (volatile signed __int32 **)((char *)v3 + 24 * v21 + 96);
            while ( 1 )
            {
              v23 = *v22;
              if ( *v22 == (volatile signed __int32 *)v22 )
                break;
              v29 = *(_QWORD *)v23;
              if ( *((volatile signed __int32 ***)v23 + 1) != v22 || *(volatile signed __int32 **)(v29 + 8) != v23 )
                __fastfail(3u);
              *v22 = (volatile signed __int32 *)v29;
              *(_QWORD *)(v29 + 8) = v22;
              *(_QWORD *)v23 = 0LL;
              *((_QWORD *)v23 + 1) = 0LL;
              VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(v23 - 2);
            }
            ++v21;
          }
          while ( v21 < ((*((_DWORD *)v3 + 18) >> 4) & 0x7Fu) );
        }
        operator delete(v3);
        v3 = (struct VIDMM_VAD *)(v17 - 10);
      }
    }
  }
  LOBYTE(v6) = 0;
  v24 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)v4 + 5);
  v31 = *((_QWORD *)v3 + 4) - *((_QWORD *)v3 + 3);
  if ( v24 )
  {
    while ( 1 )
    {
      if ( (int)CompareVadSizeAvl(&v31, v24) < 0 )
      {
        v25 = v24->Children[0];
        if ( !v24->Children[0] )
        {
          LOBYTE(v6) = 0;
          break;
        }
      }
      else
      {
        v25 = v24->Children[1];
        if ( !v25 )
        {
          LOBYTE(v6) = 1;
          break;
        }
      }
      v24 = v25;
    }
  }
  RtlAvlInsertNodeEx((char *)v4 + 40, v24, v6, v3);
  v27 = *((_DWORD *)v3 + 18) & 0xFFFFE7F0 | 1;
  *((_DWORD *)v3 + 18) = v27;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
  {
    LODWORD(v30) = v27;
    Template_pqxx(v27, &CreateGpuVirtualAddressRange, v26, v4, v30, *((_QWORD *)v3 + 3), *((_QWORD *)v3 + 4));
  }
}
