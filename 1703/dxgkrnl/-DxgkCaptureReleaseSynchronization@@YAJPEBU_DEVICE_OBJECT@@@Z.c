/*
 * XREFs of ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C0182570
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D34C4 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A1F4C (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C01C2600 (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureReleaseSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rdi
  DXGADAPTER *v10; // [rsp+38h] [rbp+10h]

  DxgAdapterFromChild = DpiGetDxgAdapterFromChild(a1);
  v4 = DxgAdapterFromChild;
  if ( DxgAdapterFromChild < 0 )
  {
    v5 = WdLogNewEntry5_WdError(v3, v2);
LABEL_3:
    *(_QWORD *)(v5 + 24) = v4;
    WdLogEvent5_WdError(v5);
    return (unsigned int)v4;
  }
  Current = DXGPROCESS::GetCurrent(v3);
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v8, v7);
    v4 = -1073741811LL;
    goto LABEL_3;
  }
  DXGADAPTER::ReleaseDdiSync(v10);
  DXGADAPTER::ReleaseCoreSync((__int64)v10, 1);
  DXGPROCESS::ReleaseDeviceLockForAllDevices(Current, v10);
  *((_QWORD *)Current + 18) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 136, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
