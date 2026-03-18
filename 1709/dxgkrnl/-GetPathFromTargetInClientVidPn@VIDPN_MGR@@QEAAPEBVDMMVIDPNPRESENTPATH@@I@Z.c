/*
 * XREFs of ?GetPathFromTargetInClientVidPn@VIDPN_MGR@@QEAAPEBVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C01EE660
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00D3870 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00A42F8 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
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
  __int64 v12; // rcx
  DMMVIDPNTOPOLOGY *v13; // rdi
  __int64 v14; // rax
  int PathSourceFromTarget; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  __int64 v19; // rax
  __int64 v21; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *((_QWORD *)this + 11);
  v6 = 0LL;
  v21 = 0LL;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 32));
    v7 = *((_QWORD *)this + 11);
  }
  else
  {
    v7 = 0LL;
  }
  auto_rc<DMMVIDPN const>::reset(&v21, v7);
  if ( !v21 )
  {
    v10 = WdLogNewEntry5_WdDmmEvent(v8);
    if ( !*((_QWORD *)this + 1) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v11);
    }
    v12 = v10;
    *(_QWORD *)(v10 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
    goto LABEL_14;
  }
  v13 = (DMMVIDPNTOPOLOGY *)(v21 + 96);
  if ( v21 == -96 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v14);
  }
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(v13, (unsigned int)v3);
  if ( PathSourceFromTarget == -1 )
  {
    v12 = WdLogNewEntry5_WdDmmEvent(v16);
    *(_QWORD *)(v12 + 24) = v3;
LABEL_14:
    WdLogEvent5_WdDmmEvent(v12);
    goto LABEL_18;
  }
  Path = DMMVIDPNTOPOLOGY::FindPath(v13, PathSourceFromTarget, v3);
  if ( !Path )
  {
    v19 = WdLogNewEntry5_WdAssertion(v17);
    WdLogEvent5_WdAssertion(v19);
  }
  v6 = Path;
LABEL_18:
  auto_rc<DMMVIDPN const>::reset(&v21, 0LL);
  return v6;
}
