/*
 * XREFs of ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01B51BC
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C0009E34 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01B4598 (-RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z @ 0x1C01B4F2C (-SetWindowMetricInt@@YAHPEAU_UNICODE_STRING@@GH@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01B5434 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 */

__int64 __fastcall xxxSPISetNCMetrics(struct _UNICODE_STRING *a1, struct tagNONCLIENTMETRICSW *a2, int a3)
{
  BOOL v5; // ebp
  int v7; // edi
  unsigned int v8; // esi
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned int v12; // r8d
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  int v25; // esi
  int v26; // esi

  v5 = a3 == 0;
  v7 = 1;
  v8 = 0;
  if ( *(_DWORD *)a2 != 504 )
  {
    *(_DWORD *)a2 = 504;
    v9 = (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 ? *(_DWORD *)(gpsi + 2248LL) : *(_DWORD *)(gpsi + 2636LL);
    *((_DWORD *)a2 + 1) -= v9;
    v10 = *((_DWORD *)a2 + 1);
    *((_DWORD *)a2 + 125) = v9;
    if ( v10 < 1 )
    {
      *((_DWORD *)a2 + 1) = 1;
      v11 = v10 + v9 - 1;
      if ( v11 < 0 )
        v11 = 0;
      *((_DWORD *)a2 + 125) = v11;
    }
  }
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
    RescaleNonClientMetrics(a2);
  v12 = 50;
  if ( *((int *)a2 + 1) > 1 )
    v7 = *((_DWORD *)a2 + 1);
  if ( v7 < 50 )
    v12 = v7;
  *((_DWORD *)a2 + 1) = v12;
  if ( a3 )
  {
    v13 = SetWindowMetricInt(a1, 0x88u, v12);
    v14 = SetWindowMetricInt(a1, 0x98u, *((_DWORD *)a2 + 2)) & v13;
    v15 = SetWindowMetricInt(a1, 0x99u, *((_DWORD *)a2 + 3)) & v14;
    v16 = SetWindowMetricInt(a1, 0x89u, *((_DWORD *)a2 + 4)) & v15;
    v17 = SetWindowMetricInt(a1, 0x8Au, *((_DWORD *)a2 + 5)) & v16;
    v18 = SetWindowMetricInt(a1, 0x8Cu, *((_DWORD *)a2 + 29)) & v17;
    v19 = SetWindowMetricInt(a1, 0x8Du, *((_DWORD *)a2 + 30)) & v18;
    v20 = SetWindowMetricInt(a1, 0x8Fu, *((_DWORD *)a2 + 54)) & v19;
    v21 = SetWindowMetricInt(a1, 0x90u, *((_DWORD *)a2 + 55)) & v20;
    v22 = FastWriteProfileValue(a1, 23LL, 139LL, 3LL, (char *)a2 + 24, 92) & v21;
    v23 = FastWriteProfileValue(a1, 23LL, 142LL, 3LL, (char *)a2 + 124, 92) & v22;
    v24 = FastWriteProfileValue(a1, 23LL, 145LL, 3LL, (char *)a2 + 224, 92) & v23;
    v25 = FastWriteProfileValue(a1, 23LL, 156LL, 3LL, (char *)a2 + 316, 92) & v24;
    v26 = FastWriteProfileValue(a1, 23LL, 157LL, 3LL, (char *)a2 + 408, 92) & v25;
    v8 = SetWindowMetricInt(a1, 0x9Eu, *((_DWORD *)a2 + 125)) & v26;
    v5 = v8;
  }
  if ( v5 )
    xxxSetAndDrawNCMetrics(a1, *((_DWORD *)a2 + 1), a2);
  return v8;
}
