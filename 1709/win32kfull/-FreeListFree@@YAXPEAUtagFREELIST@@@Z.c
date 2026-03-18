/*
 * XREFs of ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01F0520
 * Callers:
 *     xxxCleanupAndFreeDdeConv @ 0x1C01F19C0 (xxxCleanupAndFreeDdeConv.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeListFree(struct tagFREELIST *a1, __int64 a2, __int64 a3)
{
  struct tagFREELIST *v3; // rbx
  struct tagFREELIST *v4; // rcx

  if ( a1 )
  {
    v3 = a1;
    do
    {
      v4 = v3;
      v3 = *(struct tagFREELIST **)v3;
      Win32FreePool(v4, a2, a3);
    }
    while ( v3 );
  }
}
