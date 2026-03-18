/*
 * XREFs of ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C0052438
 * Callers:
 *     ?InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C004E07C (-InitializeProcessAdapterInfo@VIDMM_PROCESS@@IEAAPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAVVIDMM_GLOBA.c)
 *     ?CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00751D4 (-CreateVaAllocator@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ @ 0x1C0099910 (-GetCpuVisibleBufferAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@XZ.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0002624 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002798 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Template_ppp @ 0x1C001FDD0 (Template_ppp.c)
 *     ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C004C900 (--0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C004CA30 (-Init@VIDMM_DEVICE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 *     ?AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z @ 0x1C00505F8 (-AllocateVad@CVirtualAddressAllocator@@SAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0052150 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  VIDMM_DEVICE *v15; // rax
  int v16; // ecx
  struct VIDMM_VAD *Vad; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct VIDMM_VAD *v20; // rbp
  __int64 v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rsi
  SIZE_T v25; // rax
  PVOID v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  int v30; // eax
  __int64 v32; // rax
  __int64 v33; // rax

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
  v12 = (VIDMM_DEVICE *)operator new[](0x120uLL, 0x4B677844u, PagedPool);
  if ( v12 )
    v15 = VIDMM_DEVICE::VIDMM_DEVICE(v12, a4, 0LL);
  else
    v15 = 0LL;
  *((_QWORD *)this + 12) = v15;
  if ( !v15 || (int)VIDMM_DEVICE::Init(v15, a5) < 0 )
    goto LABEL_31;
  if ( dword_1C003C3D4 == 2 )
  {
    if ( (*((_BYTE *)a4 + 40872) & 0x20) != 0 )
      goto LABEL_9;
LABEL_35:
    v16 = 1;
    goto LABEL_10;
  }
  if ( dword_1C003C3D4 )
    goto LABEL_35;
LABEL_9:
  v16 = 0;
LABEL_10:
  *((_DWORD *)this + 34) = v16 | *((_DWORD *)this + 34) & 0xFFFFFFFE;
LABEL_11:
  *((_DWORD *)this + 34) ^= ((unsigned __int8)*((_DWORD *)this + 34) ^ (unsigned __int8)(2 * *((_DWORD *)this + 34))) & 2;
LABEL_12:
  Vad = CVirtualAddressAllocator::AllocateVad(v11, a2, v10);
  v20 = Vad;
  if ( !Vad )
  {
    v33 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v33 + 24) = 2246LL;
    WdLogEvent5_WdAssertion(v33);
    return 3221225495LL;
  }
  CVirtualAddressAllocator::InsertVadToFreeList(this, Vad);
  v22 = *(_QWORD *)v5;
  v23 = (_QWORD *)((char *)v20 + 40);
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *v23 = v22;
  *((_QWORD *)v20 + 6) = v5;
  *(_QWORD *)(v22 + 8) = v23;
  *(_QWORD *)v5 = v23;
  if ( !a5 )
    return 0LL;
  v24 = v10;
  v25 = 32LL * v10;
  if ( !is_mul_ok(v10, 0x20uLL) )
    v25 = -1LL;
  v26 = operator new(v25, 0x4B677844u, v21, PagedPool);
  *((_QWORD *)this + 14) = v26;
  if ( v26 )
  {
    if ( v10 )
    {
      v28 = 0LL;
      do
      {
        v27 = v28 + *((_QWORD *)a4 + 5021);
        if ( (*(_BYTE *)(v27 + 436) & 1) != 0 )
        {
          *(_DWORD *)(v6 + *((_QWORD *)this + 14) + 16) = *(_DWORD *)(v27 + 48LL * *(unsigned int *)(v27 + 428) + 88);
          *(_DWORD *)(v6 + *((_QWORD *)this + 14) + 20) = *(_DWORD *)(v27 + 48 * (*(unsigned int *)(v27 + 428) + 2LL));
          v29 = *((_QWORD *)this + 14);
          if ( (*((_DWORD *)a5 + 12) & 2) != 0 )
          {
            *(_DWORD *)(v6 + v29 + 28) = *(_DWORD *)(v27 + 44);
            v30 = *(_DWORD *)(v27 + 60);
          }
          else
          {
            *(_DWORD *)(v6 + v29 + 28) = *(_DWORD *)(v27 + 36);
            v30 = *(_DWORD *)(v27 + 52);
          }
          *(_DWORD *)(v6 + *((_QWORD *)this + 14) + 24) = v30;
        }
        v28 += 472LL;
        v6 += 32LL;
        --v24;
      }
      while ( v24 );
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40000) != 0 )
      Template_ppp(
        *((_QWORD *)this + 10),
        &CreateGpuVirtualAddressAllocator,
        v27,
        this,
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 32LL) + 56LL),
        *(_QWORD *)(*((_QWORD *)this + 10) + 24LL));
    return 0LL;
  }
LABEL_31:
  v32 = WdLogNewEntry5_WdWarning(v14, v13);
  WdLogEvent5_WdWarning(v32);
  return 3221225495LL;
}
