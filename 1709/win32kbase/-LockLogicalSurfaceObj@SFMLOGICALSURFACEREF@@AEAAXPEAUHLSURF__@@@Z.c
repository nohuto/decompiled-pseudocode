/*
 * XREFs of ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C008FA40
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C006D210 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     HmgLockEx @ 0x1C004D1C0 (HmgLockEx.c)
 */

void __fastcall SFMLOGICALSURFACEREF::LockLogicalSurfaceObj(SFMLOGICALSURFACEREF *this, struct HOBJ__ *a2)
{
  if ( a2 )
    *(_QWORD *)this = HmgLockEx(a2, 18, 0);
}
