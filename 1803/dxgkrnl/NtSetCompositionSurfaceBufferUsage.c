/*
 * XREFs of NtSetCompositionSurfaceBufferUsage @ 0x1C000C2B0
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

__int64 __fastcall NtSetCompositionSurfaceBufferUsage(void *a1, unsigned __int64 *a2, unsigned int a3, int a4)
{
  int v7; // ebx
  unsigned __int64 v8; // rdi
  __int64 v9; // r8
  struct CCompositionBuffer *v10; // rax
  PVOID Object; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-40h]
  struct CCompositionBuffer *v14; // [rsp+30h] [rbp-38h] BYREF
  CCompositionSurface *v15; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+18h]
  int v17; // [rsp+88h] [rbp+20h]

  v17 = a4;
  v16 = a3;
  v7 = 0;
  v8 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v8 = *a2;
    v13 = *a2;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 && a3 > 2 )
    v7 = -1073741811;
  KeEnterCriticalRegion();
  if ( v7 >= 0 )
  {
    DXGGLOBAL::GetGlobal();
    if ( (unsigned int)_guard_dispatch_icall_fptr() )
    {
      Object = 0LL;
      v7 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v9, (struct CompositionSurfaceObject **)&Object);
      if ( v7 >= 0 )
      {
        v15 = 0LL;
        v7 = CompositionSurfaceObject::LockForWrite(Object, &v15);
        if ( v7 >= 0 )
        {
          if ( (int)CCompositionSurface::FindBuffer(v15, v8, &v14) >= 0 )
          {
            v10 = v14;
            *((_DWORD *)v14 + 43) = a3;
            *((_DWORD *)v10 + 44) = a4;
          }
          CCompositionSurface::UnlockAndRelease(v15);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v7 = -1073741790;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
