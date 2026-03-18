/*
 * XREFs of ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1C00C89B8
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU@@@Z @ 0x1C00CFB00 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0006F28 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C000DB8C (-VidMmCreateDevice@VIDMM_EXPORT@@QEAAPEAVVIDMM_DEVICE@@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z.c)
 *     ?VidMmInitDevice@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C000DC0C (-VidMmInitDevice@VIDMM_EXPORT@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?VmBusSendCreateDevice@DXGADAPTER@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@E@Z @ 0x1C002F5F8 (-VmBusSendCreateDevice@DXGADAPTER@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@E@Z.c)
 *     Template_ppqpttq @ 0x1C0034E3C (Template_ppqpttq.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0087F50 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C00CEA04 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00D5CC0 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXGDEVICE::Initialize(DXGDEVICE *this, char a2, unsigned __int8 a3)
{
  struct DXGPROCESS *Current; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // r8d
  struct _ERESOURCE *PoolWithTag; // rax
  struct VIDMM_DEVICE *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  NTSTATUS v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  struct _KEVENT *v29; // rax
  __int64 v30; // r8
  struct VIDMM_DEVICE *Device; // rax
  __int64 result; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  ADAPTER_RENDER *v37; // r9
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // edx
  int v41; // ecx
  int v42; // eax
  unsigned int v43; // r8d
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rsi
  unsigned __int64 v47; // rdi
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rdi
  __int64 v54; // rcx
  _QWORD *v55; // rax
  int v56; // ecx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  DXGPROCESS *v60; // rcx
  int HostProcess; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  _QWORD v68[2]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v69[24]; // [rsp+60h] [rbp-9h] BYREF
  _DXGKARG_CREATEDEVICE v70; // [rsp+78h] [rbp+Fh] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v69, Current, v7, v8);
  v9 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)this + 5) + 192LL), (__int64)this, 3LL, 0LL, 0);
  *((_DWORD *)this + 83) = v9;
  v13 = v9;
  if ( !v9 )
  {
    v57 = WdLogNewEntry5_WdWarning(v10, 0LL, v11, v12);
    *(_QWORD *)(v57 + 24) = this;
    *(_QWORD *)(v57 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v57);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v69);
    return 3221225495LL;
  }
  v14 = *((_QWORD *)this + 5);
  v15 = (v9 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *(_DWORD *)(v14 + 208) )
  {
    v16 = *(_QWORD *)(v14 + 192);
    v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
    if ( ((v13 >> 26) & 0x30) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x30) && (v17 & 0x1000) == 0 && (v17 & 0xF) != 0 )
      *(_DWORD *)(v16 + 16 * (((unsigned __int64)v13 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v69);
  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x4B677844u);
  *((_QWORD *)this + 13) = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_40:
    v58 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
    *(_QWORD *)(v58 + 24) = this;
    *(_QWORD *)(v58 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v58);
    return 3221225495LL;
  }
  v23 = ExInitializeResourceLite(PoolWithTag);
  v28 = v23;
  if ( v23 < 0 )
    goto LABEL_42;
  if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 186LL) )
  {
    v29 = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x18uLL, 0x4B677844u);
    *((_QWORD *)this + 229) = v29;
    if ( v29 )
    {
      KeInitializeEvent(v29, NotificationEvent, 1u);
      memset(&v70, 0, sizeof(v70));
      v30 = *((_QWORD *)this + 2);
      v70.hDevice = this;
      if ( (*(_DWORD *)(*(_QWORD *)(v30 + 16) + 1672LL) & 1) != 0 )
      {
        if ( *((_DWORD *)this + 82) == 2 )
          v70.Flags.Value |= 2u;
      }
      else
      {
        v70.pInfo = (DXGK_DEVICEINFO *)((char *)this + 424);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v30 + 16) + 300LL) & 0x10) != 0 )
      {
        v56 = a3 << 31;
        a3 = 1;
        v70.Flags.Value = v70.Flags.Value & 0x7FFFFFFF | v56;
      }
      *((_BYTE *)this + 1817) = a2;
      *((_BYTE *)this + 1818) = a3;
      Device = VIDMM_EXPORT::VidMmCreateDevice(
                 *(VIDMM_EXPORT **)(v30 + 432),
                 *(struct VIDMM_GLOBAL **)(v30 + 440),
                 this);
      *((_QWORD *)this + 74) = Device;
      v19 = Device;
      if ( Device )
      {
        result = VIDMM_EXPORT::VidMmInitDevice(*(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL), Device);
        if ( (int)result < 0 )
          return result;
        LODWORD(v28) = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2), 1);
        if ( (int)v28 < 0 )
          goto LABEL_43;
        v37 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        *((_BYTE *)this + 1822) = 1;
        v38 = *((_QWORD *)v37 + 2);
        if ( (*(_DWORD *)(v38 + 1676) & 0x80u) != 0 )
          v70.Pasid = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 40LL)
                                              + 8LL * *(unsigned int *)(v38 + 200))
                                  + 8LL);
        v39 = *((_QWORD *)v37 + 2);
        if ( (*(_DWORD *)(v39 + 1676) & 0x40) != 0 )
          v70.hKmdProcess = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 40LL)
                                                  + 8LL * *(unsigned int *)(v39 + 200))
                                      + 16LL);
        LODWORD(v28) = ADAPTER_RENDER::DdiCreateDevice(v37, &v70);
        if ( (int)v28 < 0 )
        {
LABEL_43:
          v59 = WdLogNewEntry5_WdWarning(v34, v33, v35, v36);
          *(_QWORD *)(v59 + 24) = this;
          goto LABEL_44;
        }
        v40 = *((_DWORD *)this + 82);
        v41 = 0;
        *((_QWORD *)this + 52) = v70.hDevice;
        v68[0] = 0LL;
        v68[1] = 0LL;
        if ( v40 == 2 )
          v41 = 8;
        v42 = 0;
        if ( v40 == 1 )
          v42 = 32;
        v43 = v42 | v68[0] & 0xFFFFFFD1 | v41 & 0xFFFFFFDF | (2 * (a2 & 1 | (2 * (a3 & 1))));
        v44 = *((_QWORD *)this + 2);
        LODWORD(v68[0]) = v43;
        v45 = (*(__int64 (__fastcall **)(DXGDEVICE *, _QWORD *, char *))(*(_QWORD *)(*(_QWORD *)(v44 + 408) + 8LL)
                                                                       + 112LL))(
                this,
                v68,
                (char *)this + 600);
        v28 = v45;
        if ( v45 >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 432LL) + 8LL) + 1064LL))(
            *((_QWORD *)this + 74),
            *((_QWORD *)this + 75));
          goto LABEL_30;
        }
LABEL_42:
        v59 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
        *(_QWORD *)(v59 + 24) = this;
        *(_QWORD *)(v59 + 32) = v28;
LABEL_44:
        WdLogEvent5_WdWarning(v59);
        return (unsigned int)v28;
      }
    }
    goto LABEL_40;
  }
  v60 = (DXGPROCESS *)*((_QWORD *)this + 5);
  *((_BYTE *)this + 1821) = 1;
  HostProcess = DXGPROCESS::GetHostProcess(v60);
  if ( !HostProcess )
  {
    v63 = WdLogNewEntry5_WdError(v62, 0LL);
    *(_QWORD *)(v63 + 24) = -1073741823LL;
LABEL_47:
    WdLogEvent5_WdError(v63);
    return 3221225473LL;
  }
  v64 = DXGADAPTER::VmBusSendCreateDevice(
          *(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL),
          HostProcess,
          *(struct _D3DKMT_CREATEDEVICEFLAGS *)((char *)this + 340),
          *((_DWORD *)this + 82) == 2);
  *((_DWORD *)this + 84) = v64;
  if ( !v64 )
  {
    v63 = WdLogNewEntry5_WdError(v66, v65);
    *(_QWORD *)(v63 + 24) = 959LL;
    goto LABEL_47;
  }
LABEL_30:
  v46 = *((_QWORD *)this + 5);
  v47 = *((unsigned int *)this + 83);
  *((_DWORD *)this + 102) = 1;
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v46 + 168));
  v49 = ((unsigned int)v47 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v49 < *(_DWORD *)(v46 + 208) )
  {
    v50 = *(_QWORD *)(v46 + 192);
    v51 = ((unsigned int)v47 >> 26) & 0x30;
    v52 = *(unsigned int *)(v50 + 16 * v49 + 8);
    if ( (((unsigned int)v47 >> 26) & 0x30) == (*(_BYTE *)(v50 + 16 * v49 + 8) & 0x30) && (v52 & 0xF) != 0 )
    {
      v53 = 2 * ((v47 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v50 + 8 * v53 + 8) & 0x1000) == 0 )
      {
        v67 = WdLogNewEntry5_WdAssertion(v51, v52, v50, v48);
        *(_QWORD *)(v67 + 24) = 190LL;
        WdLogEvent5_WdAssertion(v67);
      }
      *(_DWORD *)(*(_QWORD *)(v46 + 192) + 8 * v53 + 8) &= ~0x1000u;
    }
  }
  *(_QWORD *)(v46 + 176) = 0LL;
  ExReleasePushLockExclusiveEx(v46 + 168, 0LL);
  KeLeaveCriticalRegion();
  v55 = (_QWORD *)WdLogNewEntry5_WdEvent(v54);
  v55[3] = this;
  v55[4] = *((unsigned int *)this + 83);
  v55[5] = *((_QWORD *)this + 5);
  WdLogEvent5_WdEvent(v55);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      Template_ppqpttq(
        *((unsigned __int8 *)this + 1818),
        &EventCreateDevice,
        *((_QWORD *)this + 2),
        *(_QWORD *)(*((_QWORD *)this + 5) + 56LL),
        *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
        *((_DWORD *)this + 82),
        this,
        *((unsigned __int8 *)this + 1817),
        *((unsigned __int8 *)this + 1818),
        *((_DWORD *)this + 83));
  }
  return 0LL;
}
