/*
 * XREFs of ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x1800B7414
 * Callers:
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x18001ED40 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x1801582B0 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800BDD8C (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
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

  v2 = *((_BYTE *)this + 232);
  if ( v2 == *((_BYTE *)a2 + 232) )
  {
    v7 = v2 == 0;
    v5 = *((_DWORD *)a2 + 62);
    if ( v7 )
    {
      if ( *((_DWORD *)this + 62) != v5 || *((_DWORD *)this + 63) != *((_DWORD *)a2 + 63) )
        return 0;
      v7 = *((_DWORD *)this + 66) == *((_DWORD *)a2 + 66);
    }
    else
    {
      v9 = *((_DWORD *)this + 62) != v5 || *((_DWORD *)this + 63) != *((_DWORD *)a2 + 63);
      if ( v9
        || *((_QWORD *)this + 2) != *((_QWORD *)a2 + 2)
        || !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                               (char *)this + 120,
                               (char *)a2 + 120)
        || !(unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                               (char *)this + 104,
                               (char *)a2 + 104) )
      {
        return 0;
      }
      v10 = (unsigned __int16 *)((char *)this + 160);
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
        || *((_DWORD *)this + 56) != *((_DWORD *)a2 + 56)
        || *((_DWORD *)this + 57) != *((_DWORD *)a2 + 57)
        || *((_DWORD *)this + 68) != *((_DWORD *)a2 + 68)
        || *((_DWORD *)this + 69) != *((_DWORD *)a2 + 69)
        || memcmp_0((char *)this + 280, (char *)a2 + 280, 0x1CuLL) )
      {
        return 0;
      }
      v7 = *((_DWORD *)this + 78) == *((_DWORD *)a2 + 78);
    }
    if ( v7 )
      return 1;
  }
  return 0;
}
