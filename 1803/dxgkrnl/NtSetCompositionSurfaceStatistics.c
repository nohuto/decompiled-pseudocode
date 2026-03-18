/*
 * XREFs of NtSetCompositionSurfaceStatistics @ 0x1C004C440
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000A6A0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000D38C (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0012034 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C004C87C (-SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 */

__int64 __fastcall NtSetCompositionSurfaceStatistics(void *a1, unsigned __int64 *a2, _OWORD *a3)
{
  int v4; // ebx
  unsigned __int64 v5; // rsi
  __int128 v6; // xmm1
  __int64 v7; // rcx
  __int64 v8; // r8
  CCompositionSurface *v9; // rdi
  _OWORD v11[4]; // [rsp+28h] [rbp-40h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  CCompositionSurface *v13; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0LL;
  if ( a3 && a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v5 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    v6 = a3[1];
    v11[0] = *a3;
    v11[1] = v6;
  }
  else
  {
    v4 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v4 >= 0 )
  {
    DXGGLOBAL::GetGlobal(v7);
    if ( (unsigned int)_guard_dispatch_icall_fptr() )
    {
      Object = 0LL;
      v4 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v8, (struct CompositionSurfaceObject **)&Object);
      if ( v4 >= 0 )
      {
        v13 = 0LL;
        v4 = CompositionSurfaceObject::LockForWrite((char *)Object, &v13);
        if ( v4 >= 0 )
        {
          v9 = v13;
          if ( *((_BYTE *)v13 + 96) )
            CCompositionSurface::SetSurfaceStats(v13, v5, (const struct DXGI_FRAME_STATISTICS *)v11);
          else
            v4 = -1073741823;
          CCompositionSurface::UnlockAndRelease(v9);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v4 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
