/*
 * XREFs of ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C005A59C
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C00740E4 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00A887C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00AAB60 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004F48 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0ppp @ 0x1C00247E4 (McTemplateK0ppp.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C00598B8 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005A290 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0075A34 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0075B78 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::InitializeVaAllocator(
        CVirtualAddressAllocator *this,
        __int64 a2,
        unsigned int a3,
        struct VIDMM_GLOBAL *a4,
        struct VIDMM_PROCESS *a5)
{
  char *v5; // rsi
  __int64 v6; // rbx
  unsigned int v10; // r12d
  __int64 v11; // r13
  VIDMM_DEVICE *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  VIDMM_DEVICE *v15; // rax
  int v16; // eax
  unsigned int v17; // ecx
  struct VIDMM_VAD *Vad; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct VIDMM_VAD *v21; // r14
  __int64 v22; // r8
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rsi
  SIZE_T v26; // rax
  PVOID v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax

  v5 = (char *)this + 24;
  v6 = 0LL;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 10) = a4;
  *((_QWORD *)this + 11) = a5;
  *((_QWORD *)this + 4) = (char *)this + 24;
  *((_QWORD *)this + 3) = (char *)this + 24;
  v10 = 1;
  v11 = a3;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( !a5 )
    goto LABEL_12;
  v10 = *((_DWORD *)a4 + 1748);
  if ( (*((_DWORD *)a5 + 22) & 2) != 0 )
  {
    v35 = *((_QWORD *)a4 + 5113);
    *((_DWORD *)this + 34) &= ~1u;
    *((_QWORD *)this + 12) = v35;
    v17 = *((_DWORD *)this + 34) | 4;
    goto LABEL_11;
  }
  v12 = (VIDMM_DEVICE *)operator new[](0x130uLL, 0x4B677844u, PagedPool);
  if ( v12 )
    v15 = VIDMM_DEVICE::VIDMM_DEVICE(v12, a4, 0LL);
  else
    v15 = 0LL;
  *((_QWORD *)this + 12) = v15;
  if ( !v15 || (int)VIDMM_DEVICE::Init(v15, a5) < 0 )
    goto LABEL_29;
  if ( dword_1C004740C == 2 )
  {
    if ( (*((_BYTE *)a4 + 41448) & 0x40) != 0 )
      goto LABEL_9;
LABEL_33:
    v16 = 1;
    goto LABEL_10;
  }
  if ( dword_1C004740C )
    goto LABEL_33;
LABEL_9:
  v16 = 0;
LABEL_10:
  v17 = v16 | *((_DWORD *)this + 34) & 0xFFFFFFFE;
LABEL_11:
  *((_DWORD *)this + 34) = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(2 * v17)) & 2;
LABEL_12:
  Vad = CVirtualAddressAllocator::AllocateVad(v11, a2, v10);
  v21 = Vad;
  if ( !Vad )
  {
    v34 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v34 + 24) = 2255LL;
    WdLogEvent5_WdAssertion(v34);
    return 3221225495LL;
  }
  CVirtualAddressAllocator::InsertVadToFreeList(this, Vad);
  v23 = *(_QWORD *)v5;
  v24 = (_QWORD *)((char *)v21 + 40);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *v24 = v23;
  *((_QWORD *)v21 + 6) = v5;
  *(_QWORD *)(v23 + 8) = v24;
  *(_QWORD *)v5 = v24;
  if ( !a5 )
    return 0LL;
  v25 = v10;
  v26 = 32LL * v10;
  if ( !is_mul_ok(v10, 0x20uLL) )
    v26 = -1LL;
  v27 = operator new(v26, 0x4B677844u, v22, PagedPool);
  *((_QWORD *)this + 14) = v27;
  if ( v27 )
  {
    if ( v10 )
    {
      v29 = 0LL;
      do
      {
        v28 = v29 + *((_QWORD *)a4 + 5090);
        if ( (*(_BYTE *)(v28 + 436) & 1) != 0 )
        {
          *(_DWORD *)(v6 + *((_QWORD *)this + 14) + 16) = *(_DWORD *)(v28 + 48LL * *(unsigned int *)(v28 + 428) + 88);
          *(_DWORD *)(v6 + *((_QWORD *)this + 14) + 20) = *(_DWORD *)(v28 + 48 * (*(unsigned int *)(v28 + 428) + 2LL));
          v30 = *((_QWORD *)this + 14);
          if ( (*((_DWORD *)a5 + 22) & 2) != 0 )
          {
            *(_DWORD *)(v6 + v30 + 28) = *(_DWORD *)(v28 + 44);
            v31 = *(_DWORD *)(v28 + 60);
          }
          else
          {
            *(_DWORD *)(v6 + v30 + 28) = *(_DWORD *)(v28 + 36);
            v31 = *(_DWORD *)(v28 + 52);
          }
          *(_DWORD *)(v6 + *((_QWORD *)this + 14) + 24) = v31;
        }
        v29 += 1560LL;
        v6 += 32LL;
        --v25;
      }
      while ( v25 );
    }
    if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      McTemplateK0ppp(
        *((_QWORD *)this + 10),
        &CreateGpuVirtualAddressAllocator,
        v28,
        this,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 32LL) + 64LL),
        *(_QWORD *)(*((_QWORD *)this + 10) + 24LL));
    return 0LL;
  }
LABEL_29:
  v33 = WdLogNewEntry5_WdWarning(v14, v13);
  WdLogEvent5_WdWarning(v33);
  return 3221225495LL;
}
