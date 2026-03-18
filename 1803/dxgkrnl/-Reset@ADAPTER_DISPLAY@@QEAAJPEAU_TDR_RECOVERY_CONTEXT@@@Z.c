/*
 * XREFs of ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0157194
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C014F2D4 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C003484C (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00E1AFC (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0157384 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C01D63B4 (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?DmmReset@@YAXPEAX@Z @ 0x1C0214F2C (-DmmReset@@YAXPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Reset(void **this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  unsigned int i; // edi
  struct _TDR_RECOVERY_CONTEXT *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  void **j; // rax
  void **k; // rax
  void **m; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rbx
  unsigned int n; // edi
  char v15[8]; // [rsp+20h] [rbp-20h] BYREF
  char v16; // [rsp+28h] [rbp-18h]
  _BYTE v17[16]; // [rsp+30h] [rbp-10h] BYREF

  DmmReset(this[2]);
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(this + 50), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    DISPLAY_SOURCE::Reset((DISPLAY_SOURCE *)((char *)this[14] + 3760 * i), v4);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
    if ( v16 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  }
  ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
    (ADAPTER_DISPLAY *)this,
    (__int64 (__fastcall *)(__int64, __int64))lambda_8c4f9d5363fac7cd16350590c99b22c5_::_lambda_invoker_cdecl_,
    0LL);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)this[2]) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 6176LL;
    WdLogEvent5_WdAssertion(v6);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (struct DXGFASTMUTEX *const)(this + 25), 0);
  for ( j = (void **)this[23]; j != this + 23; j = (void **)*j )
    *((_BYTE *)j + 24) = 1;
  if ( v16 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(this + 3), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  for ( k = (void **)this[8]; k != this + 8 && k; k = (void **)*k )
    *((_DWORD *)k + 14) = 0;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 55));
  for ( m = (void **)this[60]; m != this + 60 && m; m = (void **)*m )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)m[2] + 2)) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v10);
      *(_QWORD *)(v11 + 24) = 1159LL;
      WdLogEvent5_WdAssertion(v11);
    }
    *((_DWORD *)m + 6) = 2;
    DXGPROTECTEDSESSION::SetSessionStatus((DXGPROTECTEDSESSION *)m, DXGK_PROTECTED_SESSION_STATUS_INVALID);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 55);
  v12 = this[33];
  if ( v12 )
  {
    for ( n = 0; n < *(_DWORD *)v12; ++n )
      BLTQUEUE::Reset((BLTQUEUE *)(v12[1] + 2704LL * n), 0);
  }
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  return 0LL;
}
