/*
 * XREFs of LongSub @ 0x1C0252F44
 * Callers:
 *     EngCopyBits @ 0x1C002C650 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LongSub(int a1, int a2, int *a3)
{
  __int64 v3; // r9
  int v4; // eax

  v3 = a1 - (__int64)a2;
  v4 = -1;
  if ( (unsigned __int64)(v3 + 0x80000000LL) <= 0xFFFFFFFF )
    v4 = a1 - a2;
  *a3 = v4;
  return (unsigned __int64)(v3 + 0x80000000LL) > 0xFFFFFFFF ? 0x80070216 : 0;
}
