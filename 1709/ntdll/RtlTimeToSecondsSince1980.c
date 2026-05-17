/*
 * XREFs of RtlTimeToSecondsSince1980 @ 0x18007E5D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlExtendedMagicDivide @ 0x18007E72C (RtlExtendedMagicDivide.c)
 */

char __fastcall RtlTimeToSecondsSince1980(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _DWORD *v4; // r10

  LOBYTE(a3) = 23;
  v3 = RtlExtendedMagicDivide(*a1, Magic10000000, a3) - SecondsToStartOf1980;
  if ( HIDWORD(v3) )
    return 0;
  *v4 = v3;
  return 1;
}
