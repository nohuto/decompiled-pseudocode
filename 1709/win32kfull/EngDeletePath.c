/*
 * XREFs of EngDeletePath @ 0x1C0266490
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00B9FFC (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     EngLineTo @ 0x1C00E8340 (EngLineTo.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C02701C0 (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiEngDeletePath @ 0x1C028DB40 (NtGdiEngDeletePath.c)
 * Callees:
 *     <none>
 */

void __stdcall EngDeletePath(PATHOBJ *ppo)
{
  __int64 v2; // rdx

  if ( ppo )
  {
    EPATHOBJ::vUnlock((EPATHOBJ *)ppo);
    Win32FreePool(ppo, v2);
  }
}
