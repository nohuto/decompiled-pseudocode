/*
 * XREFs of ?GetShapeDataCore@CRectangleGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180058B10
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180096EA0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18006A440 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800B9E18 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleGeometry::GetShapeDataCore(
        CRectangleGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShapePtr *a3)
{
  unsigned int v3; // ebp
  float *v5; // rdi
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  float v8; // xmm7_4
  float v9; // xmm9_4
  float v10; // xmm6_4
  float v11; // xmm8_4
  _DWORD *Value; // rdi
  int v13; // ecx
  char *v14; // rbx
  __int64 v15; // rcx
  char *v17; // rax
  _QWORD *v18; // rax
  DWORD v19; // ecx
  unsigned int v20; // [rsp+20h] [rbp-B8h]
  _DWORD v21[4]; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v22[3]; // [rsp+40h] [rbp-98h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v3 = 0;
  if ( a2 )
  {
    v5 = (float *)v22;
    v6 = *(_OWORD *)((char *)this + 120);
    v22[0] = *(_OWORD *)((char *)this + 104);
    v7 = *(_OWORD *)((char *)this + 136);
    v22[1] = v6;
    *(float *)&v6 = a2->width - *((float *)this + 28);
    v22[2] = v7;
    *((_QWORD *)&v22[0] + 1) = __PAIR64__(a2->height - *((float *)this + 29), v6);
  }
  else
  {
    v5 = (float *)((char *)this + 104);
  }
  v8 = *v5;
  v9 = v5[2];
  v10 = v5[1];
  v11 = v5[3];
  if ( v9 > *v5 && v11 > v10 )
  {
    if ( *((float *)this + 30) <= 0.0
      && *((float *)this + 31) <= 0.0
      && *((float *)this + 32) <= 0.0
      && *((float *)this + 33) <= 0.0
      && *((float *)this + 34) <= 0.0
      && *((float *)this + 35) <= 0.0
      && *((float *)this + 36) <= 0.0
      && *((float *)this + 37) <= 0.0 )
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v18 = operator new(0xA8uLL);
        Value = v18;
        if ( !v18 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        v19 = CThreadContext::s_dwTlsIndex;
        *v18 = 0LL;
        v18[1] = 0LL;
        v18[2] = 0LL;
        v18[3] = 0LL;
        v18[4] = 0LL;
        v18[5] = 0LL;
        v18[6] = 0LL;
        v18[7] = 0LL;
        v18[8] = 0LL;
        v18[9] = 0LL;
        v18[10] = 0LL;
        v18[11] = 0LL;
        v18[12] = 0LL;
        v18[13] = 0LL;
        v18[14] = 0LL;
        v18[15] = 0LL;
        v18[16] = 0LL;
        v18[17] = 0LL;
        v18[18] = 0LL;
        v18[19] = 0LL;
        v18[20] = 0LL;
        TlsSetValue(v19, v18);
      }
      v13 = Value[3];
      v14 = 0LL;
      if ( v13 )
      {
        v14 = (char *)*((_QWORD *)Value + 2);
        *((_QWORD *)Value + 2) = *(_QWORD *)v14;
        Value[3] = v13 - 1;
      }
      if ( !v14 )
      {
        v14 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x40uLL);
        if ( !v14 )
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
      }
      *(_QWORD *)v14 = &CRectanglesShape::`vftable';
      *((_DWORD *)v14 + 6) = 1;
      *((_QWORD *)v14 + 1) = v14 + 40;
      *((_QWORD *)v14 + 2) = v14 + 40;
      *(_QWORD *)(v14 + 28) = 1LL;
      *((_QWORD *)v14 + 7) = 0LL;
      *((_DWORD *)v14 + 8) = 0;
      DynArrayImpl<0>::ShrinkToSize(v14 + 8, 16LL);
      v15 = *((_QWORD *)v14 + 7);
      if ( v15 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        *((_QWORD *)v14 + 7) = 0LL;
      }
      *(float *)v21 = v8;
      *(float *)&v21[1] = v10;
      *(float *)&v21[2] = v9;
      *(float *)&v21[3] = v11;
      DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
        v14 + 8,
        v21,
        1LL);
      goto LABEL_20;
    }
    v14 = (char *)operator new(0x40uLL);
    if ( v14 )
    {
      *(_QWORD *)v14 = &CRoundedRectangleShape::`vftable';
      *(_OWORD *)(v14 + 8) = *(_OWORD *)v5;
      *(_OWORD *)(v14 + 24) = *((_OWORD *)v5 + 1);
      *(_OWORD *)(v14 + 40) = *((_OWORD *)v5 + 2);
      goto LABEL_30;
    }
    v20 = 178;
LABEL_38:
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v20);
    return v3;
  }
  v17 = (char *)CRectanglesShape::operator new((unsigned __int64)this);
  v14 = v17;
  if ( !v17 )
  {
    v20 = 171;
    goto LABEL_38;
  }
  *(_QWORD *)v17 = &CRectanglesShape::`vftable';
  *((_QWORD *)v17 + 1) = v17 + 40;
  *((_QWORD *)v17 + 2) = v17 + 40;
  *((_DWORD *)v17 + 6) = 1;
  *(_QWORD *)(v17 + 28) = 1LL;
LABEL_30:
  *((_QWORD *)v14 + 7) = 0LL;
LABEL_20:
  if ( *((_BYTE *)a3 + 8) && *(_QWORD *)a3 )
    (***(void (__fastcall ****)(_QWORD, __int64))a3)(*(_QWORD *)a3, 1LL);
  *(_QWORD *)a3 = v14;
  *((_BYTE *)a3 + 8) = 1;
  return v3;
}
