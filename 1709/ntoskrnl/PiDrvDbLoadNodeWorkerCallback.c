/*
 * XREFs of PiDrvDbLoadNodeWorkerCallback @ 0x1405964E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     PnpDiagnosticTraceObject @ 0x1400FBA44 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x14012D114 (PnpDiagnosticTraceObjectWithStatus.c)
 *     ZwSetEvent @ 0x14017DA80 (ZwSetEvent.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     ZwResetEvent @ 0x140180680 (ZwResetEvent.c)
 *     ZwUnloadKey2 @ 0x140181080 (ZwUnloadKey2.c)
 *     ZwUnloadKeyEx @ 0x1401810A0 (ZwUnloadKeyEx.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     PiDrvDbLoadHive @ 0x1405966B4 (PiDrvDbLoadHive.c)
 */

NTSTATUS __fastcall PiDrvDbLoadNodeWorkerCallback(__int64 a1)
{
  unsigned __int16 *v1; // r14
  int v3; // eax
  int v4; // ebx
  void *v5; // rdx
  NTSTATUS v6; // eax
  int v7; // esi
  NTSTATUS result; // eax
  __int64 v9; // rax
  OBJECT_ATTRIBUTES TargetKey; // [rsp+60h] [rbp-9h] BYREF
  unsigned int v11; // [rsp+D0h] [rbp+67h] BYREF
  int v12; // [rsp+D8h] [rbp+6Fh] BYREF
  int v13; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  Handle = 0LL;
  v1 = (unsigned __int16 *)(a1 + 16);
  v13 = 0;
  v11 = 0;
  v12 = 1;
  PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseLoad_Start, (unsigned __int16 *)(a1 + 16));
  PnpDiagnosticTraceObject(&KMPnPEvt_DriverDatabaseLoaded_Start, v1);
  v3 = PiDrvDbLoadHive(a1 + 32, a1 + 48, &Handle);
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
                  6u,
                  *(_QWORD *)(a1 + 72),
                  0LL,
                  (__int64)&DEVPKEY_DriverDatabase_UnloadTimeout,
                  (__int64)&v12,
                  (__int64)&v11,
                  4,
                  (__int64)&v13,
                  0) >= 0
        && v12 == 7
        && v13 == 4 )
      {
        v9 = v11;
      }
      else
      {
        v9 = 120000LL;
        v11 = 120000;
      }
      if ( (_DWORD)v9 != -1 )
        *(_QWORD *)(a1 + 480) = -10000 * v9;
    }
    ZwClose(Handle);
    ZwResetEvent(*(HANDLE *)(a1 + 472), 0LL);
    v5 = *(void **)(a1 + 472);
    TargetKey.RootDirectory = 0LL;
    TargetKey.Length = 48;
    TargetKey.Attributes = 576;
    TargetKey.ObjectName = (PUNICODE_STRING)(a1 + 32);
    *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
    if ( v5 )
      v6 = ZwUnloadKeyEx(&TargetKey, v5);
    else
      v6 = ZwUnloadKey2(&TargetKey, 0);
    v7 = v6;
    if ( v6 == 259 )
    {
      v4 = 0;
      goto LABEL_8;
    }
    ZwSetEvent(*(HANDLE *)(a1 + 472), 0LL);
    v4 = 0;
    if ( v7 >= 0 )
      v4 = v7;
  }
  if ( v4 == -1073741431 )
    v4 = -1073741077;
LABEL_8:
  *(_DWORD *)(a1 + 256) = v4;
  KeSetEvent((PRKEVENT)(a1 + 200), 0, 0);
  result = PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoad_Stop, v1, v4);
  if ( v4 < 0 )
    return PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop, v1, v4);
  return result;
}
