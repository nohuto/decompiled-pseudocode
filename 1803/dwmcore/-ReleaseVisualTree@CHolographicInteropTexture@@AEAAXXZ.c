/*
 * XREFs of ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1801FBAF8
 * Callers:
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801FAD40 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x1801FBC58 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x180034C3C (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 *     ?SetVisualDesktopId@CVisual@@QEAAXI@Z @ 0x18004CAB0 (-SetVisualDesktopId@CVisual@@QEAAXI@Z.c)
 */

void __fastcall CHolographicInteropTexture::ReleaseVisualTree(CHolographicInteropTexture *this)
{
  struct CVisualTree **v1; // rdi
  struct CVisualTree *v3; // r9
  char *v4; // rdx
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  __int64 v7; // r10
  __int64 v8; // rcx
  struct CVisualTree *v9; // rcx

  v1 = (struct CVisualTree **)((char *)this + 80);
  if ( *((_BYTE *)this + 135) )
  {
    v3 = *v1;
    v4 = (char *)this + 56;
    v5 = 0;
    v6 = *((_DWORD *)*v1 + 300);
    v7 = *((_QWORD *)*v1 + 147);
    if ( v6 )
    {
      do
      {
        if ( v4 == *(char **)(v7 + 8LL * v5) )
          break;
        ++v5;
      }
      while ( v5 < v6 );
    }
    if ( v5 < v6 )
    {
      for ( ; v5 < v6 - 1; v6 = *((_DWORD *)v3 + 300) )
      {
        v8 = v5++;
        *(_QWORD *)(v7 + 8 * v8) = *(_QWORD *)(v7 + 8LL * v5);
      }
      *((_DWORD *)v3 + 300) = v6 - 1;
    }
    v9 = *v1;
    *((_BYTE *)this + 135) = 0;
    *((_BYTE *)v9 + 32) = 0;
    CVisual::SetVisualDesktopId(*((CVisual **)v9 + 3), 0);
    CMonitorTreeAssociation::RemoveTree(*(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL), *v1);
  }
  ReleaseInterface<CVisualTree>(v1);
}
