/*
 * XREFs of DpiGetGlobalDebugData @ 0x1C00399F8
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0198B30 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetGlobalDebugData(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)a1 = 2;
  *(_BYTE *)(a1 + 4) = word_1C007A75C;
  result = 0LL;
  *(_BYTE *)(a1 + 5) = 0;
  return result;
}
