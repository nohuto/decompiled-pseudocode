/*
 * XREFs of ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800B86CC
 * Callers:
 *     ?ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x1800B5300 (-ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAPRESOURCE_SOURCE@@@Z.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x180179D24 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness.c)
 *     ?FillTexture@CHwBitmapColorSource@@AEAAJXZ @ 0x1801EF984 (-FillTexture@CHwBitmapColorSource@@AEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x1800B8998 (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x1800B8AB8 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall HrCreateBitmapFromWICBitmapSource(struct IWICBitmapSource *a1, struct IBitmapSource **a2)
{
  CWICBitmapWrapper *v4; // rax
  CMILCOMBase *v5; // rax
  CMILCOMBase *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (CWICBitmapWrapper *)HeapAlloc(WPF::g_processHeap, 0, 0xE8uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v5 = CWICBitmapWrapper::CWICBitmapWrapper(v4);
  v6 = v5;
  if ( v5 )
  {
    CMILCOMBase::InternalAddRef(v5);
    v7 = CWICBitmapWrapper::HrInit(v6, a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1Au);
      CMILCOMBase::InternalRelease(v6);
    }
    else
    {
      *a2 = (CMILCOMBase *)((char *)v6 + 16);
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x17u);
  }
  return v8;
}
