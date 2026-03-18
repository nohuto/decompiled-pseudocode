/*
 * XREFs of ?bOffsetSubtract@ERECTL@@QEAAHAEAU_POINTL@@H@Z @ 0x1C0252E3C
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0023600 (NtGdiAlphaBlend.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ERECTL::bOffsetSubtract(ERECTL *this, struct _POINTL *a2)
{
  __int64 x; // rbx
  int v3; // r8d
  int v4; // r10d
  __int64 y; // rdi
  int v6; // r11d
  __int64 result; // rax

  x = a2->x;
  if ( (unsigned __int64)(*(int *)this - x + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v3 = *((_DWORD *)this + 2);
  if ( (unsigned __int64)(v3 - x + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v4 = *((_DWORD *)this + 1);
  y = a2->y;
  if ( (unsigned __int64)(v4 - y + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  v6 = *((_DWORD *)this + 3);
  if ( (unsigned __int64)(v6 - y + 0x80000000LL) > 0xFFFFFFFF )
    return 0LL;
  result = 1LL;
  *(_DWORD *)this -= x;
  *((_DWORD *)this + 2) = v3 - a2->x;
  *((_DWORD *)this + 1) = v4 - a2->y;
  *((_DWORD *)this + 3) = v6 - a2->y;
  return result;
}
