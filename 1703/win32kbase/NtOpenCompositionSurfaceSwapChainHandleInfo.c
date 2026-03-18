/*
 * XREFs of NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C000E230
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C0010660 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010C04 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0010D50 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C0011898 (-OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceSwapChainHandleInfo(void *a1, unsigned __int64 *a2, _OWORD *a3)
{
  unsigned int v6; // edi
  int v7; // ebx
  unsigned __int64 v8; // r15
  __int64 v9; // rdx
  ULONG64 v10; // rcx
  __int64 v11; // r8
  bool v12; // r12
  char v13; // r8
  HANDLE *v14; // rax
  __int64 v15; // rcx
  PVOID Object; // [rsp+28h] [rbp-150h] BYREF
  unsigned __int64 v18; // [rsp+30h] [rbp-148h]
  HANDLE v19[39]; // [rsp+40h] [rbp-138h] BYREF
  CInputSink *v20; // [rsp+198h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0;
  Object = 0LL;
  v8 = 0LL;
  v18 = 0LL;
  memset(v19, 0, 0x100uLL);
  v12 = 0;
  if ( a2 )
  {
    v10 = (ULONG64)(a2 + 1);
    if ( a2 + 1 < a2 || v10 > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v8 = *a2;
    v18 = *a2;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    if ( (unsigned int)UserIsCurrentProcessDwm(v10, v9, v11) )
    {
      v7 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v13, (struct CompositionSurfaceObject **)&Object);
      if ( v7 >= 0 )
      {
        v20 = 0LL;
        v7 = CompositionInputObject::LockForRead(Object, &v20);
        if ( v7 >= 0 )
        {
          v7 = CCompositionSurface::OpenSwapChainHandles(v20, v8, (struct CSM_SWAPCHAIN_HANDLE_INFO *)v19);
          v12 = v7 >= 0;
          CInputSink::UnlockAndRelease(v20);
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
    v14 = v19;
    v15 = 2LL;
    do
    {
      *a3 = *(_OWORD *)v14;
      a3[1] = *((_OWORD *)v14 + 1);
      a3[2] = *((_OWORD *)v14 + 2);
      a3[3] = *((_OWORD *)v14 + 3);
      a3[4] = *((_OWORD *)v14 + 4);
      a3[5] = *((_OWORD *)v14 + 5);
      a3[6] = *((_OWORD *)v14 + 6);
      a3 += 8;
      *(a3 - 1) = *((_OWORD *)v14 + 7);
      v14 += 16;
      --v15;
    }
    while ( v15 );
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
  {
LABEL_27:
    if ( v12 && LODWORD(v19[0]) )
    {
      do
        ObCloseHandle(v19[++v6], 1);
      while ( v6 < LODWORD(v19[0]) );
    }
  }
  return (unsigned int)v7;
}
