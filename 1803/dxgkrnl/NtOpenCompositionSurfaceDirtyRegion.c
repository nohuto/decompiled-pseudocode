/*
 * XREFs of NtOpenCompositionSurfaceDirtyRegion @ 0x1C000D000
 * Callers:
 *     <none>
 * Callees:
 *     ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C000A010 (-FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C000A3D8 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000A6A0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000D3F4 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011DB0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0012034 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceDirtyRegion(void *a1, unsigned __int64 *a2, __int128 *a3, HRGN *a4)
{
  int Buffer; // ebx
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  CCompositionSurface *v10; // [rsp+28h] [rbp-80h] BYREF
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-70h]
  struct CCompositionBuffer *v13; // [rsp+40h] [rbp-68h] BYREF
  struct CBufferRealization *v14; // [rsp+48h] [rbp-60h] BYREF
  _OWORD v15[2]; // [rsp+50h] [rbp-58h] BYREF
  __int128 v16; // [rsp+70h] [rbp-38h]
  __int128 v17; // [rsp+80h] [rbp-28h]
  HRGN v18; // [rsp+B8h] [rbp+10h] BYREF
  HRGN *v19; // [rsp+C8h] [rbp+20h]

  v19 = a4;
  Buffer = 0;
  Object = 0LL;
  v7 = 0LL;
  v12 = 0LL;
  v18 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v12 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    v16 = *a3;
    v17 = a3[1];
    v15[0] = v16;
    v15[1] = v17;
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    DXGGLOBAL::GetGlobal();
    if ( (unsigned int)_guard_dispatch_icall_fptr() )
    {
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 1u, v8, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v10 = 0LL;
        Buffer = CompositionSurfaceObject::LockForRead(Object, &v10);
        if ( Buffer >= 0 )
        {
          Buffer = CCompositionSurface::FindBuffer(v10, v7, &v13);
          if ( Buffer >= 0 )
          {
            Buffer = CCompositionBuffer::FindRealization(v13, (const struct CSM_REALIZATION_INFO *)v15, &v14);
            if ( Buffer >= 0 )
              Buffer = CBufferRealization::OpenLifetimeDirtyRegion(v14, &v18);
          }
          CCompositionSurface::UnlockAndRelease(v10);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      Buffer = -1073741790;
    }
  }
  if ( a4 )
  {
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v18;
  }
  else
  {
    Buffer = -1073741811;
  }
  if ( Buffer < 0 && v18 )
  {
    DXGGLOBAL::GetGlobal();
    _guard_dispatch_icall_fptr();
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}
