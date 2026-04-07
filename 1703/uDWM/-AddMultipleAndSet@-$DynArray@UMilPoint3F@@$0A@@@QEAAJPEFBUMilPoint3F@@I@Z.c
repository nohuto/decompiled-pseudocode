/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z @ 0x18006E47C
 * Callers:
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x18004A89C (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x18008CE50 (-GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x18004DE8A (memcpy_0.c)
 */

__int64 __fastcall DynArray<MilPoint3F,0>::AddMultipleAndSet(__int64 a1, const void *a2, unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v10; // [rsp+50h] [rbp+18h]

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + a3;
  v6 = v4 + a3;
  if ( (unsigned int)v4 + a3 < (unsigned int)v4 )
    v6 = v10;
  v7 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 >= (unsigned int)v4 )
  {
    if ( v6 > *(_DWORD *)(a1 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0xCu, a3, a2);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xC0u);
    }
    else
    {
      memcpy_0((void *)(*(_QWORD *)a1 + 12 * v4), a2, 12LL * a3);
      *(_DWORD *)(a1 + 24) = v6;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xB5u);
  }
  return v7;
}
