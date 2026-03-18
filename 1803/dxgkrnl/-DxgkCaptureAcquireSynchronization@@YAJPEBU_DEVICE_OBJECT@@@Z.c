/*
 * XREFs of ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C016E600
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0016230 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00F5048 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01B6060 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C01EF8A4 (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureAcquireSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rcx
  DXGPROCESS *v9; // rdi
  char *v10; // rbx
  struct DXGADAPTER *v11; // [rsp+38h] [rbp+10h]

  DxgAdapterFromChild = DpiGetDxgAdapterFromChild(a1);
  v4 = DxgAdapterFromChild;
  if ( DxgAdapterFromChild < 0 )
  {
    v5 = WdLogNewEntry5_WdError(v3);
LABEL_3:
    *(_QWORD *)(v5 + 24) = v4;
    WdLogEvent5_WdError(v5);
    return (unsigned int)v4;
  }
  Current = DXGPROCESS::GetCurrent(v3, v2);
  v9 = Current;
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v8);
    v4 = -1073741811LL;
    goto LABEL_3;
  }
  v10 = (char *)Current + 168;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v10, 0LL);
  *((_QWORD *)v10 + 1) = KeGetCurrentThread();
  DXGPROCESS::AcquireDeviceLockForAllDevices(v9, v11);
  DXGADAPTER::AcquireCoreSync((__int64)v11, 1);
  DXGADAPTER::AcquireDdiSync((__int64)v11, 1);
  return 0LL;
}
