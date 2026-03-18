/*
 * XREFs of ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C009C23C
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C00830DC (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002C70 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002DE4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0003418 (-VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?VidMmInitDevice@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C000349C (-VidMmInitDevice@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0ppqpttq @ 0x1C0026108 (McTemplateK0ppqpttq.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C007A79C (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C008211C (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C008A02C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@E@Z @ 0x1C0195B74 (-VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@E@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::Initialize(DXGDEVICE *this, char a2, unsigned __int8 a3)
{
  struct DXGPROCESS *Current; // rax
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // r8d
  struct _ERESOURCE *PoolWithTag; // rax
  struct VIDMM_DEVICE *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdi
  struct _KEVENT *v24; // rax
  __int64 v25; // r8
  struct VIDMM_DEVICE *Device; // rax
  __int64 result; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  ADAPTER_RENDER *v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // edx
  int v35; // ecx
  int v36; // eax
  unsigned int v37; // r8d
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rsi
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rdi
  _QWORD *v46; // rax
  int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  DXGPROCESS *v51; // rcx
  unsigned int HostProcess; // edx
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rax
  _QWORD v58[2]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v59[24]; // [rsp+60h] [rbp-9h] BYREF
  _DXGKARG_CREATEDEVICE v60; // [rsp+78h] [rbp+Fh] BYREF

  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v59, Current);
  v7 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)this + 5) + 224LL), (__int64)this, 3, 0, 0);
  *((_DWORD *)this + 83) = v7;
  v10 = v7;
  if ( !v7 )
  {
    v48 = WdLogNewEntry5_WdWarning(v8, 0LL, v9);
    *(_QWORD *)(v48 + 24) = this;
    *(_QWORD *)(v48 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v48);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v59);
    return 3221225495LL;
  }
  v11 = *((_QWORD *)this + 5);
  v12 = (v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *(_DWORD *)(v11 + 240) )
  {
    v13 = *(_QWORD *)(v11 + 224);
    v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
    if ( ((v10 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
      *(_DWORD *)(v13 + 16 * (((unsigned __int64)v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v59);
  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x4B677844u);
  *((_QWORD *)this + 13) = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_42:
    v49 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v49 + 24) = this;
    *(_QWORD *)(v49 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v49);
    return 3221225495LL;
  }
  v19 = ExInitializeResourceLite(PoolWithTag);
  v23 = v19;
  if ( v19 < 0 )
    goto LABEL_44;
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 185LL) )
  {
    v24 = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
    *((_QWORD *)this + 213) = v24;
    if ( v24 )
    {
      KeInitializeEvent(v24, NotificationEvent, 1u);
      memset(&v60, 0, sizeof(v60));
      v25 = *((_QWORD *)this + 2);
      v60.hDevice = this;
      if ( (*(_DWORD *)(*(_QWORD *)(v25 + 16) + 1696LL) & 1) != 0 )
      {
        if ( *((_DWORD *)this + 82) == 2 )
          v60.Flags.Value |= 2u;
      }
      else
      {
        v60.pInfo = (DXGK_DEVICEINFO *)((char *)this + 424);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v25 + 16) + 300LL) & 0x10) != 0 )
      {
        v47 = a3 << 31;
        a3 = 1;
        v60.Flags.Value = v60.Flags.Value & 0x7FFFFFFF | v47;
      }
      *((_BYTE *)this + 1689) = a2;
      *((_BYTE *)this + 1690) = a3;
      Device = VIDMM_EXPORT::VidMmCreateDevice(
                 *(VIDMM_EXPORT **)(v25 + 528),
                 *(struct VIDMM_GLOBAL **)(v25 + 536),
                 this);
      *((_QWORD *)this + 74) = Device;
      v16 = Device;
      if ( Device )
      {
        result = VIDMM_EXPORT::VidMmInitDevice(*(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL), Device);
        if ( (int)result < 0 )
          return result;
        LODWORD(v23) = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2), 1);
        if ( (int)v23 < 0 )
          goto LABEL_45;
        v31 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        *((_BYTE *)this + 1694) = 1;
        v32 = *((_QWORD *)v31 + 2);
        if ( (*(_DWORD *)(v32 + 1700) & 0x80u) != 0 )
          v60.Pasid = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 40LL)
                                              + 8LL * *(unsigned int *)(v32 + 200))
                                  + 8LL);
        v33 = *((_QWORD *)v31 + 2);
        if ( (*(_DWORD *)(v33 + 1700) & 0x40) != 0 )
        {
          v30 = *(unsigned int *)(v33 + 200);
          v60.hKmdProcess = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 40LL) + 8 * v30) + 16LL);
        }
        LODWORD(v23) = ADAPTER_RENDER::DdiCreateDevice(v31, &v60, v30);
        if ( (int)v23 < 0 )
        {
LABEL_45:
          v50 = WdLogNewEntry5_WdWarning(v29, v28, v30);
          *(_QWORD *)(v50 + 24) = this;
          goto LABEL_46;
        }
        v34 = *((_DWORD *)this + 82);
        v35 = 0;
        *((_QWORD *)this + 52) = v60.hDevice;
        v58[0] = 0LL;
        v58[1] = 0LL;
        if ( v34 == 2 )
          v35 = 8;
        v36 = 0;
        if ( v34 == 1 )
          v36 = 32;
        v37 = v36 | v58[0] & 0xFFFFFFD1 | v35 & 0xFFFFFFDF | (2 * (a2 & 1 | (2 * (a3 & 1))));
        v38 = *((_QWORD *)this + 2);
        LODWORD(v58[0]) = v37;
        v39 = (*(__int64 (__fastcall **)(DXGDEVICE *, _QWORD *, char *))(*(_QWORD *)(*(_QWORD *)(v38 + 504) + 8LL)
                                                                       + 112LL))(
                this,
                v58,
                (char *)this + 600);
        v23 = v39;
        if ( v39 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 528LL) + 8LL) + 1064LL))(
            *((_QWORD *)this + 74),
            *((_QWORD *)this + 75));
          goto LABEL_30;
        }
LABEL_44:
        v50 = WdLogNewEntry5_WdWarning(v21, v20, v22);
        *(_QWORD *)(v50 + 24) = this;
        *(_QWORD *)(v50 + 32) = v23;
LABEL_46:
        WdLogEvent5_WdWarning(v50);
        return (unsigned int)v23;
      }
    }
    goto LABEL_42;
  }
  v51 = (DXGPROCESS *)*((_QWORD *)this + 5);
  *((_BYTE *)this + 1693) = 1;
  HostProcess = DXGPROCESS::GetHostProcess(v51);
  if ( !HostProcess )
  {
    v54 = WdLogNewEntry5_WdError(v53);
    *(_QWORD *)(v54 + 24) = -1073741823LL;
LABEL_49:
    WdLogEvent5_WdError(v54);
    return 3221225473LL;
  }
  v55 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateDevice(
          (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 3888LL),
          HostProcess,
          *(struct _D3DKMT_CREATEDEVICEFLAGS *)((char *)this + 340),
          *((_DWORD *)this + 82) == 2);
  *((_DWORD *)this + 84) = v55;
  if ( !v55 )
  {
    v54 = WdLogNewEntry5_WdError(v56);
    *(_QWORD *)(v54 + 24) = 953LL;
    goto LABEL_49;
  }
LABEL_30:
  v40 = *((_QWORD *)this + 5);
  v41 = *((unsigned int *)this + 83);
  *((_DWORD *)this + 102) = 1;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v40 + 200));
  v42 = ((unsigned int)v41 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v42 < *(_DWORD *)(v40 + 240) )
  {
    v43 = *(_QWORD *)(v40 + 224);
    v44 = ((unsigned int)v41 >> 25) & 0x60;
    if ( (((unsigned int)v41 >> 25) & 0x60) == (*(_BYTE *)(v43 + 16 * v42 + 8) & 0x60)
      && (*(_DWORD *)(v43 + 16 * v42 + 8) & 0x1F) != 0 )
    {
      v45 = 2 * ((v41 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v43 + 8 * v45 + 8) & 0x2000) == 0 )
      {
        v57 = WdLogNewEntry5_WdAssertion(v44);
        *(_QWORD *)(v57 + 24) = 191LL;
        WdLogEvent5_WdAssertion(v57);
      }
      *(_DWORD *)(*(_QWORD *)(v40 + 224) + 8 * v45 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v40 + 208) = 0LL;
  ExReleasePushLockExclusiveEx(v40 + 200, 0LL);
  KeLeaveCriticalRegion();
  v46 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v46[3] = this;
  v46[4] = *((unsigned int *)this + 83);
  v46[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v46);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqpttq(
        *((unsigned __int8 *)this + 1690),
        &EventCreateDevice,
        *((_QWORD *)this + 2),
        *(_QWORD *)(*((_QWORD *)this + 5) + 56LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        *((_DWORD *)this + 82),
        this,
        *((unsigned __int8 *)this + 1689),
        *((unsigned __int8 *)this + 1690),
        *((_DWORD *)this + 83));
  }
  return 0LL;
}
