/*
 * XREFs of NtNotifyPresentToCompositionSurface @ 0x1C0151AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0021950 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00252F4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z @ 0x1C0038EAC (-CheckBinding@CCompositionSurface@@QEBA_N_KPEAW4CompositionBufferType@@PEAPEAUHWND__@@PEA_N@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0038F40 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?PreNotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C015272C (-PreNotifyPendingFlipPresent@CCompositionSurface@@QEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 */

__int64 __fastcall NtNotifyPresentToCompositionSurface(CInputSink *a1, unsigned __int64 a2)
{
  int v4; // edi
  __int64 v5; // r8
  __int64 v6; // rsi
  _DWORD *v7; // rdx
  _OWORD *v8; // rcx
  _OWORD *v9; // rdx
  __int64 v10; // rax
  _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v11; // rcx
  _OWORD *v12; // rax
  __int64 *v13; // rsi
  CCompositionSurface *v14; // r14
  bool v16; // [rsp+30h] [rbp-8B8h] BYREF
  CInputSink *v17; // [rsp+38h] [rbp-8B0h] BYREF
  int v18; // [rsp+40h] [rbp-8A8h]
  int v19; // [rsp+44h] [rbp-8A4h] BYREF
  PVOID Object; // [rsp+48h] [rbp-8A0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-898h]
  HWND v22; // [rsp+58h] [rbp-890h] BYREF
  _BYTE v23[1072]; // [rsp+60h] [rbp-888h] BYREF
  _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN v24; // [rsp+490h] [rbp-458h] BYREF

  v17 = a1;
  v4 = 0;
  memset(&v24, 0, sizeof(v24));
  v24.FenceValue = 0LL;
  Object = 0LL;
  v6 = 0LL;
  v21 = 0LL;
  if ( a2 )
  {
    v7 = (_DWORD *)a2;
    if ( a2 + 4 < a2 || a2 + 4 > MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    if ( *v7 != 2 )
      v4 = -1073741811;
    v18 = v4;
    v8 = (_OWORD *)(a2 + 16);
    if ( a2 + 1080 < a2 + 16 || a2 + 1080 > MmUserProbeAddress )
      v8 = (_OWORD *)MmUserProbeAddress;
    v9 = v23;
    v5 = 8LL;
    v10 = 8LL;
    do
    {
      *v9 = *v8;
      v9[1] = v8[1];
      v9[2] = v8[2];
      v9[3] = v8[3];
      v9[4] = v8[4];
      v9[5] = v8[5];
      v9[6] = v8[6];
      v9 += 8;
      *(v9 - 1) = v8[7];
      v8 += 8;
      --v10;
    }
    while ( v10 );
    *v9 = *v8;
    v9[1] = v8[1];
    *((_QWORD *)v9 + 4) = *((_QWORD *)v8 + 4);
    v11 = &v24;
    v12 = v23;
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
      --v5;
    }
    while ( v5 );
    *(_OWORD *)&v11->FenceValue = *v12;
    *(_OWORD *)&v11->dxgContext = v12[1];
    v11->PresentLimitSemaphoreId = *((_QWORD *)v12 + 4);
    v13 = (__int64 *)(a2 + 8);
    if ( a2 + 16 < a2 + 8 || a2 + 16 > MmUserProbeAddress )
      v13 = (__int64 *)MmUserProbeAddress;
    v6 = *v13;
    v21 = v6;
  }
  if ( v4 >= 0 )
  {
    v4 = CompositionSurfaceObject::ResolveHandle(a1, 2LL, v5, (struct CompositionSurfaceObject **)&Object);
    if ( v4 >= 0 )
    {
      v17 = 0LL;
      v4 = CompositionSurfaceObject::LockForWrite((char *)Object, &v17);
      if ( v4 >= 0 )
      {
        v16 = 0;
        v14 = v17;
        if ( !CCompositionSurface::CheckBinding(v17, v6, (enum CompositionBufferType *)&v19, &v22, &v16)
          || v19 != 2
          || !v16 )
        {
          v4 = -1073741811;
        }
        if ( v4 >= 0 )
          v4 = CCompositionSurface::PreNotifyPendingFlipPresent(v14, v6, &v24);
        CInputSink::UnlockAndRelease(v14);
      }
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v4;
}
