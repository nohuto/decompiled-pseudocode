/*
 * XREFs of NtGdiCreateDIBBrush @ 0x1C0136D20
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateDIBBrush @ 0x1C0136E1C (GreCreateDIBBrush.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtGdiCreateDIBBrush(
        char *Src,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  size_t v7; // rsi
  void *v10; // rbx
  __int64 DIBBrush; // rdi

  v7 = a3;
  v10 = 0LL;
  if ( a3 <= 0x2710000 )
    v10 = (void *)AllocFreeTmpBuffer(a3);
  if ( !v10 )
    return 0LL;
  if ( (_DWORD)v7 && ((unsigned __int64)&Src[v7] > W32UserProbeAddress || &Src[v7] < Src) )
    *W32UserProbeAddress = 0;
  memmove(v10, Src, v7);
  DIBBrush = GreCreateDIBBrush(v10, a2, (unsigned int)v7, a4, a5, a6);
  FreeTmpBuffer(v10);
  return DIBBrush;
}
