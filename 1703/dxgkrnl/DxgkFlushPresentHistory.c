/*
 * XREFs of DxgkFlushPresentHistory @ 0x1C00A5E80
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

__int64 __fastcall DxgkFlushPresentHistory(unsigned int a1)
{
  __int64 v1; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGADAPTER *v9; // rbx
  int v10; // r8d
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  DXGADAPTER *v21; // [rsp+20h] [rbp-68h] BYREF
  __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v23[32]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v24[48]; // [rsp+58h] [rbp-30h] BYREF
  struct DXGADAPTER *v25; // [rsp+98h] [rbp+10h] BYREF

  v1 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v18 = WdLogNewEntry5_WdError(v4, v3);
    v16 = -1073741811;
    *(_QWORD *)(v18 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v18);
    return v16;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v21, (unsigned int)v1, Current, &v25);
  v9 = v25;
  if ( v25 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v22, v25, 0LL);
    v11 = COREADAPTERACCESS::AcquireExclusive(&v22, v10 + 2);
    if ( v11 != -1073741130 )
    {
      if ( v11 < 0 )
      {
LABEL_14:
        v16 = v11;
LABEL_9:
        COREACCESS::~COREACCESS((COREACCESS *)v24);
        COREACCESS::~COREACCESS((COREACCESS *)v23);
        goto LABEL_10;
      }
      v15 = *((_QWORD *)v9 + 286);
      if ( v15 )
      {
        if ( !*((_BYTE *)v9 + 186) )
          ADAPTER_RENDER::FlushScheduler(v15, 1LL, 0xFFFFFFFFLL);
        v16 = 0;
        goto LABEL_9;
      }
      v20 = WdLogNewEntry5_WdWarning(0LL, v12, v13, v14);
      *(_QWORD *)(v20 + 24) = v1;
      *(_QWORD *)(v20 + 32) = -1073741637LL;
      WdLogEvent5_WdWarning(v20);
    }
    v11 = 0;
    goto LABEL_14;
  }
  v19 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
  v16 = -1073741811;
  *(_QWORD *)(v19 + 24) = v1;
  *(_QWORD *)(v19 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v19);
LABEL_10:
  if ( v21 )
    DXGADAPTER::ReleaseReference(v21);
  return v16;
}
