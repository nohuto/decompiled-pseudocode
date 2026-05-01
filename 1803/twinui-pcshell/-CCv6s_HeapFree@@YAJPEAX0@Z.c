/*
 * XREFs of ?CCv6s_HeapFree@@YAJPEAX0@Z @ 0x18030A89C
 * Callers:
 *     Str_SetPtrW @ 0x18030A8C0 (Str_SetPtrW.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CCv6s_HeapFree(void *a1, void *a2)
{
  BOOL v2; // eax
  unsigned int v3; // ecx

  v2 = HeapFree(a1, 0, a2);
  v3 = 0;
  if ( !v2 )
    return (unsigned int)ResultFromKnownLastError();
  return v3;
}
