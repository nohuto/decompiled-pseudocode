/*
 * XREFs of ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C0176B78
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C01C2684 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00ACAF4 (-SetCopyProtection@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z @ 0x1C0174CE0 (-FindCopyProtection@ADAPTER_DISPLAY@@QEAAPEAVDXGCOPYPROTECTION@@IIPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateCopyProtection(DXGADAPTER **this, unsigned int a2, int a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  struct DXGCOPYPROTECTION *CopyProtection; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGCOPYPROTECTION *v20; // rdi
  _QWORD *v21; // rax
  unsigned int v22; // ebx
  int v23; // ebx
  int v24; // eax
  _BYTE v26[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = a4;
  v7 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 5054LL;
    WdLogEvent5_WdAssertion(v10);
  }
  Current = DXGPROCESS::GetCurrent(v9, v8);
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v13 + 24) = 5057LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)Current + 37);
  if ( *(struct _KTHREAD **)(v14 + 8) != KeGetCurrentThread() )
  {
    v15 = WdLogNewEntry5_WdAssertion(v14);
    *(_QWORD *)(v15 + 24) = 5058LL;
    WdLogEvent5_WdAssertion(v15);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)(this + 3));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  CopyProtection = ADAPTER_DISPLAY::FindCopyProtection((ADAPTER_DISPLAY *)this, v7, v5, Current);
  v20 = CopyProtection;
  if ( CopyProtection )
  {
    v23 = *((_DWORD *)CopyProtection + 14);
    *((_DWORD *)CopyProtection + 14) = a3;
    v24 = ADAPTER_DISPLAY::SetCopyProtection(this, v17);
    if ( v24 < 0 )
      *((_DWORD *)v20 + 14) = v23;
    v22 = v24;
  }
  else
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19);
    v21[4] = Current;
    v22 = -1073741811;
    v21[6] = -1073741811LL;
    v21[3] = v5;
    v21[5] = v7;
    WdLogEvent5_WdWarning(v21);
  }
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26);
  return v22;
}
