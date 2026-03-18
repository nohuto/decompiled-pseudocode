/*
 * XREFs of NtUserfnPARENTNOTIFY @ 0x1C01078C0
 * Callers:
 *     <none>
 * Callees:
 *     NtUserfnDWORD @ 0x1C00A6370 (NtUserfnDWORD.c)
 *     NtUserfnPOINTERINPUT @ 0x1C01EEF00 (NtUserfnPOINTERINPUT.c)
 */

__int64 __fastcall NtUserfnPARENTNOTIFY(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  if ( (_DWORD)a2 == 528 && (_WORD)a3 == 582 )
    return NtUserfnPOINTERINPUT(a1, 528, a3, a4, a5, a6);
  else
    return NtUserfnDWORD(a1, a2, a3, a4, a5, a6);
}
