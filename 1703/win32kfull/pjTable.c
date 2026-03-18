/*
 * XREFs of pjTable @ 0x1C0229BDC
 * Callers:
 *     vFill_IFIMETRICS @ 0x1C022A32C (vFill_IFIMETRICS.c)
 *     ttfdQueryTrueTypeTable2 @ 0x1C022EDC0 (ttfdQueryTrueTypeTable2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall pjTable(int a1, __int64 a2, unsigned __int32 *a3)
{
  __int64 v3; // rbx
  __int64 v5; // r10
  unsigned __int64 v6; // rax
  _DWORD *i; // r10
  __int64 result; // rax
  unsigned __int32 v9; // ecx
  unsigned int v10; // edx

  v3 = *(_QWORD *)(a2 + 64);
  v5 = v3 + *(unsigned int *)(a2 + 272);
  v6 = 16LL * (__int16)__ROR2__(*(_WORD *)(v5 + 4), 8) + v5 + 12;
  for ( i = (_DWORD *)(v5 + 12); ; i += 4 )
  {
    if ( (unsigned __int64)i >= v6 )
      return 0LL;
    if ( a1 == *i )
      break;
  }
  v9 = _byteswap_ulong(i[3]);
  v10 = _byteswap_ulong(i[2]);
  if ( !v9 || v10 > ~v9 || v9 + v10 > *(_DWORD *)(a2 + 72) )
    return 0LL;
  result = v3 + v10;
  *a3 = v9;
  return result;
}
