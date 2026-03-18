/*
 * XREFs of ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C01731DC
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01A87E8 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00E7408 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z @ 0x1C0171140 (-FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGCOPYPROTECTION *CopyProtection; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct DXGCOPYPROTECTION *v27; // rdi
  _QWORD *v28; // rax
  unsigned int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // ebx
  int v34; // eax
  _BYTE v36[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a4;
  v7 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v12 + 24) = 4492LL;
    WdLogEvent5_WdAssertion(v12);
  }
  Current = DXGPROCESS::GetCurrent(v9);
  if ( !Current )
  {
    v18 = WdLogNewEntry5_WdAssertion(v14, v13, v16, v17);
    *(_QWORD *)(v18 + 24) = 4495LL;
    WdLogEvent5_WdAssertion(v18);
  }
  CurrentThread = KeGetCurrentThread();
  v20 = *((_QWORD *)Current + 33);
  if ( *(struct _KTHREAD **)(v20 + 8) != CurrentThread )
  {
    v21 = WdLogNewEntry5_WdAssertion(v20, CurrentThread, v16, v17);
    *(_QWORD *)(v21 + 24) = 4496LL;
    WdLogEvent5_WdAssertion(v21);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v36, (struct DXGFASTMUTEX *const)(this + 3), v16, v17);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v36);
  CopyProtection = ADAPTER_DISPLAY::FindCopyProtection((ADAPTER_DISPLAY *)this, v7, v5, Current);
  v27 = CopyProtection;
  if ( CopyProtection )
  {
    v33 = *((_DWORD *)CopyProtection + 14);
    *((_DWORD *)CopyProtection + 14) = a3;
    v34 = ADAPTER_DISPLAY::SetCopyProtection(this, v23);
    if ( v34 < 0 )
      *((_DWORD *)v27 + 14) = v33;
    v29 = v34;
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25, v26);
    v28[4] = Current;
    v29 = -1073741811;
    v28[6] = -1073741811LL;
    v28[3] = v5;
    v28[5] = v7;
    WdLogEvent5_WdWarning(v28);
  }
  if ( v36[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v36, v30, v31, v32);
  return v29;
}
