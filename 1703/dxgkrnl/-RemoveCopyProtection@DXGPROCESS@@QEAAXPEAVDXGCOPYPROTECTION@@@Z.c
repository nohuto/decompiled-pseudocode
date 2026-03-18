/*
 * XREFs of ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C0022EFC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C01708E8 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPROCESS::RemoveCopyProtection(
        DXGPROCESS *this,
        struct DXGCOPYPROTECTION *a2,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax

  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 33) + 8LL) != CurrentThread )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, CurrentThread, a4);
    *(_QWORD *)(v6 + 24) = 536LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (_QWORD *)(((unsigned __int64)a2 + 24) & -(__int64)(a2 != 0LL));
  v8 = *v7;
  v9 = (_QWORD *)v7[1];
  if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v9 != v7 )
    __fastfail(3u);
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
}
