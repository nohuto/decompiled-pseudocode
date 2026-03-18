/*
 * XREFs of ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00F1C10
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003CFC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003D0D0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

void __fastcall MulCompletePDEV(struct DHPDEV__ *a1, HDEV a2, int a3)
{
  HDEV v3; // rbp
  PDEV ***i; // rbx

  v3 = (HDEV)*((_QWORD *)a1 + 4);
  if ( v3 != a2 )
  {
    if ( *((HDEV *)a1 + 5) == a2 )
      *((_QWORD *)a1 + 5) = v3;
    for ( i = *(PDEV ****)a1; i; i = (PDEV ***)*i )
    {
      if ( i[7] == (PDEV **)a2 )
      {
        PDEVOBJ::vUnreferencePdev(i + 7, 0, a3);
        i[6] = (PDEV **)v3;
        i[7] = (PDEV **)v3;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)(i + 7));
      }
    }
    *((_QWORD *)a1 + 4) = a2;
  }
}
