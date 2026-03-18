/*
 * XREFs of ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1C0065BA4
 * Callers:
 *     PowerDimUndimResend @ 0x1C0062AF0 (PowerDimUndimResend.c)
 *     PowerUnDimMonitor @ 0x1C00656EC (PowerUnDimMonitor.c)
 *     PowerDimMonitor @ 0x1C00D7114 (PowerDimMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeMonitorBrightnessDiagnosticsPacket(
        struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *a1,
        char a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // edx
  __int64 v7; // [rsp+30h] [rbp+8h]

  *((_DWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 4) = 0LL;
  *(_DWORD *)a1 = 25;
  *((_DWORD *)a1 + 1) = 88;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  v7 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)a1 + 6) = v7 * KeQueryTimeIncrement();
  *((_DWORD *)a1 + 14) = dword_1C018C260;
  *((_DWORD *)a1 + 15) = dword_1C018C24C;
  *((_DWORD *)a1 + 16) = dword_1C018C248;
  *((_DWORD *)a1 + 17) = dword_1C018C254;
  v4 = dword_1C018C250;
  *((_DWORD *)a1 + 19) = -1;
  *((_DWORD *)a1 + 18) = v4;
  v5 = dword_1C018C25C;
  *((_DWORD *)a1 + 21) &= ~2u;
  *((_DWORD *)a1 + 20) = v5;
  v6 = *((_DWORD *)a1 + 21) ^ (*((_DWORD *)a1 + 21) ^ (4 * dword_1C018C2B8)) & 4;
  *((_DWORD *)a1 + 21) = v6;
  *((_DWORD *)a1 + 21) = a2 & 1 | v6 & 0xFFFFFFF6 | (8 * (dword_1C018C2B4 & 1));
}
