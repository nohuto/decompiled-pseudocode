/*
 * XREFs of MonitorGetMonitorDeviceInterfaceName @ 0x1C00AC7FC
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AC900 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C01196FC (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 * Callees:
 *     RtlStringCchCopyUnicodeString @ 0x1C000263C (RtlStringCchCopyUnicodeString.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorDeviceInterfaceName(
        DXGADAPTER *this,
        __int64 a2,
        size_t cchDest,
        NTSTRSAFE_PWSTR pszDest)
{
  size_t v5; // rbp
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  MONITOR_MGR *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct DXGMONITOR *v18; // rbx
  struct _ERESOURCE *v19; // rsi
  NTSTATUS v20; // ebx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  struct DXGMONITOR *v30; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)cchDest;
  v6 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(this, a2, cchDest, pszDest);
  *(_QWORD *)(v8 + 24) = v6;
  *(_QWORD *)(v8 + 32) = this;
  if ( !this || (_DWORD)v6 == -1 || !pszDest )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  if ( !*((_QWORD *)this + 285) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    WdLogEvent5_WdAssertion(v22);
  }
  v13 = *(MONITOR_MGR **)(*((_QWORD *)this + 285) + 96LL);
  if ( !v13 )
  {
    v23 = WdLogNewEntry5_WdError(0LL, v9);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
  v30 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v13, v6, 1u, &v30) < 0 )
    return 3221225664LL;
  v18 = v30;
  if ( !v30 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    WdLogEvent5_WdAssertion(v24);
    v29 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
    WdLogEvent5_WdAssertion(v29);
  }
  KeEnterCriticalRegion();
  v19 = (struct _ERESOURCE *)((char *)v18 + 240);
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v18 + 240), 1u);
  v20 = RtlStringCchCopyUnicodeString(pszDest, v5, (PCUNICODE_STRING)((char *)v18 + 72));
  if ( v20 >= 0 )
    pszDest[1] = 92;
  ExReleaseResourceLite(v19);
  KeLeaveCriticalRegion();
  return (unsigned int)v20;
}
