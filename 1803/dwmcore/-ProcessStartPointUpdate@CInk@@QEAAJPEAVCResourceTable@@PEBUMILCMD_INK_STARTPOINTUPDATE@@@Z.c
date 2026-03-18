/*
 * XREFs of ?ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z @ 0x180191840
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180191328 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessStartPointUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_STARTPOINTUPDATE *a3)
{
  unsigned int v3; // ebp
  char *v4; // r14
  unsigned int v5; // edi
  unsigned int v6; // r15d
  __int64 v8; // rsi
  int ID2D1InkAndInkStyle; // eax
  struct ID2D1InkStyle *v11; // [rsp+60h] [rbp+8h] BYREF
  struct ID2D1Ink *v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *((_DWORD *)this + 24);
  v4 = (char *)this + 168;
  v5 = 0;
  v6 = 0;
  v12 = 0LL;
  v11 = 0LL;
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 43) = *((_DWORD *)a3 + 3);
  if ( v3 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v8 + *((_QWORD *)this + 9)), &v12, &v11);
      v5 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      (*(void (__fastcall **)(struct ID2D1Ink *, char *))(*(_QWORD *)v12 + 32LL))(v12, v4);
      ReleaseInterface<IBitmapLock>((__int64 *)&v12);
      ReleaseInterface<IBitmapLock>((__int64 *)&v11);
      ++v6;
      v8 += 8LL;
      if ( v6 >= v3 )
        goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x72u);
  }
  else
  {
LABEL_5:
    (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  }
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v12);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v11);
  return v5;
}
