/*
 * XREFs of ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800CC310
 * Callers:
 *     ?GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z @ 0x180078490 (-GetBitmapSource@CHwTextureRenderTarget@@UEAAJPEAPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z @ 0x1800CC720 (--0CBitmapOfDeviceBitmaps@@IEAA@IIPEBUPixelFormatInfo@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::Create(
        unsigned int a1,
        unsigned int a2,
        const struct PixelFormatInfo *a3,
        struct CBitmapOfDeviceBitmaps **a4)
{
  unsigned int v4; // ebx
  struct CBitmapOfDeviceBitmaps *v9; // rdi
  CBitmapOfDeviceBitmaps *v10; // rax
  CMILCOMBase *v11; // rax
  __int64 result; // rax
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v9 = 0LL;
  if ( a1 > 0x1000000 || a2 > 0x1000000 )
  {
    v13 = -2147024809;
    v14 = 58;
    goto LABEL_10;
  }
  v10 = (CBitmapOfDeviceBitmaps *)HeapAlloc(WPF::g_processHeap, 0, 0x218uLL);
  if ( !v10 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v11 = CBitmapOfDeviceBitmaps::CBitmapOfDeviceBitmaps(v10, a1, a2, a3);
  v9 = v11;
  if ( !v11 )
  {
    v13 = -2147024882;
    v14 = 64;
LABEL_10:
    v4 = v13;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v14);
    goto LABEL_6;
  }
  CMILCOMBase::InternalAddRef(v11);
LABEL_6:
  result = v4;
  *a4 = v9;
  return result;
}
