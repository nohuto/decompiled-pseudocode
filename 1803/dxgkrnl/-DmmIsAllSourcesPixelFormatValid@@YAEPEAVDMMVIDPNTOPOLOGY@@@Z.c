/*
 * XREFs of ?DmmIsAllSourcesPixelFormatValid@@YAEPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C00BA3B8
 * Callers:
 *     ?_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z @ 0x1C00B9F68 (-_IsSupportedVidPn@VIDPN_MGR@@AEBAJPEAUD3DKMDT_HVIDPN__@@QEAE@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004064 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 */

unsigned __int8 __fastcall DmmIsAllSourcesPixelFormatValid(struct DMMVIDPNTOPOLOGY *a1)
{
  __int64 *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 *v9; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v12);
  }
  v2 = (__int64 *)((char *)a1 + 24);
  v3 = 0LL;
  v4 = *v2;
  if ( (__int64 *)*v2 != v2 )
    v3 = *v2 - 8;
  while ( 1 )
  {
    if ( !v3 )
      return 1;
    v5 = *(_QWORD *)(v3 + 88);
    if ( !v5 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v13);
    }
    v6 = *(_QWORD *)(v5 + 104);
    v15 = 0LL;
    if ( !v6 )
    {
      v7 = 0LL;
LABEL_19:
      v14 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v14);
      goto LABEL_10;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 96));
    v7 = *(_QWORD *)(v5 + 104);
    if ( !v7 )
      goto LABEL_19;
LABEL_10:
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v15, v7);
    v8 = *(_QWORD *)(v15 + 144);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v15, 0LL);
    if ( v8 )
    {
      v11 = *(int *)(v8 + 96);
      if ( (unsigned int)v11 <= 0x29 )
      {
        v4 = 0x20003900000LL;
        if ( _bittest64(&v4, v11) )
          return 0;
      }
    }
    v9 = *(__int64 **)(v3 + 8);
    v3 = (__int64)(v9 - 1);
    if ( v9 == v2 )
      v3 = 0LL;
  }
}
