/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0089058
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C00F22E0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  if ( (int)IsSFMLOGICALSURFACEREF_vDestructorSupported() >= 0 )
    SFMLOGICALSURFACEREF_vDestructorWrap(this);
}
