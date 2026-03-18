/*
 * XREFs of MonitorCreateMonitorManager @ 0x1C0117404
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0117980 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0010CFC (--0MONITOR_MGR@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall MonitorCreateMonitorManager(struct ADAPTER_DISPLAY *a1, MONITOR_MGR **a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  MONITOR_MGR *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  MONITOR_MGR *v13; // rbx
  __int64 result; // rax
  __int64 v15; // rax
  int v16; // [rsp+40h] [rbp+8h] BYREF
  int v17; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  if ( !a1 || !a2 )
  {
    v15 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v15 + 24) = a1;
    *(_QWORD *)(v15 + 32) = a2;
    goto LABEL_15;
  }
  *a2 = 0LL;
  v8 = (MONITOR_MGR *)operator new(0x308uLL, 0x4D677844u, (POOL_TYPE)512);
  if ( v8 )
    v13 = MONITOR_MGR::MONITOR_MGR(v8, a1, v11, v12);
  else
    v13 = 0LL;
  if ( !v13 )
  {
    v15 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v15 + 24) = *((_QWORD *)a1 + 2);
LABEL_15:
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9, v11, v12) + 24) = v13;
  if ( g_IsInternalRelease )
  {
    v16 = 0;
    v17 = 0;
    qword_1C006EFA8 = (__int64)&v16;
    qword_1C006EFB8 = (__int64)&v16;
    qword_1C006EFE0 = (__int64)&v17;
    qword_1C006EFF0 = (__int64)&v17;
    RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &unk_1C006EF90, 0LL, 0LL);
    if ( v16 )
      *((_BYTE *)v13 + 164) = 0;
    if ( v17 )
      *((_BYTE *)v13 + 3) = 0;
  }
  *((_BYTE *)v13 + 4) = 1;
  result = 0LL;
  *a2 = v13;
  return result;
}
