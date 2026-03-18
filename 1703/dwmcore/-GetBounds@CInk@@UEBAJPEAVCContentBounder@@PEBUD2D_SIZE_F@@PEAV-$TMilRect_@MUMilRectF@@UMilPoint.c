/*
 * XREFs of ?GetBounds@CInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180001780
 * Callers:
 *     <none>
 * Callees:
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180001670 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180001D34 (-FindOrCreateResourceNoRef@-$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2D.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInk::GetBounds(__int64 a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  struct ID2D1Ink *v4; // rdi
  struct ID2D1InkStyle *v5; // r14
  int ResourceNoRef; // eax
  unsigned int v8; // ebx
  int ID2D1InkAndInkStyle; // eax
  int v10; // eax
  struct ID2D1Ink *v12; // [rsp+30h] [rbp-30h] BYREF
  struct ID2D1InkStyle *v13[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v14; // [rsp+48h] [rbp-18h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v12 = 0LL;
  v13[0] = 0LL;
  ResourceNoRef = CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::FindOrCreateResourceNoRef((struct IDeviceResourceNotify *)(a1 + 56));
  v8 = ResourceNoRef;
  if ( ResourceNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ResourceNoRef, 0x18u);
  }
  else
  {
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v13[1], &v12, v13);
    v8 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x1Au);
      v4 = v12;
      v5 = v13[0];
    }
    else
    {
      v4 = v12;
      v5 = v13[0];
      v10 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, struct ID2D1InkStyle *, _QWORD, __int128 *))(*(_QWORD *)v12 + 104LL))(
              v12,
              v13[0],
              0LL,
              &v14);
      v8 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1Cu);
      else
        *a4 = v14;
    }
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>(v4);
  ReleaseInterfaceNoNULL<ID2D1Ink>(v5);
  return v8;
}
