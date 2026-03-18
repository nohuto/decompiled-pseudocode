/*
 * XREFs of ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0149830
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

void __fastcall HandleUnblockUEFIFrameBufferRanges(__int64 IoObject, struct _LUID *Context, PIO_WORKITEM IoWorkItem)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DXGADAPTER *v11; // rsi
  _QWORD *v12; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  _BYTE v21[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v22[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v23[40]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+10h] BYREF

  Global = DXGGLOBAL::GetGlobal(IoObject);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *Context, &v24);
  v11 = v6;
  if ( v6 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v6, 0LL);
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21);
    DXGADAPTER::ReleaseReferenceNoTracking(v11);
    if ( v13 >= 0 )
    {
      v19 = *((_QWORD *)v11 + 308);
      if ( !v19 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(0LL);
        v20[5] = 0LL;
        v20[6] = 0LL;
        v20[7] = 0LL;
        v20[3] = 275LL;
        v20[4] = 7LL;
        WdLogEvent5_WdCriticalError(v20);
        v19 = *((_QWORD *)v11 + 308);
      }
      (*(void (__fastcall **)(_QWORD, struct _LUID *))(*(_QWORD *)(*(_QWORD *)(v19 + 544) + 8LL) + 1176LL))(
        *(_QWORD *)(v19 + 552),
        Context + 1);
    }
    else
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      v18[3] = v11;
      v18[4] = Context->HighPart;
      v18[5] = Context->LowPart;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v23);
    COREACCESS::~COREACCESS((COREACCESS *)v22);
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    v12[3] = 0LL;
    v12[4] = Context->HighPart;
    v12[5] = Context->LowPart;
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
