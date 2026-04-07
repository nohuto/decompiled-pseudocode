/*
 * XREFs of ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180065BF0
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800263D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18000F570 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180037414 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ceilf_0 @ 0x180046736 (ceilf_0.c)
 */

void __fastcall CWindowList::OnClientMarginsChange(CWindowList *this, struct CWindowData *a2)
{
  int v3; // esi
  int v4; // ebp
  int v5; // r14d
  int v6; // ecx
  bool v7; // al
  CVisual *v8; // rcx
  CWindowIconic *v9; // rcx
  __int64 i; // rbx
  CThumbnailVisual *v11; // rcx
  __int64 v12; // rax
  __int64 j; // rbx
  CThumbnailVisual *v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-18h]

  LODWORD(v15) = (int)ceilf_0((float)*((int *)a2 + 63) * *((float *)a2 + 43));
  v3 = (int)ceilf_0((float)*((int *)a2 + 64) * *((float *)a2 + 43));
  DWORD1(v15) = v3;
  v4 = (int)ceilf_0((float)*((int *)a2 + 65) * *((float *)a2 + 44));
  DWORD2(v15) = v4;
  v5 = (int)ceilf_0((float)*((int *)a2 + 66) * *((float *)a2 + 44));
  HIDWORD(v15) = v5;
  v6 = (int)ceilf_0((float)*((int *)a2 + 71) * *((float *)a2 + 43));
  v7 = *((_QWORD *)a2 + 8) != __PAIR64__(v3, v15) || *((_DWORD *)a2 + 18) != v4 || *((_DWORD *)a2 + 19) != v5;
  if ( v7 || *((_DWORD *)a2 + 24) != v6 )
  {
    *((_DWORD *)a2 + 24) = v6;
    v8 = (CVisual *)*((_QWORD *)a2 + 50);
    *((_OWORD *)a2 + 4) = v15;
    if ( v8 )
      CVisual::SetDirtyFlags(v8, 0x2000);
    v9 = (CWindowIconic *)*((_QWORD *)a2 + 54);
    if ( v9 )
      CWindowIconic::UpdateSizeOrMargins(v9, 0);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 134); i = (unsigned int)(i + 1) )
    {
      v11 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 64) + 8 * i) + 88LL);
      if ( v11 )
      {
        v12 = *((_QWORD *)v11 + 46);
        if ( v12 )
        {
          if ( *(_DWORD *)(v12 + 77) )
            CThumbnailVisual::SetDirtyFlags(v11, 0x4000);
        }
      }
    }
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)a2 + 126); j = (unsigned int)(j + 1) )
    {
      v14 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 60) + 8 * j) + 88LL);
      if ( v14 )
        CThumbnailVisual::SetDirtyFlags(v14, 4096);
    }
  }
}
