/*
 * XREFs of DxgkGetPresentStats @ 0x1C00FF010
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetPresentStats(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  unsigned int v7; // r12d
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  struct DXGADAPTER *v15; // rdi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct DXGADAPTER *v24; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v25[16]; // [rsp+40h] [rbp-31h] BYREF
  DXGADAPTER *v26; // [rsp+50h] [rbp-21h] BYREF
  _BYTE v27[8]; // [rsp+68h] [rbp-9h] BYREF
  _BYTE v28[32]; // [rsp+70h] [rbp-1h] BYREF
  _BYTE v29[40]; // [rsp+90h] [rbp+1Fh] BYREF

  v5 = (unsigned int)a1;
  v7 = a2;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  v10 = (__int64)Current;
  if ( !Current )
  {
    v20 = WdLogNewEntry5_WdError(v9);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    return (unsigned int)v10;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 12) + 216LL))() )
  {
    v21 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v21 + 24) = v10;
    LODWORD(v10) = -1073741790;
    *(_QWORD *)(v21 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v21);
    return (unsigned int)v10;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, *(struct DXGFASTMUTEX *const *)(v10 + 104));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v26, v5, (struct _KTHREAD **)v10, &v24);
  v15 = v24;
  if ( !v24 )
  {
    v22 = WdLogNewEntry5_WdError(v14);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v22 + 24) = v5;
    *(_QWORD *)(v22 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    goto LABEL_9;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, v24, 0LL);
  v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27);
  v10 = v16;
  if ( v16 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v17);
LABEL_19:
    *(_QWORD *)(v23 + 24) = v15;
    *(_QWORD *)(v23 + 32) = v10;
    WdLogEvent5_WdError(v23);
    goto LABEL_8;
  }
  if ( *((_BYTE *)v15 + 2229) || (v18 = *((_QWORD *)v15 + 289)) == 0 )
  {
    v23 = WdLogNewEntry5_WdError(v17);
    v10 = -1073741811LL;
    goto LABEL_19;
  }
  LODWORD(v10) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v18 + 504) + 8LL)
                                                                            + 408LL))(
                   *(_QWORD *)(v18 + 512),
                   v7,
                   a3,
                   a4);
LABEL_8:
  COREACCESS::~COREACCESS((COREACCESS *)v29);
  COREACCESS::~COREACCESS((COREACCESS *)v28);
LABEL_9:
  if ( v26 )
    DXGADAPTER::ReleaseReferenceNoTracking(v26);
  if ( v25[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
  return (unsigned int)v10;
}
