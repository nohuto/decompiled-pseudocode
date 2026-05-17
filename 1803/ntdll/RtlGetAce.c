/*
 * XREFs of RtlGetAce @ 0x180074630
 * Callers:
 *     sub_180086A98 @ 0x180086A98 (sub_180086A98.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetAce(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned __int64 v5; // rcx
  unsigned int v6; // r8d

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 2u && a2 < *(unsigned __int16 *)(a1 + 4) )
  {
    v5 = a1 + 8;
    *a3 = v5;
    v6 = 0;
    if ( !a2 )
      return v5 >= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) ? 0xC000000D : 0;
    while ( v5 < a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    {
      ++v6;
      v5 += *(unsigned __int16 *)(v5 + 2);
      *a3 = v5;
      if ( v6 >= a2 )
        return v5 >= a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) ? 0xC000000D : 0;
    }
  }
  return 3221225485LL;
}
