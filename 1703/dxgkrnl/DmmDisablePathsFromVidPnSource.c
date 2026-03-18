/*
 * XREFs of DmmDisablePathsFromVidPnSource @ 0x1C009A290
 * Callers:
 *     DxgkDisplayOnOff @ 0x1C0096610 (DxgkDisplayOnOff.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C009A370 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E7C6C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000CD70 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00E8438 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C00E8858 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 */

__int64 __fastcall DmmDisablePathsFromVidPnSource(struct DXGDEVICE *a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  ADAPTER_DISPLAY *v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 225);
  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v2) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    WdLogEvent5_WdAssertion(v23);
  }
  v9 = *(ADAPTER_DISPLAY **)(v2 + 2280);
  v10 = *((_QWORD *)v9 + 11);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v26, v10, v7, v8);
  v11 = WdLogNewEntry5_WdDmmEvent();
  *(_QWORD *)(v11 + 24) = v4;
  *(_QWORD *)(v11 + 32) = v10;
  WdLogEvent5_WdDmmEvent(v11);
  if ( (*(_DWORD *)(v2 + 300) & 0x100) != 0
    || (v12 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(v9, v4, 0, 0x40u, 0), v15 = v12, v12 >= 0) )
  {
    v16 = ADAPTER_DISPLAY::DestroyCddAllocations(v9, a1, v4);
    v21 = v16;
    if ( v16 < 0 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
      v25[3] = v4;
      v25[4] = v2;
      v25[5] = v21;
      WdLogEvent5_WdError(v25);
    }
    LODWORD(v15) = 0;
  }
  else
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v24[3] = v4;
    v24[4] = v2;
    v24[5] = v15;
    WdLogEvent5_WdError(v24);
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 40), v17, v19, v20);
  return (unsigned int)v15;
}
