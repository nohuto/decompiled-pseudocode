/*
 * XREFs of ?DmmDisablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@I@Z @ 0x1C00BBD0C
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00AD3B8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     DxgkDisplayOnOff @ 0x1C00BA9E0 (DxgkDisplayOnOff.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00BB7E0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007DEC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00ADA40 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00ADF10 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DmmDisablePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  ADAPTER_DISPLAY *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 209);
  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v2) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v17);
  }
  v6 = *(ADAPTER_DISPLAY **)(v2 + 2304);
  v7 = *((_QWORD *)v6 + 11);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v20, v7);
  v9 = WdLogNewEntry5_WdDmmEvent(v8);
  *(_QWORD *)(v9 + 24) = v4;
  *(_QWORD *)(v9 + 32) = v7;
  WdLogEvent5_WdDmmEvent(v9);
  if ( (*(_DWORD *)(v2 + 300) & 0x100) != 0
    || (v10 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v6, v4, 0LL, 64, 0), v12 = v10, v10 >= 0) )
  {
    v13 = ADAPTER_DISPLAY::DestroyCddAllocations(v6, a1, v4);
    v15 = v13;
    if ( v13 < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v19[3] = v4;
      v19[4] = v2;
      v19[5] = v15;
      WdLogEvent5_WdError(v19);
    }
    LODWORD(v12) = 0;
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v18[3] = v4;
    v18[4] = v2;
    v18[5] = v12;
    WdLogEvent5_WdError(v18);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20 + 40));
  return (unsigned int)v12;
}
