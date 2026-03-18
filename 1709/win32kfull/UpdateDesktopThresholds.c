/*
 * XREFs of UpdateDesktopThresholds @ 0x1C0049C80
 * Callers:
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C0045E70 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0x1C0049C20 (-UpdateThresholdFromMetric@@YAXHPEAH0IEW4_THRESHOLD_SELECTOR@@@Z.c)
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?UpdateDesktopThresholdsWorker@@YAXPEAUtagMONITOR_MARGIN@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C0049E10 (-UpdateDesktopThresholdsWorker@@YAXPEAUtagMONITOR_MARGIN@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z.c)
 *     ?UpdateDesktopMonitorNavigationOrder@@YAXPEAUtagMONITOR_MARGIN@@@Z @ 0x1C0049F64 (-UpdateDesktopMonitorNavigationOrder@@YAXPEAUtagMONITOR_MARGIN@@@Z.c)
 */

__int64 UpdateDesktopThresholds()
{
  __int64 v0; // rcx
  unsigned __int64 v1; // rcx
  struct tagMONITOR_MARGIN *v2; // rbx
  int *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r10
  __int64 *v7; // r8
  __int64 v8; // r11
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v19; // [rsp+50h] [rbp+8h] BYREF

  v0 = *(unsigned int *)*gpDispInfo;
  if ( !(_DWORD)v0 )
    return 0LL;
  v1 = 24 * v0;
  if ( v1 > 0xFFFFFFFF )
    return 0LL;
  v2 = (struct tagMONITOR_MARGIN *)Win32AllocPoolZInit((unsigned int)v1, 1835101525LL);
  if ( !v2 )
    return 0LL;
  v3 = (int *)&unk_1C02E1FF0;
  v4 = 4LL;
  do
  {
    v5 = *v3;
    v19 = 0;
    UpdateDesktopThresholdsWorker(v2, (unsigned int)v5, &v19);
    if ( v19 )
    {
      v6 = (unsigned int)dword_1C02E4410[v5];
      v7 = (__int64 *)((char *)v2 + 16);
      v8 = (unsigned int)dword_1C02E4420[v5];
      v9 = v5;
      v10 = (unsigned int)dword_1C02E4430[v5];
      v11 = v19;
      v12 = (unsigned int)dword_1C02E4440[v9];
      v13 = (unsigned int)dword_1C02E4450[v9];
      v14 = (unsigned int)dword_1C02E4460[v9];
      do
      {
        v15 = *v7;
        v7 += 3;
        *(_BYTE *)(v15 + v9 + 536) = gWinArrGlobal[v6];
        *(_BYTE *)(v15 + v9 + 540) = gWinArrGlobal[v8];
        *(_BYTE *)(v15 + v9 + 544) = gWinArrGlobal[v10];
        *(_BYTE *)(v15 + v9 + 548) = gWinArrGlobal[v12];
        *(_BYTE *)(v15 + v9 + 552) = gWinArrGlobal[v13];
        *(_BYTE *)(v15 + v9 + 556) = gWinArrGlobal[v14];
        *(_BYTE *)(v9 + v15 + 560) = 1;
        --v11;
      }
      while ( v11 );
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  UpdateDesktopMonitorNavigationOrder(v2);
  Win32FreePool(v2, v16, v17);
  return 1LL;
}
