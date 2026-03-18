/*
 * XREFs of ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x180078078
 * Callers:
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x180010CC8 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180134664 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180078128 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 */

char __fastcall CDisplay::IsRenderTargetEquivalentTo(CDisplay *this, const struct CDisplay *a2)
{
  char v2; // al
  int v5; // eax
  bool v7; // zf
  bool v9; // al
  unsigned __int16 *v10; // rax
  int v11; // r8d
  int v12; // ecx

  v2 = *((_BYTE *)this + 208);
  if ( v2 == *((_BYTE *)a2 + 208) )
  {
    v7 = v2 == 0;
    v5 = *((_DWORD *)a2 + 56);
    if ( v7 )
    {
      if ( *((_DWORD *)this + 56) != v5 || *((_DWORD *)this + 57) != *((_DWORD *)a2 + 57) )
        return 0;
      v7 = *((_DWORD *)this + 61) == *((_DWORD *)a2 + 61);
    }
    else
    {
      v9 = *((_DWORD *)this + 56) != v5 || *((_DWORD *)this + 57) != *((_DWORD *)a2 + 57);
      if ( v9
        || *((_QWORD *)this + 2) != *((_QWORD *)a2 + 2)
        || !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                               (char *)this + 96,
                               (char *)a2 + 96)
        || !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                               (char *)this + 80,
                               (char *)a2 + 80) )
      {
        return 0;
      }
      v10 = (unsigned __int16 *)((char *)this + 136);
      do
      {
        v11 = *(unsigned __int16 *)((char *)v10 + a2 - this);
        v12 = *v10 - v11;
        if ( v12 )
          break;
        ++v10;
      }
      while ( v11 );
      if ( v12
        || *((_DWORD *)this + 50) != *((_DWORD *)a2 + 50)
        || *((_DWORD *)this + 51) != *((_DWORD *)a2 + 51)
        || *((_DWORD *)this + 63) != *((_DWORD *)a2 + 63)
        || *((_DWORD *)this + 64) != *((_DWORD *)a2 + 64)
        || memcmp_0((char *)this + 260, (char *)a2 + 260, 0x1CuLL) )
      {
        return 0;
      }
      v7 = *((_DWORD *)this + 73) == *((_DWORD *)a2 + 73);
    }
    if ( v7 )
      return 1;
  }
  return 0;
}
