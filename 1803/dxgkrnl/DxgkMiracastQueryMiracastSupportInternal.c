/*
 * XREFs of DxgkMiracastQueryMiracastSupportInternal @ 0x1C00DCF54
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C003EE7C (DxgkMiracastStartMiracastSession.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1C00DCED0 (DxgkNetDispQueryMiracastDisplayDeviceSupport.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DpiFdoHandleStopDevice @ 0x1C01F5E10 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C01FEFE0 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C000B754 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00DCDD4 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C00DD098 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C00DD19C (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiMiracastGetForcedMode @ 0x1C00DD1CC (DpiMiracastGetForcedMode.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastSupportInternal(__int64 a1)
{
  char v2; // di
  int ForcedMode; // eax
  int v4; // r14d
  __int64 RenderAdapterForSession; // r15
  int MiracastSupportForFDO; // ebx
  __int64 v7; // rbx
  PVOID v9; // r14
  PVOID Tag; // [rsp+28h] [rbp-18h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h]

  v2 = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v2 = 1;
  }
  v11 = 0LL;
  ForcedMode = DpiMiracastGetForcedMode();
  v4 = ForcedMode;
  if ( ForcedMode == 3 )
    goto LABEL_21;
  if ( ForcedMode == 1 )
    goto LABEL_8;
  RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
  if ( !RenderAdapterForSession )
    goto LABEL_8;
  MiracastSupportForFDO = DpiMiracastQueryMiracastSupportForFDO((struct _COMMON_PNP_CONTEXT *)RenderAdapterForSession);
  if ( MiracastSupportForFDO < 0 )
    goto LABEL_13;
  v7 = *(_QWORD *)(RenderAdapterForSession + 2536);
  v11 = v7;
  if ( v4 != 2 )
  {
LABEL_8:
    Tag = 0LL;
    if ( (int)DpiMiracastFindDisplayAdapterFdoIhv((__int64 *)&Tag) >= 0 )
    {
      v9 = Tag;
      if ( Tag )
      {
        DpiMiracastQueryMiracastSupportForFDO((struct _COMMON_PNP_CONTEXT *)Tag);
        if ( *((_BYTE *)v9 + 483) )
          DpiEnableD3Requests(*((_QWORD *)v9 + 3));
        ExReleaseResourceLite(*((PERESOURCE *)v9 + 21));
        KeLeaveCriticalRegion();
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)v9 + 2, v9, 0x20u);
      }
    }
    xmmword_1C007AC00 = 0uLL;
    dword_1C007AC10 = 0;
LABEL_21:
    MiracastSupportForFDO = -1073741637;
    goto LABEL_13;
  }
  DWORD1(xmmword_1C007AC00) = dword_1C007AB5C;
  LOBYTE(xmmword_1C007AC00) = 0;
  BYTE8(xmmword_1C007AC00) = 0;
  *(_QWORD *)((char *)&xmmword_1C007AC00 + 12) = v7;
  if ( a1 )
  {
    *(_OWORD *)a1 = xmmword_1C007AC00;
    *(_DWORD *)(a1 + 16) = dword_1C007AC10;
  }
  MiracastSupportForFDO = 0;
LABEL_13:
  if ( v2 )
  {
    _InterlockedExchange64(&qword_1C007A788, 0LL);
    KeReleaseMutex((PRKMUTEX)Mutex, 0);
  }
  return (unsigned int)MiracastSupportForFDO;
}
