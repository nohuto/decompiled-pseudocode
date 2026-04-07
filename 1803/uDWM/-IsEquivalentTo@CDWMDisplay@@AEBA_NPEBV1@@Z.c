/*
 * XREFs of ?IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z @ 0x18006F4BC
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x180033D20 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x18004B354 (memcmp_0.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006F454 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

bool __fastcall CDWMDisplay::IsEquivalentTo(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  bool v4; // al
  unsigned __int16 *v6; // rax
  int v7; // r8d
  int v8; // ecx

  v4 = *((_DWORD *)this + 42) != *((_DWORD *)a2 + 42) || *((_DWORD *)this + 43) != *((_DWORD *)a2 + 43);
  if ( v4
    || *((_QWORD *)this + 2) != *((_QWORD *)a2 + 2)
    || !TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo((__int64)this + 56, (__int64)a2 + 56)
    || !TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo((__int64)this + 40, (__int64)a2 + 40) )
  {
    return 0;
  }
  v6 = (unsigned __int16 *)((char *)this + 96);
  do
  {
    v7 = *(unsigned __int16 *)((char *)v6 + a2 - this);
    v8 = *v6 - v7;
    if ( v8 )
      break;
    ++v6;
  }
  while ( v7 );
  return !v8
      && *((_DWORD *)this + 40) == *((_DWORD *)a2 + 40)
      && !memcmp_0((char *)this + 180, (char *)a2 + 180, 0x1CuLL)
      && *((_DWORD *)this + 52) == *((_DWORD *)a2 + 52)
      && *((_DWORD *)this + 49) == *((_DWORD *)a2 + 49)
      && *((_DWORD *)this + 53) == *((_DWORD *)a2 + 53);
}
