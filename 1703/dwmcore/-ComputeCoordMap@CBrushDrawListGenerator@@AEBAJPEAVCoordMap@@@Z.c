/*
 * XREFs of ?ComputeCoordMap@CBrushDrawListGenerator@@AEBAJPEAVCoordMap@@@Z @ 0x180059790
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z @ 0x1800587E4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ContributeToCoordMap@CDrawListBrush@@QEBAJIPEAVCoordMap@@@Z @ 0x1800BFF3C (-ContributeToCoordMap@CDrawListBrush@@QEBAJIPEAVCoordMap@@@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::ComputeCoordMap(CBrushDrawListGenerator *this, struct CoordMap *a2)
{
  __int64 v4; // rdi
  struct D2D_RECT_F *v5; // rcx
  int v6; // eax
  unsigned int v7; // ebx

  *((_DWORD *)a2 + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(a2, 16LL);
  *((_DWORD *)a2 + 54) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)a2 + 192, 16LL);
  *((_DWORD *)a2 + 102) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)a2 + 384, 16LL);
  v4 = 0LL;
  if ( *((_DWORD *)this + 26) )
  {
    while ( 1 )
    {
      v5 = (struct D2D_RECT_F *)*((_QWORD *)this + v4 + 9);
      if ( v5 )
      {
        v6 = CDrawListBrush::ContributeToCoordMap(v5, v4, a2);
        v7 = v6;
        if ( v6 < 0 )
          break;
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *((_DWORD *)this + 26) )
        return 0;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xF8u);
  }
  else
  {
    return 0;
  }
  return v7;
}
