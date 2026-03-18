/*
 * XREFs of ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C00F50F8
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A27B0 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00A2C70 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C00D8EB8 (-DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z.c)
 *     ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01804A0 (-VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C01B70DC (-GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C001654C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00975C4 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00F7E84 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 */

__int64 __fastcall DXGADAPTER::CreateHandle(DXGADAPTER *this, struct DXGPROCESS *a2, unsigned int *a3)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // eax
  unsigned int v9; // ebp
  struct ADAPTER_RENDER *v10; // rdx
  int v11; // esi
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // r9d

  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 3153LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a3 )
    return 3221225485LL;
  if ( *((_DWORD *)this + 44) == 1 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)a2 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v15 = *((_DWORD *)a2 + 56);
        if ( v15 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v6, &EventBlockThread, v7, v15);
      }
      ExAcquirePushLockExclusiveEx((char *)a2 + 208, 0LL);
    }
    *((_QWORD *)a2 + 27) = KeGetCurrentThread();
    v8 = HMGRTABLE::AllocHandle((unsigned int *)a2 + 58, (__int64)this, 1, 0, 0);
    *((_QWORD *)a2 + 27) = 0LL;
    v9 = v8;
    ExReleasePushLockExclusiveEx((char *)a2 + 208, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    if ( v9 )
    {
      v10 = (struct ADAPTER_RENDER *)*((_QWORD *)this + 308);
      if ( !v10 || (v11 = DXGPROCESS::OpenAdapter(a2, v10, (*((_BYTE *)a2 + 323) & 4) != 0), v11 >= 0) )
      {
        *a3 = v9;
        return 0LL;
      }
      DXGPROCESS::FreeHandleSafe(a2, v9);
    }
    else
    {
      v11 = -1073741801;
    }
    DXGADAPTER::ReleaseReferenceNoTracking(this);
    return (unsigned int)v11;
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v14 + 24) = this;
    *(_QWORD *)(v14 + 32) = -1073741130LL;
    WdLogEvent5_WdWarning(v14);
    return 3221226166LL;
  }
}
