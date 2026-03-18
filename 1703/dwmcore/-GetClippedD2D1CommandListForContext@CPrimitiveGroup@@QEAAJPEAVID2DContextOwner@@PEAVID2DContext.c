/*
 * XREFs of ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18000CBB8
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000EC78 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 * Callees:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18000BCEC (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800AF840 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 *     ?CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x180165FB8 (-CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@.c)
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
  int ID2DCommandList; // eax
  unsigned int v14; // ebx
  int NewD2DCommandList; // eax
  int NewD2DCommandListForHeatMap; // eax

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
        goto LABEL_5;
    }
    v7 = *(struct ID2D1PrivateCompositorCommandList ***)(v12 + 8 * v8);
  }
LABEL_5:
  a5 = v7;
  if ( !v7 )
  {
    if ( *((_BYTE *)this + 449) )
    {
      NewD2DCommandListForHeatMap = CPrimitiveGroup::CreateNewD2DCommandListForHeatMap(
                                      this,
                                      a2,
                                      a3,
                                      (struct CD2DCommandList **)&a5);
      v14 = NewD2DCommandListForHeatMap;
      if ( NewD2DCommandListForHeatMap < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, NewD2DCommandListForHeatMap, 0x23Du);
        return v14;
      }
    }
    else
    {
      NewD2DCommandList = CPrimitiveGroup::CreateNewD2DCommandList(this, v10, a3, (struct CD2DCommandList **)&a5);
      v14 = NewD2DCommandList;
      if ( NewD2DCommandList < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, NewD2DCommandList, 0x241u);
        return v14;
      }
    }
    v7 = a5;
  }
  ID2DCommandList = CD2DCommandList::GetID2DCommandList((CD2DCommandList *)v7, a4, v5);
  v14 = ID2DCommandList;
  if ( ID2DCommandList < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2DCommandList, 0x245u);
  return v14;
}
