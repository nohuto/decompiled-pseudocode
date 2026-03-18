/*
 * XREFs of RtlFindMessageInTable @ 0x14013D534
 * Callers:
 *     KeGetBugMessageResourceEntry @ 0x140243904 (KeGetBugMessageResourceEntry.c)
 *     RtlFindMessage @ 0x1405BB760 (RtlFindMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindMessageInTable(int *a1, unsigned int a2, _QWORD *a3)
{
  int v3; // r9d
  unsigned int *i; // rax
  unsigned __int16 *v5; // rcx
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
  v5 = (unsigned __int16 *)((char *)a1 + i[2]);
  for ( j = a2 - *i; j; --j )
    v5 = (unsigned __int16 *)((char *)v5 + *v5);
  *a3 = v5;
  return 0LL;
}
