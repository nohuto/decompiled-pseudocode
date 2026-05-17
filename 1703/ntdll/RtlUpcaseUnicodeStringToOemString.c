/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x18007CA30
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     sub_18007CB18 @ 0x18007CB18 (sub_18007CB18.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18007CBA0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x18007FB30 (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToOemString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v6; // eax
  int v7; // edi
  __int64 v9; // rax
  unsigned int v10; // [rsp+78h] [rbp+20h] BYREF

  if ( NlsMbOemCodePageTag )
    v6 = RtlxUnicodeStringToOemSize(a2);
  else
    v6 = ((unsigned int)*a2 + 2) >> 1;
  if ( v6 > 0xFFFF )
    return 3221225712LL;
  *a1 = v6 - 1;
  if ( a3 )
  {
    a1[1] = v6;
    v9 = sub_180043FE0(v6);
    *((_QWORD *)a1 + 1) = v9;
    if ( !v9 )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)(v6 - 1) >= a1[1] )
  {
    return 2147483653LL;
  }
  v7 = RtlUpcaseUnicodeToOemN(*((_QWORD *)a1 + 1), *a1, (unsigned int)&v10, *((_QWORD *)a2 + 1), *a2);
  if ( v7 >= 0 && !(unsigned __int8)sub_18007CB18(a1, a2) )
    v7 = -1073741470;
  if ( v7 >= 0 )
  {
    *(_BYTE *)(v10 + *((_QWORD *)a1 + 1)) = 0;
    v7 = 0;
  }
  if ( v7 < 0 )
  {
    if ( a3 )
    {
      RtlDeleteBoundaryDescriptor();
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v7;
}
