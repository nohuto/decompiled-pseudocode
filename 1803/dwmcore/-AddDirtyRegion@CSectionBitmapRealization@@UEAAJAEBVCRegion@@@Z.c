/*
 * XREFs of ?AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800815F0
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x180093ECC (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180049510 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$03$0A@@@@Z @ 0x18007D9BC (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$03$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRECT.c)
 *     ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x180082380 (-AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::AddDirtyRegion(CSectionBitmapRealization *this, const struct CRegion *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, CBitmap **); // rcx
  int appended; // eax
  unsigned int v6; // ebx
  unsigned int v7; // edi
  const struct tagRECT *v8; // rdx
  __int64 (__fastcall *v9)(CBitmap *__hidden, const struct tagRECT *); // rax
  int v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-E0h]
  CBitmap *v13; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+50h] [rbp-B0h]
  int v16; // [rsp+54h] [rbp-ACh]
  unsigned int v17; // [rsp+58h] [rbp-A8h]
  _BYTE v18[256]; // [rsp+60h] [rbp-A0h] BYREF

  v13 = 0LL;
  v17 = 0;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, CBitmap **))*((_QWORD *)this + 36);
  v14[0] = v18;
  v14[1] = v18;
  v15 = 16;
  v16 = 16;
  if ( !v3 )
    goto LABEL_9;
  appended = (**v3)(v3, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, &v13);
  v6 = appended;
  if ( appended < 0 )
  {
    v12 = 154;
    goto LABEL_16;
  }
  v17 = 0;
  appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,4,0>>(a2, (__int64)v14);
  v6 = appended;
  if ( appended < 0 )
  {
    v12 = 156;
    goto LABEL_16;
  }
  v7 = 0;
  if ( !v17 )
  {
LABEL_9:
    appended = CBitmapRealization::AddDirtyRegion(this, (const struct FastRegion::Internal::CRgnData **)a2);
    v6 = appended;
    if ( appended >= 0 )
      goto LABEL_10;
    v12 = 165;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, v12);
    goto LABEL_10;
  }
  while ( 1 )
  {
    v8 = (const struct tagRECT *)(v14[0] + 16LL * v7);
    v9 = *(__int64 (__fastcall **)(CBitmap *__hidden, const struct tagRECT *))(*(_QWORD *)v13 + 40LL);
    v10 = v9 == CBitmap::AddDirtyRect ? CBitmap::AddDirtyRect(v13, v8) : v9(v13, v8);
    v6 = v10;
    if ( v10 < 0 )
      break;
    if ( ++v7 >= v17 )
      goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xA0u);
LABEL_10:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v13);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v14);
  return v6;
}
