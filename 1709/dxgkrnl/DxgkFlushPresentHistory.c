/*
 * XREFs of DxgkFlushPresentHistory @ 0x1C00F8EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkFlushPresentHistory(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _KTHREAD **Current; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct DXGADAPTER *v8; // rbx
  int v9; // r8d
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  DXGADAPTER *v19; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v21[32]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v22[48]; // [rsp+58h] [rbp-30h] BYREF
  struct DXGADAPTER *v23; // [rsp+98h] [rbp+10h] BYREF

  v2 = (unsigned int)a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v17 = WdLogNewEntry5_WdError(v4);
    v14 = -1073741811;
    *(_QWORD *)(v17 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    return v14;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v19, v2, Current, &v23);
  v8 = v23;
  if ( v23 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v20, v23, 0LL);
    v10 = COREADAPTERACCESS::AcquireExclusive(&v20, v9 + 2);
    if ( v10 != -1073741130 )
    {
      if ( v10 < 0 )
      {
LABEL_15:
        v14 = v10;
LABEL_9:
        COREACCESS::~COREACCESS((COREACCESS *)v22);
        COREACCESS::~COREACCESS((COREACCESS *)v21);
        goto LABEL_10;
      }
      v13 = *((_QWORD *)v8 + 289);
      if ( v13 )
      {
        if ( !*((_BYTE *)v8 + 185) )
          ADAPTER_RENDER::FlushScheduler(v13, 1, 0xFFFFFFFF, 0);
        v14 = 0;
        goto LABEL_9;
      }
      v16 = WdLogNewEntry5_WdWarning(0LL, v11, v12);
      *(_QWORD *)(v16 + 24) = v2;
      *(_QWORD *)(v16 + 32) = -1073741637LL;
      WdLogEvent5_WdWarning(v16);
    }
    v10 = 0;
    goto LABEL_15;
  }
  v18 = WdLogNewEntry5_WdWarning(v6, v5, v7);
  v14 = -1073741811;
  *(_QWORD *)(v18 + 24) = v2;
  *(_QWORD *)(v18 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v18);
LABEL_10:
  if ( v19 )
    DXGADAPTER::ReleaseReferenceNoTracking(v19);
  return v14;
}
