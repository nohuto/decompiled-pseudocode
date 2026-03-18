/*
 * XREFs of NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C000CC00
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000A6A0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000D3F4 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0012034 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C0012224 (-OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceSwapChainHandleInfo(void *a1, unsigned __int64 *a2, _OWORD *a3)
{
  unsigned int v6; // edi
  int v7; // ebx
  unsigned __int64 v8; // r15
  bool v9; // r12
  __int64 v10; // r8
  HANDLE *v11; // rax
  __int64 v12; // rcx
  PVOID Object; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v15; // [rsp+30h] [rbp-148h]
  HANDLE v16[39]; // [rsp+40h] [rbp-138h] BYREF
  CCompositionSurface *v17; // [rsp+198h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0;
  Object = 0LL;
  v8 = 0LL;
  v15 = 0LL;
  memset(v16, 0, 0x100uLL);
  v9 = 0;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v8 = *a2;
    v15 = *a2;
  }
  else
  {
    v7 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v7 >= 0 )
  {
    DXGGLOBAL::GetGlobal();
    if ( (unsigned int)_guard_dispatch_icall_fptr() )
    {
      v7 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v10, (struct CompositionSurfaceObject **)&Object);
      if ( v7 >= 0 )
      {
        v17 = 0LL;
        v7 = CompositionSurfaceObject::LockForRead(Object, &v17);
        if ( v7 >= 0 )
        {
          v7 = CCompositionSurface::OpenSwapChainHandles(v17, v8, (struct CSM_SWAPCHAIN_HANDLE_INFO *)v16);
          v9 = v7 >= 0;
          CCompositionSurface::UnlockAndRelease(v17);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v7 = -1073741790;
    }
  }
  if ( v7 < 0 )
    goto LABEL_27;
  if ( a3 )
  {
    if ( a3 + 16 < a3 || (unsigned __int64)(a3 + 16) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v11 = v16;
    v12 = 2LL;
    do
    {
      *a3 = *(_OWORD *)v11;
      a3[1] = *((_OWORD *)v11 + 1);
      a3[2] = *((_OWORD *)v11 + 2);
      a3[3] = *((_OWORD *)v11 + 3);
      a3[4] = *((_OWORD *)v11 + 4);
      a3[5] = *((_OWORD *)v11 + 5);
      a3[6] = *((_OWORD *)v11 + 6);
      a3 += 8;
      *(a3 - 1) = *((_OWORD *)v11 + 7);
      v11 += 16;
      --v12;
    }
    while ( v12 );
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
  {
LABEL_27:
    if ( v9 && LODWORD(v16[0]) )
    {
      do
        ObCloseHandle(v16[++v6], 1);
      while ( v6 < LODWORD(v16[0]) );
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v7;
}
