/*
 * XREFs of ?bOffsetAdd@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C01272AC
 * Callers:
 *     NtGdiTransparentBlt @ 0x1C0126860 (NtGdiTransparentBlt.c)
 *     NtGdiExtFloodFill @ 0x1C012BE60 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ERECTL::bOffsetAdd(ERECTL *this, struct _POINTL *a2)
{
  __int64 x; // r10
  __int64 v3; // r11
  __int64 v5; // r9
  __int64 y; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 result; // rax

  x = a2->x;
  v3 = *(int *)this;
  if ( (unsigned __int64)(x + v3 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v5 = *((int *)this + 2);
  if ( (unsigned __int64)(x + v5 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  y = a2->y;
  v7 = *((int *)this + 1);
  if ( (unsigned __int64)(y + v7 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v8 = *((int *)this + 3);
  if ( (unsigned __int64)(y + v8 + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  *(_DWORD *)this = v3 + x;
  result = 1LL;
  *((_DWORD *)this + 2) = v5 + a2->x;
  *((_DWORD *)this + 1) = v7 + a2->y;
  *((_DWORD *)this + 3) = v8 + a2->y;
  return result;
}
