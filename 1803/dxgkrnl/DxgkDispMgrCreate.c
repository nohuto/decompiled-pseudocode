/*
 * XREFs of DxgkDispMgrCreate @ 0x1C0110D00
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGEROBJECT@@@Z @ 0x1C001A1E0 (-reset@-$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@QEAAXPEAVDXGDISPLAYMANAGEROBJECT@@@Z.c)
 *     ??0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z @ 0x1C0110FF4 (--0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z.c)
 */

__int64 __fastcall DxgkDispMgrCreate(ULONG64 a1)
{
  ULONG64 v2; // rcx
  DXGDISPLAYMANAGEROBJECT *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  DXGDISPLAYMANAGEROBJECT *v6; // rdi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r14
  _QWORD *v10; // rax
  PVOID v11; // r14
  NTSTATUS inserted; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  _QWORD *v15; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  ACCESS_MASK DesiredAccess[4]; // [rsp+50h] [rbp-28h]
  HANDLE Handle; // [rsp+60h] [rbp-18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF
  ReferenceCounted *v24; // [rsp+90h] [rbp+18h] BYREF

  Handle = 0LL;
  v2 = a1 + 24;
  if ( v2 < a1 || v2 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)DesiredAccess = *(_OWORD *)a1;
  Handle = *(HANDLE *)(a1 + 16);
  v3 = (DXGDISPLAYMANAGEROBJECT *)operator new[](0x98uLL, 0x4B677844u, PagedPool);
  if ( v3 )
    v6 = DXGDISPLAYMANAGEROBJECT::DXGDISPLAYMANAGEROBJECT(v3, DesiredAccess[3] & 1);
  else
    v6 = 0LL;
  v24 = v6;
  if ( !v6 || !*((_QWORD *)v6 + 2) || !*((_BYTE *)v6 + 24) )
  {
    v20 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v20 + 24) = 669LL;
    WdLogEvent5_WdLowResource(v20);
    LODWORD(v9) = -1073741801;
    goto LABEL_20;
  }
  Object = 0LL;
  LOBYTE(v5) = 1;
  LOBYTE(v4) = 1;
  v7 = ObCreateObject(v4, g_pDxgkDisplayManagerObjectType, *(_QWORD *)DesiredAccess, v5, 0LL, 16, 168, 0, &Object);
  v9 = v7;
  if ( v7 < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v17 + 24) = v9;
    WdLogEvent5_WdError(v17);
LABEL_20:
    auto_rc<DXGDISPLAYMANAGEROBJECT>::reset(&v24, 0LL);
    return (unsigned int)v9;
  }
  v10 = Object;
  *(_QWORD *)Object = 0LL;
  v10[1] = 0LL;
  v11 = Object;
  if ( *((_QWORD *)v6 + 4) )
  {
    v18 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v18 + 24) = 475LL;
    WdLogEvent5_WdAssertion(v18);
  }
  *((_QWORD *)v6 + 4) = v11;
  v24 = 0LL;
  *(_QWORD *)Object = v6;
  inserted = ObInsertObject(Object, 0LL, DesiredAccess[2], 0, 0LL, &Handle);
  v14 = inserted;
  if ( inserted < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v19 + 24) = v14;
    WdLogEvent5_WdError(v19);
    LODWORD(v9) = v14;
    goto LABEL_20;
  }
  v15 = (_QWORD *)(a1 + 16);
  if ( a1 + 16 >= MmUserProbeAddress )
    v15 = (_QWORD *)MmUserProbeAddress;
  *v15 = Handle;
  auto_rc<DXGDISPLAYMANAGEROBJECT>::reset(&v24, 0LL);
  return (unsigned int)v14;
}
