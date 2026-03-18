/*
 * XREFs of ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041630
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001F6F0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C004121C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00418C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C0041B80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     hbmSelectBitmap @ 0x1C004F3A0 (hbmSelectBitmap.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C00565B0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00AA140 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00F4F60 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1C003FE40 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0041630 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     HmgRemoveObject @ 0x1C0042F70 (HmgRemoveObject.c)
 *     FreeObject @ 0x1C0054E50 (FreeObject.c)
 */

void __fastcall XEPALOBJ::vUnrefPalette(struct OBJECT **this)
{
  struct OBJECT *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int8 *v5; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *this;
  if ( v2 )
  {
    if ( (*((_DWORD *)v2 + 6) & 0x1000000) == 0 && HmgRemoveObject(*(_QWORD *)v2, 0, 1, 0, 8, 0LL) )
    {
      if ( (*((_DWORD *)*this + 6) & 0x800) != 0 && *((_QWORD *)*this + 6) )
      {
        v6 = *((_QWORD *)*this + 6);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v6);
      }
      if ( *this != *((struct OBJECT **)*this + 16) )
      {
        v6 = *((_QWORD *)*this + 16);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v6);
      }
      v5 = (unsigned __int8 *)*((_QWORD *)*this + 14);
      if ( v5 )
      {
        if ( v5 != gpRGBXlate )
          Win32FreePool(v5, v3, v4);
        *((_QWORD *)*this + 14) = 0LL;
      }
      FreeObject(*this, 8LL);
    }
    else
    {
      HmgDecrementShareReferenceCountEx(*this, 0LL);
    }
    *this = 0LL;
  }
}
