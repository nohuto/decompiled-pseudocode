/*
 * XREFs of ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x1801D06B8
 * Callers:
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x1801D06B8 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x1801D086C (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x180176C14 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 *     ??$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonListBuilder@@W4WalkDirection@@@Z @ 0x1801D06B8 (--$WalkSubtree@VCBspPolygonListBuilder@@@CBspTreeIterator@@AEAAJPEAVCBspNode@@0PEAVCBspPolygonLi.c)
 *     ?GotoParent@?$CGraphWalker@VCBspNode@@@@QEAAXPEAPEAVCBspNode@@@Z @ 0x1801D08F8 (-GotoParent@-$CGraphWalker@VCBspNode@@@@QEAAXPEAPEAVCBspNode@@@Z.c)
 *     ?GotoPostChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x1801D0954 (-GotoPostChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 *     ?GotoPreChild@?$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z @ 0x1801D09F4 (-GotoPreChild@-$CGraphWalker@VCBspNode@@@@QEAAJPEAPEAVCBspNode@@@Z.c)
 */

__int64 CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(__int64 a1, __int64 a2, ...)
{
  int v2; // ebp
  BOOL v4; // edi
  signed int v5; // eax
  DWORD v6; // ebx
  signed int v7; // eax
  __int64 v8; // rcx
  CVisual *v9; // r8
  int v10; // ebp
  signed int v11; // eax
  signed int v12; // eax
  signed int v13; // eax
  CVisual *v15; // [rsp+30h] [rbp-38h]
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h]
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+18h]
  __int64 v20; // [rsp+88h] [rbp+20h]
  __int64 v21; // [rsp+90h] [rbp+28h]
  va_list va1; // [rsp+98h] [rbp+30h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v18 = va_arg(va1, _QWORD);
  v20 = va_arg(va1, _QWORD);
  v21 = va_arg(va1, _QWORD);
  v17 = a2;
  v2 = v21;
  v4 = v21;
  if ( !*(_BYTE *)(a2 + 96) )
    v4 = v21 == 0;
  v18 = 0LL;
  v16 = 0LL;
  *(_DWORD *)(a1 + 28) = v4;
  v5 = CGraphWalker<CBspNode>::GotoPreChild(a1, (__int64 *)va);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x48u);
    return v6;
  }
  if ( v18 )
  {
    v7 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(a1, v18, v17, v20, v2);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x4Cu);
      return v6;
    }
    CGraphWalker<CBspNode>::GotoParent(a1, (__int64 *)va);
    *(_DWORD *)(a1 + 28) = v4;
  }
  v6 = 0;
  v8 = *(_QWORD *)(v20 + 8);
  v9 = *(CVisual **)(v20 + 64);
  v18 = v8;
  v15 = v9;
  v10 = *(_DWORD *)(v8 + 56);
  while ( v10 )
  {
    v11 = CVisual::AddToBspPolygonList(v9, *(struct CPolygon **)(*(_QWORD *)(v8 + 32) + 8LL * (unsigned int)--v10));
    v6 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0xD7u);
      break;
    }
    v8 = v18;
    v9 = v15;
  }
  if ( (v6 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x5Bu);
  }
  else
  {
    v12 = CGraphWalker<CBspNode>::GotoPostChild(a1, &v16, v9);
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x5Du);
    }
    else if ( v16 )
    {
      v13 = CBspTreeIterator::WalkSubtree<CBspPolygonListBuilder>(a1, v16, v17, v20, v21);
      v6 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x61u);
      else
        CGraphWalker<CBspNode>::GotoParent(a1, (__int64 *)va);
    }
  }
  return v6;
}
