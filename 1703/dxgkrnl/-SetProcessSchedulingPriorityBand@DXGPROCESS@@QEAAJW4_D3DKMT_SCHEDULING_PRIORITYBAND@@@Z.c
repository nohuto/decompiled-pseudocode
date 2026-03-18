/*
 * XREFs of ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C01A20F8
 * Callers:
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C01A2FD0 (DxgkSetProcessSchedulingPriorityBand.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0002724 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1C00C0618 (-NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityBand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rdi
  DXGDEVICE *Current; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  DXGDEVICE *v23; // r15
  struct DXGADAPTER *v24; // r12
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // ebx
  __int64 v37; // rax
  _QWORD v39[2]; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v40[2]; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v41[8]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v42[32]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v43[40]; // [rsp+70h] [rbp+Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v6 = (int)a2;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(a1 + 80) + 8LL) != CurrentThread )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, CurrentThread, a4);
    *(_QWORD *)(v7 + 24) = 3409LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = a1 + 136;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  *(_QWORD *)(a1 + 144) = KeGetCurrentThread();
  if ( (_DWORD)v6 == 1 )
  {
    *((_QWORD *)DXGGLOBAL::GetGlobal(v10, v9, v11, v12) + 141) = a1;
    _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v14, v13, v15, v16) + 279, 1, 0);
    *(_DWORD *)(a1 + 276) = 1;
  }
  else
  {
    if ( (_DWORD)v6 )
    {
      v37 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
      v36 = -1073741811;
      *(_QWORD *)(v37 + 24) = v6;
      *(_QWORD *)(v37 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v37);
      goto LABEL_20;
    }
    *(_DWORD *)(a1 + 276) = 2;
  }
  v17 = *(_QWORD **)(a1 + 224);
  v40[0] = a1 + 224;
  while ( 1 )
  {
    v40[1] = v17;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v40);
    v23 = Current;
    if ( !Current )
      break;
    v24 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39, Current);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v24, 0LL);
    v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41);
    v30 = v25;
    if ( v25 >= 0 )
    {
      DXGDEVICE::NotifyProcessStatusChange(v23);
    }
    else
    {
      v31 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
      *(_QWORD *)(v31 + 24) = v24;
      *(_QWORD *)(v31 + 32) = v30;
      WdLogEvent5_WdWarning(v31);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v43);
    COREACCESS::~COREACCESS((COREACCESS *)v42);
    if ( v39[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v39);
    v17 = (_QWORD *)*v17;
  }
  if ( !(_DWORD)v6 && a1 == *((_QWORD *)DXGGLOBAL::GetGlobal(v20, v19, v21, v22) + 141) )
    _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v33, v32, v34, v35) + 279, 0, 1);
  v36 = 0;
LABEL_20:
  *(_QWORD *)(v8 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v8, 0LL);
  KeLeaveCriticalRegion();
  return v36;
}
