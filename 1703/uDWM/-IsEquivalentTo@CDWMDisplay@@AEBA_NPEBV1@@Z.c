/*
 * XREFs of ?IsEquivalentTo@CDWMDisplay@@AEBA_NPEBV1@@Z @ 0x180072624
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18000F7D8 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x18004DE84 (memcmp_0.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800725C0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

bool __fastcall CDWMDisplay::IsEquivalentTo(CDWMDisplay *this, const struct CDWMDisplay *a2)
{
  unsigned __int16 *v4; // rax
  int v5; // r8d
  int v6; // ecx

  if ( *((_DWORD *)this + 42) != *((_DWORD *)a2 + 42)
    || *((_DWORD *)this + 43) != *((_DWORD *)a2 + 43)
    || *((_QWORD *)this + 2) != *((_QWORD *)a2 + 2)
    || !TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
          (const struct tagRECT *)((char *)this + 56),
          (_DWORD *)a2 + 14)
    || !TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
          (const struct tagRECT *)((char *)this + 40),
          (_DWORD *)a2 + 10) )
  {
    return 0;
  }
  v4 = (unsigned __int16 *)((char *)this + 96);
  do
  {
    v5 = *(unsigned __int16 *)((char *)v4 + a2 - this);
    v6 = *v4 - v5;
    if ( v6 )
      break;
    ++v4;
  }
  while ( v5 );
  return !v6
      && *((_DWORD *)this + 40) == *((_DWORD *)a2 + 40)
      && !memcmp_0((char *)this + 180, (char *)a2 + 180, 0x1CuLL)
      && *((_DWORD *)this + 52) == *((_DWORD *)a2 + 52);
}
