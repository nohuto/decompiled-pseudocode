/*
 * XREFs of sub_18005A2C4 @ 0x18005A2C4
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18005A240 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18005A930 (RtlGetNtProductType.c)
 */

__int64 __fastcall sub_18005A2C4(int *a1)
{
  int v2; // edx
  _NT_PRODUCT_TYPE NtProductType; // [rsp+38h] [rbp+10h] BYREF

  if ( (_BYTE)qword_18015D468 )
  {
    v2 = (unsigned __int8)qword_18015D468;
  }
  else if ( RtlGetNtProductType(&NtProductType) && NtProductType == NtProductWinNt )
  {
    v2 = 10;
    if ( MEMORY[0x7FFE02E8] > 0x83400u )
      v2 = 20;
  }
  else
  {
    v2 = 20;
  }
  *a1 = v2;
  return 0LL;
}
