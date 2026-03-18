/*
 * XREFs of DpiGetGlobalDebugData @ 0x1C003D228
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C01918D0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetGlobalDebugData(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)a1 = 2;
  *(_BYTE *)(a1 + 4) = word_1C006F9DC;
  result = 0LL;
  *(_BYTE *)(a1 + 5) = 0;
  return result;
}
