/*
 * XREFs of PnprMapTargetSparePhysicalPages @ 0x14042C800
 * Callers:
 *     <none>
 * Callees:
 *     PnprMapPhysicalPages @ 0x14042C63C (PnprMapPhysicalPages.c)
 */

__int64 __fastcall PnprMapTargetSparePhysicalPages(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v5; // rsi
  int v6; // r10d
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax

  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v6 = 0;
  if ( a1 == 0x7FFFFFFFFFFFFFFFLL
    || (v6 = PnprMapPhysicalPages((PMDL *)(*(_QWORD *)(PnprContext + 136) + 24 * v5), a1, a3, a4), v6 >= 0) )
  {
    if ( a2 != 0x7FFFFFFFFFFFFFFFLL )
    {
      v6 = PnprMapPhysicalPages((PMDL *)(*(_QWORD *)(PnprContext + 144) + 24 * v5), a2, a3, a5);
      if ( v6 < 0 )
      {
        v12 = PnprContext;
        v13 = *(_DWORD *)(PnprContext + 20984);
        if ( !v13 )
          v13 = 4218;
        *(_DWORD *)(PnprContext + 20984) = v13;
        v14 = *(_DWORD *)(v12 + 20988);
        if ( !v14 )
          v14 = 10;
        *(_DWORD *)(v12 + 20988) = v14;
      }
    }
  }
  else
  {
    v9 = PnprContext;
    v10 = *(_DWORD *)(PnprContext + 20984);
    if ( !v10 )
      v10 = 4206;
    *(_DWORD *)(PnprContext + 20984) = v10;
    v11 = *(_DWORD *)(v9 + 20988);
    if ( !v11 )
      v11 = 10;
    *(_DWORD *)(v9 + 20988) = v11;
  }
  return (unsigned int)v6;
}
