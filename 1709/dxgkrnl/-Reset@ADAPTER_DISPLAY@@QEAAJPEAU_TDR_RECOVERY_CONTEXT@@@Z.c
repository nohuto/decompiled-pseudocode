/*
 * XREFs of ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01764B0
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C017286C (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C0029764 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C007F72C (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00AC068 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01766D4 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@VIDPN_MGR@@QEAAXXZ @ 0x1C01EF670 (-Reset@VIDPN_MGR@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Reset(ADAPTER_DISPLAY *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  DXGADAPTER *v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  VIDPN_MGR *v6; // rbx
  unsigned int i; // ebx
  struct _TDR_RECOVERY_CONTEXT *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE *j; // rax
  _DWORD *k; // rax
  __int64 *m; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  unsigned int n; // edi
  _BYTE v19[8]; // [rsp+20h] [rbp-20h] BYREF
  char v20; // [rsp+28h] [rbp-18h]
  _BYTE v21[16]; // [rsp+30h] [rbp-10h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v22; // [rsp+68h] [rbp+28h] BYREF

  v22 = a2;
  v2 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v2) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *(VIDPN_MGR **)(*((_QWORD *)v2 + 288) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v22, (__int64)v6);
  VIDPN_MGR::Reset(v6);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v22 + 5));
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (ADAPTER_DISPLAY *)((char *)this + 400));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    DISPLAY_SOURCE::Reset((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3760LL * i), v8);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
    if ( v20 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  }
  ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
    this,
    (__int64 (__fastcall *)(__int64, __int64))lambda_8c4f9d5363fac7cd16350590c99b22c5_::_lambda_invoker_cdecl_,
    0LL);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 6162LL;
    WdLogEvent5_WdAssertion(v10);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (ADAPTER_DISPLAY *)((char *)this + 200));
  for ( j = (_BYTE *)*((_QWORD *)this + 23); j != (char *)this + 184; j = *(_BYTE **)j )
    j[24] = 1;
  if ( v20 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (ADAPTER_DISPLAY *)((char *)this + 24));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  for ( k = (_DWORD *)*((_QWORD *)this + 8); k != (_DWORD *)((char *)this + 64) && k; k = *(_DWORD **)k )
    k[14] = 0;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  DXGFASTMUTEX::Acquire((ADAPTER_DISPLAY *)((char *)this + 440));
  for ( m = (__int64 *)*((_QWORD *)this + 60); m != (__int64 *)((char *)this + 480) && m; m = (__int64 *)*m )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(m[2] + 16)) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v15 + 24) = 1147LL;
      WdLogEvent5_WdAssertion(v15);
    }
    *((_DWORD *)m + 6) = 2;
    DXGPROTECTEDSESSION::SetSessionStatus((DXGPROTECTEDSESSION *)m, DXGK_PROTECTED_SESSION_STATUS_INVALID);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 55);
  v16 = *((_QWORD *)this + 33);
  if ( v16 )
  {
    for ( n = 0; n < *(_DWORD *)v16; ++n )
      BLTQUEUE::Reset((BLTQUEUE *)(*(_QWORD *)(v16 + 8) + 2704LL * n), 0);
  }
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  return 0LL;
}
