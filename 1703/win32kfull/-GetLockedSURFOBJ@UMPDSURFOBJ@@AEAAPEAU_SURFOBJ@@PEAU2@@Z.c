/*
 * XREFs of ?GetLockedSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C0097224
 * Callers:
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0097294 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall UMPDSURFOBJ::GetLockedSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2)
{
  __int64 v2; // r8
  HSURF hsurf; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  hsurf = 0LL;
  if ( a2 && a2[-1].lDelta == 1431130959 )
    hsurf = *(HSURF *)&a2[-1].iBitmapFormat;
  if ( hsurf )
    return EngLockSurface(hsurf);
  return (struct _SURFOBJ *)v2;
}
