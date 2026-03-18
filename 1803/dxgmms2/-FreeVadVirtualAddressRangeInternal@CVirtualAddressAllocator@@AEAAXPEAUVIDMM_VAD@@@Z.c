/*
 * XREFs of ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0059C30
 * Callers:
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C005996C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C005A980 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005ADD0 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z @ 0x1C005FB74 (-FreeGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@_K1E@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0061050 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0079BF4 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x1C00AB19C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0004F20 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     McTemplateK0ppxxxxxqxx @ 0x1C00258D4 (McTemplateK0ppxxxxxqxx.c)
 *     McTemplateK0pqxx @ 0x1C00259D0 (McTemplateK0pqxx.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C005996C (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005A24C (-RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C005BD28 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C006D298 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v5; // rcx
  struct VIDMM_VAD *v6; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rsi
  __int64 v10; // r8
  char *v11; // rcx
  char *v12; // rdx
  __int64 v13; // rax
  _DWORD *v14; // rdi
  unsigned int *v15; // rdi
  char *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rcx
  char **v19; // rax
  struct _RTL_BALANCED_NODE *v20; // rdi
  struct _RTL_BALANCED_NODE *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  struct VIDMM_VAD **v25; // rcx
  _QWORD *v26; // rdx
  __int64 VidMmAllocFromOwner; // rax
  __int64 v28; // r8
  __int64 v29; // [rsp+20h] [rbp-68h]
  __int64 v30; // [rsp+50h] [rbp-38h]
  __int64 v31; // [rsp+98h] [rbp+10h] BYREF

  v3 = (_QWORD *)((char *)a2 + 56);
  v5 = *((_QWORD *)a2 + 7);
  v6 = a2;
  if ( v5 )
  {
    if ( *(_QWORD **)(v5 + 8) != v3 || (v26 = (_QWORD *)*((_QWORD *)a2 + 8), (_QWORD *)*v26 != v3) )
      __fastfail(3u);
    *v26 = v5;
    *(_QWORD *)(v5 + 8) = v26;
    *v3 = 0LL;
  }
  v7 = *((unsigned int *)v6 + 18);
  v8 = 0;
  if ( (v7 & 0x7F0) != 0 )
  {
    do
    {
      while ( 1 )
      {
        v9 = *((_QWORD *)v6 + 3 * v8 + 12);
        if ( (struct VIDMM_VAD *)v9 == (struct VIDMM_VAD *)((char *)v6 + 24 * v8 + 96) )
          break;
        if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        {
          VidMmAllocFromOwner = GetVidMmAllocFromOwner((int)(*(_DWORD *)(v9 + 56) << 28) >> 28, *(_QWORD *)(v9 + 48));
          LODWORD(v30) = v28;
          McTemplateK0ppxxxxxqxx(
            *(_QWORD *)(v9 + 64),
            &EndGpuVirtualAddressRangeMapping,
            v28,
            this,
            VidMmAllocFromOwner,
            *(_QWORD *)(v9 + 64),
            *(_QWORD *)(v9 + 88),
            *(_QWORD *)(v9 + 96),
            *(_QWORD *)(v9 + 80),
            *(_QWORD *)(v9 + 72),
            v30,
            *(_QWORD *)(v9 + 104),
            *(_QWORD *)(v9 + 112));
        }
        CVirtualAddressAllocator::RemoveVaRangeFromVad(this, (struct _LIST_ENTRY *)v9, 0, 1);
      }
      v7 = *((unsigned int *)v6 + 18);
      ++v8;
    }
    while ( v8 < ((*((_DWORD *)v6 + 18) >> 4) & 0x7Fu) );
  }
  if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v29) = v7;
    McTemplateK0pqxx(v7, &DestroyGpuVirtualAddressRange, a3, this, v29, *((_QWORD *)v6 + 3), *((_QWORD *)v6 + 4));
  }
  RtlAvlRemoveNode((char *)this + 48, v6);
  *((_DWORD *)v6 + 18) &= 0xFFFFFFF0;
  v11 = (char *)v6 + 80;
  while ( 1 )
  {
    v12 = *(char **)v11;
    if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 || (v13 = *(_QWORD *)v12, *(char **)(*(_QWORD *)v12 + 8LL) != v12) )
      __fastfail(3u);
    *(_QWORD *)v11 = v13;
    *(_QWORD *)(v13 + 8) = v11;
    if ( v12 == v11 )
      break;
    **((_QWORD **)v12 + 2) = 0LL;
    *(_QWORD *)v12 = 0LL;
    *((_QWORD *)v12 + 1) = 0LL;
  }
  v14 = (_DWORD *)*((_QWORD *)v6 + 6);
  if ( v14 != (_DWORD *)((char *)this + 24) && *((_QWORD *)v6 + 3) == *((_QWORD *)v14 - 1) && (v14[8] & 0xF) == 1 )
  {
    CVirtualAddressAllocator::RemoveVadFromFreeList(this, (struct VIDMM_VAD *)(v14 - 10));
    *((_QWORD *)v14 - 1) = *((_QWORD *)v6 + 4);
    v24 = *((_QWORD *)v6 + 5);
    if ( *(struct VIDMM_VAD **)(v24 + 8) != (struct VIDMM_VAD *)((char *)v6 + 40)
      || (v25 = (struct VIDMM_VAD **)*((_QWORD *)v6 + 6), *v25 != (struct VIDMM_VAD *)((char *)v6 + 40)) )
    {
      __fastfail(3u);
    }
    *v25 = (struct VIDMM_VAD *)v24;
    *(_QWORD *)(v24 + 8) = v25;
    CVirtualAddressAllocator::FreeVad(v6);
    v6 = (struct VIDMM_VAD *)(v14 - 10);
  }
  v15 = (unsigned int *)*((_QWORD *)v6 + 5);
  v16 = (char *)v6 + 40;
  if ( v15 != (unsigned int *)((char *)this + 24) )
  {
    v17 = *((_QWORD *)v15 - 2);
    if ( *((_QWORD *)v6 + 4) == v17 )
    {
      v10 = v15[8];
      if ( (v15[8] & 0xF) == 1 )
      {
        if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        {
          LODWORD(v29) = v15[8];
          McTemplateK0pqxx(v17, &DestroyGpuVirtualAddressRange, v10, this, v29, v17, *((_QWORD *)v15 - 1));
        }
        RtlAvlRemoveNode((char *)this + 40, v15 - 10);
        v15[8] &= 0xFFFFFFF0;
        *((_QWORD *)v15 - 2) = *((_QWORD *)v6 + 3);
        v18 = *(_QWORD *)v16;
        if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 || (v19 = (char **)*((_QWORD *)v6 + 6), *v19 != v16) )
          __fastfail(3u);
        *v19 = (char *)v18;
        *(_QWORD *)(v18 + 8) = v19;
        CVirtualAddressAllocator::FreeVad(v6);
        v6 = (struct VIDMM_VAD *)(v15 - 10);
      }
    }
  }
  LOBYTE(v10) = 0;
  v20 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 5);
  v31 = *((_QWORD *)v6 + 4) - *((_QWORD *)v6 + 3);
  if ( v20 )
  {
    while ( 1 )
    {
      if ( (int)CompareVadSizeAvl(&v31, v20) < 0 )
      {
        v21 = v20->Children[0];
        if ( !v20->Children[0] )
        {
          LOBYTE(v10) = 0;
          break;
        }
      }
      else
      {
        v21 = v20->Children[1];
        if ( !v21 )
        {
          LOBYTE(v10) = 1;
          break;
        }
      }
      v20 = v21;
    }
  }
  RtlAvlInsertNodeEx((char *)this + 40, v20, v10, v6);
  v23 = *((_DWORD *)v6 + 18) & 0xFFFFE7F0 | 1;
  *((_DWORD *)v6 + 18) = v23;
  if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
  {
    LODWORD(v29) = v23;
    McTemplateK0pqxx(v23, &CreateGpuVirtualAddressRange, v22, this, v29, *((_QWORD *)v6 + 3), *((_QWORD *)v6 + 4));
  }
}
