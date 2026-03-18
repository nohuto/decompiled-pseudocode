/*
 * XREFs of RtlpCompareKnownAces @ 0x1404C88D0
 * Callers:
 *     RtlpIsDuplicateAce @ 0x1404C8770 (RtlpIsDuplicateAce.c)
 * Callees:
 *     RtlEqualSid @ 0x140105600 (RtlEqualSid.c)
 */

bool __fastcall RtlpCompareKnownAces(unsigned __int8 *a1, unsigned __int8 *a2)
{
  __int64 v3; // rdx

  v3 = *a2;
  return *((_BYTE *)RtlBaseAceType + v3) == *((_BYTE *)RtlBaseAceType + *a1)
      && (!*((_BYTE *)&RtlIsSystemAceType + v3) || ((a1[1] ^ a2[1]) & 0xC0) == 0)
      && RtlEqualSid(a2 + 8, a1 + 8);
}
