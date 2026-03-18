/*
 * XREFs of DxgkMiracastQueryMiracastSupportInternal @ 0x1C00FB1B0
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C0030D64 (DxgkMiracastStartMiracastSession.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceSupport @ 0x1C00FB170 (DxgkNetDispQueryMiracastDisplayDeviceSupport.c)
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 *     DpiFdoHandleStopDevice @ 0x1C01DDF40 (DpiFdoHandleStopDevice.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C01E1628 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C000F1C8 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     DpiEnableD3Requests @ 0x1C000F210 (DpiEnableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C00FB2E8 (DpiMiracastQueryMiracastSupportForFDO.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C00FB408 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C00FBB2C (DpiMiracastFindRenderAdapterForSession.c)
 *     DpiMiracastGetForcedMode @ 0x1C00FBB98 (DpiMiracastGetForcedMode.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastSupportInternal(__int64 a1)
{
  char v1; // di
  __int64 v2; // rbx
  int ForcedMode; // eax
  int v4; // r14d
  __int64 RenderAdapterForSession; // r15
  int MiracastSupportForFDO; // ebx
  char v7; // r14
  PVOID v9; // r15
  PVOID Tag; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v1 = 1;
  }
  v2 = 0LL;
  v11 = 0LL;
  ForcedMode = DpiMiracastGetForcedMode();
  v4 = ForcedMode;
  if ( ForcedMode == 3 )
    goto LABEL_12;
  if ( ForcedMode == 1 )
    goto LABEL_8;
  RenderAdapterForSession = DpiMiracastFindRenderAdapterForSession();
  if ( !RenderAdapterForSession )
    goto LABEL_8;
  MiracastSupportForFDO = DpiMiracastQueryMiracastSupportForFDO((struct _COMMON_PNP_CONTEXT *)RenderAdapterForSession);
  if ( MiracastSupportForFDO < 0 )
    goto LABEL_13;
  v2 = *(_QWORD *)(RenderAdapterForSession + 2536);
  v11 = v2;
  if ( v4 == 2 )
  {
    v7 = 1;
  }
  else
  {
LABEL_8:
    Tag = 0LL;
    v7 = 0;
    if ( (int)DpiMiracastFindDisplayAdapterFdoIhv(&Tag) >= 0 )
    {
      v9 = Tag;
      v7 = 0;
      if ( Tag )
      {
        if ( (int)DpiMiracastQueryMiracastSupportForFDO((struct _COMMON_PNP_CONTEXT *)Tag) >= 0 )
          v7 = 0;
        if ( *((_BYTE *)v9 + 483) )
          DpiEnableD3Requests(*((_QWORD *)v9 + 3));
        ExReleaseResourceLite(*((PERESOURCE *)v9 + 21));
        KeLeaveCriticalRegion();
        IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)v9 + 2, v9, 0x20u);
      }
    }
  }
  if ( byte_1C0060857 )
  {
    if ( !v7 )
      goto LABEL_11;
  }
  else if ( !v7 )
  {
LABEL_11:
    xmmword_1C0060CA8 = 0uLL;
    dword_1C0060CB8 = 0;
LABEL_12:
    MiracastSupportForFDO = -1073741637;
    goto LABEL_13;
  }
  LOBYTE(xmmword_1C0060CA8) = 0;
  DWORD1(xmmword_1C0060CA8) = dword_1C0060C04;
  BYTE8(xmmword_1C0060CA8) = 0;
  *(_QWORD *)((char *)&xmmword_1C0060CA8 + 12) = v2;
  if ( a1 )
  {
    *(_OWORD *)a1 = xmmword_1C0060CA8;
    *(_DWORD *)(a1 + 16) = dword_1C0060CB8;
  }
  MiracastSupportForFDO = 0;
LABEL_13:
  if ( v1 )
  {
    _InterlockedExchange64(&qword_1C0060888, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return (unsigned int)MiracastSupportForFDO;
}
