/*
 * XREFs of bDrvDisconnect @ 0x1C029BE1C
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00FD8FC (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteConsoleShadowStop @ 0x1C01EECA0 (xxxRemoteConsoleShadowStop.c)
 *     xxxRemotePassthruEnable @ 0x1C01EEED0 (xxxRemotePassthruEnable.c)
 * Callees:
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C013B1BC (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C013B2B4 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 bDrvDisconnect()
{
  PVOID v0; // rdi
  HANDLE v1; // rsi
  unsigned int v2; // ebx
  __int64 (__fastcall *v3)(HANDLE, PVOID); // rax
  _BYTE v5[96]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v6; // [rsp+110h] [rbp+18h] BYREF

  v0 = gConsoleShadowThinwireFileObject;
  v1 = ghConsoleShadowThinwireChannel;
  v6 = (_QWORD *)gConsoleShadowhDev;
  if ( gConsoleShadowhDev && (v2 = 1, (*(_DWORD *)(gConsoleShadowhDev + 32) & 1) != 0) )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v5,
      ghsemDynamicModeChange,
      1,
      ghsemGreLock,
      2u,
      ghsemDCVisRgn,
      3u,
      *(HSEMAPHORE *)(gConsoleShadowhDev + 48),
      4u,
      ghsemSprite,
      5u,
      ghsemHT,
      6u);
    GreAcquireSemaphore(v6[5]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v6[5], 11LL);
    PDEVOBJ::vSync((PDEVOBJ *)&v6, (struct _SURFOBJ *)((v6[321] + 24LL) & -(__int64)(v6[321] != 0LL)), 0LL, 0);
    v3 = (__int64 (__fastcall *)(HANDLE, PVOID))v6[416];
    if ( v3 )
    {
      v2 = v3(v1, v0);
      if ( v2 )
        *(_DWORD *)(v6[226] + 904LL) = 3;
    }
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v6[5]);
    GreReleaseSemaphoreInternal(v6[5]);
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v5);
  }
  else
  {
    return 0;
  }
  return v2;
}
