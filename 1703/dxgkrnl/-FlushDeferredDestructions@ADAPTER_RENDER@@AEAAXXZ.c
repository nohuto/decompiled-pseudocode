/*
 * XREFs of ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C0173978
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C016F098 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0174384 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C00C91A8 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 */

void __fastcall ADAPTER_RENDER::FlushDeferredDestructions(PERESOURCE **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  PERESOURCE *v7; // rcx
  __int64 v8; // rax
  PERESOURCE *v9; // r14
  PERESOURCE *i; // rsi
  PERESOURCE *v11; // rax
  DXGDEVICE *v12; // rbx
  PERESOURCE *v13; // rsi
  PERESOURCE *j; // rdi
  PERESOURCE *v15; // rax
  DXGDEVICE *v16; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-88h] BYREF
  struct _KAPC_STATE v18; // [rsp+50h] [rbp-58h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v6 + 24) = 1841LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = this[2];
  if ( v7[16] != (PERESOURCE)KeGetCurrentThread() && !*((_BYTE *)v7 + 2244) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v2, v4, v5);
    *(_QWORD *)(v8 + 24) = 1846LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = (PERESOURCE *)(this + 15);
  for ( i = this[15]; ; i = (PERESOURCE *)*i )
  {
    v11 = i;
    if ( i == v9 )
      v11 = 0LL;
    if ( !v11 )
      break;
    v12 = (DXGDEVICE *)i;
    if ( i == v9 )
      v12 = 0LL;
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)v12 + 5) + 48LL), &ApcState);
    DXGDEVICE::FlushDeferredDestruction(v12, 0LL, 0, 0);
    KeUnstackDetachProcess(&ApcState);
  }
  v13 = (PERESOURCE *)(this + 17);
  for ( j = this[17]; ; j = (PERESOURCE *)*j )
  {
    v15 = j;
    if ( j == v13 )
      v15 = 0LL;
    if ( !v15 )
      break;
    v16 = (DXGDEVICE *)j;
    if ( j == v13 )
      v16 = 0LL;
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)v16 + 5) + 48LL), &v18);
    DXGDEVICE::FlushDeferredDestruction(v16, 0LL, 0, 0);
    KeUnstackDetachProcess(&v18);
  }
}
