/*
 * XREFs of ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800C6190
 * Callers:
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1800445FC (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 *     ?ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_SOURCE@@@Z @ 0x18007CF50 (-ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_SOURCE@@@Z.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x18015AD90 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness.c)
 *     ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1801AA78C (-DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x180048E64 (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x180048F84 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall HrCreateBitmapFromWICBitmapSource(struct IWICBitmapSource *a1, struct IBitmapSource **a2)
{
  CWICBitmapWrapper *v4; // rax
  CBitmapOfDeviceBitmaps *v5; // rax
  CBitmapOfDeviceBitmaps *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CWICBitmapWrapper *)HeapAlloc(WPF::g_processHeap, 0, 0xE8uLL);
  if ( !v4 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v5 = CWICBitmapWrapper::CWICBitmapWrapper(v4);
  v6 = v5;
  if ( v5 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v5);
    v7 = CWICBitmapWrapper::HrInit(v6, a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1Au);
      CMILCOMBase::InternalRelease(v6);
    }
    else
    {
      *a2 = (CBitmapOfDeviceBitmaps *)((char *)v6 + 16);
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x17u);
  }
  return v8;
}
