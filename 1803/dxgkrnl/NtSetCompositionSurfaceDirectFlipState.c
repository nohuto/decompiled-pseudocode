/*
 * XREFs of NtSetCompositionSurfaceDirectFlipState @ 0x1C00171E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000A6A0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000D38C (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011DB0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0012034 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceDirectFlipState(void *a1, __int64 *a2, int a3)
{
  int Buffer; // ebx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r8
  struct CCompositionBuffer *v9; // [rsp+28h] [rbp-30h] BYREF
  CCompositionSurface *v10; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+70h] [rbp+18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v11 = a3;
  Buffer = 0;
  v5 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v5 = *a2;
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    DXGGLOBAL::GetGlobal(v6);
    if ( (unsigned int)_guard_dispatch_icall_fptr() )
    {
      Object = 0LL;
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 2u, v7, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v10 = 0LL;
        Buffer = CompositionSurfaceObject::LockForWrite((char *)Object, &v10);
        if ( Buffer >= 0 )
        {
          Buffer = CCompositionSurface::FindBuffer(v10, v5, &v9);
          if ( Buffer >= 0 )
            _guard_dispatch_icall_fptr();
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
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}
