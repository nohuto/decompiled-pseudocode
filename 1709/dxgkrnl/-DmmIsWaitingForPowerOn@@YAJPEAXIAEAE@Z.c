/*
 * XREFs of ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0102158
 * Callers:
 *     DxgkCheckMonitorPowerState @ 0x1C00ED3A0 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000596C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0007B20 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000BF64 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C00A3874 (-GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 */

__int64 __fastcall DmmIsWaitingForPowerOn(_QWORD *a1, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdi
  ADAPTER_DISPLAY *v10; // rcx
  struct DMMVIDPNPRESENTPATH *MostImportantPathFromSource; // rax
  int v12; // ecx
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF
  __int64 v20; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  if ( a1 )
  {
    if ( !a1[288] )
    {
      v17 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v17);
    }
    if ( !a1[289] )
      return 0LL;
    v6 = a1[288];
    v7 = *(_QWORD *)(v6 + 88);
    if ( v7 )
    {
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v20, *(_QWORD *)(v6 + 88));
      v8 = *(_QWORD *)(v7 + 88);
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 32));
        v9 = *(_QWORD *)(v7 + 88);
      }
      else
      {
        v9 = 0LL;
      }
      v10 = (ADAPTER_DISPLAY *)a1[288];
      v19 = v9;
      if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(v10, a2)
        && v9
        && DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v9 + 96), a2) )
      {
        MostImportantPathFromSource = DMMVIDPNTOPOLOGY::GetMostImportantPathFromSource(
                                        (DMMVIDPNTOPOLOGY *)(v9 + 96),
                                        a2);
        v12 = MostImportantPathFromSource
            ? *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)MostImportantPathFromSource + 12) + 96LL) + 512LL) + 24LL)
            : 13;
        if ( v12 == 14 )
        {
          v13 = *(_QWORD *)(v9 + 120);
          if ( v13 == v9 + 120 || (v14 = (_QWORD *)(v13 - 8)) == 0LL )
          {
LABEL_20:
            *a3 = 1;
          }
          else
          {
            while ( *(_DWORD *)(v14[11] + 24LL) != a2 || *(_DWORD *)(*(_QWORD *)(v14[12] + 96LL) + 112LL) != 2 )
            {
              v18 = v14[1];
              v14 = (_QWORD *)(v18 - 8);
              if ( v18 == v9 + 120 )
                v14 = 0LL;
              if ( !v14 )
                goto LABEL_20;
            }
          }
        }
      }
      auto_rc<DMMVIDPN const>::reset(&v19, 0LL);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20 + 40));
      return 0LL;
    }
    v16 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v16 + 24) = a1;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v16 + 24) = 0LL;
  }
  WdLogEvent5_WdError(v16);
  return 3221225473LL;
}
