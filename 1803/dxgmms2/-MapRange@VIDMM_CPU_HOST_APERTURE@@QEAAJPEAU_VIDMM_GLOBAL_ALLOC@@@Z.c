/*
 * XREFs of ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0002068
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054B90 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C009EF98 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     ?CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C0001EB4 (-CopyRangeToArray@VIDMM_CPU_HOST_APERTURE@@AEBAXPEAI_KPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0004C1C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00A2FD4 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

__int64 __fastcall VIDMM_CPU_HOST_APERTURE::MapRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  void *v8; // r15
  unsigned __int64 v9; // rax
  _QWORD *v10; // rbp
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 result; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // r14
  __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int16 v28; // [rsp+38h] [rbp-50h]
  __int16 v29; // [rsp+3Ah] [rbp-4Eh]
  unsigned __int64 v30; // [rsp+40h] [rbp-48h]
  void *v31; // [rsp+48h] [rbp-40h]
  _QWORD *v32; // [rsp+50h] [rbp-38h]

  if ( *((_QWORD *)a2 + 56) )
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v22[3] = 270LL;
    v22[4] = 44LL;
    v22[5] = this;
    v22[6] = a2;
    v22[7] = 0LL;
    WdLogEvent5_WdCriticalError(v22);
  }
  v4 = *(_DWORD *)(*((_QWORD *)this + 6) + 376LL);
  v5 = *(unsigned int *)(*((_QWORD *)this + 5) + 4LL * *((unsigned int *)a2 + 119));
  v6 = v5;
  v7 = 4 * v5;
  if ( !is_mul_ok(v5, 4uLL) )
    v7 = -1LL;
  v8 = operator new[](v7, 0x36346956u, PagedPool);
  if ( !v8 )
  {
    v23 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v23);
    return 3221225495LL;
  }
  v9 = 8 * v5;
  if ( !is_mul_ok(v5, 8uLL) )
    v9 = -1LL;
  v10 = operator new[](v9, 0x36346956u, PagedPool);
  if ( !v10 )
  {
    v24 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v24);
    ExFreePoolWithTag(v8, 0);
    return 3221225495LL;
  }
  VIDMM_CPU_HOST_APERTURE::CopyRangeToArray(
    this,
    (unsigned int *)v8,
    (unsigned int)v5,
    (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 472));
  if ( *((_QWORD *)a2 + 17) )
    v11 = *((_QWORD *)a2 + 18);
  else
    v11 = *((_QWORD *)a2 + 27);
  v12 = v11 / v4;
  v13 = v10;
  v14 = v5 + v12;
  while ( v12 < v14 )
    *v13++ = v12++;
  v15 = *((_QWORD *)a2 + 5);
  if ( v15 )
    v16 = *(_QWORD *)(v15 + 16);
  else
    v16 = *((_QWORD *)a2 + 6);
  v17 = *((_QWORD *)this + 6);
  v27 = v16;
  v30 = v5;
  v31 = v8;
  v32 = v10;
  if ( (*(_DWORD *)(v17 + 80) & 0x1000) != 0 )
    v28 = 0;
  else
    v28 = *(_WORD *)(v17 + 16) + 1;
  v29 = *(_WORD *)(v17 + 380);
  v18 = DxgCoreInterface[49](*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 24LL) + 2464LL), &v27, 1LL);
  v19 = *(_QWORD *)this;
  v20 = (_QWORD *)((char *)a2 + 456);
  if ( *(VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)this + 8LL) != this )
    __fastfail(3u);
  *v20 = v19;
  *((_QWORD *)a2 + 58) = this;
  *(_QWORD *)(v19 + 8) = v20;
  *(_QWORD *)this = v20;
  if ( v18 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
    v25[7] = &v27;
    v25[3] = 270LL;
    v25[4] = 45LL;
    v25[5] = this;
    v25[6] = a2;
    WdLogEvent5_WdCriticalError(v25);
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL) + 41528LL) && (_DWORD)v5 )
  {
    v26 = v10;
    do
    {
      VIDMM_GLOBAL::RecordPageMappingHistory(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL), v28, *v26++, 1LL, 2, 0LL, v27);
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(v10, 0);
  result = 0LL;
  *((_QWORD *)a2 + 56) = v8;
  return result;
}
