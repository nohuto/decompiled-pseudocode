/*
 * XREFs of ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C017B554
 * Callers:
 *     ?VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186F10 (-VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00092DC (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C00154E0 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00166A0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00166DC (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0016B88 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C002486C (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C00F9D50 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0145C2C (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::SubmitPresentHistoryTokenFromVm(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned int v8; // edi
  __int64 v10; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGPROCESS *v14; // r13
  unsigned int v15; // r12d
  __int64 v16; // r9
  int v17; // edx
  __int64 v18; // rax
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  __int64 v22; // r9
  int v23; // edi
  __int64 v24; // rcx
  PERESOURCE *Global; // rax
  __int64 v26; // rdx
  int v27; // ecx
  __int64 v28; // rdi
  DXGCONTEXT *v29; // r14
  __int64 v30; // r15
  struct VIDSCH_SUBMIT_DATA_BASE *v31; // r11
  int v32; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v34; // r9
  __int64 v35; // r11
  DXGCONTEXT *v36; // [rsp+38h] [rbp-D0h] BYREF
  struct VIDSCH_SUBMIT_DATA_BASE *v37[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v38[8]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v39[8]; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v40[2]; // [rsp+70h] [rbp-98h] BYREF
  char v41; // [rsp+80h] [rbp-88h]
  _BYTE v42[16]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v43[32]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v44[144]; // [rsp+B8h] [rbp-50h] BYREF

  v8 = a2;
  v10 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39, v8, Current, &v36, 0);
  v14 = DXGPROCESS::GetCurrent(v13, v12);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v43, (struct _KTHREAD **)v14);
  v15 = (a7 >> 6) & 0xFFFFFF;
  if ( v15 < *((_DWORD *)v14 + 62) )
  {
    v16 = *((_QWORD *)v14 + 29);
    v17 = *(_DWORD *)(v16 + 16LL * v15 + 8);
    if ( ((a7 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60) && (v17 & 0x2000) == 0 && (v17 & 0x1F) == 0xB )
    {
      v18 = *(_QWORD *)(v16 + 16LL * v15);
      if ( v18 )
        v10 = *(_QWORD *)(v18 + 16);
    }
  }
  if ( v36 || v10 )
  {
    if ( !v10 )
      v10 = *((_QWORD *)v36 + 2);
    _m_prefetchw((const void *)(v10 + 64));
    v19 = *(_QWORD *)(v10 + 64);
    do
    {
      if ( !v19 )
        goto LABEL_14;
      v20 = v19;
      v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 64), v19 + 1, v19);
    }
    while ( v20 != v19 );
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v42,
      (struct DXGDEVICE *)v10);
    v40[1] = a1;
    v41 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
    if ( *(_DWORD *)(a1 + 176) != 1 )
    {
      v23 = -1073741130;
LABEL_37:
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v42);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
      return (unsigned int)v23;
    }
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, v10, 2, v22, 0);
    v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
    if ( v23 < 0 )
    {
LABEL_36:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
      goto LABEL_37;
    }
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v24);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v38, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v38);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v14 + 208));
    if ( v15 < *((_DWORD *)v14 + 62)
      && (v26 = *((_QWORD *)v14 + 29),
          v27 = *(_DWORD *)(v26 + 16LL * v15 + 8),
          ((a7 >> 25) & 0x60) == (*(_BYTE *)(v26 + 16LL * v15 + 8) & 0x60))
      && (v27 & 0x2000) == 0
      && (v27 & 0x1F) == 0xB )
    {
      v28 = *(_QWORD *)(v26 + 16LL * v15);
    }
    else
    {
      v28 = 0LL;
    }
    ExReleasePushLockSharedEx((char *)v14 + 208, 0LL);
    KeLeaveCriticalRegion();
    v29 = v36;
    if ( v28 )
    {
      if ( *(_QWORD *)(v28 + 16) != v10 )
      {
LABEL_26:
        v23 = -1073741811;
LABEL_35:
        DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v38);
        goto LABEL_36;
      }
    }
    else if ( !v36 )
    {
      goto LABEL_26;
    }
    v37[0] = 0LL;
    v30 = *(_QWORD *)(a1 + 2464);
    v37[1] = (struct VIDSCH_SUBMIT_DATA_BASE *)v30;
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v37);
    v31 = v37[0];
    if ( v37[0] )
    {
      *((_DWORD *)v37[0] + 29) = -1;
      *(_DWORD *)v31 = a3 & 0x20 | *(_DWORD *)v31 & 0xFFFFFFDF | 0x40000;
      *((_QWORD *)v31 + 12) = a4;
      *((_QWORD *)v31 + 13) = a5;
      *((_QWORD *)v31 + 3) = a6;
      *((_QWORD *)v31 + 61) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 80) + 216LL) + 88LL);
      if ( v29 )
      {
        v32 = DXGCONTEXT::SubmitCommandToImplicitQueue(v29, v31);
      }
      else
      {
        VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                             *(DXGSYNCOBJECT **)(v28 + 32),
                             *(struct ADAPTER_RENDER **)(*(_QWORD *)(v28 + 16) + 16LL));
        v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(v30 + 520) + 8LL)
                                                                                       + 1024LL))(
                v35,
                *(_QWORD *)(v34 + 616),
                VidSchSyncObject);
      }
      v23 = v32;
    }
    else
    {
      v23 = -1073741801;
    }
    CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v37);
    goto LABEL_35;
  }
LABEL_14:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v39);
  return 3221225485LL;
}
