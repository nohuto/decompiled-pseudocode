/*
 * XREFs of NtQueryCompositionSurfaceStatistics @ 0x1C000D210
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000A6A0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000D3F4 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0012034 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C00121B4 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceStatistics(void *a1, unsigned __int64 a2)
{
  __int64 v4; // r8
  int Stats; // ebx
  _OWORD v7[4]; // [rsp+28h] [rbp-40h] BYREF
  CCompositionSurface *v8; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  Object = 0LL;
  memset(v7, 0, 0x38uLL);
  LODWORD(v7[0]) = 0;
  KeEnterCriticalRegion();
  Stats = CompositionSurfaceObject::ResolveHandle(a1, 1u, v4, (struct CompositionSurfaceObject **)&Object);
  if ( Stats >= 0 )
  {
    v8 = 0LL;
    Stats = CompositionSurfaceObject::LockForRead(Object, &v8);
    if ( Stats >= 0 )
    {
      Stats = CCompositionSurface::QueryStats(v8, (struct CSM_BUFFER_STATISTICS *)v7);
      CCompositionSurface::UnlockAndRelease(v8);
    }
    ObfDereferenceObject(Object);
  }
  if ( a2 )
  {
    if ( a2 + 56 < a2 || a2 + 56 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a2 = v7[0];
    *(_OWORD *)(a2 + 16) = v7[1];
    *(_OWORD *)(a2 + 32) = v7[2];
    *(_QWORD *)(a2 + 48) = *(_QWORD *)&v7[3];
  }
  else
  {
    Stats = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Stats;
}
