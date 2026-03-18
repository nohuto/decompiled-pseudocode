/*
 * XREFs of ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009FE80
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0040B50 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0042800 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0043070 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C005A1CC (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009FE80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00A0220 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00A02A0 (hbmSelectBitmapInternal.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00EB290 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00F2AF0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0032240 (DEC_SHARE_REF_CNT.c)
 *     FreeObject @ 0x1C0037CE0 (FreeObject.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C009FE80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C009FF50 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

void __fastcall XEPALOBJ::vUnrefPalette(int **this)
{
  int *v2; // rcx
  unsigned __int8 *v3; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = *this;
  if ( v2 )
  {
    if ( (v2[6] & 0x1000000) != 0 || !HmgRemoveObjectImpl(*(struct HOBJ__ **)v2, 0, 1, 0, 8, 0LL) )
    {
      DEC_SHARE_REF_CNT(*this);
    }
    else
    {
      if ( ((*this)[6] & 0x800) != 0 && *((_QWORD *)*this + 6) )
      {
        v4 = *((_QWORD *)*this + 6);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v4);
      }
      if ( *this != *((int **)*this + 16) )
      {
        v4 = *((_QWORD *)*this + 16);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v4);
      }
      v3 = (unsigned __int8 *)*((_QWORD *)*this + 14);
      if ( v3 )
      {
        if ( v3 != gpRGBXlate )
          Win32FreePool((__int64)v3);
        *((_QWORD *)*this + 14) = 0LL;
      }
      FreeObject((__int64)*this, 8);
    }
    *this = 0LL;
  }
}
