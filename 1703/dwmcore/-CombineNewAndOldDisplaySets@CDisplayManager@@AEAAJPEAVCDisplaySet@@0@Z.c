/*
 * XREFs of ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x18007EF9C
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18007EDA4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800B7628 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?CopyState@CDisplay@@IEAAXPEBV1@@Z @ 0x1800B7FCC (-CopyState@CDisplay@@IEAAXPEBV1@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x1800B8148 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 *     ??$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z @ 0x1800C9EE4 (--$ReplaceInterface@VCRegionWrapper@@V1@@@YAXAEAPEAVCRegionWrapper@@PEAV0@@Z.c)
 */

__int64 __fastcall CDisplayManager::CombineNewAndOldDisplaySets(
        CDisplayManager *this,
        struct CDisplaySet *a2,
        struct CDisplaySet *a3)
{
  __int64 i; // rdi
  __int64 v6; // r8
  CDisplay *v7; // rcx
  __int64 v8; // r9
  const struct CDisplay *v9; // rbp
  int v10; // r8d
  int v11; // eax
  unsigned int v12; // ebx

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
        v6 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v6 >= *((_DWORD *)a3 + 18) )
          goto LABEL_6;
      }
      CDisplay::CopyState(v9, v7);
      ReplaceInterface<CRegionWrapper,CRegionWrapper>(*((_QWORD *)a2 + 6) + 8 * i, v9);
    }
LABEL_6:
    ;
  }
  v11 = CDisplaySet::ArrangeCloneDisplays(a2);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x16Cu);
  return v12;
}
