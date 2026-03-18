/*
 * XREFs of ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0068E00
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0049DD0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     HmgLockEx @ 0x1C002B600 (HmgLockEx.c)
 */

void __fastcall SFMLOGICALSURFACEREF::LockLogicalSurfaceObj(SFMLOGICALSURFACEREF *this, HLSURF a2)
{
  if ( a2 )
    *(_QWORD *)this = HmgLockEx((unsigned int)a2, 18, 0);
}
