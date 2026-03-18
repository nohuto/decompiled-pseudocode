/*
 * XREFs of NtSetCompositionSurfaceAnalogExclusive @ 0x1C004C350
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000A6A0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000D38C (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     DxgkGetSessionTokenManager @ 0x1C000DF40 (DxgkGetSessionTokenManager.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0012034 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceAnalogExclusive(void *a1, int a2)
{
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // r8
  int v7; // edi
  CCompositionSurface *v8; // rcx
  CCompositionSurface *v9; // rbx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF
  CCompositionSurface *v12; // [rsp+48h] [rbp+20h] BYREF

  Object = 0LL;
  KeEnterCriticalRegion();
  Global = DXGGLOBAL::GetGlobal(v4);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Global + 219) + 224LL))() )
  {
    v7 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v6, (struct CompositionSurfaceObject **)&Object);
    if ( v7 >= 0 )
    {
      v12 = 0LL;
      v7 = CompositionSurfaceObject::LockForWrite((char *)Object, &v12);
      if ( v7 >= 0 )
      {
        v8 = v12;
        *((_BYTE *)v12 + 96) = a2 != 0;
        CCompositionSurface::UnlockAndRelease(v8);
        v12 = 0LL;
        if ( !a2 && (int)DxgkGetSessionTokenManager(&v12) >= 0 )
        {
          v9 = v12;
          (*(void (__fastcall **)(CCompositionSurface *))(*(_QWORD *)v12 + 104LL))(v12);
          (*(void (__fastcall **)(CCompositionSurface *))(*(_QWORD *)v9 + 8LL))(v9);
        }
      }
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    v7 = -1073741790;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
