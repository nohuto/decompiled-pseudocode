/*
 * XREFs of ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800989B0
 * Callers:
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180010940 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x180010CC8 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z @ 0x180077CF8 (-SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180077F40 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180078128 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

__int64 __fastcall CDisplaySet::ArrangeCloneDisplays(CDisplaySet *this)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  __int64 v4; // r14
  CDisplay *v5; // rcx
  __int64 v6; // r10
  struct CDisplay *v7; // rdx
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v13; // r11d
  __int64 v14; // rbp
  unsigned int v15; // [rsp+20h] [rbp-18h]

  v1 = 0;
  v3 = 0;
  for ( *((_DWORD *)this + 10) = 0; v3 < *((_DWORD *)this + 18); ++v3 )
  {
    v4 = *((_QWORD *)this + 6);
    if ( CDisplay::IsPrimary(*(CDisplay **)(v4 + 8LL * v3)) )
      *((_DWORD *)this + 10) = v3;
    if ( *(_BYTE *)(v6 + 305) )
    {
      v7 = (struct CDisplay *)v6;
    }
    else
    {
      v13 = 0;
      if ( !*((_DWORD *)this + 18) )
        continue;
      while ( 1 )
      {
        v14 = *(_QWORD *)(v4 + 8LL * v13);
        if ( *(_BYTE *)(v14 + 305) )
        {
          if ( TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                 (_DWORD *)(v6 + 96),
                 (_DWORD *)(v14 + 96)) )
          {
            break;
          }
        }
        if ( ++v13 >= *((_DWORD *)this + 18) )
          goto LABEL_7;
      }
      v7 = (struct CDisplay *)v14;
      v5 = (CDisplay *)v6;
    }
    CDisplay::SetPrimaryCloneDisplay(v5, v7);
LABEL_7:
    ;
  }
  v8 = *((_DWORD *)this + 18);
  v9 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v9);
      v11 = *(_QWORD *)(v10 + 128);
      if ( !v11 )
        break;
      if ( v11 != v10 && *(_BYTE *)(v10 + 305) )
      {
        v15 = 1190;
        goto LABEL_22;
      }
      if ( ++v9 >= v8 )
        return v1;
    }
    v15 = 1178;
LABEL_22:
    v1 = -2003304291;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180202590, 1u, 0x8898009D, v15);
  }
  return v1;
}
