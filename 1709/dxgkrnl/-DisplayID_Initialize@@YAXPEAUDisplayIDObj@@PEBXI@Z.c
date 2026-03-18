/*
 * XREFs of ?DisplayID_Initialize@@YAXPEAUDisplayIDObj@@PEBXI@Z @ 0x1C0014168
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C01093F8 (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 *     ??0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z @ 0x1C010C3CC (--0DXGMONITOR@@AEAA@PEAVMONITOR_MGR@@@Z.c)
 *     ?_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z @ 0x1C010C874 (-_MonitorTelemetry@DXGMONITOR@@QEAAXW4_TELEMETRY_MONITOR_INVENTORY_TRIGGER@@@Z.c)
 *     ?_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0202244 (-_CleanupMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DisplayID_Initialize(struct DisplayIDObj *a1, char *a2, int a3)
{
  char *v3; // r10
  char *v5; // rax
  char *v6; // r8
  int v7; // esi
  unsigned __int8 v8; // di
  char *v9; // rax
  unsigned __int8 v10; // r14
  char *v11; // rbp
  char v12; // dl
  char *v13; // r11
  unsigned __int64 v14; // rdi
  int v15; // ecx

  if ( a1 )
  {
    *(_QWORD *)a1 = a2;
    *((_DWORD *)a1 + 2) = a3;
    v3 = a2;
    *((_DWORD *)a1 + 3) = 0;
    *((_BYTE *)a1 + 16) = 0;
    *((_DWORD *)a1 + 5) = 0;
    if ( a2 )
    {
      if ( a3 )
      {
        v5 = a2 + 3;
        v6 = &a2[a3];
        v7 = 0;
        while ( v5 < v6 )
        {
          v8 = v3[1];
          v9 = v3;
          v3 += (unsigned __int8)(v8 + 5);
          v10 = v8 + 5;
          if ( v3 > v6
            || (unsigned __int8)(((unsigned __int8)*v9 >> 4) - 1) > 1u
            || (v9[2] & 0xF) == 0 && v9[3]
            || v8 > 0xFBu )
          {
            return;
          }
          v11 = &v9[v8 + 4];
          v12 = 0;
          v13 = v9;
          v14 = v8 + 4LL;
          if ( v9 > v11 )
            v14 = 0LL;
          if ( v14 )
          {
            do
              v12 += *v13++;
            while ( v13 - v9 < v14 );
          }
          if ( -v12 != *v11 )
            return;
          v15 = *((_DWORD *)a1 + 5);
          if ( v15 )
          {
            if ( (v9[2] & 0xF) != 0 )
              return;
          }
          else
          {
            v7 = (unsigned __int8)v9[3];
            *((_DWORD *)a1 + 3) = v10;
          }
          *((_DWORD *)a1 + 5) = v15 + 1;
          v5 = v3 + 3;
        }
        if ( *((_DWORD *)a1 + 5) == v7 + 1 && v3 == v6 )
          *((_BYTE *)a1 + 16) = 1;
      }
    }
  }
}
