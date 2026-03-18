/*
 * XREFs of ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C0188C80
 * Callers:
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0173FB4 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C01A1FF0 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 */

void __fastcall DXGDEVICE::Reset(DXGDEVICE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *i; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  const struct _WNF_STATE_NAME *v15; // rdx
  unsigned int v16; // r9d
  DXGPROCESS *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _BYTE v23[24]; // [rsp+20h] [rbp-18h] BYREF
  int v24; // [rsp+40h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v6 + 24) = 1424LL;
    WdLogEvent5_WdAssertion(v6);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 520LL), v4, v5);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  for ( i = (__int64 *)*((_QWORD *)this + 45); i != (__int64 *)((char *)this + 360) && i; i = (__int64 *)*i )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(i[2] + 16) + 16LL)) )
    {
      v12 = WdLogNewEntry5_WdAssertion(v11, v7, v8, v9);
      *(_QWORD *)(v12 + 24) = 226LL;
      WdLogEvent5_WdAssertion(v12);
    }
    *((_DWORD *)i + 8) = -1;
    *((_DWORD *)i + 7) = 2;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v7, v8, v9);
  v13 = *((_QWORD *)this + 2);
  v14 = *((_QWORD *)this + 75);
  *((_DWORD *)this + 102) = 2;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v13 + 408) + 8LL) + 488LL))(v14) )
    *((_DWORD *)this + 102) = 3;
  else
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 408LL) + 8LL) + 208LL))(
      *((_QWORD *)this + 75),
      22LL);
  v17 = (DXGPROCESS *)*((_QWORD *)this + 5);
  v24 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v17, v15, &v24, v16) < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v22 + 24) = 1476LL;
    WdLogEvent5_WdError(v22);
  }
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v18, v20, v21);
}
