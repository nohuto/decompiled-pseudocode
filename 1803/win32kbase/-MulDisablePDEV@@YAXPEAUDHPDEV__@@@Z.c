/*
 * XREFs of ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00C7530
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031F30 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EngFreeMem @ 0x1C005AD60 (EngFreeMem.c)
 */

void __fastcall MulDisablePDEV(struct PDEV ***pv)
{
  int v2; // r8d
  struct PDEV **i; // rbx

  vSpDisableMultiMon(pv[4]);
  for ( i = *pv; i; i = (struct PDEV **)*i )
    PDEVOBJ::vUnreferencePdev(i + 7, 0, v2);
  EngFreeMem(pv);
}
