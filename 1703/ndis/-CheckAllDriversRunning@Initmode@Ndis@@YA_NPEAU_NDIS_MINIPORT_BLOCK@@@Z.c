/*
 * XREFs of ?CheckAllDriversRunning@Initmode@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B8EF0
 * Callers:
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B8E78 (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall Ndis::Initmode::CheckAllDriversRunning(Ndis::Initmode *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  __int64 i; // rcx
  __int64 v8; // r9

  v3 = 0LL;
  v4 = *((unsigned int *)this + 1263);
  while ( (_DWORD)v3 != (_DWORD)v4 )
  {
    if ( (unsigned int)v3 >= v4 )
      __fastfail(0xBAD0FFu);
    v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 632) + 8 * v3) + 80LL);
    if ( (*(_DWORD *)(v5 + 48) & 0x10) == 0 && !*(_QWORD *)(v5 + 64) )
      return 0;
    v3 = (unsigned int)(v3 + 1);
  }
  v6 = *((unsigned int *)this + 1259);
  for ( i = 0LL; (_DWORD)i != (_DWORD)v6; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v6 )
      __fastfail(0xBAD0FFu);
    v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 630) + 8 * i) + 80LL);
    if ( (*(_DWORD *)(v8 + 40) & 1) != 0 && !*(_QWORD *)(v8 + 48) )
      return 0;
  }
  return 1;
}
