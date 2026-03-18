/*
 * XREFs of ?GetClippedD2D1CommandListForContext@CAtlasedRectsGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800AF770
 * Callers:
 *     ?DrawAtlasedRects@CDrawingContext@@QEAAJPEAVCAtlasedRectsGroup@@@Z @ 0x1800A741C (-DrawAtlasedRects@CDrawingContext@@QEAAJPEAVCAtlasedRectsGroup@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateNewD2DCommandList@CAtlasedRectsGroup@@IEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x1800AF1A4 (-CreateNewD2DCommandList@CAtlasedRectsGroup@@IEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAV.c)
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800AF840 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GetClippedD2D1CommandListForContext(
        CAtlasedRectsGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct CPolygon *a4,
        struct ID2D1PrivateCompositorCommandList **a5)
{
  __int64 v6; // r10
  struct CD2DCommandList *v7; // rcx
  __int64 v9; // r11
  struct ID2D1PrivateCompositorCommandList **v10; // rdi
  int ID2DCommandList; // eax
  unsigned int v12; // ebx
  int v14; // eax
  struct CD2DCommandList *v15; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    v9 = *((_QWORD *)this + 11);
    while ( a3 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v9 + 8 * v6) + 24LL) + 24LL) )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)this + 28) )
        goto LABEL_5;
    }
    v7 = *(struct CD2DCommandList **)(v9 + 8 * v6);
  }
LABEL_5:
  v10 = a5;
  v15 = v7;
  *a5 = 0LL;
  if ( !v7 )
  {
    v14 = CAtlasedRectsGroup::CreateNewD2DCommandList((__int64 **)this, a2, a3, &v15);
    v12 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x72u);
      return v12;
    }
    v7 = v15;
  }
  ID2DCommandList = CD2DCommandList::GetID2DCommandList(v7, a4, v10);
  v12 = ID2DCommandList;
  if ( ID2DCommandList < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2DCommandList, 0x76u);
  return v12;
}
