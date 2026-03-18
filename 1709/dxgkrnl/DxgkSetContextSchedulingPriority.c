/*
 * XREFs of DxgkSetContextSchedulingPriority @ 0x1C00F7F40
 * Callers:
 *     ?VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0199730 (-VmBusSetContextSchedulingPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0002160 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??EDXGCONTEXT_QUEUE_ITERATOR@@QEAAXXZ @ 0x1C0008BB8 (--EDXGCONTEXT_QUEUE_ITERATOR@@QEAAXXZ.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0008CE8 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0008DD0 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C0008E24 (-GetImplicitHwQueue@DXGCONTEXT@@QEBAPEAU_VIDSCH_CONTEXT@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z @ 0x1C00C0434 (-SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z.c)
 *     ?VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY@@@Z @ 0x1C0197BFC (-VmBusSendSetContextSchedulingPriority@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGC.c)
 */

__int64 __fastcall DxgkSetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  bool v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGCONTEXT *v12; // r14
  char v13; // r13
  INT Priority; // r15d
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  bool v22; // zf
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  struct _VIDSCH_CONTEXT *ImplicitHwQueue; // r9
  _BYTE v38[16]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v39[2]; // [rsp+40h] [rbp-A8h] BYREF
  DXGCONTEXT *v40; // [rsp+50h] [rbp-98h] BYREF
  struct _VIDSCH_CONTEXT *i; // [rsp+58h] [rbp-90h]
  _BYTE v42[96]; // [rsp+60h] [rbp-88h] BYREF
  _D3DKMT_SETCONTEXTSCHEDULINGPRIORITY v43; // [rsp+F8h] [rbp+10h] BYREF
  DXGCONTEXT *v44; // [rsp+100h] [rbp+18h] BYREF

  v3 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2029);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = DXGPROCESS::GetCurrent(v6, v5);
  if ( !Current )
  {
    v24 = WdLogNewEntry5_WdError(v7);
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v24);
LABEL_25:
    v20 = qword_1C005F010;
    v22 = (qword_1C005F010 & 2) == 0;
    goto LABEL_20;
  }
  if ( v4 )
  {
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    v43 = *(_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *)v3;
    LODWORD(v3) = v43.hContext;
  }
  else
  {
    v3 = *(_QWORD *)v3;
    v43 = (_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY)v3;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v38, v3, Current, &v44, 0);
  v12 = v44;
  if ( !v44 )
  {
    v26 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v26 + 24) = (unsigned int)v3;
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v38);
    v22 = (qword_1C005F010 & 2) == 0;
    goto LABEL_20;
  }
  if ( *((_BYTE *)v44 + 401) )
  {
    v27 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSetContextSchedulingPriority(
            (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 2) + 16LL) + 16LL) + 3888LL),
            Current,
            v44,
            &v43);
    v3 = v27;
    if ( v27 < 0 )
    {
      v25 = WdLogNewEntry5_WdWarning(v29, v28, v30);
      *(_QWORD *)(v25 + 24) = v3;
      WdLogEvent5_WdWarning(v25);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v38);
      goto LABEL_25;
    }
  }
  v13 = 0;
  Priority = v43.Priority;
  if ( v43.Priority < 0 || (v43.Priority & 0x40000000) == 0 )
    goto LABEL_12;
  if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 16LL)) )
  {
    v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
    LODWORD(v3) = -1073741637;
    *(_QWORD *)(v34 + 24) = -1073741637LL;
    WdLogEvent5_WdWarning(v34);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v38);
    v20 = qword_1C005F010;
    v22 = (qword_1C005F010 & 2) == 0;
    goto LABEL_20;
  }
  if ( (Priority & 0x3FFFFFE0) != 0 )
  {
    v35 = WdLogNewEntry5_WdWarning(v32, v31, v33);
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v35 + 24) = -1073741811LL;
  }
  else
  {
    if ( (Priority & 0x1Fu) <= 0x1E )
    {
      v13 = 1;
LABEL_12:
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v39,
        *((struct DXGDEVICE **)v12 + 2));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v42, *((_QWORD *)v12 + 2), 0, v15, 0);
      v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v42);
      v3 = v16;
      if ( v16 < 0 )
      {
        v36 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v36 + 24) = *((_QWORD *)v12 + 2);
        *(_QWORD *)(v36 + 32) = v3;
        WdLogEvent5_WdWarning(v36);
      }
      else if ( v13 )
      {
        v40 = v12;
        ImplicitHwQueue = DXGCONTEXT::GetImplicitHwQueue(v12);
        for ( i = ImplicitHwQueue; ImplicitHwQueue; ImplicitHwQueue = i )
        {
          LODWORD(v3) = _guard_dispatch_icall_fptr();
          if ( (v3 & 0x80000000) != 0LL )
            break;
          DXGCONTEXT_QUEUE_ITERATOR::operator++((unsigned int **)&v40);
        }
      }
      else
      {
        LODWORD(v3) = -1073741811;
        if ( (unsigned int)(Priority + 7) <= 0xE )
        {
          LODWORD(v3) = DXGCONTEXT::SetSchedulingPriority(v12, Priority + *((_DWORD *)v12 + 96), 1u);
          if ( (v3 & 0x80000000) == 0LL )
            *((_DWORD *)v12 + 97) = Priority;
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v42);
      if ( v39[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
      goto LABEL_19;
    }
    v35 = WdLogNewEntry5_WdWarning(v32, v31, v33);
    *(_QWORD *)(v35 + 24) = Priority & 0x1F;
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v35 + 32) = -1073741811LL;
  }
  WdLogEvent5_WdWarning(v35);
LABEL_19:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v38);
  v22 = (qword_1C005F010 & 2) == 0;
LABEL_20:
  if ( !v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, 2029);
  return (unsigned int)v3;
}
