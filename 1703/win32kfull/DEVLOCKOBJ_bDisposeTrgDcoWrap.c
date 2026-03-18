/*
 * XREFs of DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C00742B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00742FC (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C0075304 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C007B4C4 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0137314 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall DEVLOCKOBJ_bDisposeTrgDcoWrap(DEVLOCKOBJ *this)
{
  XDCOBJ *v1; // rdi
  __int64 v3; // rbx
  unsigned int v4; // ebp
  __int64 v6; // rbx
  DC *v7; // rcx

  v1 = (DEVLOCKOBJ *)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  v4 = 1;
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      v4 = DEVLOCKOBJ::bUnMapTrgSurfaceView(this);
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)v1 + 36LL) &= ~0x4000u;
        v7 = *(DC **)v1;
        *((_QWORD *)v7 + 64) = *(_QWORD *)(v6 + 2568);
        DC::vInheritSurfaceDpiScale(v7);
      }
      DEVLOCKOBJ::vClearRenderState(this);
    }
    XDCOBJ::vUnlock(v1);
    *(_QWORD *)v1 = 0LL;
  }
  return v4;
}
