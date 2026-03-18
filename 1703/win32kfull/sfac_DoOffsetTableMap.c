/*
 * XREFs of sfac_DoOffsetTableMap @ 0x1C02C989C
 * Callers:
 *     fs_NewSfnt @ 0x1C02BC070 (fs_NewSfnt.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 *     InvokeGetSfntFragmentPtr @ 0x1C02C8E60 (InvokeGetSfntFragmentPtr.c)
 *     InvokeReleaseSfntFrag @ 0x1C02C8F8C (InvokeReleaseSfntFrag.c)
 *     sfac_Classify @ 0x1C02C8FEC (sfac_Classify.c)
 */

__int64 __fastcall sfac_DoOffsetTableMap(__int64 a1)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 v4; // rbp
  unsigned int *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r9

  v2 = InvokeGetSfntFragmentPtr(*(_DWORD *)(a1 + 8), *(_QWORD *)a1, 0, 12);
  if ( !v2 )
    return 4103LL;
  v3 = (__int16)__ROR2__(*(_WORD *)(v2 + 4), 8);
  InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
  v4 = InvokeGetSfntFragmentPtr(*(_DWORD *)(a1 + 8), *(_QWORD *)a1, 0, 16 * v3 + 12);
  if ( !v4 )
    return 5128LL;
  memset((void *)(a1 + 24), 0, 0xB0uLL);
  v6 = (unsigned int *)(v4 + 12);
  if ( v3 > 0 )
  {
    do
    {
      sfac_Classify(a1 + 24, v6);
      v6 = (unsigned int *)(v7 + 16);
    }
    while ( v8 != 1 );
  }
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = -1;
  InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
  return 0LL;
}
