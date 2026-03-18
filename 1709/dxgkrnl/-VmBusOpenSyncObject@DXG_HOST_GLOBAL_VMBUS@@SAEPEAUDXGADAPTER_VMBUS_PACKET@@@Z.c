/*
 * XREFs of ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01944A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0003F60 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0025048 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C008AB70 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016F7BC (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpenSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *v1; // rbx
  unsigned int Value; // edx
  __int64 v4; // rcx
  struct ADAPTER_RENDER **v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // r15
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  struct DXGGLOBAL *v20; // rax
  __int64 v21; // rcx
  PERESOURCE *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  struct DXGPROCESS *Current; // rdi
  unsigned int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rax
  struct DXGDEVICE *v35; // [rsp+68h] [rbp-A0h] BYREF
  void *v36; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v37[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v38[16]; // [rsp+88h] [rbp-80h] BYREF
  struct DXGADAPTERSYNCOBJECT *v39; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v40[16]; // [rsp+A0h] [rbp-68h] BYREF
  struct DXGDEVICE *v41; // [rsp+B0h] [rbp-58h] BYREF
  struct DXGADAPTERSYNCOBJECT *v42; // [rsp+B8h] [rbp-50h] BYREF
  struct DXGSYNCOBJECT *v43; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v44[8]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v45[32]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v46[56]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v47[2]; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v48; // [rsp+130h] [rbp+28h] BYREF
  void *v49; // [rsp+138h] [rbp+30h]

  v1 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)*((_QWORD *)a1 + 9);
  v1[9].Value &= ~2u;
  *(_QWORD *)v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  Value = v1[6].Value;
  if ( Value )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v35, Value, *((struct _KTHREAD ***)a1 + 6), &v41);
    v5 = (struct ADAPTER_RENDER **)v41;
    if ( v41 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37, v41);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v44, (__int64)v5, 0, v7, 0);
      v47[1] = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v44);
      if ( (v47[1] & 0x80000000) == 0 )
      {
        Global = DXGGLOBAL::GetGlobal(v8);
        DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v38, Global);
        DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v38);
        v10 = *((_QWORD *)a1 + 7);
        v11 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v1[7].Value;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v10 + 200));
        v12 = (*(unsigned int *)&v11 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v12 >= *(_DWORD *)(v10 + 240) )
          goto LABEL_16;
        v13 = *(_QWORD *)(v10 + 224);
        v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
        if ( ((*(unsigned int *)&v11 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
          && (v14 & 0x2000) == 0
          && (v14 & 0x1F) != 0
          && (*(_BYTE *)(v13 + 16LL * (unsigned int)v12 + 8) & 0x1F) == 0xB )
        {
          v15 = *(_QWORD *)(v13 + 16LL * (unsigned int)v12);
        }
        else
        {
LABEL_16:
          v15 = 0LL;
        }
        ExReleasePushLockSharedEx(v10 + 200, 0LL);
        KeLeaveCriticalRegion();
        if ( v15 )
        {
          v47[1] = DXGSYNCOBJECT::Open(
                     *(DXGSYNCOBJECT **)(v15 + 32),
                     v5[2],
                     (struct DXGDEVICE *)v5,
                     0LL,
                     v47,
                     &v36,
                     &v48,
                     v1[8].Value,
                     &v39,
                     1,
                     v1[9]);
          if ( (v47[1] & 0x80000000) == 0 )
          {
            v49 = v36;
          }
          else
          {
            v19 = WdLogNewEntry5_WdError(v18);
            *(_QWORD *)(v19 + 24) = v1[7].Value;
            *(_QWORD *)(v19 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v19);
          }
        }
        else
        {
          v17 = WdLogNewEntry5_WdError(v16);
          *(_QWORD *)(v17 + 24) = v1[7].Value;
          *(_QWORD *)(v17 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v17);
          v47[1] = -1073741811;
        }
        if ( v38[8] )
          DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v38);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v46);
      COREACCESS::~COREACCESS((COREACCESS *)v45);
      if ( v37[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v37);
    }
    else
    {
      v6 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v6 + 24) = v1[6].Value;
      *(_QWORD *)(v6 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v6);
      v47[1] = -1073741811;
    }
    if ( v35 && _InterlockedExchangeAdd64((volatile signed __int64 *)v35 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v35 + 2), v35);
  }
  else
  {
    v20 = DXGGLOBAL::GetGlobal((__int64)a1);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v40, v20);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v40);
    v22 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v21);
    v47[1] = DXGGLOBAL::OpenSyncObject(v22, v1[7].Value, &v43, v47, &v42);
    if ( (v47[1] & 0x80000000) == 0 )
    {
      v26 = v47[0];
      Current = DXGPROCESS::GetCurrent(v24, v23);
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 200));
      v28 = ((unsigned int)v26 >> 6) & 0xFFFFFF;
      if ( v28 < *((_DWORD *)Current + 60) )
      {
        v29 = *((_QWORD *)Current + 28);
        v30 = v28;
        v31 = ((unsigned int)v26 >> 25) & 0x60;
        if ( (((unsigned int)v26 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v30 + 8) & 0x60)
          && (*(_DWORD *)(v29 + 16 * v30 + 8) & 0x1F) != 0 )
        {
          v32 = 2 * ((v26 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v29 + 8 * v32 + 8) & 0x2000) == 0 )
          {
            v33 = WdLogNewEntry5_WdAssertion(v31);
            *(_QWORD *)(v33 + 24) = 191LL;
            WdLogEvent5_WdAssertion(v33);
          }
          *(_DWORD *)(*((_QWORD *)Current + 28) + 8 * v32 + 8) &= ~0x2000u;
        }
      }
      *((_QWORD *)Current + 26) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 200, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v25 + 24) = v1[7].Value;
      *(_QWORD *)(v25 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v25);
    }
    if ( v40[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v40);
  }
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v47, 0x18u);
  return 1;
}
