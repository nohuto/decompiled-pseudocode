/*
 * XREFs of ?Reset@DXGDEVICE@@QEAAXXZ @ 0x1C019E020
 * Callers:
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0177AA4 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C01B9D48 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 */

void __fastcall DXGDEVICE::Reset(DXGDEVICE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 *i; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  const struct _WNF_STATE_NAME *v9; // rdx
  unsigned int v10; // r9d
  DXGPROCESS *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+40h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 1426LL;
    WdLogEvent5_WdAssertion(v3);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 616LL));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  for ( i = (__int64 *)*((_QWORD *)this + 45); i != (__int64 *)((char *)this + 360) && i; i = (__int64 *)*i )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(i[2] + 16) + 16LL)) )
    {
      v6 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v6 + 24) = 226LL;
      WdLogEvent5_WdAssertion(v6);
    }
    *((_DWORD *)i + 8) = -1;
    *((_DWORD *)i + 7) = 2;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  v7 = *((_QWORD *)this + 2);
  v8 = *((_QWORD *)this + 75);
  *((_DWORD *)this + 102) = 2;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v7 + 504) + 8LL) + 488LL))(v8) )
    *((_DWORD *)this + 102) = 3;
  else
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 504LL) + 8LL) + 208LL))(
      *((_QWORD *)this + 75),
      22LL);
  v11 = (DXGPROCESS *)*((_QWORD *)this + 5);
  v15 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v11, v9, &v15, v10) < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = 1478LL;
    WdLogEvent5_WdError(v13);
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
}
