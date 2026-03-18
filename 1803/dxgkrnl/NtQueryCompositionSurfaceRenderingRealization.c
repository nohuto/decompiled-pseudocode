/*
 * XREFs of NtQueryCompositionSurfaceRenderingRealization @ 0x1C000CE40
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000A6A0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000D3F4 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0012034 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0012284 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceRenderingRealization(void *a1, _OWORD *a2)
{
  __int64 v4; // r8
  int v5; // ebx
  _OWORD *v6; // rdi
  CCompositionSurface *v8; // [rsp+28h] [rbp-100h] BYREF
  PVOID Object; // [rsp+30h] [rbp-F8h] BYREF
  _OWORD v10[13]; // [rsp+40h] [rbp-E8h] BYREF

  Object = 0LL;
  memset(v10, 0, 0xC8uLL);
  KeEnterCriticalRegion();
  DXGGLOBAL::GetGlobal();
  if ( (unsigned int)_guard_dispatch_icall_fptr() )
  {
    v5 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v4, (struct CompositionSurfaceObject **)&Object);
    if ( v5 >= 0 )
    {
      v8 = 0LL;
      v5 = CompositionSurfaceObject::LockForRead(Object, &v8);
      if ( v5 >= 0 )
      {
        CCompositionSurface::GetRenderingRealizationInfo(v8, (struct CSM_SURFACE_UPDATE *)v10);
        CCompositionSurface::UnlockAndRelease(v8);
      }
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    v5 = -1073741790;
  }
  if ( a2 )
  {
    if ( (_OWORD *)((char *)a2 + 200) < a2 || (unsigned __int64)a2 + 200 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v10[0];
    a2[1] = v10[1];
    a2[2] = v10[2];
    a2[3] = v10[3];
    a2[4] = v10[4];
    a2[5] = v10[5];
    a2[6] = v10[6];
    v6 = a2 + 8;
    *(v6 - 1) = v10[7];
    *v6 = v10[8];
    v6[1] = v10[9];
    v6[2] = v10[10];
    v6[3] = v10[11];
    *((_QWORD *)v6 + 8) = *(_QWORD *)&v10[12];
  }
  else
  {
    v5 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
