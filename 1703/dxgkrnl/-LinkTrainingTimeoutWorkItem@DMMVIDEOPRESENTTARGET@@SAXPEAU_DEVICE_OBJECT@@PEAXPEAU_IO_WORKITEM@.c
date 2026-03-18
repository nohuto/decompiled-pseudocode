/*
 * XREFs of ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01DC770
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00061C0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z @ 0x1C01D97D4 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C01DCDF0 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutWorkItem(
        PVOID IoObject,
        volatile signed __int32 *Context,
        PIO_WORKITEM IoWorkItem,
        __int64 a4)
{
  signed __int32 v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct DXGADAPTER *v9; // rsi
  int v10; // r8d
  __int64 v11; // r14
  DMMVIDEOPRESENTTARGETSET **v12; // r15
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  signed __int32 v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  struct _IO_WORKITEM *v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v26[32]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v27[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+38h] BYREF

  v5 = _InterlockedCompareExchange(Context + 42, 0, 5);
  v6 = v5;
  v7 = (unsigned int)(v5 - 2);
  if ( (v7 & 0xFFFFFFFD) == 0 )
  {
    v9 = *(struct DXGADAPTER **)Context;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v25, *(struct DXGADAPTER *const *)Context, 0LL);
    v11 = (int)COREADAPTERACCESS::AcquireExclusive(&v25, v10 + 2);
    v12 = *(DMMVIDEOPRESENTTARGETSET ***)(*((_QWORD *)v9 + 285) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v28, (__int64)v12, v13, v14);
    v18 = _InterlockedCompareExchange(Context + 42, 0, 5);
    v6 = v18;
    v19 = (unsigned int)(v18 - 2);
    if ( (v19 & 0xFFFFFFFD) != 0 )
    {
      if ( v18 != -1 && v18 != 5 )
      {
        v20 = WdLogNewEntry5_WdDmmEvent(v19, v15, v16, v17);
        *(_QWORD *)(v20 + 24) = v9;
        *(_QWORD *)(v20 + 32) = v6;
        WdLogEvent5_WdDmmEvent(v20);
      }
    }
    else if ( (int)v11 >= 0 )
    {
      LOBYTE(v16) = v18 == 2;
      if ( VIDPN_MGR::HandleLinkTrainingTimeout(v12, *(unsigned int *)(*((_QWORD *)Context + 1) + 24LL), v16, v17) )
      {
        if ( (_DWORD)v6 != 2 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v22, v15, v16, v17);
          WdLogEvent5_WdAssertion(v23);
        }
        DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(*((DMMVIDEOPRESENTTARGET **)Context + 1), 0);
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v19, v15);
      *(_QWORD *)(v21 + 24) = v9;
      *(_QWORD *)(v21 + 32) = v11;
      WdLogEvent5_WdError(v21);
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28 + 40), v15, v16, v17);
    COREACCESS::~COREACCESS((COREACCESS *)v27);
    COREACCESS::~COREACCESS((COREACCESS *)v26);
LABEL_16:
    if ( (_DWORD)v6 != -1 )
      return;
    goto LABEL_17;
  }
  if ( v5 != -1 )
  {
    if ( v5 != 5 )
    {
      v8 = WdLogNewEntry5_WdDmmEvent(v7, Context, IoWorkItem, a4);
      *(_QWORD *)(v8 + 24) = *(_QWORD *)Context;
      *(_QWORD *)(v8 + 32) = v6;
      WdLogEvent5_WdDmmEvent(v8);
    }
    goto LABEL_16;
  }
LABEL_17:
  if ( *(_QWORD *)Context )
    DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)Context);
  v24 = (struct _IO_WORKITEM *)*((_QWORD *)Context + 20);
  if ( v24 )
    IoFreeWorkItem(v24);
  ExFreePoolWithTag((PVOID)Context, 0);
}
