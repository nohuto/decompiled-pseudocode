/*
 * XREFs of ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0172B78
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C016F098 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C00E6A04 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0172D30 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C01B5DFC (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?Reset@VIDPN_MGR@@QEAAXXZ @ 0x1C01D3F98 (-Reset@VIDPN_MGR@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::Reset(ADAPTER_DISPLAY *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  DXGADAPTER *v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  VIDPN_MGR *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int i; // ebx
  struct _TDR_RECOVERY_CONTEXT *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  _BYTE *j; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  _DWORD *k; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rbx
  unsigned int m; // edi
  _BYTE v40[8]; // [rsp+20h] [rbp-20h] BYREF
  char v41; // [rsp+28h] [rbp-18h]
  _BYTE v42[16]; // [rsp+30h] [rbp-10h] BYREF
  struct _TDR_RECOVERY_CONTEXT *v43; // [rsp+58h] [rbp+18h] BYREF

  v43 = a2;
  v2 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v2) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *(VIDPN_MGR **)(*((_QWORD *)v2 + 285) + 88LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v43, (__int64)v9, v6, v7);
  VIDPN_MGR::Reset(v9);
  DXGFASTMUTEX::Release(*((struct _KTHREAD ***)v43 + 5), v10, v11, v12);
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v40, (ADAPTER_DISPLAY *)((char *)this + 400), v13, v14);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
    DISPLAY_SOURCE::Reset((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3208LL * i), v16);
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v40, v17, v18, v19);
    if ( v41 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v40, v20, v13, v14);
  }
  ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
    this,
    (__int64 (__fastcall *)(__int64, __int64))lambda_8c4f9d5363fac7cd16350590c99b22c5_::_lambda_invoker_cdecl_,
    0LL,
    v14);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v22, v21, v23, v24);
    *(_QWORD *)(v25 + 24) = 5562LL;
    WdLogEvent5_WdAssertion(v25);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v40, (ADAPTER_DISPLAY *)((char *)this + 200), v23, v24);
  for ( j = (_BYTE *)*((_QWORD *)this + 23); j != (char *)this + 184; j = *(_BYTE **)j )
    j[24] = 1;
  if ( v41 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v40, v26, v27, v28);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v42, (ADAPTER_DISPLAY *)((char *)this + 24), v27, v28);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v42);
  for ( k = (_DWORD *)*((_QWORD *)this + 8); k != (_DWORD *)((char *)this + 64) && k; k = *(_DWORD **)k )
    k[14] = 0;
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v42, v30, v31, v32);
  v37 = *((_QWORD *)this + 33);
  if ( v37 )
  {
    for ( m = 0; m < *(_DWORD *)v37; ++m )
      BLTQUEUE::Reset((BLTQUEUE *)(*(_QWORD *)(v37 + 8) + 2704LL * m), 0);
  }
  if ( v42[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v42, v34, v35, v36);
  return 0LL;
}
