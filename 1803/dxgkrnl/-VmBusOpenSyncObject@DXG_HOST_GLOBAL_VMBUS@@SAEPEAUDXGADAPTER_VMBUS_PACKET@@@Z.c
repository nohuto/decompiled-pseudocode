/*
 * XREFs of ?VmBusOpenSyncObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01808D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D394 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_OPENADAPTER@@@@YAPEAUDXGKVMB_COMMAND_OPENADAPTER@@PEAUDXG.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C002DC00 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00F8E90 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0145FF8 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusOpenSyncObject(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *v4; // rbx
  unsigned int v5; // edx
  __int64 v6; // rcx
  struct ADAPTER_RENDER **v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  PERESOURCE *v11; // rax
  _DWORD *v12; // rdi
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E Value; // r15d
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rdi
  _DWORD *v18; // rdi
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E v19; // r15d
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // ecx
  DXGSYNCOBJECT *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  PERESOURCE *Global; // rax
  __int64 v29; // rcx
  PERESOURCE *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  struct DXGPROCESS *Current; // rdi
  unsigned int v36; // ecx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rax
  struct DXGDEVICE *v43; // [rsp+68h] [rbp-A0h] BYREF
  void *v44; // [rsp+70h] [rbp-98h] BYREF
  struct DXGADAPTERSYNCOBJECT *v45; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v46[2]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v47[16]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v48[16]; // [rsp+A0h] [rbp-68h] BYREF
  struct DXGDEVICE *v49; // [rsp+B0h] [rbp-58h] BYREF
  struct DXGADAPTERSYNCOBJECT *v50; // [rsp+B8h] [rbp-50h] BYREF
  struct DXGSYNCOBJECT *v51; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v52[8]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v53[32]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v54[56]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned int v55[2]; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v56; // [rsp+130h] [rbp+28h] BYREF
  void *v57; // [rsp+138h] [rbp+30h]

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_OPENADAPTER>((__int64)a1);
  v4 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 36) &= ~2u;
    *(_QWORD *)v55 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v5 = *(_DWORD *)(v2 + 24);
    if ( !v5 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v3);
      DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v48, Global);
      DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v48);
      v30 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v29);
      v55[1] = DXGGLOBAL::OpenSyncObject(v30, v4[7].Value, &v51, v55, &v50);
      if ( (v55[1] & 0x80000000) == 0 )
      {
        v34 = v55[0];
        Current = DXGPROCESS::GetCurrent(v32, v31);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 208));
        v36 = ((unsigned int)v34 >> 6) & 0xFFFFFF;
        if ( v36 < *((_DWORD *)Current + 62) )
        {
          v37 = *((_QWORD *)Current + 29);
          v38 = v36;
          v39 = ((unsigned int)v34 >> 25) & 0x60;
          if ( (((unsigned int)v34 >> 25) & 0x60) == (*(_BYTE *)(v37 + 16 * v38 + 8) & 0x60)
            && (*(_DWORD *)(v37 + 16 * v38 + 8) & 0x1F) != 0 )
          {
            v40 = 2 * ((v34 >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v37 + 8 * v40 + 8) & 0x2000) == 0 )
            {
              v41 = WdLogNewEntry5_WdAssertion(v39);
              *(_QWORD *)(v41 + 24) = 215LL;
              WdLogEvent5_WdAssertion(v41);
              v37 = *((_QWORD *)Current + 29);
            }
            *(_DWORD *)(v37 + 8 * v40 + 8) &= ~0x2000u;
          }
        }
        *((_QWORD *)Current + 27) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 208, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v33 = WdLogNewEntry5_WdError(v32);
        *(_QWORD *)(v33 + 24) = v4[7].Value;
        *(_QWORD *)(v33 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v33);
      }
      if ( v48[8] )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v48);
      goto LABEL_44;
    }
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43, v5, *((struct _KTHREAD ***)a1 + 6), &v49);
    v7 = (struct ADAPTER_RENDER **)v49;
    if ( !v49 )
    {
      v8 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v8 + 24) = v4[6].Value;
      *(_QWORD *)(v8 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v8);
      v55[1] = -1073741811;
LABEL_5:
      if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
LABEL_44:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 8), v55, 0x18u);
      LOBYTE(v2) = 1;
      return v2;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46, v49);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v52, (__int64)v7, 0, v9, 0);
    v55[1] = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v52);
    if ( (v55[1] & 0x80000000) != 0 )
    {
LABEL_9:
      COREACCESS::~COREACCESS((COREACCESS *)v54);
      COREACCESS::~COREACCESS((COREACCESS *)v53);
      if ( v46[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v46);
      goto LABEL_5;
    }
    v11 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v10);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v47, v11);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v47);
    v12 = (_DWORD *)*((_QWORD *)a1 + 7);
    Value = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v4[7].Value;
    v45 = (struct DXGADAPTERSYNCOBJECT *)v12;
    v44 = v12 + 52;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v12 + 52));
    v14 = (*(unsigned int *)&Value >> 6) & 0xFFFFFF;
    if ( v14 < v12[62]
      && (v15 = *((_QWORD *)v45 + 29),
          v16 = *(_DWORD *)(v15 + 16LL * v14 + 8),
          ((*(unsigned int *)&Value >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60))
      && (v16 & 0x2000) == 0
      && (v16 & 0x1F) == 0xB )
    {
      v17 = *(_QWORD *)(v15 + 16LL * v14);
    }
    else
    {
      v17 = 0LL;
    }
    ExReleasePushLockSharedEx(v44, 0LL);
    KeLeaveCriticalRegion();
    if ( v17 )
    {
      v23 = *(DXGSYNCOBJECT **)(v17 + 32);
    }
    else
    {
      v18 = (_DWORD *)*((_QWORD *)a1 + 7);
      v19 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v4[7].Value;
      v44 = v18;
      v45 = (struct DXGADAPTERSYNCOBJECT *)(v18 + 52);
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v18 + 52));
      v20 = (*(unsigned int *)&v19 >> 6) & 0xFFFFFF;
      if ( v20 < v18[62]
        && (v21 = *((_QWORD *)v44 + 29),
            v22 = *(_DWORD *)(v21 + 16LL * v20 + 8),
            ((*(unsigned int *)&v19 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0x60))
        && (v22 & 0x2000) == 0
        && (v22 & 0x1F) == 8 )
      {
        v23 = *(DXGSYNCOBJECT **)(v21 + 16LL * v20);
      }
      else
      {
        v23 = 0LL;
      }
      ExReleasePushLockSharedEx(v45, 0LL);
      KeLeaveCriticalRegion();
      if ( !v23 )
      {
        v25 = WdLogNewEntry5_WdError(v24);
        *(_QWORD *)(v25 + 24) = v4[7].Value;
        *(_QWORD *)(v25 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v25);
        v55[1] = -1073741811;
        goto LABEL_26;
      }
    }
    v55[1] = DXGSYNCOBJECT::Open(v23, v7[2], (struct DXGDEVICE *)v7, 0LL, v55, &v44, &v56, v4[8].Value, &v45, 1, v4[9]);
    if ( (v55[1] & 0x80000000) == 0 )
    {
      v57 = v44;
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v26);
      *(_QWORD *)(v27 + 24) = v4[7].Value;
      *(_QWORD *)(v27 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v27);
    }
LABEL_26:
    if ( v47[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v47);
    goto LABEL_9;
  }
  return v2;
}
