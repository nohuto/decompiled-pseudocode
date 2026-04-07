/*
 * XREFs of ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x18006E3B8
 * Callers:
 *     ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x18004A89C (-TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV-$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEB.c)
 *     ?GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z @ 0x18008CE50 (-GenerateMesh@CTetherVisual@@IEAAJPEAUMesh2D@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z @ 0x18006E7E0 (-AddMultiple@-$DynArrayImpl@$0A@@@IEAAJIIPEAPEAX@Z.c)
 */

__int64 __fastcall DynArray<unsigned long,0>::AddAndSet(__int64 a1, unsigned int a2, int *a3)
{
  int v5; // eax
  __int64 v6; // r9
  unsigned int v7; // ebp
  int *v8; // rdx
  unsigned int v9; // eax
  unsigned __int64 v10; // rcx
  int *v11; // rdi
  int v12; // eax
  unsigned __int64 i; // rcx
  int *v14; // rcx
  __int64 v15; // rdx
  int *v17; // [rsp+58h] [rbp+20h] BYREF

  v5 = DynArrayImpl<0>::AddMultiple(a1, 4LL, a2, &v17);
  v6 = 0LL;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( a2 )
    {
      v8 = v17;
      if ( a2 >= 4 && (v17 > a3 || &v17[a2 - 1] < a3) )
      {
        v9 = a2 & 0xFFFFFFFC;
        do
          v6 = (unsigned int)(v6 + 4);
        while ( (unsigned int)v6 < v9 );
        v10 = v9 + 3;
        v11 = v17;
        v12 = *a3;
        for ( i = (16 * (v10 >> 2)) >> 2; i; --i )
          *v11++ = v12;
      }
      if ( (unsigned int)v6 < a2 )
      {
        v14 = &v8[v6];
        v15 = a2 - (unsigned int)v6;
        do
        {
          *v14++ = *a3;
          --v15;
        }
        while ( v15 );
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xE5u);
  }
  return v7;
}
