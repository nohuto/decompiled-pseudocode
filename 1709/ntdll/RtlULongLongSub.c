/*
 * XREFs of RtlULongLongSub @ 0x18001F720
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x18001E394 (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongSub(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  if ( a1 < a2 )
  {
    *a3 = -1LL;
    return 3221225621LL;
  }
  else
  {
    *a3 = a1 - a2;
    return 0LL;
  }
}
