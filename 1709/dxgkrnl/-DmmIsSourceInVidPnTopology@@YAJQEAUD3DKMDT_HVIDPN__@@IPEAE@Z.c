/*
 * XREFs of ?DmmIsSourceInVidPnTopology@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAE@Z @ 0x1C01ED17C
 * Callers:
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C01A37D4 (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000596C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000A2F4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 */

__int64 __fastcall DmmIsSourceInVidPnTopology(struct D3DKMDT_HVIDPN__ *const a1, int a2, bool *a3)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  DMMVIDPNTOPOLOGY *v11; // rbx
  __int64 v12; // rax

  if ( a3 )
  {
    *a3 = 0;
    v8 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a1);
    if ( v8 )
    {
      v11 = (DMMVIDPNTOPOLOGY *)(v8 + 96);
      if ( v8 == -96 )
      {
        v12 = WdLogNewEntry5_WdAssertion(v9);
        WdLogEvent5_WdAssertion(v12);
      }
      *a3 = DMMVIDPNTOPOLOGY::IsSourceInTopology(v11, a2);
      return 0LL;
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v10 + 24) = a1;
      WdLogEvent5_WdError(v10);
      return 3223192323LL;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = 0LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
}
