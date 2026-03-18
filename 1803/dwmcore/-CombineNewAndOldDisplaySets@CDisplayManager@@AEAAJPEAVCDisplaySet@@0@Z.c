/*
 * XREFs of ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x18001ED40
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x18001EDEC (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800B69C4 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?CopyState@CDisplay@@IEAAXPEBV1@@Z @ 0x1800B71BC (-CopyState@CDisplay@@IEAAXPEBV1@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x1800B7414 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 *     ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C8A00 (--$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z.c)
 */

__int64 __fastcall CDisplayManager::CombineNewAndOldDisplaySets(
        CDisplayManager *this,
        struct CDisplaySet *a2,
        struct CDisplaySet *a3)
{
  __int64 i; // rdi
  __int64 v6; // rsi
  CDisplay *v7; // r12
  __int64 v8; // r13
  const struct CDisplay *v9; // r14
  int v10; // eax
  unsigned int v11; // ebx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 18); i = (unsigned int)(i + 1) )
  {
    v6 = 0LL;
    v7 = *(CDisplay **)(*((_QWORD *)a2 + 6) + 8 * i);
    if ( *((_DWORD *)a3 + 18) )
    {
      v8 = *((_QWORD *)a3 + 6);
      while ( 1 )
      {
        v9 = *(const struct CDisplay **)(v8 + 8 * v6);
        if ( CDisplay::IsRenderTargetEquivalentTo(v7, v9) )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *((_DWORD *)a3 + 18) )
          goto LABEL_6;
      }
      CDisplay::CopyState(v9, v7);
      ReplaceInterface<CRegionWrapper,CRegionWrapper>(*((_QWORD *)a2 + 6) + 8 * i, v9);
    }
LABEL_6:
    ;
  }
  v10 = CDisplaySet::ArrangeCloneDisplays(a2);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x169u);
  return v11;
}
