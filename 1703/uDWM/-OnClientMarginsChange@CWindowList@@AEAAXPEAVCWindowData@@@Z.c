/*
 * XREFs of ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800700A4
 * Callers:
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180033CE0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180038390 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003D6A8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ceilf_0 @ 0x18004DE66 (ceilf_0.c)
 */

void __fastcall CWindowList::OnClientMarginsChange(CWindowList *this, struct CWindowData *a2)
{
  int v3; // r14d
  int v4; // ebp
  int v5; // esi
  int v6; // eax
  CVisual *v7; // rcx
  CWindowIconic *v8; // rcx
  unsigned int i; // ebx
  CThumbnailVisual *v10; // rcx
  __int64 v11; // rax
  unsigned int j; // ebx
  CThumbnailVisual *v13; // rcx
  __int128 v14; // [rsp+20h] [rbp-18h]

  LODWORD(v14) = (int)ceilf_0((float)*((int *)a2 + 63) * *((float *)a2 + 43));
  v3 = (int)ceilf_0((float)*((int *)a2 + 64) * *((float *)a2 + 43));
  DWORD1(v14) = v3;
  v4 = (int)ceilf_0((float)*((int *)a2 + 65) * *((float *)a2 + 44));
  DWORD2(v14) = v4;
  v5 = (int)ceilf_0((float)*((int *)a2 + 66) * *((float *)a2 + 44));
  HIDWORD(v14) = v5;
  v6 = (int)ceilf_0((float)*((int *)a2 + 71) * *((float *)a2 + 43));
  if ( *((_QWORD *)a2 + 8) != __PAIR64__(v3, v14)
    || *((_DWORD *)a2 + 18) != v4
    || *((_DWORD *)a2 + 19) != v5
    || *((_DWORD *)a2 + 24) != v6 )
  {
    v7 = (CVisual *)*((_QWORD *)a2 + 50);
    *((_DWORD *)a2 + 24) = v6;
    *((_OWORD *)a2 + 4) = v14;
    if ( v7 )
      CVisual::SetDirtyFlags(v7, 0x2000);
    v8 = (CWindowIconic *)*((_QWORD *)a2 + 54);
    if ( v8 )
      CWindowIconic::UpdateSizeOrMargins(v8, 0);
    for ( i = 0; i < *((_DWORD *)a2 + 134); ++i )
    {
      v10 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 64) + 8LL * i) + 88LL);
      if ( v10 )
      {
        v11 = *((_QWORD *)v10 + 46);
        if ( v11 )
        {
          if ( *(_DWORD *)(v11 + 77) )
            CThumbnailVisual::SetDirtyFlags(v10, 0x4000);
        }
      }
    }
    for ( j = 0; j < *((_DWORD *)a2 + 126); ++j )
    {
      v13 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 60) + 8LL * j) + 88LL);
      if ( v13 )
        CThumbnailVisual::SetDirtyFlags(v13, 4096);
    }
  }
}
