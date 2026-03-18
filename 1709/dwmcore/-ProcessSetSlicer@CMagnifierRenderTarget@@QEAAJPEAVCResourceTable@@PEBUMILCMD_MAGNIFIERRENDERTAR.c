/*
 * XREFs of ?ProcessSetSlicer@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET_SETSLICER@@@Z @ 0x180138764
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     McTemplateU0xdddddd @ 0x180138E80 (McTemplateU0xdddddd.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetSlicer(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_MAGNIFIERRENDERTARGET_SETSLICER *a3)
{
  *((_OWORD *)this + 37) = *(_OWORD *)((char *)a3 + 8);
  *((_QWORD *)this + 76) = *((_QWORD *)a3 + 3);
  *((_BYTE *)this + 636) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xdddddd(
      (_DWORD)this,
      (_DWORD)a2,
      *((_QWORD *)this + 37),
      *((_DWORD *)this + 148),
      *((_DWORD *)this + 149),
      *((_DWORD *)this + 150),
      *((_DWORD *)this + 151),
      *((_DWORD *)this + 152),
      *((_DWORD *)this + 153));
  return 0LL;
}
