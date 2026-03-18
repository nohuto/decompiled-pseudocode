/*
 * XREFs of ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C00209D0
 * Callers:
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0022408 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DEVLOCKBLTOBJ::bMapSrcSurfaceView(DEVLOCKBLTOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax

  v2 = *((_QWORD *)this + 12);
  if ( !v2 )
    return 1LL;
  if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
    return 1LL;
  v3 = *(_QWORD *)(v2 + 512);
  if ( !v3 )
    return 1LL;
  v4 = SURFACE::Map(v3, this, 0LL);
  if ( v4 != 2 )
  {
    if ( v4 == 1 )
      *((_DWORD *)this + 18) |= 0x80u;
    return 1LL;
  }
  return 0LL;
}
