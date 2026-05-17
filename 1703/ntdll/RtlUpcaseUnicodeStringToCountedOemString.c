/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E9C50
 * Callers:
 *     RtlIsNameLegalDOS8Dot3 @ 0x1800F4C80 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     sub_18007CB18 @ 0x18007CB18 (sub_18007CB18.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18007CBA0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x18007FB30 (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToCountedOemString(unsigned __int16 *a1, PWCH *a2, char a3)
{
  unsigned __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax
  int v9; // edi
  unsigned int v10; // [rsp+88h] [rbp+20h] BYREF

  if ( NlsMbOemCodePageTag )
    LODWORD(v6) = RtlxUnicodeStringToOemSize(a2);
  else
    v6 = ((unsigned __int64)*(unsigned __int16 *)a2 + 2) >> 1;
  result = (unsigned int)(v6 - 1);
  if ( !(_DWORD)result )
  {
    *(_DWORD *)a1 = 0;
    *((_QWORD *)a1 + 1) = 0LL;
    return result;
  }
  if ( (unsigned int)result > 0xFFFF )
    return 3221225712LL;
  *a1 = result;
  if ( a3 )
  {
    a1[1] = result;
    v8 = sub_180043FE0((unsigned int)result);
    *((_QWORD *)a1 + 1) = v8;
    if ( !v8 )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)result > a1[1] )
  {
    return 2147483653LL;
  }
  v9 = RtlUpcaseUnicodeToOemN(*((_BYTE **)a1 + 1), *a1, &v10, a2[1], *(unsigned __int16 *)a2);
  if ( v9 >= 0 && !sub_18007CB18(a1, (__int64)a2) )
    v9 = -1073741470;
  if ( v9 >= 0 )
    v9 = 0;
  if ( v9 < 0 )
  {
    if ( a3 )
    {
      RtlDeleteBoundaryDescriptor();
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v9;
}
