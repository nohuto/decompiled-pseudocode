/*
 * XREFs of ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C00E1708
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00E4658 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C00F2800 (-PinPathContentRotation@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@.c)
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C00F6860 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 *     ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C01D2F08 (-PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_R.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x1C01D3250 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000C324 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 */

unsigned __int8 __fastcall DmmIsAllSourcesPixelFormatValid(
        struct DMMVIDPNTOPOLOGY *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct DMMVIDPNTOPOLOGY *v4; // rsi
  struct DMMVIDPNTOPOLOGY *v5; // rdi
  char *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  v5 = (struct DMMVIDPNTOPOLOGY *)*((_QWORD *)v4 + 3);
  if ( v5 == (struct DMMVIDPNTOPOLOGY *)((char *)v4 + 24) )
    return 1;
  v6 = (char *)v5 - 8;
  if ( !v6 )
    return 1;
  while ( 1 )
  {
    v7 = *((_QWORD *)v6 + 11);
    if ( !v7 )
    {
      v15 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v15);
    }
    v8 = *(_QWORD *)(v7 + 104);
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 96));
      v9 = *(_QWORD *)(v7 + 104);
      if ( v9 )
        goto LABEL_9;
    }
    else
    {
      v9 = 0LL;
    }
    v16 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v16);
LABEL_9:
    v10 = *(_QWORD *)(v9 + 144);
    v17 = v9;
    if ( !v10 )
    {
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 88), a2);
      goto LABEL_11;
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v17, 0LL);
    v12 = *(int *)(v10 + 96);
    if ( (unsigned int)v12 <= 0x29 )
    {
      v13 = 0x20003900000LL;
      if ( _bittest64(&v13, v12) )
        return 0;
    }
LABEL_11:
    a1 = (struct DMMVIDPNTOPOLOGY *)*((_QWORD *)v6 + 1);
    v6 = (char *)a1 - 8;
    if ( a1 == (struct DMMVIDPNTOPOLOGY *)((char *)v4 + 24) )
      v6 = 0LL;
    if ( !v6 )
      return 1;
  }
}
