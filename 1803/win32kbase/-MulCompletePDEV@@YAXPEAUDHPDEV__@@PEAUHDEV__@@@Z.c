/*
 * XREFs of ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C00C74A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0031F30 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0032010 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

void __fastcall MulCompletePDEV(struct DHPDEV__ *a1, HDEV a2, int a3)
{
  HDEV v3; // rbp
  struct PDEV **i; // rbx
  __int64 v7; // rdx
  int v8; // r8d

  v3 = (HDEV)*((_QWORD *)a1 + 4);
  if ( v3 != a2 )
  {
    if ( *((HDEV *)a1 + 5) == a2 )
      *((_QWORD *)a1 + 5) = v3;
    for ( i = *(struct PDEV ***)a1; i; i = (struct PDEV **)*i )
    {
      if ( i[7] == (struct PDEV *)a2 )
      {
        PDEVOBJ::vUnreferencePdev(i + 7, 0, a3);
        i[6] = (struct PDEV *)v3;
        i[7] = (struct PDEV *)v3;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)(i + 7), v7, v8);
      }
    }
    *((_QWORD *)a1 + 4) = a2;
  }
}
