/*
 * XREFs of ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C0084CB0
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B1EB0 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z @ 0x1C00F3580 (-DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z.c)
 *     ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0194200 (-VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C01B9BEC (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0002C08 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C007A79C (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C008A02C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 */

__int64 __fastcall DXGADAPTER::CreateHandle(DXGADAPTER *this, struct DXGPROCESS *a2, unsigned int *a3)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  struct ADAPTER_RENDER *v8; // rdx
  int v9; // ebx
  __int64 v11; // rax
  __int64 v12; // rax

  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 3145LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a3 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 44) == 1 )
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 200));
    v6 = HMGRTABLE::AllocHandle((unsigned int *)a2 + 56, (__int64)this, 1, 0, 0);
    *((_QWORD *)a2 + 26) = 0LL;
    v7 = v6;
    ExReleasePushLockExclusiveEx((char *)a2 + 200, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    if ( v7 )
    {
      v8 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 289);
      if ( !v8 || (v9 = DXGPROCESS::OpenAdapter(a2, v8, 0), v9 >= 0) )
      {
        *a3 = v7;
        return 0LL;
      }
      DXGPROCESS::FreeHandleSafe(a2, v7);
    }
    else
    {
      v9 = -1073741801;
    }
    DXGADAPTER::ReleaseReferenceNoTracking(this);
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(this, a2, a3);
    v9 = -1073741130;
    *(_QWORD *)(v12 + 24) = this;
    *(_QWORD *)(v12 + 32) = -1073741130LL;
    WdLogEvent5_WdWarning(v12);
  }
  return (unsigned int)v9;
}
