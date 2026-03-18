/*
 * XREFs of ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x180093ECC
 * Callers:
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ @ 0x1800942AC (-DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180094C3C (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x180094D04 (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 * Callees:
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x18001F9EC (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180049510 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18007D794 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x18007D87C (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18007E414 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x18007FDA8 (-Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007FEBC (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080038 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180080104 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x180080354 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180081164 (-EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x1800815F0 (-AddDirtyRegion@CSectionBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x18008F90C (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18013E914 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     McTemplateU0xxxxx @ 0x1801491B4 (McTemplateU0xxxxx.c)
 */

__int64 __fastcall CGdiSpriteBitmap::AddDirtyRegion(CGdiSpriteBitmap *this, int **a2)
{
  int v2; // r8d
  int v4; // edx
  int v6; // ebx
  int *v7; // rax
  int *v8; // rbx
  int v9; // eax
  SIZE_T v10; // r8
  FastRegion::Internal::CRgnData *v11; // rcx
  int v12; // eax
  CBitmapRealization *v13; // rcx
  __int64 (__fastcall *v14)(CSectionBitmapRealization *, const struct CRegion *); // rax
  int v15; // eax
  __int64 v16; // r9
  unsigned int v17; // r14d
  char v18; // si
  bool v19; // si
  CWindowNode *v20; // rbx
  __int64 v22; // rcx
  unsigned int *v23; // r8
  FastRegion::Internal::CRgnData *v24; // rax
  int v25; // r9d
  unsigned int v26; // [rsp+20h] [rbp-E0h]
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  HGDIOBJ ho; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v29[16]; // [rsp+50h] [rbp-B0h] BYREF
  HGDIOBJ *p_ho; // [rsp+60h] [rbp-A0h]
  struct FastRegion::Internal::CRgnData *v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h] BYREF
  int v33; // [rsp+A0h] [rbp-60h]
  _DWORD v34[2]; // [rsp+A4h] [rbp-5Ch] BYREF
  _DWORD v35[13]; // [rsp+ACh] [rbp-54h] BYREF
  int *v36; // [rsp+E0h] [rbp-20h] BYREF
  int v37; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v38[48]; // [rsp+100h] [rbp+0h] BYREF
  void *lpMem; // [rsp+130h] [rbp+30h] BYREF
  _BYTE *v40; // [rsp+138h] [rbp+38h]
  int v41; // [rsp+140h] [rbp+40h]
  unsigned int v42[2]; // [rsp+144h] [rbp+44h]
  _BYTE v43[256]; // [rsp+150h] [rbp+50h] BYREF
  int v44; // [rsp+250h] [rbp+150h] BYREF
  void *v45; // [rsp+258h] [rbp+158h]
  _BYTE v46[256]; // [rsp+260h] [rbp+160h] BYREF

  v2 = *((_DWORD *)this + 92);
  v31 = (struct FastRegion::Internal::CRgnData *)&v32;
  v4 = *((_DWORD *)this + 93);
  v6 = 0;
  if ( v2 <= 0 || v4 <= 0 )
  {
    LODWORD(v32) = 0;
  }
  else
  {
    v32 = 2LL;
    v33 = v2;
    v34[0] = 0;
    v35[2] = 0;
    v34[1] = (unsigned int)v38 - 76 - (unsigned int)v34;
    v35[3] = v2;
    v35[0] = v4;
    v35[1] = (unsigned int)v38 - 76 - (unsigned int)v35 + 8;
  }
  ho = 0LL;
  lpMem = v43;
  v41 = 16;
  v40 = v43;
  v7 = *a2;
  *(_QWORD *)v42 = 16LL;
  if ( !*v7 )
    return (unsigned int)v6;
  if ( !*((_QWORD *)this + 38) && (*((_BYTE *)this + 116) & 0x10) != 0 )
  {
    memset_0(v29, 0, 0x38uLL);
    v22 = *((_QWORD *)this + 10);
    p_ho = &ho;
    v27 = 56;
    CRedirectedGDISurface::GetInformation(v22, 0, &v27, (__int64)v29);
    if ( ho )
    {
      v37 = 0;
      v36 = &v37;
      CRegion::SetHRGN((CRegion *)&v36, (HRGN)ho, v23);
      v6 = FastRegion::CRegion::Copy(a2, a2);
      if ( v6 >= 0 )
        v6 = FastRegion::CRegion::Intersect(
               (const struct FastRegion::Internal::CRgnData **)a2,
               (const struct FastRegion::Internal::CRgnData **)&v36);
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x2E9u);
        FastRegion::CRegion::FreeMemory((void **)&v36);
        goto LABEL_26;
      }
      FastRegion::CRegion::FreeMemory((void **)&v36);
    }
  }
  v8 = *a2;
  if ( !*(_DWORD *)v31 )
  {
    *v8 = 0;
    goto LABEL_49;
  }
  if ( !*v8 )
  {
LABEL_49:
    v6 = 0;
    goto LABEL_13;
  }
  v9 = FastRegion::Internal::CRgnData::EstimateSizeIntersect((const struct FastRegion::Internal::CRgnData *)*a2, v31);
  v10 = v9;
  v11 = (FastRegion::Internal::CRgnData *)v46;
  v45 = v46;
  v44 = v9;
  if ( (unsigned __int64)v9 > 0x100 )
  {
    if ( !v9 )
      v10 = 1LL;
    v24 = (FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v10);
    v11 = v24;
    if ( !v24 )
    {
      FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v44);
      v6 = -2147024882;
LABEL_59:
      v26 = 751;
      goto LABEL_60;
    }
    v8 = *a2;
    v45 = v24;
  }
  FastRegion::Internal::CRgnData::Intersect(v11, (const struct FastRegion::Internal::CRgnData *)v8, v31);
  v6 = FastRegion::CRegion::SaveResult((void **)a2, (struct FastRegion::Internal::CWorkBuffer *)&v44);
  if ( v46 != v45 )
    operator delete(v45);
  if ( v6 < 0 )
    goto LABEL_59;
