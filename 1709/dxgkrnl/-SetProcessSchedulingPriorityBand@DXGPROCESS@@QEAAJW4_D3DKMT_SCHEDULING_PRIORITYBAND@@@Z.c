/*
 * XREFs of ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C01B9E50
 * Callers:
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C01BAF20 (DxgkSetProcessSchedulingPriorityBand.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000E9EC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1C00934A0 (-NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityBand(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  DXGDEVICE *Current; // rax
  __int64 v12; // rcx
  DXGDEVICE *v13; // r15
  struct DXGADAPTER *v14; // r12
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rax
  _QWORD v25[2]; // [rsp+28h] [rbp-39h] BYREF
  _QWORD v26[2]; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v27[8]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v28[32]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v29[40]; // [rsp+70h] [rbp+Fh] BYREF

  v3 = a2;
  if ( *(struct _KTHREAD **)(*(_QWORD *)(a1 + 104) + 8LL) != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v4 + 24) = 3573LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = a1 + 160;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1 + 160, 0LL);
  *(_QWORD *)(a1 + 168) = KeGetCurrentThread();
  if ( (_DWORD)v3 == 1 )
  {
    *((_QWORD *)DXGGLOBAL::GetGlobal(v7) + 141) = a1;
    _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v9) + 279, 1, 0);
    *(_DWORD *)(a1 + 312) = 1;
  }
  else
  {
    if ( (_DWORD)v3 )
    {
      v23 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      v22 = -1073741811;
      *(_QWORD *)(v23 + 24) = v3;
      *(_QWORD *)(v23 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v23);
      goto LABEL_20;
    }
    *(_DWORD *)(a1 + 312) = 2;
  }
  v10 = *(_QWORD **)(a1 + 256);
  v26[0] = a1 + 256;
  while ( 1 )
  {
    v26[1] = v10;
    Current = (DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v26);
    v13 = Current;
    if ( !Current )
      break;
    v14 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25, Current);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, v14, 0LL);
    v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27);
    v19 = v15;
    if ( v15 >= 0 )
    {
      DXGDEVICE::NotifyProcessStatusChange(v13);
    }
    else
    {
      v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      *(_QWORD *)(v20 + 24) = v14;
      *(_QWORD *)(v20 + 32) = v19;
      WdLogEvent5_WdWarning(v20);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v29);
    COREACCESS::~COREACCESS((COREACCESS *)v28);
    if ( v25[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v25);
    v10 = (_QWORD *)*v10;
  }
  if ( !(_DWORD)v3 && a1 == *((_QWORD *)DXGGLOBAL::GetGlobal(v12) + 141) )
    _InterlockedCompareExchange((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v21) + 279, 0, 1);
  v22 = 0;
LABEL_20:
  *(_QWORD *)(v5 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  return v22;
}
