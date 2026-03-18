/*
 * XREFs of ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0053F58
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0052A50 (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C007C948 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C00A1D1C (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AE0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001DC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0ppp @ 0x1C0021E8C (McTemplateK0ppp.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C0050900 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0050ED8 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C005101C (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0053C88 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
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
  unsigned int v10; // r15d
  __int64 v11; // r12
  VIDMM_DEVICE *v12; // rax
  __int64 v13; // rcx
  VIDMM_DEVICE *v14; // rax
  int v15; // ecx
  struct VIDMM_VAD *Vad; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct VIDMM_VAD *v19; // rbp
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rsi
  SIZE_T v24; // rax
  PVOID v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  int v29; // eax
  __int64 v31; // rax
  __int64 v32; // rax

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
  v10 = *((_DWORD *)a4 + 1604);
  if ( (*((_DWORD *)a5 + 12) & 2) != 0 )
  {
    *((_QWORD *)this + 12) = *((_QWORD *)a4 + 5041);
    *((_DWORD *)this + 34) = *((_DWORD *)this + 34) & 0xFFFFFFFA | 4;
    goto LABEL_11;
  }
  v12 = (VIDMM_DEVICE *)operator new[](0x130uLL, 0x4B677844u, PagedPool);
  if ( v12 )
    v14 = VIDMM_DEVICE::VIDMM_DEVICE(v12, a4, 0LL);
  else
    v14 = 0LL;
  *((_QWORD *)this + 12) = v14;
  if ( !v14 || (int)VIDMM_DEVICE::Init(v14, a5) < 0 )
    goto LABEL_31;
  if ( dword_1C004040C == 2 )
  {
    if ( (*((_BYTE *)a4 + 40872) & 0x20) != 0 )
      goto LABEL_9;
LABEL_35:
    v15 = 1;
    goto LABEL_10;
  }
  if ( dword_1C004040C )
    goto LABEL_35;
LABEL_9:
  v15 = 0;
LABEL_10:
  *((_DWORD *)this + 34) = v15 | *((_DWORD *)this + 34) & 0xFFFFFFFE;
LABEL_11:
  *((_DWORD *)this + 34) ^= ((unsigned __int8)*((_DWORD *)this + 34) ^ (unsigned __int8)(2 * *((_DWORD *)this + 34))) & 2;
LABEL_12:
  Vad = CVirtualAddressAllocator::AllocateVad(v11, a2, v10);
  v19 = Vad;
  if ( !Vad )
  {
    v32 = WdLogNewEntry5_WdAssertion(v18, v17);
    *(_QWORD *)(v32 + 24) = 2246LL;
    WdLogEvent5_WdAssertion(v32);
    return 3221225495LL;
  }
  CVirtualAddressAllocator::InsertVadToFreeList(this, Vad);
  v21 = *(_QWORD *)v5;
  v22 = (_QWORD *)((char *)v19 + 40);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *v22 = v21;
  *((_QWORD *)v19 + 6) = v5;
  *(_QWORD *)(v21 + 8) = v22;
  *(_QWORD *)v5 = v22;
  if ( !a5 )
    return 0LL;
  v23 = v10;
  v24 = 32LL * v10;
  if ( !is_mul_ok(v10, 0x20uLL) )
    v24 = -1LL;
  v25 = operator new(v24, 0x4B677844u, v20, PagedPool);
  *((_QWORD *)this + 14) = v25;
  if ( v25 )
  {
    if ( v10 )
    {
      v27 = 0LL;
      do
      {
        v26 = v27 + *((_QWORD *)a4 + 5021);
        if ( (*(_BYTE *)(v26 + 436) & 1) != 0 )
        {
          *(_DWORD *)(v6 + *((_QWORD *)this + 14) + 16) = *(_DWORD *)(v26 + 48LL * *(unsigned int *)(v26 + 428) + 88);
          *(_DWORD *)(v6 + *((_QWORD *)this + 14) + 20) = *(_DWORD *)(v26 + 48 * (*(unsigned int *)(v26 + 428) + 2LL));
          v28 = *((_QWORD *)this + 14);
          if ( (*((_DWORD *)a5 + 12) & 2) != 0 )
          {
            *(_DWORD *)(v6 + v28 + 28) = *(_DWORD *)(v26 + 44);
            v29 = *(_DWORD *)(v26 + 60);
          }
          else
          {
            *(_DWORD *)(v6 + v28 + 28) = *(_DWORD *)(v26 + 36);
            v29 = *(_DWORD *)(v26 + 52);
          }
          *(_DWORD *)(v6 + *((_QWORD *)this + 14) + 24) = v29;
        }
        v27 += 1552LL;
        v6 += 32LL;
        --v23;
      }
      while ( v23 );
    }
    if ( ((unsigned int)Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
      McTemplateK0ppp(
        *((_QWORD *)this + 10),
        &CreateGpuVirtualAddressAllocator,
        v26,
        this,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 32LL) + 56LL),
        *(_QWORD *)(*((_QWORD *)this + 10) + 24LL));
    return 0LL;
  }
LABEL_31:
  v31 = WdLogNewEntry5_WdWarning(v13);
  WdLogEvent5_WdWarning(v31);
  return 3221225495LL;
}
