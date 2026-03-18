/*
 * XREFs of NtUnBindCompositionSurface @ 0x1C000D5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000A6A0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000D38C (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     DxgkGetSessionTokenManager @ 0x1C000DF40 (DxgkGetSessionTokenManager.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0012034 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0012168 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall NtUnBindCompositionSurface(void *a1, unsigned int a2)
{
  __int64 v4; // r8
  int SessionTokenManager; // edi
  __int64 v6; // rbx
  CCompositionSurface *v7; // rbx
  __int64 v8; // rdx
  struct DXGGLOBAL *Global; // rax
  PVOID Object; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v12; // [rsp+28h] [rbp-D8h] BYREF
  CCompositionSurface *v13; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[130]; // [rsp+40h] [rbp-C0h] BYREF

  Object = 0LL;
  KeEnterCriticalRegion();
  SessionTokenManager = CompositionSurfaceObject::ResolveHandle(a1, 2u, v4, (struct CompositionSurfaceObject **)&Object);
  if ( SessionTokenManager >= 0 )
  {
    v13 = 0LL;
    v6 = 0LL;
    v12 = 0LL;
    memset(v14, 0, sizeof(v14));
    SessionTokenManager = CompositionSurfaceObject::LockForWrite((char *)Object, &v13);
    if ( SessionTokenManager >= 0 )
    {
      SessionTokenManager = DxgkGetSessionTokenManager(&v12);
      if ( SessionTokenManager < 0 )
        goto LABEL_7;
      v7 = v13;
      CCompositionSurface::QueryBinding(v13, 0LL, (struct CSM_BUFFER_INFO *)v14);
      LOBYTE(v8) = a2 != 0;
      SessionTokenManager = (*(__int64 (__fastcall **)(__int64, __int64))(*((_QWORD *)v7 + 1) + 24LL))(
                              (__int64)v7 + 8,
                              v8);
      CCompositionSurface::UnlockAndRelease(v7);
      if ( SessionTokenManager < 0 )
        goto LABEL_7;
      if ( v14[17] && LODWORD(v14[0]) == 2 )
      {
        Global = DXGGLOBAL::GetGlobal();
        (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)Global + 219) + 208LL))(v14[17], a2);
      }
      if ( a2 )
      {
LABEL_7:
        v6 = v12;
      }
      else
      {
        v6 = v12;
        (*(void (__fastcall **)(__int64, PVOID))(*(_QWORD *)v12 + 64LL))(v12, Object);
      }
    }
    ObfDereferenceObject(Object);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)SessionTokenManager;
}
