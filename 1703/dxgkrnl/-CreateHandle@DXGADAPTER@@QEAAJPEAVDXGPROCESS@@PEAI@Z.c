/*
 * XREFs of ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00D3674
 * Callers:
 *     ?VmBusOpenAdapter@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002E220 (-VmBusOpenAdapter@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z @ 0x1C009F590 (-DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00FA670 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00061C0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0006C7C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0087F50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00D5CC0 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 */

__int64 __fastcall DXGADAPTER::CreateHandle(DXGADAPTER *this, struct DXGPROCESS *a2, unsigned int *a3, __int64 a4)
{
  unsigned int v7; // eax
  unsigned int v8; // ebp
  struct ADAPTER_RENDER *v9; // rdx
  int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rax

  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v12 + 24) = 3066LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a3 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 44) == 1 )
  {
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)a2 + 168));
    v7 = HMGRTABLE::AllocHandle((unsigned int *)a2 + 48, (__int64)this, 1LL, 0LL, 0);
    *((_QWORD *)a2 + 22) = 0LL;
    v8 = v7;
    ExReleasePushLockExclusiveEx((char *)a2 + 168, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    if ( v8 )
    {
      v9 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 286);
      if ( !v9 || (v10 = DXGPROCESS::OpenAdapter(a2, v9, 0), v10 >= 0) )
      {
        *a3 = v8;
        return 0LL;
      }
      DXGPROCESS::FreeHandleSafe(a2, v8);
    }
    else
    {
      v10 = -1073741801;
    }
    DXGADAPTER::ReleaseReferenceNoTracking(this);
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    v10 = -1073741130;
    *(_QWORD *)(v13 + 24) = this;
    *(_QWORD *)(v13 + 32) = -1073741130LL;
    WdLogEvent5_WdWarning(v13);
  }
  return (unsigned int)v10;
}
