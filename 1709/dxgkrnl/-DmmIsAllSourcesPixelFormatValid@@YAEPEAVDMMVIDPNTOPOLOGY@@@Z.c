/*
 * XREFs of ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C00F1734
 * Callers:
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C00A842C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000BCBC (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 */

unsigned __int8 __fastcall DmmIsAllSourcesPixelFormatValid(struct DMMVIDPNTOPOLOGY *a1)
{
  struct DMMVIDPNTOPOLOGY *v1; // rbp
  struct DMMVIDPNTOPOLOGY *v2; // rdi
  char *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1;
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v11);
  }
  v2 = (struct DMMVIDPNTOPOLOGY *)*((_QWORD *)v1 + 3);
  if ( v2 == (struct DMMVIDPNTOPOLOGY *)((char *)v1 + 24) )
    return 1;
  v3 = (char *)v2 - 8;
  if ( !v3 )
    return 1;
  while ( 1 )
  {
    v4 = *((_QWORD *)v3 + 11);
    if ( !v4 )
    {
      v12 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v12);
    }
    v5 = *(_QWORD *)(v4 + 104);
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
      v6 = *(_QWORD *)(v4 + 104);
      if ( v6 )
        goto LABEL_9;
    }
    else
    {
      v6 = 0LL;
    }
    v13 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v13);
LABEL_9:
    v7 = *(_QWORD *)(v6 + 144);
    v14 = v6;
    if ( !v7 )
    {
      ReferenceCounted::Release((ReferenceCounted *)(v6 + 88));
      goto LABEL_11;
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v14, 0LL);
    v9 = *(int *)(v7 + 96);
    if ( (unsigned int)v9 <= 0x29 )
    {
      v10 = 0x20003900000LL;
      if ( _bittest64(&v10, v9) )
        return 0;
    }
LABEL_11:
    a1 = (struct DMMVIDPNTOPOLOGY *)*((_QWORD *)v3 + 1);
    v3 = (char *)a1 - 8;
    if ( a1 == (struct DMMVIDPNTOPOLOGY *)((char *)v1 + 24) )
      v3 = 0LL;
    if ( !v3 )
      return 1;
  }
}
