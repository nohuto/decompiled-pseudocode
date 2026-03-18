/*
 * XREFs of CleanupHLSURF @ 0x1C0126590
 * Callers:
 *     <none>
 * Callees:
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x1C0092358 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 */

__int64 __fastcall CleanupHLSURF(int a1)
{
  __int64 v2; // rdx
  HLSURF i; // rcx
  HLSURF *Objt; // rax
  HLSURF v6; // rbx

  GreAcquireHmgrSemaphore();
  for ( i = 0LL; ; i = v6 )
  {
    LOBYTE(v2) = 18;
    Objt = (HLSURF *)HmgSafeNextObjt(i, v2);
    if ( !Objt )
      break;
    v6 = *Objt;
    if ( !*Objt )
      break;
    bhLSurfDestroyLogicalSurfaceObject(Objt, 1, a1);
  }
  return GreReleaseHmgrSemaphore();
}
