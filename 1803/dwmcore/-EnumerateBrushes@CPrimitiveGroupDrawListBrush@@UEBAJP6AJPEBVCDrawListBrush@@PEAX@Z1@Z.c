/*
 * XREFs of ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x180005A60
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 * Callees:
 *     _lambda_59bf99de1785f265d3dfac0583631066_::_lambda_invoker_cdecl_ @ 0x180005CF0 (_lambda_59bf99de1785f265d3dfac0583631066_--_lambda_invoker_cdecl_.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x180005F10 (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x180005F2C (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x180073054 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800B2E7C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x1800B3004 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::EnumerateBrushes(
        CPrimitiveGroupDrawListBrush *this,
        __int64 (__fastcall *a2)(void *, void *),
        void *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // r15
  __int64 v9; // r14
  const __m128i *v10; // rbx
  __m128i v11; // xmm6
  __int16 v12; // ax
  __int32 v13; // xmm0_4
  __int32 v14; // xmm1_4
  __int64 v15; // rax
  __int32 v16; // xmm0_4
  __int64 v17; // rdx
  __int32 v18; // xmm1_4
  __int64 v19; // rax
  __int32 v20; // xmm0_4
  __int32 v21; // xmm1_4
  CSurfaceDrawListBrush *v22; // rcx
  _QWORD *v23; // rax
  __m128i *v24; // rcx
  int v25; // eax
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  struct CSurfaceDrawListBrush *v28; // rcx
  struct CObjectCache *ObjectCache; // rax
  void *lpMem; // [rsp+38h] [rbp-69h] BYREF
  void **p_lpMem; // [rsp+40h] [rbp-61h]
  void *v33; // [rsp+48h] [rbp-59h] BYREF
  char v34; // [rsp+50h] [rbp-51h]
  _DWORD v35[10]; // [rsp+58h] [rbp-49h] BYREF
  struct D2D_RECT_F v36; // [rsp+80h] [rbp-21h] BYREF
  _BYTE v37[8]; // [rsp+90h] [rbp-11h] BYREF
  const __m128i *v38; // [rsp+98h] [rbp-9h]
  __int16 v39; // [rsp+108h] [rbp+67h] BYREF
  char v40; // [rsp+10Ah] [rbp+69h]
  char v41; // [rsp+120h] [rbp+7Fh] BYREF

  v4 = *((_QWORD *)this + 7);
  v5 = 0;
  v6 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL) )
    return v5;
  while ( 1 )
  {
    v9 = **(_QWORD **)(v4 + 24) + 144 * v6;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(v4, v37, (unsigned int)v6);
    if ( (*(_BYTE *)(v9 + 4) & 2) == 0
      && *(_DWORD *)v9
      && *(_DWORD *)(v9 + 40) < *(_DWORD *)(*((_QWORD *)this + 7) + 64LL) )
    {
      break;
    }
LABEL_23:
    v4 = *((_QWORD *)this + 7);
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *(_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL) )
      return v5;
  }
  while ( 1 )
  {
    v10 = v38;
    if ( *((_BYTE *)this + 52) )
    {
      ClipRectAndEdgeFlags(v38, v38[2].m128i_u32[3], (char *)this + 32, *((unsigned int *)this + 12), &v36, &v41);
      v11 = (__m128i)v36;
    }
    else
    {
      v11 = _mm_loadu_si128(v38);
      v36 = (struct D2D_RECT_F)v11;
    }
    if ( IsEmpty(&v36) )
      goto LABEL_22;
    lpMem = 0LL;
    v12 = *((_WORD *)this + 32);
    v13 = v10[4].m128i_i32[0];
    v14 = v10[4].m128i_i32[1];
    v35[2] = 0;
    v35[5] = 0;
    v33 = 0LL;
    v39 = v12;
    v40 = *((_BYTE *)this + 66);
    p_lpMem = &lpMem;
    v15 = *((_QWORD *)this + 7);
    v35[0] = v13;
    v16 = v10[4].m128i_i32[2];
    v35[1] = v14;
    v17 = *(_QWORD *)(v15 + 112);
    v18 = v10[4].m128i_i32[3];
    v19 = *(unsigned int *)(v9 + 40);
    v35[3] = v16;
    v20 = v10[5].m128i_i32[0];
    v35[4] = v18;
    v21 = v10[5].m128i_i32[1];
    v35[6] = v20;
    v35[7] = v21;
    v35[8] = 1065353216;
    v34 = 1;
    v5 = CSurfaceDrawListBrush::CreateWithTextureTransform(v17 + 24 * v19, &v39, v35, &v33);
    if ( v34 )
    {
      v22 = (CSurfaceDrawListBrush *)*p_lpMem;
      *p_lpMem = v33;
      if ( v22 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v22, 1u);
    }
    if ( (v5 & 0x80000000) != 0 )
      break;
    *(__m128i *)((char *)lpMem + 136) = *(const __m128i *)((char *)v10 + 88);
    v23 = lpMem;
    *(_OWORD *)((char *)lpMem + 8) = *(_OWORD *)((char *)this + 8);
    v23[3] = *((_QWORD *)this + 3);
    v24 = (__m128i *)lpMem;
    *((_DWORD *)lpMem + 12) = v10[2].m128i_i32[3];
    v24[3].m128i_i8[4] = 1;
    v24[2] = v11;
    if ( (char *)a2 == (char *)lambda_59bf99de1785f265d3dfac0583631066_::_lambda_invoker_cdecl_ )
      v25 = lambda_59bf99de1785f265d3dfac0583631066_::_lambda_invoker_cdecl_((const struct CDrawListBrush *)lpMem, a3);
    else
      v25 = a2(lpMem, a3);
    v5 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x72u);
      goto LABEL_30;
    }
    v26 = lpMem;
    if ( lpMem )
    {
      v27 = *((_QWORD *)lpMem + 8);
      if ( v27 )
      {
        *((_QWORD *)lpMem + 8) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      v28 = (struct CSurfaceDrawListBrush *)v26[7];
      if ( v28 )
      {
        v26[7] = 0LL;
        (*(void (__fastcall **)(struct CSurfaceDrawListBrush *))(*(_QWORD *)v28 + 16LL))(v28);
      }
      ObjectCache = CThreadContext::GetObjectCache(v28);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(v26);
      }
      else
      {
        *v26 = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = v26;
      }
    }
LABEL_22:
    if ( !CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v37) )
      goto LABEL_23;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x6Cu);
LABEL_30:
  if ( lpMem )
    CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)lpMem, 1u);
  return v5;
}