LABEL_13:
  if ( !**a2 )
    goto LABEL_26;
  if ( (*((_BYTE *)this + 116) & 0x10) == 0
    || !FastRegion::CRegion::Contains((CGdiSpriteBitmap *)((char *)this + 208), (const struct CRegion *)a2) )
  {
    v12 = FastRegion::CRegion::Union((int **)this + 26, a2);
    v6 = v12;
    if ( v12 < 0 )
    {
      v26 = 766;
LABEL_56:
      v25 = v12;
LABEL_61:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, v26);
      goto LABEL_26;
    }
    *((_BYTE *)this + 116) |= 0x40u;
  }
  v13 = (CBitmapRealization *)*((_QWORD *)this + 48);
  if ( v13 )
  {
    v14 = *(__int64 (__fastcall **)(CSectionBitmapRealization *, const struct CRegion *))(*(_QWORD *)v13 + 120LL);
    if ( (char *)v14 == (char *)CBitmapRealization::AddDirtyRegion )
      v15 = CBitmapRealization::AddDirtyRegion(v13, (const struct FastRegion::Internal::CRgnData **)a2);
    else
      v15 = v14 == CSectionBitmapRealization::AddDirtyRegion
          ? CSectionBitmapRealization::AddDirtyRegion(v13, (const struct CRegion *)a2)
          : v14(v13, (const struct CRegion *)a2);
    v6 = v15;
    if ( v15 < 0 )
    {
      v26 = 773;
LABEL_60:
      v25 = v6;
      goto LABEL_61;
    }
  }
  v42[1] = 0;
  v12 = CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>>(
          (FastRegion::Internal::CRgnData **)a2,
          (__int64)&lpMem);
  v6 = v12;
  if ( v12 < 0 )
  {
    v26 = 782;
    goto LABEL_56;
  }
  v17 = 0;
  v18 = *((_BYTE *)this + 116);
  *((_BYTE *)this + 116) = v18 | 1;
  v19 = (v18 & 1) == 0;
  if ( *((_DWORD *)this + 48) )
  {
    while ( 1 )
    {
      v20 = *(CWindowNode **)(*((_QWORD *)this + 21) + 8LL * v17);
      if ( v19 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xxxxx(
          v17,
          (unsigned int)&EVTDESC_BIND_GDISPRITEBITMAP_FIRST_TOKEN,
          (_DWORD)this,
          *((_QWORD *)this + 44),
          (char)v20,
          *((_QWORD *)v20 + 10),
          *((_QWORD *)this + 9));
      LOBYTE(v16) = v19;
      v12 = CWindowNode::NotifyDirtySurface(
              v20,
              (const struct tagRECT *)lpMem,
              v42[1],
              v16,
              (*((_BYTE *)this + 116) & 0x40) != 0);
      v6 = v12;
      if ( v12 < 0 )
        break;
      if ( ++v17 >= *((_DWORD *)this + 48) )
        goto LABEL_26;
    }
    v26 = 804;
    goto LABEL_56;
  }
LABEL_26:
  if ( ho )
    DeleteObject(ho);
  if ( lpMem != v40 )
  {
    operator delete(lpMem);
    lpMem = 0LL;
  }
  if ( &v32 != (__int64 *)v31 )
    operator delete(v31);
  return (unsigned int)v6;
}
