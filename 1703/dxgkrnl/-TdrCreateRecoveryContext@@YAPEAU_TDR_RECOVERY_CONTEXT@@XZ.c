/*
 * XREFs of ?TdrCreateRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@XZ @ 0x1C0192770
 * Callers:
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C01B6930 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C0191754 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 */

struct _TDR_RECOVERY_CONTEXT *TdrCreateRecoveryContext(void)
{
  struct _TDR_RECOVERY_CONTEXT *Pool; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct _TDR_RECOVERY_CONTEXT *v3; // rbx
  __int64 v4; // rax

  Pool = (struct _TDR_RECOVERY_CONTEXT *)TdrAllocatePool(0xB60uLL, (POOL_TYPE)512);
  v3 = Pool;
  if ( Pool )
  {
    *((_DWORD *)Pool + 4) = 0;
    *((_DWORD *)Pool + 29) = 0;
    *(_DWORD *)Pool = 1380209782;
    *((_DWORD *)Pool + 28) = 1380209782;
    *((_DWORD *)Pool + 32) = 16;
    *((_DWORD *)Pool + 696) = g_TdrConfig;
    *((_DWORD *)Pool + 697) = dword_1C006FEE4;
    *((_DWORD *)Pool + 698) = dword_1C006FEF0;
    *((_QWORD *)Pool + 15) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)Pool + 706) = 1380209782;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v2, v1);
    *(_QWORD *)(v4 + 24) = 2912LL;
    WdLogEvent5_WdError(v4);
  }
  return TdrReferenceRecoveryContext(v3);
}
