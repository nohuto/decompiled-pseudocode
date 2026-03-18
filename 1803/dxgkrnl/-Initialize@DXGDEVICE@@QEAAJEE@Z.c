/*
 * XREFs of ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00F0990
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00A5C30 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ?VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C0006BF4 (-VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?VidMmInitDevice@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C0006C78 (-VidMmInitDevice@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00153C4 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     McTemplateK0ppqpttq @ 0x1C002F9E0 (McTemplateK0ppqpttq.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C00975C4 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C00A5290 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00F7E84 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCountedBuffer@@@Z @ 0x1C0182290 (-VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCo.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::Initialize(DXGDEVICE *this, __int64 a2, unsigned __int8 a3)
{
  char v4; // r14
  struct _KTHREAD **Current; // rax
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // r8d
  struct _ERESOURCE *v15; // rax
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
  ADAPTER_RENDER *v31; // r8
  __int64 v32; // rcx
  _QWORD *v33; // rax
  int v34; // edx
  int v35; // ecx
  int v36; // eax
  unsigned int v37; // r8d
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rsi
  unsigned __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  int v49; // ecx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _DWORD *v54; // rax
  __int64 v55; // rcx
  unsigned int HostProcess; // edx
  __int64 v57; // rcx
  __int64 v58; // rax
  unsigned int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rax
  _QWORD v62[3]; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v63[24]; // [rsp+70h] [rbp+Fh] BYREF
  _DXGKARG_CREATEDEVICE v64; // [rsp+88h] [rbp+27h] BYREF

  v4 = a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this, a2);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v63, Current);
  v7 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)this + 5) + 232LL), (__int64)this, 3, 0, 0);
  *((_DWORD *)this + 83) = v7;
  v10 = v7;
  if ( !v7 )
  {
    v50 = WdLogNewEntry5_WdWarning(v8, 0LL, v9);
    *(_QWORD *)(v50 + 24) = this;
    *(_QWORD *)(v50 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v50);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v63);
    return 3221225495LL;
  }
  v11 = *((_QWORD *)this + 5);
  v12 = (v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *(_DWORD *)(v11 + 248) )
  {
    v13 = *(_QWORD *)(v11 + 232);
    v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
    if ( ((v10 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60) && (v14 & 0x2000) == 0 && (v14 & 0x1F) != 0 )
      *(_DWORD *)(v13 + 16 * (((unsigned __int64)v10 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v63);
  v15 = (struct _ERESOURCE *)operator new[](0x68uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 13) = v15;
  if ( !v15 )
  {
LABEL_46:
    v52 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v52 + 24) = this;
    *(_QWORD *)(v52 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v52);
    return 3221225495LL;
  }
  v19 = ExInitializeResourceLite(v15);
  v23 = v19;
  if ( v19 < 0 )
    goto LABEL_47;
  if ( (*((_BYTE *)this + 1709) & 1) == 0 )
  {
    v24 = (struct _KEVENT *)operator new[](0x18uLL, 0x4B677844u, (POOL_TYPE)512);
    *((_QWORD *)this + 215) = v24;
    if ( v24 )
    {
      KeInitializeEvent(v24, NotificationEvent, 1u);
      memset(&v64, 0, sizeof(v64));
      v25 = *((_QWORD *)this + 2);
      v64.hDevice = this;
      if ( (*(_DWORD *)(*(_QWORD *)(v25 + 16) + 1832LL) & 1) != 0 )
      {
        if ( *((_DWORD *)this + 82) == 2 )
          v64.Flags.Value |= 2u;
      }
      else
      {
        v64.pInfo = (DXGK_DEVICEINFO *)((char *)this + 440);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v25 + 16) + 300LL) & 0x10) != 0 )
      {
        v49 = a3 << 31;
        a3 = 1;
        v64.Flags.Value = v64.Flags.Value & 0x7FFFFFFF | v49;
      }
      *((_BYTE *)this + 1705) = v4;
      *((_BYTE *)this + 1706) = a3;
      Device = VIDMM_EXPORT::VidMmCreateDevice(
                 *(VIDMM_EXPORT **)(v25 + 544),
                 *(struct VIDMM_GLOBAL **)(v25 + 552),
                 this);
      *((_QWORD *)this + 76) = Device;
      v16 = Device;
      if ( Device )
      {
        result = VIDMM_EXPORT::VidMmInitDevice(*(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL), Device);
        if ( (int)result < 0 )
          return result;
        LODWORD(v23) = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2), 1);
        if ( (int)v23 < 0 )
          goto LABEL_48;
        v31 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        *((_BYTE *)this + 1710) = 1;
        v32 = *((_QWORD *)v31 + 2);
        if ( (*(_DWORD *)(v32 + 1836) & 0x80u) != 0 )
        {
          v64.Pasid = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL)
                                              + 8LL * *(unsigned int *)(v32 + 200))
                                  + 8LL);
          v32 = *((_QWORD *)v31 + 2);
        }
        if ( (*(_DWORD *)(v32 + 1836) & 0x40) != 0 )
        {
          v33 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 5) + 48LL) + 8LL * *(unsigned int *)(v32 + 200));
          if ( v33 )
            v33 = (_QWORD *)v33[2];
          v64.hKmdProcess = v33;
        }
        LODWORD(v23) = ADAPTER_RENDER::DdiCreateDevice(v31, &v64, (__int64)v31);
        if ( (int)v23 < 0 )
        {
LABEL_48:
          v53 = WdLogNewEntry5_WdWarning(v29, v28, v30);
          *(_QWORD *)(v53 + 24) = this;
          goto LABEL_49;
        }
        v34 = *((_DWORD *)this + 82);
        v35 = 0;
        *((_QWORD *)this + 54) = v64.hDevice;
        v62[0] = 0LL;
        v62[1] = 0LL;
        if ( v34 == 2 )
          v35 = 8;
        v36 = 0;
        if ( v34 == 1 )
          v36 = 32;
        v37 = v36 | v62[0] & 0xFFFFFFD1 | v35 & 0xFFFFFFDF | (2 * (v4 & 1 | (2 * (a3 & 1))));
        v62[2] = *((_QWORD *)this + 43);
        v38 = *((_QWORD *)this + 2);
        LODWORD(v62[0]) = v37;
        v39 = (*(__int64 (__fastcall **)(DXGDEVICE *, _QWORD *, char *))(*(_QWORD *)(*(_QWORD *)(v38 + 520) + 8LL)
                                                                       + 112LL))(
                this,
                v62,
                (char *)this + 616);
        v23 = v39;
        if ( v39 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL) + 1080LL))(
            *((_QWORD *)this + 76),
            *((_QWORD *)this + 77));
          goto LABEL_32;
        }
LABEL_47:
        v53 = WdLogNewEntry5_WdWarning(v21, v20, v22);
        *(_QWORD *)(v53 + 24) = this;
        *(_QWORD *)(v53 + 32) = v23;
LABEL_49:
        WdLogEvent5_WdWarning(v53);
        return (unsigned int)v23;
      }
    }
    goto LABEL_46;
  }
  v54 = operator new(0xCuLL, 0x4B677844u, 1, (POOL_TYPE)512);
  *((_QWORD *)this + 43) = v54;
  if ( !v54 )
  {
    v51 = WdLogNewEntry5_WdLowResource(v55);
    *(_QWORD *)(v51 + 24) = 992LL;
    WdLogEvent5_WdLowResource(v51);
    return 3221225495LL;
  }
  *v54 = 4;
  v54[1] = 1;
  *(_DWORD *)(*((_QWORD *)this + 43) + 8LL) = 0;
  HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
  if ( !HostProcess )
  {
    v58 = WdLogNewEntry5_WdError(v57);
    *(_QWORD *)(v58 + 24) = -1073741823LL;
LABEL_53:
    WdLogEvent5_WdError(v58);
    return 3221225473LL;
  }
  v59 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateDevice(
          (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4080LL),
          HostProcess,
          *(struct _D3DKMT_CREATEDEVICEFLAGS *)((char *)this + 352),
          *((_DWORD *)this + 82) == 2,
          *((struct CRefCountedBuffer **)this + 43));
  *((_DWORD *)this + 84) = v59;
  if ( !v59 )
  {
    v58 = WdLogNewEntry5_WdError(v60);
    *(_QWORD *)(v58 + 24) = 1013LL;
    goto LABEL_53;
  }
LABEL_32:
  v40 = *((_QWORD *)this + 5);
  v41 = *((unsigned int *)this + 83);
  *((_DWORD *)this + 106) = 1;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v40 + 208));
  v42 = ((unsigned int)v41 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v42 < *(_DWORD *)(v40 + 248) )
  {
    v43 = *(_QWORD *)(v40 + 232);
    v44 = ((unsigned int)v41 >> 25) & 0x60;
    if ( (((unsigned int)v41 >> 25) & 0x60) == (*(_BYTE *)(v43 + 16 * v42 + 8) & 0x60)
      && (*(_DWORD *)(v43 + 16 * v42 + 8) & 0x1F) != 0 )
    {
      v45 = 2 * ((v41 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v43 + 8 * v45 + 8) & 0x2000) == 0 )
      {
        v61 = WdLogNewEntry5_WdAssertion(v44);
        *(_QWORD *)(v61 + 24) = 215LL;
        WdLogEvent5_WdAssertion(v61);
        v43 = *(_QWORD *)(v40 + 232);
      }
      *(_DWORD *)(v43 + 8 * v45 + 8) &= ~0x2000u;
    }
  }
  *(_QWORD *)(v40 + 216) = 0LL;
  ExReleasePushLockExclusiveEx(v40 + 208, 0LL);
  KeLeaveCriticalRegion();
  v48 = (_QWORD *)WdLogNewEntry5_WdEvent(v47, v46);
  v48[3] = this;
  v48[4] = *((unsigned int *)this + 83);
  v48[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v48);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqpttq(
        *((unsigned __int8 *)this + 1706),
        &EventCreateDevice,
        *((_QWORD *)this + 2),
        *(_QWORD *)(*((_QWORD *)this + 5) + 64LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        *((_DWORD *)this + 82),
        this,
        *((unsigned __int8 *)this + 1705),
        *((unsigned __int8 *)this + 1706),
        *((_DWORD *)this + 83));
  }
  return 0LL;
}
