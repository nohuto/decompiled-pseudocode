/*
 * XREFs of NtNotifyPresentToCompositionSurface @ 0x1C004BE80
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000A6A0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000D38C (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0012034 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x1C00243B4 (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z.c)
 *     ?PreNotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C004C7E4 (-PreNotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 */

__int64 __fastcall NtNotifyPresentToCompositionSurface(CCompositionSurface *a1, unsigned __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdi
  _DWORD *v6; // rdx
  _OWORD *v7; // rcx
  _OWORD *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v11; // rcx
  _OWORD *v12; // rax
  __int64 *v13; // rdi
  __int64 v14; // r8
  PVOID v15; // r14
  CCompositionSurface *v16; // rsi
  bool v18; // [rsp+30h] [rbp-8B8h] BYREF
  PVOID Object; // [rsp+38h] [rbp-8B0h] BYREF
  CCompositionSurface *v20; // [rsp+40h] [rbp-8A8h] BYREF
  int v21; // [rsp+48h] [rbp-8A0h]
  __int64 v22; // [rsp+50h] [rbp-898h]
  HWND v23; // [rsp+58h] [rbp-890h] BYREF
  _BYTE v24[1072]; // [rsp+60h] [rbp-888h] BYREF
  _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN v25; // [rsp+490h] [rbp-458h] BYREF

  v20 = a1;
  v4 = 0;
  memset(&v25, 0, sizeof(v25));
  v25.FenceValue = 0LL;
  Object = 0LL;
  v5 = 0LL;
  v22 = 0LL;
  if ( a2 )
  {
    v6 = (_DWORD *)a2;
    if ( a2 + 4 < a2 || a2 + 4 > MmUserProbeAddress )
      v6 = (_DWORD *)MmUserProbeAddress;
    if ( *v6 != 2 )
      v4 = -1073741811;
    v21 = v4;
    v7 = (_OWORD *)(a2 + 16);
    if ( a2 + 1080 < a2 + 16 || a2 + 1080 > MmUserProbeAddress )
      v7 = (_OWORD *)MmUserProbeAddress;
    v8 = v24;
    v9 = 8LL;
    v10 = 8LL;
    do
    {
      *v8 = *v7;
      v8[1] = v7[1];
      v8[2] = v7[2];
      v8[3] = v7[3];
      v8[4] = v7[4];
      v8[5] = v7[5];
      v8[6] = v7[6];
      v8 += 8;
      *(v8 - 1) = v7[7];
      v7 += 8;
      --v10;
    }
    while ( v10 );
    *v8 = *v7;
    v8[1] = v7[1];
    *((_QWORD *)v8 + 4) = *((_QWORD *)v7 + 4);
    v11 = &v25;
    v12 = v24;
    do
    {
      *(_OWORD *)&v11->FenceValue = *v12;
      *(_OWORD *)&v11->dxgContext = v12[1];
      *(_OWORD *)&v11->PresentLimitSemaphoreId = v12[2];
      *(_OWORD *)&v11->hCompSurf = v12[3];
      *(_OWORD *)&v11->confirmationCookie = v12[4];
      *(_OWORD *)&v11->RemainingTokens = v12[5];
      *(_OWORD *)&v11->ScrollRect.bottom = v12[6];
      v11 = (_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)((char *)v11 + 128);
      v11[-1].DirtyRegions.Rects[15] = (RECT)v12[7];
      v12 += 8;
      --v9;
    }
    while ( v9 );
    *(_OWORD *)&v11->FenceValue = *v12;
    *(_OWORD *)&v11->dxgContext = v12[1];
    v11->PresentLimitSemaphoreId = *((_QWORD *)v12 + 4);
    v13 = (__int64 *)(a2 + 8);
    if ( a2 + 16 < a2 + 8 || a2 + 16 > MmUserProbeAddress )
      v13 = (__int64 *)MmUserProbeAddress;
    v5 = *v13;
    v22 = v5;
  }
  KeEnterCriticalRegion();
  if ( v4 >= 0 )
  {
    v4 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v14, (struct CompositionSurfaceObject **)&Object);
    v15 = Object;
    if ( v4 >= 0 )
    {
      v20 = 0LL;
      v4 = CompositionSurfaceObject::LockForWrite((char *)Object, &v20);
      if ( v4 >= 0 )
      {
        v18 = 0;
        v16 = v20;
        if ( !CCompositionSurface::CheckBinding(v20, v5, (enum CompositionBufferType *)&Object, &v23, &v18)
          || (_DWORD)Object != 2
          || !v18 )
        {
          v4 = -1073741811;
        }
        if ( v4 >= 0 )
          v4 = CCompositionSurface::PreNotifyPendingFlipPresent(v16, v5, &v25);
        CCompositionSurface::UnlockAndRelease(v16);
      }
      ObfDereferenceObject(v15);
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
