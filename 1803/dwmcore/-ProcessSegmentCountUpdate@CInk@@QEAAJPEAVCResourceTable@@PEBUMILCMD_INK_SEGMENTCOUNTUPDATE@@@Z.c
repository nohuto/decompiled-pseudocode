/*
 * XREFs of ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z @ 0x1801914E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180191328 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 */

__int64 __fastcall CInk::ProcessSegmentCountUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_SEGMENTCOUNTUPDATE *a3)
{
  int v3; // r15d
  unsigned int v4; // ebx
  struct ID2D1Ink *v5; // rdi
  int v6; // r15d
  unsigned int v9; // r12d
  unsigned int v10; // ebp
  __int64 v11; // r14
  int ID2D1InkAndInkStyle; // eax
  int v13; // eax
  int v14; // eax
  struct ID2D1InkStyle *v16; // [rsp+70h] [rbp+8h] BYREF
  struct ID2D1Ink *v17; // [rsp+78h] [rbp+10h] BYREF

  v17 = a2;
  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  v16 = 0LL;
  v5 = 0LL;
  v6 = v3 - *((_DWORD *)this + 40);
  v17 = 0LL;
  if ( v6 >= 0 )
  {
    v14 = DynArrayImpl<0>::Grow((__int64)this + 136, 0x24u, v6, 0, 0LL);
    v4 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xA3u);
      goto LABEL_13;
    }
    goto LABEL_11;
  }
  v9 = *((_DWORD *)this + 24);
  v10 = 0;
  if ( !v9 )
  {
LABEL_11:
    *((_DWORD *)this + 40) = *((_DWORD *)a3 + 2);
    (*(void (__fastcall **)(CInk *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
    goto LABEL_13;
  }
  v11 = 0LL;
  while ( 1 )
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v11 + *((_QWORD *)this + 9)), &v17, &v16);
    v4 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
      break;
    v5 = v17;
    v13 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD))(*(_QWORD *)v17 + 56LL))(v17, (unsigned int)-v6);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x9Bu);
      goto LABEL_13;
    }
    ReleaseInterface<IBitmapLock>((__int64 *)&v17);
    ReleaseInterface<IBitmapLock>((__int64 *)&v16);
    ++v10;
    v11 += 8LL;
    if ( v10 >= v9 )
    {
      v5 = v17;
      goto LABEL_11;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x99u);
  v5 = v17;
LABEL_13:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v5);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v16);
  return v4;
}
