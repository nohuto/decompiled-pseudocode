/*
 * XREFs of ?ExtractResolutionAndPosition@@YAXPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPEAUTelemetryPathInfo@@I@Z @ 0x1C0036718
 * Callers:
 *     ?WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0003524 (-WriteDxgDiagnosticsEvent_SDC@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ExtractResolutionAndPosition(
        struct DISPLAYCONFIG_PATH_INFO *a1,
        unsigned int a2,
        struct DISPLAYCONFIG_MODE_INFO *a3,
        unsigned int a4,
        struct TelemetryPathInfo *a5)
{
  unsigned int v6; // r11d
  char *v7; // r9
  char *v8; // r10
  unsigned __int16 v9; // cx
  unsigned __int64 v10; // rcx

  if ( a1 )
  {
    v6 = 0;
    if ( a2 )
    {
      v7 = (char *)a1 + 8;
      v8 = (char *)a5 + 8;
      do
      {
        if ( v6 >= 4 )
          break;
        v9 = *((_WORD *)v7 + 3);
        *((_WORD *)v8 - 4) = v9;
        *((_DWORD *)v8 - 1) = *(_DWORD *)v7;
        *(_DWORD *)v8 = *((_DWORD *)v7 + 5);
        v8[4] = v7[60] & 1;
        *((_QWORD *)v8 + 1) = *((_QWORD *)v7 - 1);
        *((_DWORD *)v8 + 4) = *((_DWORD *)v7 + 8);
        *((_DWORD *)v8 + 5) = *((_DWORD *)v7 + 7);
        if ( a3 && a4 > v9 && v9 != 0xFFFF )
        {
          v10 = (unsigned __int64)v9 << 6;
          *((_DWORD *)v8 + 6) = *(_DWORD *)((char *)a3 + v10 + 16);
          *((_DWORD *)v8 + 7) = *(_DWORD *)((char *)a3 + v10 + 20);
          *((_DWORD *)v8 + 8) = *(_DWORD *)((char *)a3 + v10 + 28);
          *((_DWORD *)v8 + 9) = *(_DWORD *)((char *)a3 + v10 + 32);
        }
        ++v6;
        v7 += 72;
        v8 += 48;
      }
      while ( v6 < a2 );
    }
  }
}
