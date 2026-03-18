/*
 * XREFs of ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C00D5EDC
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C009AD60 (DxgkSetProcessSchedulingPriorityClass.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0002724 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000D61C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C000D744 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     VidSchSetPriorityClassProcessX @ 0x1C00A66CC (VidSchSetPriorityClassProcessX.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityClass(DXGPROCESS *this, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // r9
  unsigned __int8 v4; // r15
  unsigned int v5; // ebx
  __int64 result; // rax
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v9; // r14
  __int64 v10; // rax
  struct DXGADAPTER *v11; // rbx
  __int64 v12; // r8
  _QWORD v13[2]; // [rsp+28h] [rbp-29h] BYREF
  char *v14; // [rsp+38h] [rbp-19h] BYREF
  _QWORD *i; // [rsp+40h] [rbp-11h]
  _BYTE v16[8]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v17[32]; // [rsp+50h] [rbp-1h] BYREF
  _BYTE v18[40]; // [rsp+70h] [rbp+1Fh] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a3;
  v5 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 10) + 8LL) != CurrentThread )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, CurrentThread);
    *(_QWORD *)(v10 + 24) = 2635LL;
    WdLogEvent5_WdAssertion(v10);
  }
  result = VidSchSetPriorityClassProcessX((__int64)this, v5, v4);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 54) = v5;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 136, 0LL);
    *((_QWORD *)this + 18) = KeGetCurrentThread();
    v14 = (char *)this + 224;
    for ( i = (_QWORD *)*((_QWORD *)this + 28); ; i = (_QWORD *)*i )
    {
      Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v14);
      v9 = Current;
      if ( !Current )
        break;
      v11 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v13, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, v11, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16) >= 0 )
      {
        LOBYTE(v12) = v4;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 2) + 408LL) + 8LL)
                                                        + 160LL))(
          *((_QWORD *)v9 + 75),
          *((unsigned int *)this + 69),
          v12);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v18);
      COREACCESS::~COREACCESS((COREACCESS *)v17);
      if ( v13[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v13);
    }
    *((_QWORD *)this + 18) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 136, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
