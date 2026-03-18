/*
 * XREFs of AddHorizSmartBand @ 0x1C02C6720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AddHorizSmartBand(int a1, int a2)
{
  __int16 v2; // r9
  int v3; // edx
  unsigned __int64 v4; // r10
  __int64 v5; // r8
  _DWORD *i; // rcx
  __int16 v7; // ax

  v2 = a1;
  if ( a1 >= dword_1C0334248 && a1 <= dword_1C033424C )
  {
    if ( a2 < dword_1C0334260 || a2 >= dword_1C033425C )
      return 0LL;
    v3 = a2 - dword_1C0334260;
    v4 = *(_QWORD *)(qword_1C03342A0 + 8LL * v3);
    v5 = *(_QWORD *)(qword_1C03342A8 + 8LL * v3);
    *(_QWORD *)(qword_1C03342A8 + 8LL * v3) = v5 + 4;
    if ( (unsigned __int64)(v5 + 4) <= *(_QWORD *)(qword_1C03342B0 + 8LL * v3) )
    {
      for ( i = (_DWORD *)(v5 - 4); (unsigned __int64)i >= v4 && *(__int16 *)i > v2; --i )
      {
        *(_DWORD *)v5 = *i;
        v5 -= 4LL;
      }
      v7 = word_1C0334350;
      *(_WORD *)v5 = v2;
      *(_WORD *)(v5 + 2) = v7;
      return 0LL;
    }
  }
  return 4866LL;
}
