/*
 * XREFs of ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00EEFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038940 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 */

void __fastcall MulDisablePDEV(struct DHPDEV__ *a1)
{
  PDEV **i; // rbx

  vSpDisableMultiMon(*((_QWORD *)a1 + 4));
  for ( i = *(PDEV ***)a1; i; i = (PDEV **)*i )
    PDEVOBJ::vUnreferencePdev(i + 7, 0);
  EngFreeMem(a1);
}
