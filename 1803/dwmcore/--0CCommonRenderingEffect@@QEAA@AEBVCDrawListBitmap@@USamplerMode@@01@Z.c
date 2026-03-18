/*
 * XREFs of ??0CCommonRenderingEffect@@QEAA@AEBVCDrawListBitmap@@USamplerMode@@01@Z @ 0x180073FB4
 * Callers:
 *     ?GetNextRunningEffect@CCommonRenderingEffect@@UEAA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAVCRenderingEffect@@PEA_N@Z @ 0x180074160 (-GetNextRunningEffect@CCommonRenderingEffect@@UEAA-AV-$com_ptr_t@VCRenderingEffect@@Uerr_returnc.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800B35A0 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ??0SamplerMode@@QEAA@XZ @ 0x18007314C (--0SamplerMode@@QEAA@XZ.c)
 *     ??0CDrawListBitmap@@QEAA@XZ @ 0x180077350 (--0CDrawListBitmap@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommonRenderingEffect::CCommonRenderingEffect(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // r14
  __int64 *v6; // rsi
  __int64 v11; // rbx
  CDrawListBitmap *v12; // rbp
  SamplerMode *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rbx

  v5 = 2LL;
  *(_QWORD *)a1 = &CMILRefCountBase::`vftable';
  v6 = (__int64 *)(a1 + 16);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CCommonRenderingEffect::`vftable';
  v11 = 2LL;
  v12 = (CDrawListBitmap *)(a1 + 16);
  do
  {
    CDrawListBitmap::CDrawListBitmap(v12);
    v12 = (CDrawListBitmap *)((char *)v12 + 24);
    --v11;
  }
  while ( v11 );
  v13 = (SamplerMode *)(a1 + 64);
  do
  {
    SamplerMode::SamplerMode(v13);
    v13 = (SamplerMode *)((char *)v13 + 3);
    --v5;
  }
  while ( v5 );
  v14 = *v6;
  v15 = *a2;
  if ( *v6 != *a2 )
  {
    if ( v15 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 8LL))(*a2);
      v14 = *v6;
    }
    *v6 = v15;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v16 = v6[1];
  v17 = a2[1];
  if ( v16 != v17 )
  {
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(a2[1]);
      v16 = v6[1];
    }
    v6[1] = v17;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  *((_BYTE *)v6 + 16) = *((_BYTE *)a2 + 16);
  v18 = *(_QWORD *)(a1 + 40);
  v19 = *a4;
  if ( v18 != *a4 )
  {
    if ( v19 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 8LL))(*a4);
      v18 = *(_QWORD *)(a1 + 40);
    }
    *(_QWORD *)(a1 + 40) = v19;
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v20 = *(_QWORD *)(a1 + 48);
  v21 = a4[1];
  if ( v20 != v21 )
  {
    if ( v21 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(a4[1]);
      v20 = *(_QWORD *)(a1 + 48);
    }
    *(_QWORD *)(a1 + 48) = v21;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  *(_BYTE *)(a1 + 56) = *((_BYTE *)a4 + 16);
  *(_WORD *)(a1 + 64) = *(_WORD *)a3;
  *(_BYTE *)(a1 + 66) = *(_BYTE *)(a3 + 2);
  *(_WORD *)(a1 + 67) = *(_WORD *)a5;
  *(_BYTE *)(a1 + 69) = *(_BYTE *)(a5 + 2);
  return a1;
}
