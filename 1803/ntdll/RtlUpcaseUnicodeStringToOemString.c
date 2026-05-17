/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x180079850
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteBoundaryDescriptor @ 0x180013CA0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     sub_180079938 @ 0x180079938 (sub_180079938.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800799D0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800E51D0 (RtlxUnicodeStringToOemSize.c)
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
    v9 = sub_18003B5E0(v6);
    *((_QWORD *)a1 + 1) = v9;
    if ( !v9 )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)(v6 - 1) >= a1[1] )
  {
    return 2147483653LL;
  }
  v7 = RtlUpcaseUnicodeToOemN(*((_QWORD *)a1 + 1), *a1, (unsigned int)&v10, *((_QWORD *)a2 + 1), *a2);
  if ( v7 >= 0 && !(unsigned __int8)sub_180079938(a1, a2) )
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
      RtlDeleteBoundaryDescriptor(*((_QWORD *)a1 + 1));
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v7;
}
