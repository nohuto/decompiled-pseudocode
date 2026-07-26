/*
 * XREFs of ndisMDeleteMiniportBlockOnRemove @ 0x1C00AAA48
 * Callers:
 *     ndisWdfDeviceObjectCleanup @ 0x1C00650C4 (ndisWdfDeviceObjectCleanup.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FE008 (ndisPnPIrpRemoveDevice.c)
 *     ndisAddDevice @ 0x1C0103FA8 (ndisAddDevice.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000D150 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisReleaseStackTrace @ 0x1C006DCFC (ndisReleaseStackTrace.c)
 *     ?ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z @ 0x1C006DDC0 (-ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C00AB460 (--1BindEngine@Ndis@@QEAA@XZ.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00BA3CC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00BE4BC (--1BindStack@Ndis@@QEAA@XZ.c)
 *     PdcTaskClientUnregister @ 0x1C00FD8D8 (PdcTaskClientUnregister.c)
 */

void __fastcall ndisMDeleteMiniportBlockOnRemove(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v18; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v19; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v20; // rax
  struct _NDIS_EVENT_LOG *v21; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v22; // rax
  _QWORD *v23; // rax
  struct NDISWATCHDOG__ *v24; // rcx
  struct NDISWATCHDOG__ *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  _DWORD *v28; // rcx
  _QWORD *v29; // rcx
  unsigned int v30; // esi
  ULONG_PTR StackTrace; // rcx
  KLockHolder v32; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(void **)(a1 + 4488);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 4488) = 0LL;
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0x98u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1);
  v3 = *(void **)(a1 + 5520);
  if ( v3 )
  {
    PdcTaskClientUnregister(v3);
    *(_QWORD *)(a1 + 5520) = 0LL;
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_q(0x99u, &WPP_e05c952d5e8835369671e8581ad3d444_Traceguids, a1);
  v4 = *(void **)(a1 + 4008);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 4008) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 4112);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(v5 + 24))(*(_QWORD *)(v5 + 8));
    ExFreePoolWithTag(*(PVOID *)(a1 + 4112), 0);
    *(_QWORD *)(a1 + 4112) = 0LL;
  }
  v6 = *(void **)(a1 + 4240);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(a1 + 4240) = 0LL;
    *(_WORD *)(a1 + 4232) = 0;
  }
  v7 = *(void **)(a1 + 4432);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 4432) = 0LL;
  }
  v32.m_State = Unlocked;
  v32.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v32.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v32);
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 )
  {
    --*(_DWORD *)(v8 + 168);
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 176LL) = 0LL;
    v28 = *(_DWORD **)(a1 + 40);
    if ( !v28[42] )
      ExFreePoolWithTag(v28, 0);
  }
  KLockHolder::~KLockHolder(&v32);
  v9 = *(void **)(a1 + 3880);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(a1 + 3880) = 0LL;
  }
  v10 = *(void **)(a1 + 4440);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *(_QWORD *)(a1 + 4440) = 0LL;
  }
  v11 = *(void **)(a1 + 4024);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(a1 + 4024) = 0LL;
  }
  v12 = *(void **)(a1 + 3808);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *(_QWORD *)(a1 + 3808) = 0LL;
  }
  v13 = *(void **)(a1 + 3792);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *(_QWORD *)(a1 + 3792) = 0LL;
  }
  v14 = *(void **)(a1 + 944);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *(_QWORD *)(a1 + 944) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 5392) )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    *(_QWORD *)(a1 + 5392) = 0LL;
  }
  while ( *(_QWORD *)(a1 + 872) )
  {
    v29 = *(_QWORD **)(a1 + 872);
    if ( v29 )
      *(_QWORD *)(a1 + 872) = *v29;
    ExFreePoolWithTag(v29, 0);
  }
  v15 = *(void **)(a1 + 1368);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *(_QWORD *)(a1 + 1368) = 0LL;
  }
  v16 = *(void **)(a1 + 1848);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    *(_QWORD *)(a1 + 1848) = 0LL;
  }
  v17 = *(void **)(a1 + 4400);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
    *(_QWORD *)(a1 + 4400) = 0LL;
  }
  NdisFreeRefCount(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4920));
  v18 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4928);
  *(_QWORD *)(a1 + 4920) = 0LL;
  NdisFreeRefCount(v18);
  v19 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4504);
  *(_QWORD *)(a1 + 4928) = 0LL;
  if ( v19 )
  {
    v20 = ndisRefCountHandleFromRefCountBlock(v19);
    v21 = (struct _NDIS_EVENT_LOG *)v20;
    if ( (*(_BYTE *)&v20->RefWithStack[0].Block.References[2] & 2) != 0 )
    {
      v30 = 0;
      if ( HIDWORD(v20->RefWithStack[0].Block.Next) )
      {
        do
        {
          StackTrace = ndisGetNthEntry(v21, v30)->StackTrace;
          if ( (_DWORD)StackTrace )
            ndisReleaseStackTrace(StackTrace);
          ++v30;
        }
        while ( v30 < v21->NumEntries );
      }
    }
    ExFreePoolWithTag(v21, 0);
  }
  v22 = ndisVerifierNdisDispatch;
  *(_QWORD *)(a1 + 4504) = 0LL;
  if ( v22 && *(_QWORD *)(a1 + 4992) )
  {
    ((void (*)(void))v22->NdisFreeVerifierContext)();
    *(_QWORD *)(a1 + 4992) = 0LL;
  }
  v23 = *(_QWORD **)(a1 + 5512);
  if ( v23 )
  {
    *v23 = 0LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 5512), 0);
    *(_QWORD *)(a1 + 5512) = 0LL;
  }
  v24 = *(struct NDISWATCHDOG__ **)(a1 + 5504);
  if ( v24 != (struct NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v24);
  v25 = *(struct NDISWATCHDOG__ **)(a1 + 5496);
  if ( v25 != (struct NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v25);
  Ndis::BindEngine::~BindEngine((Ndis::BindEngine *)(a1 + 5136));
  Ndis::BindStack::~BindStack((Ndis::BindStack *)(a1 + 5032));
  v26 = *(void **)(a1 + 4208);
  if ( v26 )
    ExFreePoolWithTag(v26, 0x7274534Bu);
  v27 = *(void **)(a1 + 4200);
  if ( v27 )
    ExFreePoolWithTag(v27, 0x7274534Bu);
}
