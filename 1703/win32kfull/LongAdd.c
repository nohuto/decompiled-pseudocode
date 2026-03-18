/*
 * XREFs of LongAdd @ 0x1C0251420
 * Callers:
 *     EngCopyBits @ 0x1C0075490 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LongAdd(int a1, int a2, _DWORD *a3)
{
  __int64 v3; // r9

  v3 = a2 + (__int64)a1;
  if ( (unsigned __int64)(v3 + 0x80000000LL) > 0xFFFFFFFF )
  {
    *a3 = -1;
    return 2147942934LL;
  }
  else
  {
    *a3 = v3;
    return 0LL;
  }
}
