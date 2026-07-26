/*
 * XREFs of ndisEnumerateFilterInstances @ 0x1C00BFC5C
 * Callers:
 *     ?ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C001ACAC (-ndisPostProcessRestartParametersAfterFilters@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_IN.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     ?reserve@?$KArray@E$00@Rtl@@QEAA_N_K@Z @ 0x1C00C0AA0 (-reserve@-$KArray@E$00@Rtl@@QEAA_N_K@Z.c)
 */

char __fastcall ndisEnumerateFilterInstances(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rbx
  unsigned __int16 *v6; // rax
  _WORD *v7; // rdi
  __int64 v8; // rbx
  unsigned __int16 *v9; // rax

  v2 = *(_QWORD *)(a1 + 2048);
  v3 = 0LL;
  if ( !v2 )
    return 1;
  do
  {
    v6 = *(unsigned __int16 **)(v2 + 40);
    v2 = *(_QWORD *)(v2 + 120);
    v3 += *v6 + 2LL;
  }
  while ( v2 );
  if ( !v3 )
    return 1;
  if ( (unsigned __int8)Rtl::KArray<unsigned char,1>::reserve(a2, v3) )
  {
    *(_DWORD *)(a2 + 4) = v3;
    if ( !(_DWORD)v3 )
      __fastfail(5u);
    v7 = *(_WORD **)(a2 + 8);
    v8 = *(_QWORD *)(a1 + 2048);
    while ( v8 )
    {
      *v7 = **(_WORD **)(v8 + 40);
      memmove(v7 + 1, *(const void **)(*(_QWORD *)(v8 + 40) + 8LL), **(unsigned __int16 **)(v8 + 40));
      v9 = *(unsigned __int16 **)(v8 + 40);
      v8 = *(_QWORD *)(v8 + 120);
      v7 = (_WORD *)((char *)v7 + *v9 + 2);
    }
    return 1;
  }
  return 0;
}
