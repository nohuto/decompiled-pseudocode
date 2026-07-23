/*
 * XREFs of sub_18000F610 @ 0x18000F610
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18000F560 (RtlQueryResourcePolicy.c)
 * Callees:
 *     RtlGetNtProductType @ 0x18000FC40 (RtlGetNtProductType.c)
 */

__int64 __fastcall sub_18000F610(int *a1)
{
  int v2; // eax
  _NT_PRODUCT_TYPE NtProductType; // [rsp+38h] [rbp+10h] BYREF

  if ( (_BYTE)qword_18015C428 )
  {
    *a1 = (unsigned __int8)qword_18015C428;
  }
  else if ( RtlGetNtProductType(&NtProductType) && NtProductType == NtProductWinNt )
  {
    v2 = 10;
    if ( MEMORY[0x7FFE02E8] > 0x51400u )
      v2 = 20;
    *a1 = v2;
  }
  else
  {
    *a1 = 20;
  }
  return 0LL;
}
