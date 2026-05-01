/*
 * XREFs of ?HampUtilUlongArrayFromUlongPtrArray@@YAPEAKPEA_KK@Z @ 0x180064774
 * Callers:
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064AB8 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall HampUtilUlongArrayFromUlongPtrArray(unsigned __int64 *a1, unsigned int a2)
{
  unsigned __int64 *v2; // r8
  __int64 v3; // r10
  unsigned __int64 *v4; // r9
  int v5; // eax

  if ( a2 )
  {
    v2 = a1;
    v3 = a2;
    v4 = a1;
    do
    {
      v5 = *(_DWORD *)v4++;
      *(_DWORD *)v2 = v5;
      v2 = (unsigned __int64 *)((char *)v2 + 4);
      --v3;
    }
    while ( v3 );
  }
  return (unsigned int *)a1;
}
