/*
 * XREFs of ?ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATEMARGINS@@@Z @ 0x180055B10
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJXZ @ 0x180055460 (-CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdateMargins(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP_UPDATEMARGINS *a3)
{
  unsigned int v3; // ebx
  int SectionBitmap; // eax

  v3 = 0;
  if ( *((int *)a3 + 2) < 0 || *((int *)a3 + 3) < 0 || *((int *)a3 + 4) < 0 || *((int *)a3 + 5) < 0 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x191u);
  }
  else if ( *((_DWORD *)this + 33) != *((_DWORD *)a3 + 2)
         || *((_DWORD *)this + 34) != *((_DWORD *)a3 + 3)
         || *((_DWORD *)this + 35) != *((_DWORD *)a3 + 4)
         || *((_DWORD *)this + 36) != *((_DWORD *)a3 + 5) )
  {
    *(_OWORD *)((char *)this + 132) = *(_OWORD *)((char *)a3 + 8);
    if ( !*((_QWORD *)this + 48) )
    {
      SectionBitmap = CGdiSpriteBitmap::CreateSectionBitmap(this);
      v3 = SectionBitmap;
      if ( SectionBitmap < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, SectionBitmap, 0x19Cu);
    }
  }
  return v3;
}
