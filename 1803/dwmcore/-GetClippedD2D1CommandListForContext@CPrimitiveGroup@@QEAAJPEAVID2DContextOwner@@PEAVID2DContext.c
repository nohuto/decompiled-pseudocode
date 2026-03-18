/*
 * XREFs of ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18019F008
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x1801608EC (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18019E840 (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 *     ?CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18019ED60 (-CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@.c)
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1801E6184 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 */

__int64 __fastcall CPrimitiveGroup::GetClippedD2D1CommandListForContext(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct CPolygon *a4,
        struct ID2D1PrivateCompositorCommandList **a5)
{
  struct ID2D1PrivateCompositorCommandList **v5; // rsi
  struct ID2D1PrivateCompositorCommandList **v7; // rcx
  __int64 v8; // r11
  struct ID2DContextOwner *v10; // rbp
  unsigned int v11; // ebx
  __int64 v12; // rdi
  int NewD2DCommandListForHeatMap; // eax
  unsigned int v14; // ebx
  int NewD2DCommandList; // eax
  int ID2DCommandList; // eax

  v5 = a5;
  v7 = 0LL;
  v8 = 0LL;
  v10 = a2;
  *a5 = 0LL;
  v11 = *((_DWORD *)this + 34);
  if ( v11 )
  {
    v12 = *((_QWORD *)this + 14);
    while ( 1 )
    {
      a2 = *(struct ID2DContextOwner **)(v12 + 8 * v8);
      if ( a3 == *(struct ID2DContext **)(*((_QWORD *)a2 + 3) + 24LL) )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v11 )
        goto LABEL_7;
    }
    v7 = *(struct ID2D1PrivateCompositorCommandList ***)(v12 + 8 * v8);
  }
LABEL_7:
  a5 = v7;
  if ( !v7 )
  {
    if ( *((_BYTE *)this + 577) )
    {
      NewD2DCommandListForHeatMap = CPrimitiveGroup::CreateNewD2DCommandListForHeatMap(
                                      this,
                                      a2,
                                      a3,
                                      (struct CD2DCommandList **)&a5);
      v14 = NewD2DCommandListForHeatMap;
      if ( NewD2DCommandListForHeatMap < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NewD2DCommandListForHeatMap, 0x22Au);
        return v14;
      }
    }
    else
    {
      NewD2DCommandList = CPrimitiveGroup::CreateNewD2DCommandList(this, v10, a3, (struct CD2DCommandList **)&a5);
      v14 = NewD2DCommandList;
      if ( NewD2DCommandList < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NewD2DCommandList, 0x22Eu);
        return v14;
      }
    }
    v7 = a5;
  }
  ID2DCommandList = CD2DCommandList::GetID2DCommandList((CD2DCommandList *)v7, a4, v5);
  v14 = ID2DCommandList;
  if ( ID2DCommandList < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ID2DCommandList, 0x232u);
  return v14;
}
