/*
 * XREFs of RtlFindMessageInTable @ 0x1400DD6A0
 * Callers:
 *     KeGetBugMessageResourceEntry @ 0x140206174 (KeGetBugMessageResourceEntry.c)
 *     RtlFindMessage @ 0x140516150 (RtlFindMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindMessageInTable(int *a1, unsigned int a2, _QWORD *a3)
{
  int v3; // r9d
  unsigned int *i; // rax
  unsigned __int16 *v6; // rcx
  unsigned int j; // edx

  v3 = *a1;
  for ( i = (unsigned int *)(a1 + 1); ; i += 3 )
  {
    if ( !v3 )
      return 3221225737LL;
    --v3;
    if ( a2 >= *i && a2 <= i[1] )
      break;
  }
  v6 = (unsigned __int16 *)((char *)a1 + i[2]);
  for ( j = a2 - *i; j; --j )
    v6 = (unsigned __int16 *)((char *)v6 + *v6);
  *a3 = v6;
  return 0LL;
}
