/*
 * XREFs of ??$CCv6s_HeapAllocArray@G@@YAJPEAXK_K1PEAPEAG@Z @ 0x18030A84C
 * Callers:
 *     Str_SetPtrW @ 0x18030A8C0 (Str_SetPtrW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCv6s_HeapAllocArray<unsigned short>(
        void *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  unsigned int v5; // ebx
  LPVOID v6; // rax

  v5 = 0;
  *a5 = 0LL;
  if ( is_mul_ok(2uLL, a4) )
  {
    v6 = HeapAlloc(a1, 0, 2 * a4);
    if ( v6 )
      *a5 = v6;
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v5;
}
