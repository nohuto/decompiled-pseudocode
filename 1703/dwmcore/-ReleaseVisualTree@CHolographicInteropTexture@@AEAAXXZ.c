/*
 * XREFs of ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1801A428C
 * Callers:
 *     ?DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801A3A90 (-DetachFromChannel@CHolographicInteropTexture@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x1801A43C0 (-SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800C9130 (-RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z.c)
 */

void __fastcall CHolographicInteropTexture::ReleaseVisualTree(CHolographicInteropTexture *this)
{
  __int64 v2; // r8
  char *v3; // r10
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rax

  if ( *((_BYTE *)this + 115) )
  {
    v2 = *((_QWORD *)this + 10);
    v3 = (char *)this + 56;
    v4 = 0LL;
    v5 = *(_DWORD *)(v2 + 856);
    v6 = *(_QWORD *)(v2 + 832);
    if ( v5 )
    {
      do
      {
        if ( v3 == *(char **)(v6 + 8 * v4) )
          break;
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < v5 );
    }
    if ( (unsigned int)v4 < v5 )
    {
      if ( (unsigned int)v4 < v5 - 1 )
      {
        do
        {
          v7 = (unsigned int)(v4 + 1);
          *(_QWORD *)(v6 + 8 * v4) = *(_QWORD *)(v6 + 8 * v7);
          v4 = v7;
        }
        while ( (unsigned int)v7 < *(_DWORD *)(v2 + 856) - 1 );
      }
      --*(_DWORD *)(v2 + 856);
    }
    v8 = *((_QWORD *)this + 10);
    *((_BYTE *)this + 115) = 0;
    *(_BYTE *)(v8 + 32) = 0;
    CMonitorTreeAssociation::RemoveTree(
      *(CMonitorTreeAssociation **)(*((_QWORD *)this + 2) + 24LL),
      *((struct CVisualTree **)this + 10));
  }
  ReleaseInterface<CVisualTree>((CMILRefCountBase **)this + 10);
}
