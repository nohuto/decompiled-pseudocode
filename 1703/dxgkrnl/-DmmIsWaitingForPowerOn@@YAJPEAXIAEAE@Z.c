/*
 * XREFs of ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0104858
 * Callers:
 *     DxgkCheckMonitorPowerState @ 0x1C0093320 (DxgkCheckMonitorPowerState.c)
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C000A87C (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000AD00 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000CCE0 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C00E1550 (-GetMostImportantPathFromSource@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 */

__int64 __fastcall DmmIsWaitingForPowerOn(_QWORD *a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  unsigned int v5; // esi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdi
  ADAPTER_DISPLAY *v13; // rcx
  int v14; // edx
  struct DMMVIDPNPRESENTPATH *MostImportantPathFromSource; // rax
  int v16; // ecx
  __int64 v17; // rdx
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // [rsp+40h] [rbp+8h] BYREF
  __int64 v27; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  v5 = a2;
  if ( a1 )
  {
    if ( !a1[285] )
    {
      v24 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v24);
    }
    if ( !a1[286] )
      return 0LL;
    v7 = a1[285];
    v8 = *(_QWORD *)(v7 + 88);
    if ( v8 )
    {
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v27, *(_QWORD *)(v7 + 88), (__int64)a3, a4);
      v11 = *(_QWORD *)(v8 + 88);
      if ( v11 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 32));
        v12 = *(_QWORD *)(v8 + 88);
      }
      else
      {
        v12 = 0LL;
      }
      v13 = (ADAPTER_DISPLAY *)a1[285];
      v26 = v12;
      if ( !ADAPTER_DISPLAY::IsVidPnSourceActive(v13, v5, v9, v10)
        && v12
        && DMMVIDPNTOPOLOGY::IsSourceInTopology((DMMVIDPNTOPOLOGY *)(v12 + 96), v5) )
      {
        MostImportantPathFromSource = DMMVIDPNTOPOLOGY::GetMostImportantPathFromSource(
                                        (DMMVIDPNTOPOLOGY *)(v12 + 96),
                                        v14);
        v16 = MostImportantPathFromSource
            ? *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)MostImportantPathFromSource + 12) + 96LL) + 512LL) + 24LL)
            : 13;
        if ( v16 == 14 )
        {
          v17 = *(_QWORD *)(v12 + 120);
          if ( v17 == v12 + 120 || (v18 = (_QWORD *)(v17 - 8)) == 0LL )
          {
LABEL_20:
            *a3 = 1;
          }
          else
          {
            while ( *(_DWORD *)(v18[11] + 24LL) != v5 || *(_DWORD *)(*(_QWORD *)(v18[12] + 96LL) + 112LL) != 2 )
            {
              v25 = v18[1];
              v18 = (_QWORD *)(v25 - 8);
              if ( v25 == v12 + 120 )
                v18 = 0LL;
              if ( !v18 )
                goto LABEL_20;
            }
          }
        }
      }
      auto_rc<DMMVIDPN const>::reset(&v26, 0LL);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v27 + 40), v19, v20, v21);
      return 0LL;
    }
    v23 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v23 + 24) = a1;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v23 + 24) = 0LL;
  }
  WdLogEvent5_WdError(v23);
  return 3221225473LL;
}
