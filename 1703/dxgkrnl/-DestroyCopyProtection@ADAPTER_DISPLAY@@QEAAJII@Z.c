/*
 * XREFs of ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C01708E8
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DxgkHandleVideoParameters @ 0x1C01A87E8 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00061C0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDXGCOPYPROTECTION@@QEAAPEAXI@Z @ 0x1C0022DC4 (--_GDXGCOPYPROTECTION@@QEAAPEAXI@Z.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C0022EFC (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E7408 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z @ 0x1C0171140 (-FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DestroyCopyProtection(DXGADAPTER **this, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct DXGCOPYPROTECTION *CopyProtection; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  DXGCOPYPROTECTION *v25; // rbx
  _QWORD *v26; // rax
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  DXGCOPYPROTECTION *v31; // rcx
  DXGCOPYPROTECTION **v32; // rax
  _BYTE v34[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v10 + 24) = 4558LL;
    WdLogEvent5_WdAssertion(v10);
  }
  Current = DXGPROCESS::GetCurrent(v7);
  if ( !Current )
  {
    v16 = WdLogNewEntry5_WdAssertion(v12, v11, v14, v15);
    *(_QWORD *)(v16 + 24) = 4561LL;
    WdLogEvent5_WdAssertion(v16);
  }
  CurrentThread = KeGetCurrentThread();
  v18 = *((_QWORD *)Current + 33);
  if ( *(struct _KTHREAD **)(v18 + 8) != CurrentThread )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18, CurrentThread, v14, v15);
    *(_QWORD *)(v19 + 24) = 4562LL;
    WdLogEvent5_WdAssertion(v19);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v34, (struct DXGFASTMUTEX *const)(this + 3), v14, v15);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
  CopyProtection = ADAPTER_DISPLAY::FindCopyProtection((ADAPTER_DISPLAY *)this, v5, v4, Current);
  v25 = CopyProtection;
  if ( CopyProtection )
  {
    DXGPROCESS::RemoveCopyProtection(Current, CopyProtection, v23, v24);
    v31 = *(DXGCOPYPROTECTION **)v25;
    v32 = (DXGCOPYPROTECTION **)*((_QWORD *)v25 + 1);
    if ( *(DXGCOPYPROTECTION **)(*(_QWORD *)v25 + 8LL) != v25 || *v32 != v25 )
      __fastfail(3u);
    *v32 = v31;
    *((_QWORD *)v31 + 1) = v32;
    DXGCOPYPROTECTION::`scalar deleting destructor'(v25);
    ADAPTER_DISPLAY::SetCopyProtection(this, v5);
    DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
    v27 = 0;
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
    v27 = -1073741811;
    v26[3] = v4;
    v26[4] = Current;
    v26[5] = v5;
    v26[6] = -1073741811LL;
    WdLogEvent5_WdWarning(v26);
  }
  if ( v34[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34, v28, v29, v30);
  return v27;
}
