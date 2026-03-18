/*
 * XREFs of ?ReleaseDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01B75B0
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00F4DB0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C016E6B0 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000AEAC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall DXGPROCESS::ReleaseDeviceLockForAllDevices(struct _KTHREAD **this, struct DXGADAPTER *a2)
{
  __int64 v4; // rax
  char *v5; // rax
  struct _KTHREAD *v6; // rbx
  __int64 Current; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( this[22] != KeGetCurrentThread() && this[24] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 2839LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = (char *)(this + 34);
  v6 = this[34];
  v8[0] = v5;
  while ( 1 )
  {
    v8[1] = v6;
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v8);
    if ( !Current )
      break;
    if ( *(struct DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL) == a2 )
      ExReleaseResourceLite(*(PERESOURCE *)(Current + 104));
    v6 = *(struct _KTHREAD **)v6;
  }
}
