/*
 * XREFs of ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0026800
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0112FA0 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     MonitorInventoryTelemetry @ 0x1C01FE7E4 (MonitorInventoryTelemetry.c)
 */

__int64 __fastcall AdapterTelemetryEnabledCallback(struct DXGADAPTER *a1, void *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v9; // rax
  _BYTE v10[8]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v11[32]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v12[40]; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v13[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v13, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v13[1]);
  v13[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v13[3]) = 33;
  LOBYTE(v13[6]) = -1;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, a1, 0LL);
  v3 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v10);
  v7 = v3;
  if ( v3 < 0 )
  {
    if ( v3 != -1073741130 )
    {
      v9 = WdLogNewEntry5_WdWarning(v5, v4, v6);
      *(_QWORD *)(v9 + 24) = a1;
      *(_QWORD *)(v9 + 32) = v7;
      WdLogEvent5_WdWarning(v9);
      goto LABEL_5;
    }
  }
  else if ( (*((_DWORD *)a1 + 75) & 4) == 0 )
  {
    DXGADAPTER::AdapterTelemetry(a1, 1LL, v13);
    MonitorInventoryTelemetry(a1);
  }
  LODWORD(v7) = 0;
LABEL_5:
  COREACCESS::~COREACCESS((COREACCESS *)v12);
  COREACCESS::~COREACCESS((COREACCESS *)v11);
  return (unsigned int)v7;
}
