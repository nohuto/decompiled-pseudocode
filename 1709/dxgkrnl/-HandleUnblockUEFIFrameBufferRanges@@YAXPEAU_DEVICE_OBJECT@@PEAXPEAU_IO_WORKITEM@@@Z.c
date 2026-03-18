/*
 * XREFs of ?HandleUnblockUEFIFrameBufferRanges@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0171A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

void __fastcall HandleUnblockUEFIFrameBufferRanges(__int64 IoObject, struct _LUID *Context, PIO_WORKITEM IoWorkItem)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGADAPTER *v9; // rsi
  _QWORD *v10; // rax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _BYTE v17[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v18[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v19[40]; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int64 v20; // [rsp+88h] [rbp+10h] BYREF

  Global = DXGGLOBAL::GetGlobal(IoObject);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *Context, &v20);
  v9 = v6;
  if ( v6 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v6, 0LL);
    v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17);
    DXGADAPTER::ReleaseReferenceNoTracking(v9);
    if ( v11 >= 0 )
    {
      if ( !*((_QWORD *)v9 + 289) )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v14);
        v16[5] = 0LL;
        v16[6] = 0LL;
        v16[7] = 0LL;
        v16[3] = 275LL;
        v16[4] = 7LL;
        WdLogEvent5_WdCriticalError(v16);
      }
      (*(void (__fastcall **)(_QWORD, struct _LUID *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v9 + 289) + 528LL) + 8LL)
                                                     + 1160LL))(
        *(_QWORD *)(*((_QWORD *)v9 + 289) + 536LL),
        Context + 1);
    }
    else
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
      v15[3] = v9;
      v15[4] = Context->HighPart;
      v15[5] = Context->LowPart;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v19);
    COREACCESS::~COREACCESS((COREACCESS *)v18);
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
    v10[3] = 0LL;
    v10[4] = Context->HighPart;
    v10[5] = Context->LowPart;
  }
  ExFreePoolWithTag(Context, 0);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
