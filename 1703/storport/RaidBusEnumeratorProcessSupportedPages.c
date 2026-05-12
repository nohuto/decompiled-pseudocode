/*
 * XREFs of RaidBusEnumeratorProcessSupportedPages @ 0x1C00162B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidBusEnumeratorProcessSupportedPages(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4)
{
  __int64 v4; // r10
  __int64 v5; // rdx

  v4 = 0LL;
  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  v5 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(v5 + 3) )
  {
    do
    {
      switch ( *(unsigned __int8 *)(v4 + v5 + 4) )
      {
        case 0x80u:
          *a3 |= 2u;
          break;
        case 0x83u:
          *a3 |= 1u;
          break;
        case 0x89u:
          *a3 |= 4u;
          break;
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *(unsigned __int8 *)(v5 + 3) );
  }
  return 0LL;
}
