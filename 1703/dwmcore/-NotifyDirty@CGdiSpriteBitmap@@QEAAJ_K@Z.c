/*
 * XREFs of ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x180022C00
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800B0364 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?ProcessNotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_NOTIFYDIRTY@@@Z @ 0x18012D420 (-ProcessNotifyDirty@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_NOTIFY.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z @ 0x180054A30 (-AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180073A20 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800B0910 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::NotifyDirty(CGdiSpriteBitmap *this, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx
  struct _RGNDATA *v6; // rsi
  unsigned int *v7; // r8
  int v8; // eax
  int v9; // eax
  _QWORD v11[8]; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v12; // [rsp+A0h] [rbp+30h] BYREF
  int v13; // [rsp+A8h] [rbp+38h] BYREF
  struct _RGNDATA *v14; // [rsp+B0h] [rbp+40h] BYREF
  HGDIOBJ ho; // [rsp+B8h] [rbp+48h] BYREF

  v2 = 0;
  ho = 0LL;
  v12 = 0;
  memset_0(v11, 0, 0x38uLL);
  v5 = *((_QWORD *)this + 14);
  v13 = 56;
  v6 = 0LL;
  v11[1] = &ho;
  v14 = 0LL;
  v11[0] = a2;
  if ( (int)CRedirectedGDISurface::GetInformation(v5, 0LL, &v13, v11) >= 0 && ho )
  {
    v8 = HrgnToRgnData((HRGN)ho, &v14, v7);
    v12 = v8;
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801F3608, 4u, v8, 0x2C4u);
      v6 = v14;
    }
    else
    {
      v6 = v14;
      v9 = CGdiSpriteBitmap::AddDirtyRects(this, (const struct tagRECT *)v14->Buffer, v14->rdh.nCount, 0LL);
      v12 = v9;
      v2 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801F3608, 4u, v9, 0x2C7u);
    }
  }
  TranslateDXGIorD3DErrorInContext(v2, 12LL, &v12);
  if ( v6 )
    WPF::ProcessHeapImpl::Free(v6);
  if ( ho )
    DeleteObject(ho);
  return v12;
}
