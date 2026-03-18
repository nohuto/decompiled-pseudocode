/*
 * XREFs of ?DeInitializePartitionForAllAdapters@VIDMM_GLOBAL@@SAXPEAUVIDMM_PARTITION@@@Z @ 0x1C009F528
 * Callers:
 *     ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x1C0025A88 (--_GVIDMM_PARTITION@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z @ 0x1C0002EE4 (-GetAdapterInfo@VIDMM_PARTITION@@QEAAPEAUVIDMM_PARTITION_ADAPTER_INFO@@PEAVVIDMM_GLOBAL@@@Z.c)
 *     ??0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z @ 0x1C0003850 (--0DXGAUTOEXPUSHLOCKSHARED@@QEAA@QEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z @ 0x1C0025B6C (-VidMmiClosePerfCounters@@YAXPEAUVIDMM_PARTITION_ADAPTER_INFO@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::DeInitializePartitionForAllAdapters(struct VIDMM_PARTITION *this)
{
  struct _LIST_ENTRY *i; // rbx
  struct VIDMM_PARTITION_ADAPTER_INFO *AdapterInfo; // rax
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  DXGAUTOEXPUSHLOCKSHARED::DXGAUTOEXPUSHLOCKSHARED(
    (DXGAUTOEXPUSHLOCKSHARED *)v4,
    (struct _EX_PUSH_LOCK *const)&VIDMM_GLOBAL::_AdapterListLock);
  for ( i = VIDMM_GLOBAL::_AdapterListHead.Flink; i != &VIDMM_GLOBAL::_AdapterListHead; i = i->Flink )
  {
    AdapterInfo = VIDMM_PARTITION::GetAdapterInfo(this, (struct VIDMM_GLOBAL *)&i[-2627]);
    VidMmiClosePerfCounters(AdapterInfo);
  }
  if ( v6 == 1 )
  {
    ExReleasePushLockSharedEx(v5, 0LL);
  }
  else if ( v6 == 2 )
  {
    ExReleasePushLockExclusiveEx(v5, 0LL);
  }
}
