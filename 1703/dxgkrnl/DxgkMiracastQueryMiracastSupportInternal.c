/*
 * XREFs of DxgkMiracastQueryMiracastSupportInternal @ 0x1C008C2A0
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C004025C (DxgkMiracastStartMiracastSession.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1C008C260 (DxgkNetDispQueryMiracastDisplayDeviceSupport.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 *     DpiFdoHandleStopDevice @ 0x1C01C4520 (DpiFdoHandleStopDevice.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C01C7500 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C0001230 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C008C3D4 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C008C4E0 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C008CBDC (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiMiracastGetForcedMode @ 0x1C008CC48 (DpiMiracastGetForcedMode.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastSupportInternal(__int64 a1)
{
  char v1; // di
  __int64 v2; // rbx
  char v3; // r14
  char v4; // r12
  int ForcedMode; // eax
  int v6; // r15d
  __int64 RenderAdapterForSession; // r13
  int v8; // r14d
  char v9; // r15
  __int64 v11; // r13
  int v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  char v16; // [rsp+98h] [rbp+50h]
  int v17; // [rsp+A8h] [rbp+60h] BYREF

  v1 = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v1 = 1;
  }
  v2 = 0LL;
  v16 = 0;
  v14 = 0LL;
  v3 = 0;
  v4 = 0;
  ForcedMode = DpiMiracastGetForcedMode();
  v6 = ForcedMode;
  if ( ForcedMode == 3 )
    goto LABEL_15;
  if ( ForcedMode != 1 )
  {
    RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
    if ( RenderAdapterForSession )
    {
      v17 = 0;
      v8 = DpiMiracastQueryMiracastSupportForFDO(RenderAdapterForSession, &v17);
      if ( v8 < 0 )
        goto LABEL_16;
      v4 = BYTE1(v17);
      if ( (_BYTE)v17 && (v2 = *(_QWORD *)(RenderAdapterForSession + 2536), v14 = v2, v16 = 1, BYTE1(v17)) || v6 == 2 )
      {
        v3 = 1;
        v9 = 0;
        goto LABEL_12;
      }
      v3 = 0;
      v4 = 0;
    }
  }
  v13 = 0LL;
  v9 = 0;
  if ( (int)DpiMiracastFindDisplayAdapterFdoIhv(&v13) >= 0 )
  {
    v11 = v13;
    v9 = 0;
    if ( v13 )
    {
      v12 = 0;
      if ( (int)DpiMiracastQueryMiracastSupportForFDO(v13, &v12) >= 0 )
      {
        v4 = HIBYTE(v12);
        v3 = BYTE2(v12);
        if ( BYTE2(v12) )
        {
          v2 = *(_QWORD *)(v11 + 2536);
          v9 = 1;
          v14 = v2;
        }
      }
      if ( *(_BYTE *)(v11 + 483) )
        DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
      KeLeaveCriticalRegion();
    }
  }
LABEL_12:
  if ( byte_1C006F9D7 )
  {
    if ( v3 )
      goto LABEL_30;
    if ( !v16 )
      goto LABEL_14;
    v3 = 1;
    v4 = 0;
    v9 = 0;
  }
  if ( !v3 )
  {
LABEL_14:
    xmmword_1C006FE28 = 0uLL;
    dword_1C006FE38 = 0;
LABEL_15:
    v8 = -1073741637;
    goto LABEL_16;
  }
LABEL_30:
  LOBYTE(xmmword_1C006FE28) = v4;
  DWORD1(xmmword_1C006FE28) = dword_1C006FD84;
  BYTE8(xmmword_1C006FE28) = v9;
  *(_QWORD *)((char *)&xmmword_1C006FE28 + 12) = v2;
  if ( a1 )
  {
    *(_OWORD *)a1 = xmmword_1C006FE28;
    *(_DWORD *)(a1 + 16) = dword_1C006FE38;
  }
  v8 = 0;
LABEL_16:
  if ( v1 )
  {
    _InterlockedExchange64(&qword_1C006FA08, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return (unsigned int)v8;
}
