/*
 * XREFs of ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C02156E8
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00C20F4 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00BBE40 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

const struct DMMVIDPNPRESENTPATH *__fastcall VIDPN_MGR::GetPathFromTargetInClientVidPn(
        VIDPN_MGR *this,
        unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  struct DMMVIDPNPRESENTPATH *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  DMMVIDPNTOPOLOGY *v14; // rdi
  __int64 v15; // rax
  int PathSourceFromTarget; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v20; // rax
  __int64 v22; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *((_QWORD *)this + 11);
  v6 = 0LL;
  v22 = 0LL;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 32));
    v7 = *((_QWORD *)this + 11);
  }
  else
  {
    v7 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v22, v7);
  if ( !v22 )
  {
    v10 = WdLogNewEntry5_WdDmmEvent(v8);
    v11 = *((_QWORD *)this + 1);
    if ( !v11 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v12);
      v11 = *((_QWORD *)this + 1);
    }
    v13 = v10;
    *(_QWORD *)(v10 + 24) = *(_QWORD *)(v11 + 16);
    goto LABEL_14;
  }
  v14 = (DMMVIDPNTOPOLOGY *)(v22 + 96);
  if ( v22 == -96 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v15);
  }
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v14, v3);
  if ( PathSourceFromTarget == -1 )
  {
    v13 = WdLogNewEntry5_WdDmmEvent(v17);
    *(_QWORD *)(v13 + 24) = v3;
LABEL_14:
    WdLogEvent5_WdDmmEvent(v13);
    goto LABEL_18;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v14, PathSourceFromTarget, v3);
  if ( !Path )
  {
    v20 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v20);
  }
  v6 = Path;
LABEL_18:
  auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
  return v6;
}
