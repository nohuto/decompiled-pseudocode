/*
 * XREFs of RmpClientCallbackCompareForHashTable @ 0x1800062F0
 * Callers:
 *     RmpClientUnregisterActivityHostCallbacks @ 0x180004F20 (RmpClientUnregisterActivityHostCallbacks.c)
 *     RmpClientReleaseResourceSet @ 0x1800052A0 (RmpClientReleaseResourceSet.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpClientCallbackCompareForHashTable(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax

  v2 = *a2 - *(_QWORD *)(a1 + 32);
  if ( *a2 == *(_QWORD *)(a1 + 32) )
    v2 = a2[1] - *(_QWORD *)(a1 + 40);
  return v2 == 0;
}
