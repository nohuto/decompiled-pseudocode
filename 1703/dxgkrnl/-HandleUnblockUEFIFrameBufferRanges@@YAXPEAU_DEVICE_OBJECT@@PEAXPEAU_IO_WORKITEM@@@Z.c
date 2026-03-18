/*
 * XREFs of ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C016E2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

void __fastcall HandleUnblockUEFIFrameBufferRanges(
        __int64 IoObject,
        struct _LUID *Context,
        PIO_WORKITEM IoWorkItem,
        __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v7; // r9
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  DXGADAPTER *v13; // rsi
  _QWORD *v14; // rax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  _QWORD *v21; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v23[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v24[40]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v25; // [rsp+88h] [rbp+10h] BYREF

  Global = DXGGLOBAL::GetGlobal(IoObject, (__int64)Context, (__int64)IoWorkItem, a4);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *Context, &v25, v7);
  v13 = v8;
  if ( v8 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v8, 0LL);
    v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
    DXGADAPTER::ReleaseReference(v13);
    if ( v15 >= 0 )
    {
      if ( !*((_QWORD *)v13 + 286) )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16, v18);
        v21[5] = 0LL;
        v21[6] = 0LL;
        v21[7] = 0LL;
        v21[3] = 275LL;
        v21[4] = 7LL;
        WdLogEvent5_WdCriticalError(v21);
      }
      (*(void (__fastcall **)(_QWORD, struct _LUID *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 286) + 432LL) + 8LL)
                                                     + 1160LL))(
        *(_QWORD *)(*((_QWORD *)v13 + 286) + 440LL),
        Context + 1);
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
      v20[3] = v13;
      v20[4] = Context->HighPart;
      v20[5] = Context->LowPart;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v24);
    COREACCESS::~COREACCESS((COREACCESS *)v23);
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    v14[3] = 0LL;
    v14[4] = Context->HighPart;
    v14[5] = Context->LowPart;
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
