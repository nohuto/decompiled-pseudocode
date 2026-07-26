/*
 * XREFs of ndisSetSSHandlers @ 0x1C00F30F8
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C00C3DF0 (NdisSetOptionalHandlers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSetSSHandlers(__int64 a1, __int64 a2)
{
  unsigned __int8 v3; // al
  __int64 v4; // rax

  if ( *(_BYTE *)a1 != 2 )
    return 3221225659LL;
  v3 = *(_BYTE *)(a1 + 24);
  if ( v3 <= 6u && (v3 != 6 || *(_BYTE *)(a1 + 25) < 0x1Eu) )
    return 3221225659LL;
  if ( *(_BYTE *)(a2 + 1) != 1 )
    return 3221225485LL;
  if ( *(_WORD *)(a2 + 2) < 0x18u )
    return 3221225485LL;
  if ( *(_DWORD *)(a2 + 4) )
    return 3221225485LL;
  v4 = *(_QWORD *)(a2 + 8);
  if ( !v4 || !*(_QWORD *)(a2 + 16) )
    return 3221225485LL;
  *(_QWORD *)(a1 + 840) = v4;
  *(_QWORD *)(a1 + 848) = *(_QWORD *)(a2 + 16);
  return 0LL;
}
