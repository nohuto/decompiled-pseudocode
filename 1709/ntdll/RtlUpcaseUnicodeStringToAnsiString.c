/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x1800E8E70
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180031338 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18007E1B0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800E9110 (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToAnsiString(unsigned __int16 *a1, unsigned __int16 **a2, char a3)
{
  unsigned int v6; // eax
  __int64 StringRoutine; // rax
  int v9; // edi
  unsigned int v10; // [rsp+78h] [rbp+20h] BYREF

  if ( NlsMbCodePageTag )
    v6 = RtlxUnicodeStringToOemSize(a2);
  else
    v6 = ((unsigned int)*(unsigned __int16 *)a2 + 2) >> 1;
  if ( v6 > 0xFFFF )
    return 3221225712LL;
  *a1 = v6 - 1;
  if ( a3 )
  {
    a1[1] = v6;
    StringRoutine = NtdllpAllocateStringRoutine(v6);
    *((_QWORD *)a1 + 1) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)(v6 - 1) >= a1[1] )
  {
    return 2147483653LL;
  }
  v9 = RtlUpcaseUnicodeToMultiByteN(*((_BYTE **)a1 + 1), *a1, &v10, a2[1], *(unsigned __int16 *)a2);
  if ( v9 >= 0 )
  {
    *(_BYTE *)(v10 + *((_QWORD *)a1 + 1)) = 0;
    v9 = 0;
  }
  if ( v9 < 0 )
  {
    if ( a3 )
    {
      NtdllpFreeStringRoutine(*((_QWORD *)a1 + 1));
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v9;
}
