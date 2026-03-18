/*
 * XREFs of MonitorGetMonitorDeviceInterfaceName @ 0x1C00E41A0
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00E2B88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C0122698 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     RtlStringCchCopyUnicodeString @ 0x1C000E904 (RtlStringCchCopyUnicodeString.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
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
  __int64 v9; // rcx
  struct _FAST_MUTEX *v10; // rcx
  __int64 v11; // rcx
  struct DXGMONITOR *v12; // rbx
  struct _ERESOURCE *v13; // rsi
  NTSTATUS v14; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct DXGMONITOR *v21; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)cchDest;
  v6 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v8 + 24) = v6;
  *(_QWORD *)(v8 + 32) = this;
  if ( !this || (_DWORD)v6 == -1 || !pszDest )
    return 3221225485LL;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  if ( !*((_QWORD *)this + 288) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v16);
  }
  v10 = *(struct _FAST_MUTEX **)(*((_QWORD *)this + 288) + 96LL);
  if ( !v10 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  v21 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v10, v6, 1, (ULONG **)&v21) < 0 )
    return 3221225664LL;
  v12 = v21;
  if ( !v21 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v18);
    v20 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v20);
  }
  KeEnterCriticalRegion();
  v13 = (struct _ERESOURCE *)((char *)v12 + 280);
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v12 + 280), 1u);
  v14 = RtlStringCchCopyUnicodeString(pszDest, v5, (PCUNICODE_STRING)((char *)v12 + 72));
  if ( v14 >= 0 )
    pszDest[1] = 92;
  ExReleaseResourceLite(v13);
  KeLeaveCriticalRegion();
  return (unsigned int)v14;
}
