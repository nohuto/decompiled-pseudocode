/*
 * XREFs of EtwpGetImageSize @ 0x1405D3778
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140448030 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetImageSize(__int64 a1, _QWORD *a2)
{
  __int16 v2; // ax

  if ( !a1 )
    return 3221225485LL;
  *a2 = 0LL;
  v2 = *(_WORD *)(a1 + 24);
  if ( v2 == 267 || v2 == 523 )
    *a2 = *(unsigned int *)(a1 + 80);
  else
    *a2 = 0LL;
  return *a2 == 0LL ? 0xC000007B : 0;
}
