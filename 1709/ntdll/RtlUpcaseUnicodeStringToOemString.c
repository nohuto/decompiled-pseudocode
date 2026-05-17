/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x18007B5A0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180031338 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 *     RtlpDidUnicodeToOemWork @ 0x18007B690 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18007B720 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800E9110 (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToOemString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v6; // eax
  int v7; // edi
  __int64 StringRoutine; // rax
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
    StringRoutine = NtdllpAllocateStringRoutine(v6);
    *((_QWORD *)a1 + 1) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)(v6 - 1) >= a1[1] )
  {
    return 2147483653LL;
  }
  v7 = RtlUpcaseUnicodeToOemN(*((_QWORD *)a1 + 1), *a1, (unsigned int)&v10, *((_QWORD *)a2 + 1), *a2);
  if ( v7 >= 0 && !(unsigned __int8)RtlpDidUnicodeToOemWork(a1, a2) )
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
      NtdllpFreeStringRoutine(*((_QWORD *)a1 + 1));
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v7;
}
