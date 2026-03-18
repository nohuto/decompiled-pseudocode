/*
 * XREFs of ?bUndoMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0279768
 * Callers:
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C02565AC (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C02775EC (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02795C0 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bUndoMakeOpaque(struct SURFACE *a1)
{
  unsigned int v1; // edx
  __int64 v2; // rax

  v1 = 0;
  if ( *((_WORD *)a1 + 50) == 3 && *((struct PDEV **)a1 + 6) == gpRedirDev )
  {
    *((_WORD *)a1 + 50) = *((_WORD *)a1 + 240);
    *((_DWORD *)a1 + 28) = *((_DWORD *)a1 + 121);
    v2 = *((_QWORD *)a1 + 59);
    *((_QWORD *)a1 + 59) = -1LL;
    *((_DWORD *)a1 + 28) &= ~0x200000u;
    *((_DWORD *)a1 + 120) = -1;
    *((_DWORD *)a1 + 121) = -1;
    v1 = 1;
    *((_QWORD *)a1 + 6) = v2;
  }
  return v1;
}
