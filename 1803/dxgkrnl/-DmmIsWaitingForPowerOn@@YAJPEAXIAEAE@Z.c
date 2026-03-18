/*
 * XREFs of ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C021425C
 * Callers:
 *     DxgkCheckMonitorPowerState @ 0x1C00CF230 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000452C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000459C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0014350 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0014394 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C00BC2E8 (-GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z @ 0x1C0222728 (-IsPathFromSourcePoweredOff@DMMVIDPN@@QEBAEI@Z.c)
 */

__int64 __fastcall DmmIsWaitingForPowerOn(_QWORD *a1, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdi
  ADAPTER_DISPLAY *v13; // rcx
  int v14; // edx
  struct DMMVIDPNPRESENTPATH *MostImportantPathFromSource; // rax
  unsigned int v16; // edx
  int v17; // ecx
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  if ( !a1 )
  {
    v6 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v6 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3221225473LL;
  }
  if ( !a1[307] )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a1[308] )
  {
    v9 = a1[307];
    v10 = *(_QWORD *)(v9 + 88);
    if ( !v10 )
    {
      v6 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v6 + 24) = a1;
      goto LABEL_3;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v19, *(_QWORD *)(v9 + 88));
    v11 = *(_QWORD *)(v10 + 88);
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
      v12 = *(_QWORD *)(v10 + 88);
    }
    else
    {
      v12 = 0LL;
    }
    v13 = (ADAPTER_DISPLAY *)a1[307];
    v18 = v12;
    if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(v13, a2)
      && v12
      && DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v12 + 96), a2) )
    {
      MostImportantPathFromSource = DMMVIDPNTOPOLOGY::GetMostImportantPathFromSource(
                                      (DMMVIDPNTOPOLOGY *)(v12 + 96),
                                      v14);
      if ( MostImportantPathFromSource )
        v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)MostImportantPathFromSource + 12) + 96LL) + 512LL) + 24LL);
      else
        v17 = 13;
      if ( v17 == 14 && !DMMVIDPN::IsPathFromSourcePoweredOff((DMMVIDPN *)v12, v16) )
        *a3 = 1;
    }
    auto_rc<DMMVIDPN const>::reset(&v18, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v19 + 40));
  }
  return 0LL;
}
