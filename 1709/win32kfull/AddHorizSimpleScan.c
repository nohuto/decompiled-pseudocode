/*
 * XREFs of AddHorizSimpleScan @ 0x1C02C6690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AddHorizSimpleScan(int a1, int a2)
{
  int v2; // edx
  unsigned __int64 v3; // r10
  _WORD *v4; // r8
  _WORD *i; // rax

  if ( a1 < dword_1C0334248 )
    return 4866LL;
  if ( a1 > dword_1C033424C )
    return 4866LL;
  if ( a2 < dword_1C0334254 )
    return 4866LL;
  if ( a2 >= dword_1C0334250 )
    return 4866LL;
  v2 = a2 - dword_1C0334254;
  v3 = *(_QWORD *)(qword_1C03342A0 + 8LL * v2);
  v4 = *(_WORD **)(qword_1C03342A8 + 8LL * v2);
  *(_QWORD *)(qword_1C03342A8 + 8LL * v2) = v4 + 1;
  if ( (unsigned __int64)(v4 + 1) > *(_QWORD *)(qword_1C03342B0 + 8LL * v2) )
    return 4866LL;
  for ( i = v4 - 1; (unsigned __int64)i >= v3 && (__int16)*i > (__int16)a1; --i )
    *v4-- = *i;
  *v4 = a1;
  return 0LL;
}
