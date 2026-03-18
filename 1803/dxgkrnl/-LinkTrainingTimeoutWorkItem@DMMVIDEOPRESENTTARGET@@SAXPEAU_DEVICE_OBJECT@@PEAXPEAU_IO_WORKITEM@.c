/*
 * XREFs of ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0221D80
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z @ 0x1C021E420 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAEIE@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02225E4 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
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
  __int64 v9; // rbp
  VIDPN_MGR *v10; // r14
  signed __int32 v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  struct _IO_WORKITEM *v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v19[32]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v20[40]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v21; // [rsp+98h] [rbp+10h] BYREF

  v4 = _InterlockedCompareExchange(Context + 42, 0, 5);
  v5 = v4;
  v6 = (unsigned int)(v4 - 2);
  if ( (v6 & 0xFFFFFFFD) == 0 )
  {
    v8 = *(struct DXGADAPTER **)Context;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v18, *(struct DXGADAPTER *const *)Context, 0LL);
    v9 = (int)COREADAPTERACCESS::AcquireExclusive(&v18);
    v10 = *(VIDPN_MGR **)(*((_QWORD *)v8 + 307) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v21, (__int64)v10);
    v11 = _InterlockedCompareExchange(Context + 42, 0, 5);
    v5 = v11;
    v12 = (unsigned int)(v11 - 2);
    if ( (v12 & 0xFFFFFFFD) != 0 )
    {
      if ( v11 != -1 && v11 != 5 )
      {
        v13 = WdLogNewEntry5_WdDmmEvent(v12);
        *(_QWORD *)(v13 + 24) = v8;
        *(_QWORD *)(v13 + 32) = v5;
        WdLogEvent5_WdDmmEvent(v13);
      }
    }
    else if ( (int)v9 >= 0 )
    {
      if ( VIDPN_MGR::HandleLinkTrainingTimeout(v10, *(_DWORD *)(*((_QWORD *)Context + 1) + 24LL), v11 == 2) )
      {
        if ( (_DWORD)v5 != 2 )
        {
          v16 = WdLogNewEntry5_WdAssertion(v15);
          WdLogEvent5_WdAssertion(v16);
        }
        DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(*((DMMVIDEOPRESENTTARGET **)Context + 1), 0);
      }
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v14 + 24) = v8;
      *(_QWORD *)(v14 + 32) = v9;
      WdLogEvent5_WdError(v14);
    }
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v21 + 40));
    COREACCESS::~COREACCESS((COREACCESS *)v20);
    COREACCESS::~COREACCESS((COREACCESS *)v19);
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
  v17 = (struct _IO_WORKITEM *)*((_QWORD *)Context + 20);
  if ( v17 )
    IoFreeWorkItem(v17);
  operator delete((void *)Context);
}
