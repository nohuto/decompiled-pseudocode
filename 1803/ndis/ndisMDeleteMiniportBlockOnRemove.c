/*
 * XREFs of ndisMDeleteMiniportBlockOnRemove @ 0x1C00B21A0
 * Callers:
 *     ndisPnPIrpRemoveDevice @ 0x1C00B1B84 (ndisPnPIrpRemoveDevice.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00EBB10 (NdisLWMUninitializeNetworkInterface.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00EC2B0 (NdisWdfPnpPowerEventHandler.c)
 *     ndisAddDevice @ 0x1C0105194 (ndisAddDevice.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C00094EC (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisReleaseStackTrace @ 0x1C006E54C (ndisReleaseStackTrace.c)
 *     ?ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z @ 0x1C006E610 (-ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C00B2C20 (--1BindEngine@Ndis@@QEAA@XZ.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B8854 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C00BB938 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     PdcTaskClientUnregister @ 0x1C00FFCBC (PdcTaskClientUnregister.c)
 */

void __fastcall ndisMDeleteMiniportBlockOnRemove(char *P)
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
  _QWORD *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  struct NDIS_REFCOUNT_HANDLE__ *v20; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v21; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v22; // rax
  struct _NDIS_EVENT_LOG *v23; // rdi
  struct _VF_NDIS_DISPATCH_TABLE *v24; // rax
  _QWORD *v25; // rax
  struct NDISWATCHDOG__ *v26; // rcx
  struct NDISWATCHDOG__ *v27; // rcx
  struct NDISWATCHDOG__ *v28; // rcx
  void *v29; // rcx
  void *v30; // rcx
  _DWORD *v31; // rcx
  unsigned int v32; // esi
  ULONG_PTR StackTrace; // rcx
  KLockHolder v34; // [rsp+20h] [rbp-28h] BYREF

  v2 = (void *)*((_QWORD *)P + 561);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)P + 561) = 0LL;
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(0x9Bu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)P);
  v3 = (void *)*((_QWORD *)P + 692);
  if ( v3 )
  {
    PdcTaskClientUnregister(v3);
    *((_QWORD *)P + 692) = 0LL;
  }
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_q(0x9Cu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)P);
  v4 = (void *)*((_QWORD *)P + 501);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *((_QWORD *)P + 501) = 0LL;
  }
  v5 = *((_QWORD *)P + 514);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(v5 + 24))(*(_QWORD *)(v5 + 8));
    ExFreePoolWithTag(*((PVOID *)P + 514), 0);
    *((_QWORD *)P + 514) = 0LL;
  }
  v6 = (void *)*((_QWORD *)P + 530);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *((_QWORD *)P + 530) = 0LL;
    *((_WORD *)P + 2116) = 0;
  }
  v7 = (void *)*((_QWORD *)P + 554);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *((_QWORD *)P + 554) = 0LL;
  }
  v34.m_State = Unlocked;
  v34.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v34.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v34);
  v8 = *((_QWORD *)P + 5);
  if ( v8 )
  {
    --*(_DWORD *)(v8 + 168);
    *(_QWORD *)(*((_QWORD *)P + 5) + 176LL) = 0LL;
    v31 = (_DWORD *)*((_QWORD *)P + 5);
    if ( !v31[42] )
      ExFreePoolWithTag(v31, 0);
  }
  KLockHolder::~KLockHolder(&v34);
  v9 = (void *)*((_QWORD *)P + 485);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)P + 485) = 0LL;
  }
  v10 = (void *)*((_QWORD *)P + 555);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)P + 555) = 0LL;
  }
  v11 = (void *)*((_QWORD *)P + 674);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *((_QWORD *)P + 674) = 0LL;
  }
  v12 = (void *)*((_QWORD *)P + 503);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)P + 503) = 0LL;
  }
  v13 = (void *)*((_QWORD *)P + 476);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *((_QWORD *)P + 476) = 0LL;
  }
  v14 = (void *)*((_QWORD *)P + 474);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *((_QWORD *)P + 474) = 0LL;
  }
  v15 = (void *)*((_QWORD *)P + 118);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *((_QWORD *)P + 118) = 0LL;
  }
  if ( *((_QWORD *)P + 675) )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    *((_QWORD *)P + 675) = 0LL;
  }
  while ( 1 )
  {
    v16 = (_QWORD *)*((_QWORD *)P + 109);
    if ( !v16 )
      break;
    *((_QWORD *)P + 109) = *v16;
    ExFreePoolWithTag(v16, 0);
  }
  v17 = (void *)*((_QWORD *)P + 171);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
    *((_QWORD *)P + 171) = 0LL;
  }
  v18 = (void *)*((_QWORD *)P + 231);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0);
    *((_QWORD *)P + 231) = 0LL;
  }
  v19 = (void *)*((_QWORD *)P + 550);
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0);
    *((_QWORD *)P + 550) = 0LL;
  }
  NdisFreeRefCount(*((struct NDIS_REFCOUNT_HANDLE__ **)P + 615));
  v20 = (struct NDIS_REFCOUNT_HANDLE__ *)*((_QWORD *)P + 616);
  *((_QWORD *)P + 615) = 0LL;
  NdisFreeRefCount(v20);
  v21 = (struct _NDIS_REFCOUNT_BLOCK *)*((_QWORD *)P + 563);
  *((_QWORD *)P + 616) = 0LL;
  if ( v21 )
  {
    v22 = ndisRefCountHandleFromRefCountBlock(v21);
    v23 = (struct _NDIS_EVENT_LOG *)v22;
    if ( (*(_BYTE *)&v22->RefWithStack[0].Block.References[2] & 2) != 0 )
    {
      v32 = 0;
      if ( HIDWORD(v22->RefWithStack[0].Block.Next) )
      {
        do
        {
          StackTrace = ndisGetNthEntry(v23, v32)->StackTrace;
          if ( (_DWORD)StackTrace )
            ndisReleaseStackTrace(StackTrace);
          ++v32;
        }
        while ( v32 < v23->NumEntries );
      }
    }
    ExFreePoolWithTag(v23, 0);
  }
  v24 = ndisVerifierNdisDispatch;
  *((_QWORD *)P + 563) = 0LL;
  if ( v24 && *((_QWORD *)P + 624) )
  {
    ((void (*)(void))v24->NdisFreeVerifierContext)();
    *((_QWORD *)P + 624) = 0LL;
  }
  v25 = (_QWORD *)*((_QWORD *)P + 691);
  if ( v25 )
  {
    *v25 = 0LL;
    ExFreePoolWithTag(*((PVOID *)P + 691), 0);
    *((_QWORD *)P + 691) = 0LL;
  }
  v26 = (struct NDISWATCHDOG__ *)*((_QWORD *)P + 690);
  if ( v26 != (struct NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v26);
  v27 = (struct NDISWATCHDOG__ *)*((_QWORD *)P + 689);
  if ( v27 != (struct NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v27);
  v28 = (struct NDISWATCHDOG__ *)*((_QWORD *)P + 688);
  if ( v28 != (struct NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v28);
  Ndis::BindEngine::~BindEngine((Ndis::BindEngine *)(P + 5136));
  Ndis::BindStack::~BindStack((Ndis::BindStack *)(P + 5032));
  v29 = (void *)*((_QWORD *)P + 526);
  if ( v29 )
    ExFreePoolWithTag(v29, 0x7274534Bu);
  v30 = (void *)*((_QWORD *)P + 525);
  if ( v30 )
    ExFreePoolWithTag(v30, 0x7274534Bu);
  if ( (*((_DWORD *)P + 30) & 0x100) != 0 )
    ExFreePoolWithTag(P, 0);
}
