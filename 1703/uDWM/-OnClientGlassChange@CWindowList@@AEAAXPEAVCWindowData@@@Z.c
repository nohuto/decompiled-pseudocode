/*
 * XREFs of ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180033BB4
 * Callers:
 *     ?ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030C30 (-ClientGlassChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180033CE0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ceilf_0 @ 0x18004DE66 (ceilf_0.c)
 */

void __fastcall CWindowList::OnClientGlassChange(CWindowList *this, struct CWindowData *a2)
{
  int v3; // ebp
  int v4; // esi
  int v5; // edi
  int v6; // eax
  __int128 v7; // xmm0
  CVisual *v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h]

  if ( *(_QWORD *)((char *)a2 + 268) == 0x7FFFFFFF7FFFFFFFLL
    && *((_DWORD *)a2 + 69) == 0x7FFFFFFF
    && *((_DWORD *)a2 + 70) == 0x7FFFFFFF )
  {
    v7 = *(_OWORD *)((char *)a2 + 268);
    v6 = HIDWORD(v7);
    v5 = *(_QWORD *)((char *)a2 + 276);
    v4 = HIDWORD(*(_QWORD *)((char *)a2 + 268));
    v3 = v7;
  }
  else
  {
    v3 = (int)ceilf_0((float)*((int *)a2 + 67) * *((float *)a2 + 43));
    LODWORD(v9) = v3;
    v4 = (int)ceilf_0((float)*((int *)a2 + 68) * *((float *)a2 + 43));
    DWORD1(v9) = v4;
    v5 = (int)ceilf_0((float)*((int *)a2 + 69) * *((float *)a2 + 44));
    DWORD2(v9) = v5;
    v6 = (int)ceilf_0((float)*((int *)a2 + 70) * *((float *)a2 + 44));
    HIDWORD(v9) = v6;
    v7 = v9;
  }
  if ( *((_DWORD *)a2 + 20) != v3
    || *((_DWORD *)a2 + 21) != v4
    || *((_DWORD *)a2 + 22) != v5
    || *((_DWORD *)a2 + 23) != v6 )
  {
    v8 = (CVisual *)*((_QWORD *)a2 + 50);
    *((_OWORD *)a2 + 5) = v7;
    if ( v8 )
      CVisual::SetDirtyFlags(v8, 0x4000);
  }
}
