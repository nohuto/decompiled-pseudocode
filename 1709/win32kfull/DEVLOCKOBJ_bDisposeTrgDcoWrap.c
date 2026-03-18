/*
 * XREFs of DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C002B020
 * Callers:
 *     <none>
 * Callees:
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0027F84 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B06C (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C013DA04 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
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
    if ( *(_QWORD *)v1 )
      XDCOBJ::vUnlockFast(v1);
    *(_QWORD *)v1 = 0LL;
    *(_QWORD *)v1 = 0LL;
  }
  return v4;
}
