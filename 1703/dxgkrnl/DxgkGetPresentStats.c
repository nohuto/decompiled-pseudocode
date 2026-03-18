/*
 * XREFs of DxgkGetPresentStats @ 0x1C01A1060
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetPresentStats(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DXGADAPTER *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  struct DXGADAPTER *v31; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v32[16]; // [rsp+40h] [rbp-31h] BYREF
  DXGADAPTER *v33; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v34[8]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v35[32]; // [rsp+70h] [rbp-1h] BYREF
  _BYTE v36[40]; // [rsp+90h] [rbp+1Fh] BYREF

  v5 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v11 = (__int64)Current;
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    LODWORD(v11) = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    return (unsigned int)v11;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 9) + 216LL))() )
  {
    v17 = WdLogNewEntry5_WdWarning(v14, v13, v15, v16);
    *(_QWORD *)(v17 + 24) = v11;
    LODWORD(v11) = -1073741790;
    *(_QWORD *)(v17 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v17);
    return (unsigned int)v11;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v32, *(struct DXGFASTMUTEX *const *)(v11 + 80), v15, v16);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v33, (unsigned int)v5, (struct _KTHREAD **)v11, &v31);
  v20 = v31;
  if ( v31 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v31, 0LL);
    v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34);
    v11 = v25;
    if ( v25 >= 0 )
    {
      if ( !*((_BYTE *)v20 + 2205) )
      {
        v29 = *((_QWORD *)v20 + 286);
        if ( v29 )
        {
          LODWORD(v11) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v29 + 408)
                                                                                                + 8LL)
                                                                                    + 408LL))(
                           *(_QWORD *)(v29 + 416),
                           a2,
                           a3,
                           a4);
LABEL_14:
          COREACCESS::~COREACCESS((COREACCESS *)v36);
          COREACCESS::~COREACCESS((COREACCESS *)v35);
          goto LABEL_15;
        }
      }
      v28 = WdLogNewEntry5_WdError(v27, v26);
      v11 = -1073741811LL;
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v27, v26);
    }
    *(_QWORD *)(v28 + 24) = v20;
    *(_QWORD *)(v28 + 32) = v11;
    WdLogEvent5_WdError(v28);
    goto LABEL_14;
  }
  v21 = WdLogNewEntry5_WdError(v19, v18);
  LODWORD(v11) = -1073741811;
  *(_QWORD *)(v21 + 24) = v5;
  *(_QWORD *)(v21 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v21);
LABEL_15:
  if ( v33 )
    DXGADAPTER::ReleaseReference(v33);
  if ( v32[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32, v22, v23, v24);
  return (unsigned int)v11;
}
