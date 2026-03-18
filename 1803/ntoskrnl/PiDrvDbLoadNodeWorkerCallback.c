/*
 * XREFs of PiDrvDbLoadNodeWorkerCallback @ 0x1405786F0
 * Callers:
 *     <none>
 * Callees:
 *     PnpDiagnosticTraceObject @ 0x1400C8D00 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400C8E84 (PnpDiagnosticTraceObjectWithStatus.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ZwSetEvent @ 0x1401A7680 (ZwSetEvent.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwResetEvent @ 0x1401AA2C0 (ZwResetEvent.c)
 *     _SysCtxRegOpenKey @ 0x140506230 (_SysCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     PiDrvDbUnloadHive @ 0x140578894 (PiDrvDbUnloadHive.c)
 *     PiDrvDbLoadHive @ 0x1405788DC (PiDrvDbLoadHive.c)
 */

NTSTATUS __fastcall PiDrvDbLoadNodeWorkerCallback(__int64 a1)
{
  unsigned __int16 *v1; // rsi
  int v3; // eax
  int v4; // ebx
  NTSTATUS result; // eax
  __int64 v6; // rax
  unsigned int v7; // [rsp+A0h] [rbp+40h] BYREF
  int v8; // [rsp+A8h] [rbp+48h] BYREF
  int v9; // [rsp+B0h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+58h] BYREF

  v1 = (unsigned __int16 *)(a1 + 16);
  v8 = 1;
  Handle = 0LL;
  v9 = 0;
  v7 = 0;
  PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseLoad_Start, (unsigned __int16 *)(a1 + 16));
  PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseLoaded_Start, v1);
  v3 = PiDrvDbLoadHive(a1 + 32, a1 + 48, 0LL, &Handle);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741772 || v3 == -1073741766 )
      *(_BYTE *)(a1 + 80) = 1;
  }
  else
  {
    if ( (int)SysCtxRegOpenKey(0LL, (__int64)Handle, (__int64)L"DriverDatabase", 0, 0x2000000u, a1 + 72) < 0 )
    {
      *(_BYTE *)(a1 + 80) = 1;
    }
    else if ( *(_QWORD *)(a1 + 480) == 0xFFFFFFFFLL )
    {
      if ( (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(a1 + 24),
                  7u,
                  *(_QWORD *)(a1 + 72),
                  0LL,
                  (__int64)&DEVPKEY_DriverDatabase_UnloadTimeout,
                  (__int64)&v8,
                  (__int64)&v7,
                  4,
                  (__int64)&v9,
                  0) >= 0
        && v8 == 7
        && v9 == 4 )
      {
        v6 = v7;
      }
      else
      {
        v6 = 120000LL;
        v7 = 120000;
      }
      if ( (_DWORD)v6 != -1 )
        *(_QWORD *)(a1 + 480) = -10000 * v6;
    }
    ZwClose(Handle);
    ZwResetEvent(*(HANDLE *)(a1 + 472), 0LL);
    v4 = PiDrvDbUnloadHive(a1 + 32, *(_QWORD *)(a1 + 472));
    if ( v4 == 259 )
    {
      v4 = 0;
      goto LABEL_6;
    }
    if ( v4 < 0 )
      v4 = 0;
    ZwSetEvent(*(HANDLE *)(a1 + 472), 0LL);
  }
  if ( v4 == -1073741431 )
    v4 = -1073741077;
LABEL_6:
  *(_DWORD *)(a1 + 256) = v4;
  KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
  result = PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoad_Stop, v1, v4);
  if ( v4 < 0 )
    return PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop, v1, v4);
  return result;
}
