/*
 * XREFs of ??_GCRectanglesShape@@UEAAPEAXI@Z @ 0x180064290
 * Callers:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067BE0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18006C070 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18008AA10 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCShape@@@Z @ 0x18008BCE0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@PEAPEAVCSha.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008C1F8 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x18008CFF0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180099E90 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x1800A6FE0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800AB230 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x180209D10 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CRectanglesShape *__fastcall CRectanglesShape::`scalar deleting destructor'(CRectanglesShape *this, char a2)
{
  __int64 v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  _QWORD *Value; // rbx
  _QWORD *v9; // rax
  DWORD v10; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &CRectanglesShape::`vftable';
  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 16, 16LL);
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 8) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 2);
  if ( v5 != *((void **)this + 3) )
  {
    operator delete(v5);
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    *((_QWORD *)this + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v9 = operator new(0xF8uLL);
        Value = v9;
        if ( !v9 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        v10 = CThreadContext::s_dwTlsIndex;
        *v9 = 0LL;
        v9[1] = 0LL;
        v9[2] = 0LL;
        v9[3] = 0LL;
        v9[4] = 0LL;
        v9[5] = 0LL;
        v9[6] = 0LL;
        v9[7] = 0LL;
        v9[8] = 0LL;
        v9[9] = 0LL;
        v9[10] = 0LL;
        v9[11] = 0LL;
        v9[12] = 0LL;
        v9[13] = 0LL;
        v9[14] = 0LL;
        v9[15] = 0LL;
        v9[16] = 0LL;
        v9[17] = 0LL;
        v9[18] = 0LL;
        v9[19] = 0LL;
        v9[20] = 0LL;
        v9[21] = 0LL;
        v9[22] = 0LL;
        v9[23] = 0LL;
        v9[24] = 0LL;
        v9[25] = 0LL;
        v9[26] = 0LL;
        v9[27] = 0LL;
        v9[28] = 0LL;
        v9[29] = 0LL;
        v9[30] = 0LL;
        TlsSetValue(v10, v9);
      }
      if ( *((_DWORD *)Value + 3) >= *((_DWORD *)Value + 2) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = Value[2];
        ++*((_DWORD *)Value + 3);
        Value[2] = this;
      }
    }
  }
  return this;
}
