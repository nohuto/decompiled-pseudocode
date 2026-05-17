/*
 * XREFs of RtlOemStringToUnicodeString @ 0x18007C750
 * Callers:
 *     RtlDnsHostNameToComputerName @ 0x18007C650 (RtlDnsHostNameToComputerName.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     RtlOemToUnicodeN @ 0x18007C840 (RtlOemToUnicodeN.c)
 *     RtlxOemStringToUnicodeSize @ 0x180089700 (RtlxOemStringToUnicodeSize.c)
 */

__int64 __fastcall RtlOemStringToUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // edi
  __int64 v10; // rax
  unsigned int v11; // [rsp+78h] [rbp+20h] BYREF

  if ( NlsMbOemCodePageTag )
    v6 = RtlxOemStringToUnicodeSize(a2);
  else
    v6 = 2 * *a2 + 2;
  if ( v6 > 0xFFFE )
    return 3221225712LL;
  *a1 = v6 - 2;
  if ( a3 )
  {
    a1[1] = v6;
    v10 = sub_180043FE0(v6);
    *((_QWORD *)a1 + 1) = v10;
    if ( !v10 )
      return 3221225495LL;
  }
  else
  {
    v7 = (unsigned __int16)(v6 - 2) + 2LL;
    if ( v7 > a1[1] || v7 < 2 )
      return 2147483653LL;
  }
  v8 = RtlOemToUnicodeN(*((_QWORD *)a1 + 1), *a1, (unsigned int)&v11, *((_QWORD *)a2 + 1), *a2);
  if ( v8 >= 0 )
  {
    *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)v11 >> 1)) = 0;
    v8 = 0;
  }
  if ( v8 < 0 )
  {
    if ( a3 )
    {
      RtlDeleteBoundaryDescriptor();
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v8;
}
