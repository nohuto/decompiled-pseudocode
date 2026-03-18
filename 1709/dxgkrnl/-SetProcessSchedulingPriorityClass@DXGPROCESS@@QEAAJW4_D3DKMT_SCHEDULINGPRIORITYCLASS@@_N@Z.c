/*
 * XREFs of ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1C0089240
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1C00F1810 (DxgkSetProcessSchedulingPriorityClass.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C00039DC (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003AA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C000E9EC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     VidSchSetPriorityClassProcessX @ 0x1C00FA37C (VidSchSetPriorityClassProcessX.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityClass(DXGPROCESS *this, unsigned int a2, unsigned __int8 a3)
{
  __int64 result; // rax
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v8; // r14
  __int64 v9; // rax
  struct DXGADAPTER *v10; // rbx
  __int64 v11; // r8
  _QWORD v12[2]; // [rsp+28h] [rbp-29h] BYREF
  char *v13; // [rsp+38h] [rbp-19h] BYREF
  _QWORD *i; // [rsp+40h] [rbp-11h]
  _BYTE v15[8]; // [rsp+48h] [rbp-9h] BYREF
  _BYTE v16[32]; // [rsp+50h] [rbp-1h] BYREF
  _BYTE v17[40]; // [rsp+70h] [rbp+1Fh] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 13) + 8LL) != KeGetCurrentThread() )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 2792LL;
    WdLogEvent5_WdAssertion(v9);
  }
  result = VidSchSetPriorityClassProcessX(this, a2, a3);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 62) = a2;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 160, 0LL);
    *((_QWORD *)this + 21) = KeGetCurrentThread();
    v13 = (char *)this + 256;
    for ( i = (_QWORD *)*((_QWORD *)this + 32); ; i = (_QWORD *)*i )
    {
      Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v13);
      v8 = Current;
      if ( !Current )
        break;
      v10 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12, Current);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, v10, 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v15) >= 0 )
      {
        LOBYTE(v11) = a3;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2) + 504LL) + 8LL)
                                                        + 160LL))(
          *((_QWORD *)v8 + 75),
          *((unsigned int *)this + 78),
          v11);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v17);
      COREACCESS::~COREACCESS((COREACCESS *)v16);
      if ( v12[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v12);
    }
    *((_QWORD *)this + 21) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 160, 0LL);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
