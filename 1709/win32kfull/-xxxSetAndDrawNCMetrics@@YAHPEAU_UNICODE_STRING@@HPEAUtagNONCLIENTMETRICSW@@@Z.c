/*
 * XREFs of ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01B8680
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01B842C (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     xxxSetWindowNCMetrics @ 0x1C0083240 (xxxSetWindowNCMetrics.c)
 *     xxxMetricsRecalc @ 0x1C01B8F64 (xxxMetricsRecalc.c)
 *     MenuRecalc @ 0x1C020F114 (MenuRecalc.c)
 */

__int64 __fastcall xxxSetAndDrawNCMetrics(struct _UNICODE_STRING *a1, __int64 a2, struct tagNONCLIENTMETRICSW *a3)
{
  int v4; // r12d
  struct tagWND *v5; // rbx
  __int64 SessionDpiServerInfo; // r13
  int v7; // r15d
  int v8; // esi
  int v10; // ebp
  int v11; // r14d
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // r10d
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rax
  int v20; // [rsp+90h] [rbp+18h]
  int v21; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v5 = 0LL;
  SessionDpiServerInfo = GetSessionDpiServerInfo(a1, a2, a3);
  v7 = *(_DWORD *)(SessionDpiServerInfo + 4);
  v8 = *(_DWORD *)(gpsi + 2384LL);
  v20 = *(_DWORD *)(gpsi + 2108LL);
  v21 = *(_DWORD *)(gpsi + 2112LL);
  if ( a3 )
  {
    v11 = *((_DWORD *)a3 + 5) - *(_DWORD *)(gpsi + 2320LL);
    v10 = *((_DWORD *)a3 + 55) - *(_DWORD *)(gpsi + 2372LL);
  }
  else
  {
    if ( v4 == v7 )
      return 0LL;
    v10 = 0;
    v11 = 0;
  }
  xxxSetWindowNCMetrics(a1, a3, 1LL, v4);
  MenuRecalc();
  v12 = *(_DWORD *)(gpsi + 2384LL);
  v13 = v12 + *(_DWORD *)(SessionDpiServerInfo + 4);
  v14 = v13 - v8 - v7;
  if ( v8 > 0 )
    goto LABEL_10;
  if ( v12 <= 0 )
  {
    v13 = 0;
    goto LABEL_13;
  }
  if ( v8 )
  {
LABEL_10:
    if ( v12 )
      v13 = v12 + *(_DWORD *)(SessionDpiServerInfo + 4) - v8 - v7;
    else
      v13 = -(v8 + v7);
  }
LABEL_13:
  if ( v14 || (v15 = 2, v13) )
    v15 = 3;
  xxxMetricsRecalc(v15, 0, 0, v11, v10, v14, v13);
  v16 = *(_DWORD *)(gpsi + 2112LL) - v21;
  v17 = *(_DWORD *)(gpsi + 2108LL) - v20;
  if ( v17 || v16 )
    xxxMetricsRecalc(4, v17, v16, 0, 0, 0, 0);
  v18 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v18 )
    v5 = *(struct tagWND **)(*(_QWORD *)(v18 + 8) + 16LL);
  xxxInternalInvalidate(v5, (HRGN)1, 0x10485u);
  return 1LL;
}
