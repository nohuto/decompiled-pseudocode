/*
 * XREFs of NtUnBindCompositionSurface @ 0x1C008A230
 * Callers:
 *     <none>
 * Callees:
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0021950 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00252F4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0038F40 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0038FEC (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0039018 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?AddUnBindTokenInternal@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@@Z @ 0x1C0153684 (-AddUnBindTokenInternal@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@@Z.c)
 */

__int64 __fastcall NtUnBindCompositionSurface(void *a1, unsigned int a2, __int64 a3)
{
  int v4; // edi
  CTokenManager *v6; // rcx
  CInputSink *v7; // [rsp+20h] [rbp-438h] BYREF
  PVOID Object; // [rsp+28h] [rbp-430h] BYREF
  _QWORD v9[130]; // [rsp+30h] [rbp-428h] BYREF

  Object = 0LL;
  v4 = CompositionSurfaceObject::ResolveHandle(a1, 2LL, a3, (struct CompositionSurfaceObject **)&Object);
  if ( v4 >= 0 )
  {
    v7 = 0LL;
    memset(v9, 0, sizeof(v9));
    v4 = CompositionSurfaceObject::LockForWrite((char *)Object, &v7);
    if ( v4 >= 0 )
    {
      CCompositionSurface::QueryBinding(v7, 0LL, (struct CSM_BUFFER_INFO *)v9);
      v4 = CCompositionSurface::UnBind(v7, a2 != 0);
      CInputSink::UnlockAndRelease(v7);
      if ( v4 >= 0 )
      {
        if ( LODWORD(v9[0]) == 2 && v9[17] )
          UserRemoveWindowedSwapChain(v9[17], a2);
        if ( !a2 )
        {
          KeEnterCriticalRegion();
          if ( g_pTokenManager )
            CTokenManager::AddUnBindTokenInternal(v6, (struct CompositionSurfaceObject *)Object);
          KeLeaveCriticalRegion();
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
