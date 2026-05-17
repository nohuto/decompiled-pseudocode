/*
 * XREFs of sub_1800DA774 @ 0x1800DA774
 * Callers:
 *     sub_1800DA518 @ 0x1800DA518 (sub_1800DA518.c)
 *     sub_1800DA5D4 @ 0x1800DA5D4 (sub_1800DA5D4.c)
 *     RtlComputeImportTableHash @ 0x1800DA800 (RtlComputeImportTableHash.c)
 * Callees:
 *     _stricmp @ 0x18008C460 (_stricmp.c)
 */

int __fastcall sub_1800DA774(__int64 a1, __int64 ***a2)
{
  __int64 **v4; // rax
  __int64 **v5; // rsi
  __int64 *i; // rdi

  if ( *a2 && (LODWORD(v4) = stricmp((const char *)(*a2)[1], *(const char **)(a1 + 8)), (int)v4 <= 0) )
  {
    v5 = *a2;
    for ( i = **a2; ; i = (__int64 *)*i )
    {
      if ( !i )
      {
        *(_QWORD *)a1 = 0LL;
        goto LABEL_9;
      }
      LODWORD(v4) = stricmp((const char *)i[1], *(const char **)(a1 + 8));
      if ( (int)v4 >= 0 )
        break;
      v5 = (__int64 **)i;
    }
    *(_QWORD *)a1 = i;
LABEL_9:
    *v5 = (__int64 *)a1;
  }
  else
  {
    v4 = *a2;
    *(_QWORD *)a1 = *a2;
    *a2 = (__int64 **)a1;
  }
  return (int)v4;
}
