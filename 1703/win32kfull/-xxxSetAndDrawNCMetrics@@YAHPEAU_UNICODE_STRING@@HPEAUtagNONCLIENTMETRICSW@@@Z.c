/*
 * XREFs of ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01B5434
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01B51BC (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     xxxSetWindowNCMetrics @ 0x1C000A9D0 (xxxSetWindowNCMetrics.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     xxxMetricsRecalc @ 0x1C01B5CD4 (xxxMetricsRecalc.c)
 *     MenuRecalc @ 0x1C020D994 (MenuRecalc.c)
 */

__int64 __fastcall xxxSetAndDrawNCMetrics(struct _UNICODE_STRING *a1, int a2, struct tagNONCLIENTMETRICSW *a3)
{
  struct tagWND *v5; // rbx
  int *SessionSystemDpiServerInfo; // r13
  int v7; // r15d
  int v8; // esi
  int v10; // ebp
  int v11; // r14d
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // r10d
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rax
  int v20; // [rsp+90h] [rbp+18h]
  int v21; // [rsp+98h] [rbp+20h]

  v5 = 0LL;
  SessionSystemDpiServerInfo = (int *)GetSessionSystemDpiServerInfo();
  v7 = *SessionSystemDpiServerInfo;
  v8 = *(_DWORD *)(gpsi + 2248LL);
  v20 = *(_DWORD *)(gpsi + 2108LL);
  v21 = *(_DWORD *)(gpsi + 2112LL);
  if ( a3 )
  {
    v11 = *((_DWORD *)a3 + 5) - *(_DWORD *)(gpsi + 2004LL);
    v10 = *((_DWORD *)a3 + 55) - *(_DWORD *)(gpsi + 2100LL);
  }
  else
  {
    if ( a2 == v7 )
      return 0LL;
    v10 = 0;
    v11 = 0;
  }
  xxxSetWindowNCMetrics((__int64)a1, (int *)a3, 1, a2);
  MenuRecalc();
  v12 = *(_DWORD *)(gpsi + 2248LL);
  v13 = *SessionSystemDpiServerInfo + v12 - v8 - v7;
  if ( v8 > 0 )
    goto LABEL_11;
  if ( v12 <= 0 )
  {
    v14 = 0;
    goto LABEL_14;
  }
  if ( v8 )
  {
LABEL_11:
    if ( v12 )
      v14 = *SessionSystemDpiServerInfo + *(_DWORD *)(gpsi + 2248LL) - v8 - v7;
    else
      v14 = -(v8 + v7);
    goto LABEL_14;
  }
  v14 = *SessionSystemDpiServerInfo + v12;
LABEL_14:
  if ( v13 || (v15 = 2, v14) )
    v15 = 3;
  xxxMetricsRecalc(v15, 0, 0, v11, v10, v13, v14);
  v16 = *(_DWORD *)(gpsi + 2112LL) - v21;
  v17 = *(_DWORD *)(gpsi + 2108LL) - v20;
  if ( v17 || v16 )
    xxxMetricsRecalc(4, v17, v16, 0, 0, 0, 0);
  v18 = *(_QWORD *)(gptiCurrent + 408LL);
  if ( v18 )
    v5 = *(struct tagWND **)(*(_QWORD *)(v18 + 8) + 16LL);
  xxxInternalInvalidate(v5, (HRGN)1, 66693LL);
  return 1LL;
}
