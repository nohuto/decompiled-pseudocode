/*
 * XREFs of DxgkSetContextSchedulingPriority @ 0x1C010E060
 * Callers:
 *     ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0186380 (-VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0001884 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0001954 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00155B8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0015AA8 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0016BF4 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0016D0C (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z @ 0x1C00FD984 (-SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N@Z.c)
 *     ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY@@@Z @ 0x1C01847FC (-VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 */

__int64 __fastcall DxgkSetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *v3; // rbx
  bool v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGCONTEXT *v12; // rdi
  char v13; // r12
  INT Priority; // ebx
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r15
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // r8
  bool v24; // zf
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v40; // [rsp+38h] [rbp-B0h]
  _BYTE v41[16]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v42[2]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v43[136]; // [rsp+60h] [rbp-88h] BYREF
  _D3DKMT_SETCONTEXTSCHEDULINGPRIORITY v44; // [rsp+F8h] [rbp+10h] BYREF
  DXGCONTEXT *v45; // [rsp+100h] [rbp+18h] BYREF

  v3 = (_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *)a1;
  v40 = 0LL;
  v39 = 2029;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2029);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2029);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v26 = WdLogNewEntry5_WdError(v7);
    LODWORD(v21) = -1073741811;
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v26);
LABEL_28:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    v24 = (qword_1C0079010 & 2) == 0;
LABEL_19:
    if ( !v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v22, &EventProfilerExit, v23, v39);
    return (unsigned int)v21;
  }
  if ( v4 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *)MmUserProbeAddress;
    v44 = *v3;
    LODWORD(v3) = v44.hContext;
  }
  else
  {
    v3 = (_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *)*v3;
    v44 = (_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY)v3;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v41, (unsigned int)v3, Current, &v45, 0);
  v12 = v45;
  if ( !v45 )
  {
    v27 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    v28 = (unsigned int)v3;
    goto LABEL_26;
  }
  if ( *((_BYTE *)v45 + 401) )
  {
    v29 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v45 + 2) + 16LL) + 16LL) + 4080LL),
            (struct DXGPROCESS *)Current,
            v45,
            &v44);
    v21 = v29;
    if ( v29 < 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(v31, v30, v32);
LABEL_34:
      *(_QWORD *)(v27 + 24) = v21;
      goto LABEL_27;
    }
  }
  v13 = 0;
  Priority = v44.Priority;
  if ( v44.Priority >= 0 && (v44.Priority & 0x40000000) != 0 )
  {
    if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 16LL)) )
    {
      v27 = WdLogNewEntry5_WdWarning(v34, v33, v35);
      v21 = -1073741637LL;
      goto LABEL_34;
    }
    if ( (Priority & 0x3FFFFFE0) != 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(v34, v33, v35);
      v21 = -1073741811LL;
      goto LABEL_34;
    }
    if ( (Priority & 0x1Fu) <= 0x1E )
    {
      v13 = 1;
      goto LABEL_12;
    }
    v27 = WdLogNewEntry5_WdWarning(v34, v33, v35);
    v28 = Priority & 0x1F;
LABEL_26:
    *(_QWORD *)(v27 + 24) = v28;
    LODWORD(v21) = -1073741811;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
LABEL_27:
    WdLogEvent5_WdWarning(v27);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v41);
    goto LABEL_28;
  }
LABEL_12:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v42,
    *((struct DXGDEVICE **)v12 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, *((_QWORD *)v12 + 2), 0, v15, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v43);
  v20 = v16;
  if ( v16 >= 0 )
  {
    if ( v13 )
    {
      LODWORD(v21) = _guard_dispatch_icall_fptr();
    }
    else if ( (unsigned int)(Priority + 7) > 0xE )
    {
      LODWORD(v21) = -1073741811;
    }
    else
    {
      DXGCONTEXT::SetSchedulingPriority(v12, Priority + *((_DWORD *)v12 + 96), 1u);
      *((_DWORD *)v12 + 97) = Priority;
      LODWORD(v21) = 0;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
    if ( v42[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v41);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
    v24 = (qword_1C0079010 & 2) == 0;
    goto LABEL_19;
  }
  v36 = WdLogNewEntry5_WdWarning(v18, v17, v19);
  *(_QWORD *)(v36 + 24) = *((_QWORD *)v12 + 2);
  *(_QWORD *)(v36 + 32) = v20;
  WdLogEvent5_WdWarning(v36);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
  if ( v42[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v42);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v41);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v37, &EventProfilerExit, v38, v39);
  return (unsigned int)v20;
}
