/*
 * XREFs of ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00F1CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003CFC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EngFreeMem @ 0x1C006DC60 (EngFreeMem.c)
 */

void __fastcall MulDisablePDEV(PDEV ****pv)
{
  int v2; // r8d
  PDEV ***i; // rbx

  vSpDisableMultiMon(pv[4]);
  for ( i = *pv; i; i = (PDEV ***)*i )
    PDEVOBJ::vUnreferencePdev(i + 7, 0, v2);
  EngFreeMem(pv);
}
