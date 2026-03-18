/*
 * XREFs of ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01F50A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z @ 0x1C01F29A4 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C01F57F0 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutWorkItem(
        PVOID IoObject,
        volatile signed __int32 *Context,
        PIO_WORKITEM IoWorkItem)
{
  signed __int32 v4; // eax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  struct DXGADAPTER *v8; // rsi
  int v9; // r8d
  __int64 v10; // r14
  DMMVIDEOPRESENTTARGETSET **v11; // r15
  signed __int32 v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  struct _IO_WORKITEM *v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v20[32]; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v21[40]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+38h] BYREF

  v4 = _InterlockedCompareExchange(Context + 42, 0, 5);
  v5 = v4;
  v6 = (unsigned int)(v4 - 2);
  if ( (v6 & 0xFFFFFFFD) == 0 )
  {
    v8 = *(struct DXGADAPTER **)Context;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v19, *(struct DXGADAPTER *const *)Context, 0LL);
    v10 = (int)COREADAPTERACCESS::AcquireExclusive(&v19, v9 + 2);
    v11 = *(DMMVIDEOPRESENTTARGETSET ***)(*((_QWORD *)v8 + 288) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22, (__int64)v11);
    v12 = _InterlockedCompareExchange(Context + 42, 0, 5);
    v5 = v12;
    v13 = (unsigned int)(v12 - 2);
    if ( (v13 & 0xFFFFFFFD) != 0 )
    {
      if ( v12 != -1 && v12 != 5 )
      {
        v14 = WdLogNewEntry5_WdDmmEvent(v13);
        *(_QWORD *)(v14 + 24) = v8;
        *(_QWORD *)(v14 + 32) = v5;
        WdLogEvent5_WdDmmEvent(v14);
      }
    }
    else if ( (int)v10 >= 0 )
    {
      if ( VIDPN_MGR::HandleLinkTrainingTimeout(v11, *(_DWORD *)(*((_QWORD *)Context + 1) + 24LL), v12 == 2) )
      {
        if ( (_DWORD)v5 != 2 )
        {
          v17 = WdLogNewEntry5_WdAssertion(v16);
          WdLogEvent5_WdAssertion(v17);
        }
        DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(*((DMMVIDEOPRESENTTARGET **)Context + 1), 0);
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v15 + 24) = v8;
      *(_QWORD *)(v15 + 32) = v10;
      WdLogEvent5_WdError(v15);
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v22 + 40));
    COREACCESS::~COREACCESS((COREACCESS *)v21);
    COREACCESS::~COREACCESS((COREACCESS *)v20);
LABEL_16:
    if ( (_DWORD)v5 != -1 )
      return;
    goto LABEL_17;
  }
  if ( v4 != -1 )
  {
    if ( v4 != 5 )
    {
      v7 = WdLogNewEntry5_WdDmmEvent(v6);
      *(_QWORD *)(v7 + 24) = *(_QWORD *)Context;
      *(_QWORD *)(v7 + 32) = v5;
      WdLogEvent5_WdDmmEvent(v7);
    }
    goto LABEL_16;
  }
LABEL_17:
  if ( *(_QWORD *)Context )
    DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)Context);
  v18 = (struct _IO_WORKITEM *)*((_QWORD *)Context + 20);
  if ( v18 )
    IoFreeWorkItem(v18);
  ExFreePoolWithTag((PVOID)Context, 0);
}
