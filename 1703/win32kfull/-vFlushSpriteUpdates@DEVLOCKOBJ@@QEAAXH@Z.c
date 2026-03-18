/*
 * XREFs of ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C00748F0
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0077C10 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0137314 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C006D990 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 */

void __fastcall DEVLOCKOBJ::vFlushSpriteUpdates(DEVLOCKOBJ *this, int a2)
{
  struct XDCOBJ *v2; // rdi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx

  v2 = (DEVLOCKOBJ *)((char *)this + 32);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    if ( a2 )
    {
      if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
      {
        if ( (*(_DWORD *)(v4 + 44) & 1) == 0 )
          SURFACE::bUnMap(*(SURFACE **)(v4 + 512), this, (struct DC *)v4);
        *(_DWORD *)(*(_QWORD *)v2 + 44LL) &= ~1u;
        v6 = *(_QWORD *)v2;
        if ( (*(_DWORD *)(*(_QWORD *)v2 + 36LL) & 0x4000) != 0 && *(_QWORD *)(v6 + 488) && *(_DWORD *)(v6 + 504) )
          GreUpdateSpriteDevLockEnd(v2, *((_DWORD *)this + 6) & 0x400000);
      }
    }
    else
    {
      v5 = *(_DWORD *)(v4 + 36);
      if ( (v5 & 0x4000) != 0 && (v5 & 0x40) != 0 && *(_QWORD *)(v4 + 488) )
      {
        if ( *(_DWORD *)(v4 + 504) )
        {
          W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(*(_QWORD *)(v4 + 512) + 280LL));
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(*(_QWORD *)(*(_QWORD *)v2 + 512LL) + 280LL));
        }
      }
    }
  }
}
