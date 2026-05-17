/*
 * XREFs of RtlUnicodeStringToCountedOemString @ 0x1800E4D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     RtlUnicodeToOemN @ 0x18006B6E0 (RtlUnicodeToOemN.c)
 *     sub_180079938 @ 0x180079938 (sub_180079938.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800E51D0 (RtlxUnicodeStringToOemSize.c)
 */

__int64 __fastcall RtlUnicodeStringToCountedOemString(unsigned __int16 *a1, unsigned int **a2, char a3)
{
  unsigned int v6; // eax
  __int64 result; // rax
  __int64 v8; // rax
  int v9; // edi
  unsigned int v10; // [rsp+88h] [rbp+20h] BYREF

  if ( NlsMbOemCodePageTag )
    v6 = RtlxUnicodeStringToOemSize(a2);
  else
    v6 = ((unsigned int)*(unsigned __int16 *)a2 + 2) >> 1;
  result = v6 - 1;
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
    v8 = sub_18003B5E0((unsigned int)result);
    *((_QWORD *)a1 + 1) = v8;
    if ( !v8 )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)result > a1[1] )
  {
    return 2147483653LL;
  }
  v9 = RtlUnicodeToOemN(*((_BYTE **)a1 + 1), *a1, &v10, a2[1], *(unsigned __int16 *)a2);
  if ( v9 >= 0 && !sub_180079938(a1, (__int64)a2) )
    v9 = -1073741470;
  if ( v9 >= 0 )
    v9 = 0;
  if ( v9 < 0 )
  {
    if ( a3 )
    {
      RtlDeleteBoundaryDescriptor(*((_QWORD *)a1 + 1));
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v9;
}
