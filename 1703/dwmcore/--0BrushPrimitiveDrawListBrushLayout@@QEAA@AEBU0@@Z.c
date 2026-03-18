/*
 * XREFs of ??0BrushPrimitiveDrawListBrushLayout@@QEAA@AEBU0@@Z @ 0x18015C80C
 * Callers:
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z @ 0x1800598B4 (-ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z.c)
 * Callees:
 *     <none>
 */

BrushPrimitiveDrawListBrushLayout *__fastcall BrushPrimitiveDrawListBrushLayout::BrushPrimitiveDrawListBrushLayout(
        BrushPrimitiveDrawListBrushLayout *this,
        const struct BrushPrimitiveDrawListBrushLayout *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  *((_WORD *)this + 18) = *((_WORD *)a2 + 18);
  *((_BYTE *)this + 38) = *((_BYTE *)a2 + 38);
  *((_DWORD *)this + 10) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 11) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 12) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 15);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 16);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 17);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 18);
  *(_OWORD *)((char *)this + 76) = *(_OWORD *)((char *)a2 + 76);
  *((_DWORD *)this + 23) = *((_DWORD *)a2 + 23);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_BYTE *)this + 112) = *((_BYTE *)a2 + 112);
  return this;
}
