/*
 * XREFs of MmGetCacheAttribute @ 0x140254A90
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MmGetCacheAttribute(unsigned __int64 a1)
{
  _DWORD *v1; // rdx
  ULONG_PTR v2; // r8
  __int64 v4; // rax
  unsigned __int8 v5; // cl
  int v6; // eax

  if ( !MiIsPfnInline(a1 >> 12) )
    return 3221225793LL;
  v4 = 48 * v2 - 0x58000000000LL;
  v5 = *(_BYTE *)(v4 + 34);
  if ( !*(_WORD *)(v4 + 32) )
    KeBugCheckEx(0x1Au, 0x1232uLL, v2, v5 & 7, 0LL);
  v6 = v5 >> 6;
  switch ( v6 )
  {
    case 1:
      *v1 = 1;
      return 0LL;
    case 0:
      *v1 = 0;
      return 0LL;
    case 2:
      *v1 = 2;
      return 0LL;
  }
  return 3221225711LL;
}
