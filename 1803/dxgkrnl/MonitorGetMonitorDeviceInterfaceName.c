/*
 * XREFs of MonitorGetMonitorDeviceInterfaceName @ 0x1C00C6594
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00C5A7C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C01CFCCC (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 * Callees:
 *     ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C000B12C (-RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorDeviceInterfaceName(DXGADAPTER *this, __int64 a2, __int64 a3, char *a4)
{
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  struct _FAST_MUTEX *v11; // rcx
  __int64 v12; // rcx
  struct DXGMONITOR *v13; // rbx
  struct _ERESOURCE *v14; // rsi
  int v15; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGMONITOR *v22; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a3;
  v6 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v6;
  *(_QWORD *)(v8 + 32) = this;
  if ( !this || (_DWORD)v6 == -1 || !a4 )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  v10 = *((_QWORD *)this + 307);
  if ( !v10 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v17);
    v10 = *((_QWORD *)this + 307);
  }
  v11 = *(struct _FAST_MUTEX **)(v10 + 96);
  if ( !v11 )
  {
    v18 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  v22 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v11, v6, 1, &v22) < 0 )
    return 3221225664LL;
  v13 = v22;
  if ( !v22 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v19);
    v21 = WdLogNewEntry5_WdAssertion(v20);
    WdLogEvent5_WdAssertion(v21);
  }
  KeEnterCriticalRegion();
  v14 = (struct _ERESOURCE *)((char *)v13 + 296);
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v13 + 296), 1u);
  v15 = RtlStringCchCopyUnicodeString(a4, v5, (const struct _UNICODE_STRING *)((char *)v13 + 88));
  if ( v15 >= 0 )
    *((_WORD *)a4 + 1) = 92;
  ExReleaseResourceLite(v14);
  KeLeaveCriticalRegion();
  return (unsigned int)v15;
}
