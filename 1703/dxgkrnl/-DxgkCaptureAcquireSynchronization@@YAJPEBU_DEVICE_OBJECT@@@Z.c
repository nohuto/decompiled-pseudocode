/*
 * XREFs of ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C01824C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00D357C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A15A8 (-AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DpiGetDxgAdapterFromChild @ 0x1C01C2600 (DpiGetDxgAdapterFromChild.c)
 */

__int64 __fastcall DxgkCaptureAcquireSynchronization(struct _DEVICE_OBJECT *a1)
{
  int DxgAdapterFromChild; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rax
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGPROCESS *v10; // rdi
  char *v11; // rbx
  struct DXGADAPTER *v12; // [rsp+38h] [rbp+10h]

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
  v10 = Current;
  if ( !Current )
  {
    v5 = WdLogNewEntry5_WdError(v9, v8);
    v4 = -1073741811LL;
    goto LABEL_3;
  }
  v11 = (char *)Current + 136;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v11, 0LL);
  *((_QWORD *)v11 + 1) = KeGetCurrentThread();
  DXGPROCESS::AcquireDeviceLockForAllDevices(v10, v12);
  DXGADAPTER::AcquireCoreSync((__int64)v12, 1);
  DXGADAPTER::AcquireDdiSync((__int64)v12, 1);
  return 0LL;
}
