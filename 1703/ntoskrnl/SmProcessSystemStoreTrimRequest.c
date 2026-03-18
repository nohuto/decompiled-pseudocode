/*
 * XREFs of SmProcessSystemStoreTrimRequest @ 0x140700EDC
 * Callers:
 *     SmSetStoreInformation @ 0x140447B00 (SmSetStoreInformation.c)
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140249F7C (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessSystemStoreTrimRequest(unsigned __int64 a1, int a2, char a3)
{
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int128 v7; // [rsp+20h] [rbp-18h]

  if ( a2 != 16 )
    return 3221225990LL;
  if ( a3 )
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v5 = a1;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 15) = *(_BYTE *)(v5 + 15);
  }
  v7 = *(_OWORD *)a1;
  if ( (unsigned __int8)*(_OWORD *)a1 != 1 )
    return 3221225561LL;
  if ( (v7 & 0xFFFFFF00) != 0 || !*((_QWORD *)&v7 + 1) )
    return 3221225485LL;
  if ( dword_1403FA1D0 == -1 )
    return 3221226021LL;
  v6 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, dword_1403FA1D0 & 0x3FF);
  if ( (*(_DWORD *)*v6 & 0x40000) != 0 )
    return SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(*v6, *((__int64 *)&v7 + 1));
  else
    return 3221225659LL;
}
