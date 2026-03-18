/*
 * XREFs of DxgkSetContextSchedulingPriority @ 0x1C00A4F10
 * Callers:
 *     ?VmBusSetContextSchedulingPriority@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0032D00 (-VmBusSetContextSchedulingPriority@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0004CAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004D98 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0005D94 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?VmBusSendSetContextSchedulingPriority@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY@@@Z @ 0x1C00315F4 (-VmBusSendSetContextSchedulingPriority@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@PEBU_D3D.c)
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z @ 0x1C00B1AD0 (-SetSchedulingPriority@DXGCONTEXT@@QEAAJH_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  bool v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DXGCONTEXT *v12; // r14
  char v13; // r13
  INT Priority; // r15d
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r12
  __int64 v22; // rcx
  __int64 v23; // r8
  bool v24; // zf
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  _BYTE v43[16]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v44[2]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v45[96]; // [rsp+50h] [rbp-88h] BYREF
  _D3DKMT_SETCONTEXTSCHEDULINGPRIORITY v46; // [rsp+E8h] [rbp+10h] BYREF
  DXGCONTEXT *v47; // [rsp+F0h] [rbp+18h] BYREF

  v3 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2029);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v26 = WdLogNewEntry5_WdError(v6, v5);
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v26);
LABEL_25:
    v22 = qword_1C006E790;
    v24 = (qword_1C006E790 & 2) == 0;
    goto LABEL_20;
  }
  if ( v4 )
  {
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    v46 = *(_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY *)v3;
    LODWORD(v3) = v46.hContext;
  }
  else
  {
    v3 = *(_QWORD *)v3;
    v46 = (_D3DKMT_SETCONTEXTSCHEDULINGPRIORITY)v3;
  }
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v43, v3, Current, &v47, 0);
  v12 = v47;
  if ( !v47 )
  {
    v28 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v28 + 24) = (unsigned int)v3;
    LODWORD(v3) = -1073741811;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v43);
    v24 = (qword_1C006E790 & 2) == 0;
    goto LABEL_20;
  }
  if ( *((_BYTE *)v47 + 369) )
  {
    v29 = DXGADAPTER::VmBusSendSetContextSchedulingPriority(
            *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v47 + 2) + 16LL) + 16LL),
            Current,
            v47,
            &v46);
    v3 = v29;
    if ( v29 < 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
      *(_QWORD *)(v27 + 24) = v3;
      WdLogEvent5_WdWarning(v27);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v43);
      goto LABEL_25;
    }
  }
  v13 = 0;
  Priority = v46.Priority;
  if ( v46.Priority >= 0 && (v46.Priority & 0x40000000) != 0 )
  {
    if ( !DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v12 + 2) + 16LL) + 16LL)) )
    {
      v38 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
      LODWORD(v3) = -1073741637;
      *(_QWORD *)(v38 + 24) = -1073741637LL;
      WdLogEvent5_WdWarning(v38);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v43);
      v22 = qword_1C006E790;
      v24 = (qword_1C006E790 & 2) == 0;
      goto LABEL_20;
    }
    if ( (Priority & 0x3FFFFFE0) != 0 )
    {
      v39 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
      LODWORD(v3) = -1073741811;
      *(_QWORD *)(v39 + 24) = -1073741811LL;
    }
    else
    {
      if ( (Priority & 0x1Fu) <= 0x1E )
      {
        v13 = 1;
        goto LABEL_12;
      }
      v39 = WdLogNewEntry5_WdWarning(v35, v34, v36, v37);
      *(_QWORD *)(v39 + 24) = Priority & 0x1F;
      LODWORD(v3) = -1073741811;
      *(_QWORD *)(v39 + 32) = -1073741811LL;
    }
    WdLogEvent5_WdWarning(v39);
LABEL_19:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v43);
    v24 = (qword_1C006E790 & 2) == 0;
LABEL_20:
    if ( !v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v22, &EventProfilerExit, v23, 2029);
    return (unsigned int)v3;
  }
LABEL_12:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v44,
    *((struct DXGDEVICE **)v12 + 2));
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v45, *((_QWORD *)v12 + 2), 0LL, v15, 0);
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v45);
  v21 = v16;
  if ( v16 >= 0 )
  {
    if ( v13 )
    {
      LODWORD(v3) = _guard_dispatch_icall_fptr();
    }
    else
    {
      LODWORD(v3) = -1073741811;
      if ( (unsigned int)(Priority + 7) <= 0xE )
      {
        LODWORD(v3) = DXGCONTEXT::SetSchedulingPriority(v12, Priority + *((_DWORD *)v12 + 88), 1);
        if ( (v3 & 0x80000000) == 0LL )
          *((_DWORD *)v12 + 89) = Priority;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
    if ( v44[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
    goto LABEL_19;
  }
  v40 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
  *(_QWORD *)(v40 + 24) = *((_QWORD *)v12 + 2);
  *(_QWORD *)(v40 + 32) = v21;
  WdLogEvent5_WdWarning(v40);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
  if ( v44[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v44);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v43);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v41, &EventProfilerExit, v42, 2029);
  return (unsigned int)v21;
}
