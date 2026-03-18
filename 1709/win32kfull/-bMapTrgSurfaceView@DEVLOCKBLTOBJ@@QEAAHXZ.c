/*
 * XREFs of ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00222E8
 * Callers:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0022528 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00F5FD4 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C0276DBC (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

_BOOL8 __fastcall DEVLOCKBLTOBJ::bMapTrgSurfaceView(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // r14
  __int64 v3; // r8
  __int64 v4; // rdi
  unsigned int v5; // esi

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 80);
  v3 = *((_QWORD *)this + 10);
  if ( !v3 )
    return 1LL;
  if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
    return 1LL;
  v4 = *(_QWORD *)(v3 + 512);
  if ( !v4 )
    return 1LL;
  v5 = SURFACE::Map(*(_QWORD *)(v3 + 512), this, v3);
  if ( v5 <= 1 )
  {
    if ( (*(_DWORD *)(v4 + 112) & 0x800) != 0 && *(_QWORD *)(v4 + 256) && (unsigned int)bHookRedir(v1) )
      *((_DWORD *)this + 18) |= 0x400u;
    if ( (*(_DWORD *)(v4 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv(v1) )
      *((_DWORD *)this + 18) |= 0x2000u;
    if ( v5 == 1 )
      *((_DWORD *)this + 18) |= 0x40u;
    return 1LL;
  }
  return v5 != 2;
}
