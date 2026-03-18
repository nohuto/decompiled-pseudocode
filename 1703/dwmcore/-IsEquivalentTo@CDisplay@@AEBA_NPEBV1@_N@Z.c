/*
 * XREFs of ?IsEquivalentTo@CDisplay@@AEBA_NPEBV1@_N@Z @ 0x180187D50
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18007EDA4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAPEAVCDisplaySet@@PEAW4En.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800B832C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     memcmp_0 @ 0x1800D5390 (memcmp_0.c)
 */

bool __fastcall CDisplay::IsEquivalentTo(CDisplay *this, const struct CDisplay *a2)
{
  unsigned __int16 *v4; // rax
  int v5; // r8d
  int v6; // ecx

  if ( *((_DWORD *)this + 56) != *((_DWORD *)a2 + 56)
    || *((_DWORD *)this + 57) != *((_DWORD *)a2 + 57)
    || *((_QWORD *)this + 2) != *((_QWORD *)a2 + 2)
    || !TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo((_DWORD *)this + 24, (_DWORD *)a2 + 24)
    || !TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo((_DWORD *)this + 20, (_DWORD *)a2 + 20) )
  {
    return 0;
  }
  v4 = (unsigned __int16 *)((char *)this + 136);
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
      && *((_DWORD *)this + 50) == *((_DWORD *)a2 + 50)
      && *((_DWORD *)this + 51) == *((_DWORD *)a2 + 51)
      && *((_DWORD *)this + 62) == *((_DWORD *)a2 + 62)
      && *((_DWORD *)this + 63) == *((_DWORD *)a2 + 63)
      && !memcmp_0((char *)this + 256, (char *)a2 + 256, 0x1CuLL)
      && *((_DWORD *)this + 72) == *((_DWORD *)a2 + 72)
      && *((_BYTE *)this + 298) == *((_BYTE *)a2 + 298);
}
