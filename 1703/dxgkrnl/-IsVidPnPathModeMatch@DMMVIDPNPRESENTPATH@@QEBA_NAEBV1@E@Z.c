/*
 * XREFs of ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00DF4EC
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00E18C8 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C00074CC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0008D94 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000C360 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000CB98 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C000D04C (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(
        D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *this,
        const struct DMMVIDPNPRESENTPATH *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // bl
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rbp
  __int64 v30; // rax
  __int64 v31; // rbp
  __int64 v32; // r12
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax

  v10 = 0;
  if ( !DMMVIDPNPRESENTPATH::IsFunctional((DMMVIDPNPRESENTPATH *)this)
    || (v11 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(this[29]), !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v11)) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v41);
  }
  if ( !DMMVIDPNPRESENTPATH::IsFunctional(a2)
    || (v16 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(this[29]), !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v16)) )
  {
    v42 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v42);
  }
  if ( !a3 && *((_DWORD *)this + 29) != *((_DWORD *)a2 + 29) || *((_DWORD *)this + 28) != *((_DWORD *)a2 + 28) )
    return 0;
  v17 = *((_QWORD *)this + 12);
  v18 = *(_QWORD *)(v17 + 104);
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
    v19 = *(_QWORD *)(v17 + 104);
  }
  else
  {
    v19 = 0LL;
  }
  v20 = *(_QWORD *)(v19 + 144);
  if ( !v20 )
  {
    v43 = WdLogNewEntry5_WdAssertion(v17, v12, v14, v15);
    WdLogEvent5_WdAssertion(v43);
  }
  v21 = *((_QWORD *)a2 + 12);
  v22 = *(_QWORD *)(v21 + 104);
  if ( v22 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 96));
    v23 = *(_QWORD *)(v21 + 104);
  }
  else
  {
    v23 = 0LL;
  }
  v24 = *(_QWORD *)(v23 + 144);
  if ( !v24 )
  {
    v44 = WdLogNewEntry5_WdAssertion(v21, v12, v14, v15);
    WdLogEvent5_WdAssertion(v44);
  }
  if ( !DMMVIDPNTARGETMODE::operator!=(v20, v24) )
  {
    v29 = *((_QWORD *)this + 11);
    v30 = *(_QWORD *)(v29 + 104);
    if ( v30 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v30 + 96));
      v31 = *(_QWORD *)(v29 + 104);
    }
    else
    {
      v31 = 0LL;
    }
    v32 = *(_QWORD *)(v31 + 144);
    if ( !v32 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
      WdLogEvent5_WdAssertion(v45);
    }
    v33 = *((_QWORD *)a2 + 11);
    v34 = *(_QWORD *)(v33 + 104);
    if ( v34 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v34 + 96));
      v35 = *(_QWORD *)(v33 + 104);
    }
    else
    {
      v35 = 0LL;
    }
    v36 = *(_QWORD *)(v35 + 144);
    if ( !v36 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
      WdLogEvent5_WdAssertion(v46);
    }
    v10 = DMMVIDPNSOURCEMODE::operator==(v32, v36, v27, v28);
    ReferenceCounted::Release((ReferenceCounted *)(v35 + 88), v37);
    ReferenceCounted::Release((ReferenceCounted *)(v31 + 88), v38);
  }
  ReferenceCounted::Release((ReferenceCounted *)(v23 + 88), v25);
  ReferenceCounted::Release((ReferenceCounted *)(v19 + 88), v39);
  return v10;
}
