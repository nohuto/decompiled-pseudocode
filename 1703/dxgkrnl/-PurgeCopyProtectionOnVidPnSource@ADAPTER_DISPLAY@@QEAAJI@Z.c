/*
 * XREFs of ?PurgeCopyProtectionOnVidPnSource@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E7528
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C00ED468 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00ED624 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E7408 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::PurgeCopyProtectionOnVidPnSource(DXGADAPTER **this, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *CurrentThread; // rcx
  DXGADAPTER **i; // rax
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v21 + 24) = 4650LL;
    WdLogEvent5_WdAssertion(v21);
  }
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
    *(_QWORD *)(v22 + 24) = 4653LL;
    WdLogEvent5_WdAssertion(v22);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)Current + 33) + 8LL) != CurrentThread )
  {
    v20 = WdLogNewEntry5_WdAssertion(CurrentThread, v8, v11, v12);
    *(_QWORD *)(v20 + 24) = 4654LL;
    WdLogEvent5_WdAssertion(v20);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(this + 3), v11, v12);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  for ( i = (DXGADAPTER **)this[8]; i != this + 8 && i; i = (DXGADAPTER **)*i )
  {
    if ( *((_DWORD *)i + 13) == a2 )
      *((_DWORD *)i + 14) = 0;
  }
  v16 = ADAPTER_DISPLAY::SetCopyProtection(this, a2);
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v15, v17, v18);
  return v16;
}
