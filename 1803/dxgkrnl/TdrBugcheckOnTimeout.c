/*
 * XREFs of TdrBugcheckOnTimeout @ 0x1C019ACA4
 * Callers:
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C014DAA0 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C015BA34 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0199B6C (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C019A2D0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C019A510 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C019A5E0 (-TdrResetFromTimeoutAsync@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ @ 0x1C019AA20 (-Worker@CTDR_GDI_RESET_THREAD@@MEAAXXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C01D73C4 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0199C28 (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C019A77C (-TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

void __fastcall __noreturn TdrBugcheckOnTimeout(ULONG_PTR BugCheckParameter1, int a2, int a3)
{
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v5; // rbp
  struct _TDR_RECOVERY_CONTEXT *v6; // rcx
  __int64 v7; // rax
  PVOID PoolWithTag; // rax
  __int64 v9; // rdi
  int v10; // ecx
  void *retaddr; // [rsp+38h] [rbp+0h]
  void *BugCheckParameter2; // [rsp+40h] [rbp+8h]

  BugCheckParameter4 = a3;
  v5 = a2;
  BugCheckParameter2 = (void *)TdrGetDbgOwnerTag((const struct _TDR_RECOVERY_CONTEXT *)BugCheckParameter1);
  if ( !BugCheckParameter2 || BugCheckParameter2 == (void *)-1LL )
    BugCheckParameter2 = retaddr;
  if ( BugCheckParameter1 )
  {
    TdrUpdateDbgBuffer(v6);
    if ( *(_QWORD *)(BugCheckParameter1 + 2840) )
    {
      v7 = *(_QWORD *)(BugCheckParameter1 + 2848);
      if ( v7 )
      {
        if ( (_DWORD)v7 )
        {
          if ( (unsigned int)v7 < 0x1000 )
            LODWORD(v7) = 4096;
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v7, 0x52445476u);
          v9 = (__int64)PoolWithTag;
          if ( PoolWithTag )
          {
            memmove(PoolWithTag, *(const void **)(BugCheckParameter1 + 2840), *(_QWORD *)(BugCheckParameter1 + 2848));
            v10 = *(_DWORD *)(BugCheckParameter1 + 2848);
            if ( v10 )
            {
              qword_1C007BCE8 = v9;
              dword_1C007BCE0 = v10;
            }
            WdDbgReportCancel(*(_QWORD *)(BugCheckParameter1 + 2832));
          }
        }
      }
    }
  }
  KeBugCheckEx(0x116u, BugCheckParameter1, (ULONG_PTR)BugCheckParameter2, v5, BugCheckParameter4);
}
