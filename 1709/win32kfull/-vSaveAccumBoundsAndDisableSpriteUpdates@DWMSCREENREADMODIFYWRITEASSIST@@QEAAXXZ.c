/*
 * XREFs of ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C027A6D8
 * Callers:
 *     NtGdiLineTo @ 0x1C00E7C80 (NtGdiLineTo.c)
 *     NtGdiRectangle @ 0x1C0105710 (NtGdiRectangle.c)
 *     NtGdiInvertRgn @ 0x1C012B620 (NtGdiInvertRgn.c)
 *     GrePolyPolygon @ 0x1C01327D0 (GrePolyPolygon.c)
 *     GrePolyPolyline @ 0x1C01391F0 (GrePolyPolyline.c)
 *     GrePolyBezier @ 0x1C027B3D0 (GrePolyBezier.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSCREENREADMODIFYWRITEASSIST::vSaveAccumBoundsAndDisableSpriteUpdates(
        DWMSCREENREADMODIFYWRITEASSIST *this)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  BOOL v8; // edx

  v1 = *((_QWORD *)this + 3);
  if ( *(_QWORD *)v1 )
  {
    *(_DWORD *)(*(_QWORD *)v1 + 504LL) = 0;
    *(_DWORD *)this = GreGetBounds(***((_QWORD ***)this + 3), (char *)this + 4, 4LL);
    v3 = **((_QWORD **)this + 3);
    v4 = *(_DWORD *)(v3 + 40) & 1;
    *((_DWORD *)this + 1) -= *(_DWORD *)(v3 + 8 * v4 + 1432);
    *((_DWORD *)this + 3) -= *(_DWORD *)(v3 + 8 * v4 + 1432);
    *((_DWORD *)this + 2) -= *(_DWORD *)(v3 + 8 * v4 + 1436);
    *((_DWORD *)this + 4) -= *(_DWORD *)(v3 + 8 * v4 + 1436);
    v5 = (_QWORD *)*((_QWORD *)this + 3);
    *((_DWORD *)this + 8) = *(unsigned __int8 *)(*(_QWORD *)(*v5 + 80LL) + 72LL);
    v6 = *(_QWORD *)(*v5 + 80LL);
    if ( (*(_DWORD *)(v6 + 8) & 0x1000) != 0 )
    {
      *((_QWORD *)this + 5) = *(_QWORD *)(v6 + 16);
      GreDCSelectBrush(*v5, gahStockObjects[5]);
    }
    else
    {
      *((_QWORD *)this + 5) = GreDCSelectBrush(*v5, gahStockObjects[5]);
    }
    *(_BYTE *)(*(_QWORD *)(**((_QWORD **)this + 3) + 80LL) + 72LL) = 11;
    v7 = *((_QWORD *)this + 3);
    v8 = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 80LL) + 8LL) & 0x100) == 0;
    *((_DWORD *)this + 16) = v8;
    *((_DWORD *)this + 17) = (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 80LL) + 8LL) & 0x200) == 0;
    if ( v8 )
      *((_QWORD *)this + 6) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 80LL) + 76LL);
    if ( *((_DWORD *)this + 17) )
      *((_QWORD *)this + 7) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 80LL) + 84LL);
  }
}
