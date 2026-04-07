/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x180085974
 * Callers:
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x180086144 (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x180087BF0 (-GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x18004675A (memcpy_0.c)
 */

__int64 __fastcall DynArray<MilPoint2D,0>::AddMultipleAndSet(__int64 a1, const void *a2, unsigned int a3)
{
  unsigned int v3; // esi
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v10; // [rsp+50h] [rbp+18h]

  v3 = v10;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = v5 + a3;
  if ( (unsigned int)v5 + a3 >= (unsigned int)v5 )
    v3 = v5 + a3;
  v7 = v6 < (unsigned int)v5 ? 0x80070216 : 0;
  if ( v6 >= (unsigned int)v5 )
  {
    if ( v3 > *(_DWORD *)(a1 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x10u, a3, a2);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u);
    }
    else
    {
      memcpy_0((void *)(*(_QWORD *)a1 + 16 * v5), a2, 16LL * a3);
      *(_DWORD *)(a1 + 24) = v3;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
  }
  return v7;
}
