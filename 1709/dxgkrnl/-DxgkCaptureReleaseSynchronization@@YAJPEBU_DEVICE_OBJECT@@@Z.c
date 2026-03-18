/*
 * XREFs of ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C01867E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0084B00 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01B9CAC (-ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C01DBCEC (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureReleaseSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rdi
  DXGADAPTER *v9; // [rsp+38h] [rbp+10h]

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
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v7);
    v4 = -1073741811LL;
    goto LABEL_3;
  }
  DXGADAPTER::ReleaseDdiSync(v9);
  DXGADAPTER::ReleaseCoreSync((__int64)v9, 1);
  DXGPROCESS::ReleaseDeviceLockForAllDevices(Current, v9);
  *((_QWORD *)Current + 21) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 160, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
