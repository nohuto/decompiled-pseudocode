/*
 * XREFs of ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@I@Z @ 0x1C01900A8
 * Callers:
 *     ?VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C019A130 (-VmBusSubmitPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008E24 (-GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0008EE0 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0008F30 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C008AAE4 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::SubmitPresentHistoryTokenFromVm(
        __int64 a1,
        unsigned int a2,
        struct _SLIST_ENTRY *a3,
        struct _SLIST_ENTRY *a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGPROCESS *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // rdi
  DXGCONTEXT *v23; // r14
  __int64 v24; // r13
  __int64 v25; // r9
  struct _SLIST_ENTRY *v26; // rsi
  struct _VIDSCH_CONTEXT *ImplicitHwQueue; // rax
  __int64 v28; // r8
  int v29; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  __int64 v31; // r9
  struct _SLIST_ENTRY *v33[2]; // [rsp+38h] [rbp-81h] BYREF
  _BYTE v34[8]; // [rsp+48h] [rbp-71h] BYREF
  __int64 v35; // [rsp+50h] [rbp-69h]
  char v36; // [rsp+58h] [rbp-61h]
  _BYTE v37[24]; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v38[8]; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v39[32]; // [rsp+80h] [rbp-39h] BYREF
  _BYTE v40[56]; // [rsp+A0h] [rbp-19h] BYREF
  DXGCONTEXT *v41; // [rsp+108h] [rbp+4Fh] BYREF

  v35 = a1;
  v36 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  if ( *(_DWORD *)(a1 + 176) != 1 )
  {
    v13 = -1073741130;
    goto LABEL_27;
  }
  Current = DXGPROCESS::GetCurrent(v12, v11);
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v37, a2, Current, &v41, 0);
  v15 = 0LL;
  v18 = DXGPROCESS::GetCurrent(v17, v16);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v18 + 200));
  v19 = (a7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v19 < *((_DWORD *)v18 + 60)
    && (v20 = *((_QWORD *)v18 + 28),
        v21 = *(_DWORD *)(v20 + 16 * v19 + 8),
        ((a7 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16 * v19 + 8) & 0x60))
    && (v21 & 0x2000) == 0
    && (v21 & 0x1F) != 0
    && (*(_BYTE *)(v20 + 16LL * (unsigned int)v19 + 8) & 0x1F) == 0xB )
  {
    v22 = *(_QWORD *)(v20 + 16LL * (unsigned int)v19);
  }
  else
  {
    v22 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)v18 + 200, 0LL);
  KeLeaveCriticalRegion();
  if ( v22 )
    v15 = *(_QWORD *)(v22 + 16);
  v23 = v41;
  if ( v41 )
  {
    if ( !v15 )
      v15 = *((_QWORD *)v41 + 2);
    goto LABEL_17;
  }
  if ( v15 )
  {
LABEL_17:
    v24 = *(_QWORD *)(a1 + 2312);
    v33[0] = 0LL;
    v33[1] = (struct _SLIST_ENTRY *)v24;
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v33);
    v26 = v33[0];
    if ( v33[0] )
    {
      HIDWORD(v33[0][7].Next) = -1;
      *((_QWORD *)&v26[6].Next + 1) = a5;
      *((_QWORD *)&v26[1].Next + 1) = a6;
      v26->Next = a3;
      v26[6].Next = a4;
      v26[27].Next = *(struct _SLIST_ENTRY **)(*(_QWORD *)(v15 + 80) + 120LL);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, v15, 2, v25, 0);
      v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v38);
      if ( v13 >= 0 )
      {
        if ( v23 )
        {
          ImplicitHwQueue = DXGCONTEXT::GetImplicitHwQueue(v23);
          v29 = (*(__int64 (__fastcall **)(struct _VIDSCH_CONTEXT *, struct _SLIST_ENTRY *))(*(_QWORD *)(v28 + 8) + 344LL))(
                  ImplicitHwQueue,
                  v26);
        }
        else
        {
          VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject(
                               *(DXGSYNCOBJECT **)(v22 + 32),
                               *(struct ADAPTER_RENDER **)(*(_QWORD *)(v22 + 16) + 16LL));
          v29 = (*(__int64 (__fastcall **)(struct _SLIST_ENTRY *, _QWORD, struct _VIDSCH_SYNC_OBJECT *))(*(_QWORD *)(*(_QWORD *)(v24 + 504) + 8LL) + 904LL))(
                  v26,
                  *(_QWORD *)(v31 + 600),
                  VidSchSyncObject);
        }
        v13 = v29;
      }
      COREACCESS::~COREACCESS((COREACCESS *)v40);
      COREACCESS::~COREACCESS((COREACCESS *)v39);
    }
    else
    {
      v13 = -1073741801;
    }
    CVidSchSubmitData::~CVidSchSubmitData(v33);
    goto LABEL_26;
  }
  v13 = -1073741811;
LABEL_26:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v37);
LABEL_27:
  if ( v36 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v34);
  return (unsigned int)v13;
}
