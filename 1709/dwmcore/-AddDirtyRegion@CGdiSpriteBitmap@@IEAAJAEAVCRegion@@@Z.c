/*
 * XREFs of ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x18009D64C
 * Callers:
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ @ 0x18009D974 (-DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18009E1B8 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x18009E26C (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??1?$DynArrayIA@M$01$0A@@@QEAA@XZ @ 0x18006B580 (--1-$DynArrayIA@M$01$0A@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x18007F140 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180088C68 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x180088D38 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRE.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18008901C (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ??1CRegion@@QEAA@XZ @ 0x180089058 (--1CRegion@@QEAA@XZ.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800893D0 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800893FC (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800894CC (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z @ 0x1800895A0 (-Contains@CRegion@FastRegion@@QEBA_NAEBV12@@Z.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x180098B00 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxxxx @ 0x180126F0C (McTemplateU0xxxxx.c)
 */

__int64 __fastcall CGdiSpriteBitmap::AddDirtyRegion(
        CGdiSpriteBitmap *this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  LONG v3; // eax
  signed int v4; // ebx
  const struct FastRegion::Internal::CRgnData *v6; // rax
  __int64 v7; // rcx
  unsigned int *v8; // r8
  signed int v9; // eax
  signed int v10; // eax
  __int64 v11; // rcx
  signed int v12; // eax
  signed int appended; // eax
  int v14; // ecx
  __int64 v15; // r14
  char v16; // si
  unsigned __int8 v17; // si
  CWindowNode *v18; // rbx
  signed int v19; // eax
  int v21; // [rsp+40h] [rbp-C0h] BYREF
  HGDIOBJ ho; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v23[16]; // [rsp+50h] [rbp-B0h] BYREF
  HGDIOBJ *p_ho; // [rsp+60h] [rbp-A0h]
  struct tagRECT v25; // [rsp+88h] [rbp-78h] BYREF
  const struct FastRegion::Internal::CRgnData *v26; // [rsp+A0h] [rbp-60h] BYREF
  int v27; // [rsp+A8h] [rbp-58h] BYREF
  struct tagRECT *v28[2]; // [rsp+F0h] [rbp-10h] BYREF
  int v29; // [rsp+100h] [rbp+0h]
  int v30; // [rsp+104h] [rbp+4h]
  unsigned int v31; // [rsp+108h] [rbp+8h]
  _BYTE v32[256]; // [rsp+110h] [rbp+10h] BYREF
  const struct FastRegion::Internal::CRgnData *v33[10]; // [rsp+210h] [rbp+110h] BYREF

  v25.right = *((_DWORD *)this + 90);
  v3 = *((_DWORD *)this + 91);
  v4 = 0;
  v25.left = 0;
  v25.top = 0;
  v25.bottom = v3;
  CRegion::CRegion((CRegion *)v33, &v25);
  v31 = 0;
  v29 = 16;
  v28[0] = (struct tagRECT *)v32;
  v28[1] = (struct tagRECT *)v32;
  v30 = 16;
  `vector constructor iterator'(
    (CInputSinkStruct::InputQueueInfo *)v32,
    16LL,
    16LL,
    COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
  v6 = *a2;
  ho = 0LL;
  if ( !*(_DWORD *)v6 )
    goto LABEL_33;
  if ( !*((_QWORD *)this + 37) && (*((_BYTE *)this + 116) & 0x10) != 0 )
  {
    memset_0(v23, 0, 0x38uLL);
    v7 = *((_QWORD *)this + 10);
    p_ho = &ho;
    v21 = 56;
    CRedirectedGDISurface::GetInformation(v7, 0, &v21, (__int64)v23);
    if ( ho )
    {
      v27 = 0;
      v26 = (const struct FastRegion::Internal::CRgnData *)&v27;
      CRegion::SetHRGN((CRegion *)&v26, (HRGN)ho, v8);
      v4 = FastRegion::CRegion::Copy(a2, a2);
      if ( v4 >= 0 )
        v4 = FastRegion::CRegion::Intersect(a2, &v26);
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x2E9u);
        CRegion::~CRegion((CRegion *)&v26);
        goto LABEL_31;
      }
      CRegion::~CRegion((CRegion *)&v26);
    }
  }
  v9 = FastRegion::CRegion::Intersect(a2, v33);
  v4 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x2EFu);
  }
  else if ( *(_DWORD *)*a2 )
  {
    if ( (*((_BYTE *)this + 116) & 0x10) != 0
      && FastRegion::CRegion::Contains((CGdiSpriteBitmap *)((char *)this + 208), (const struct CRegion *)a2) )
    {
LABEL_15:
      v11 = *((_QWORD *)this + 47);
      if ( v11
        && (v12 = (*(__int64 (__fastcall **)(__int64, const struct FastRegion::Internal::CRgnData **))(*(_QWORD *)v11 + 120LL))(
                    v11,
                    a2),
            v4 = v12,
            v12 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x305u);
      }
      else
      {
        v31 = 0;
        appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,16,0>>((FastRegion::CRegion *)a2, (__int64)v28);
        v4 = appended;
        if ( appended < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, appended, 0x30Eu);
        }
        else
        {
          v15 = 0LL;
          v16 = *((_BYTE *)this + 116);
          *((_BYTE *)this + 116) = v16 | 1;
          v17 = (v16 & 1) == 0;
          if ( *((_DWORD *)this + 48) )
          {
            while ( 1 )
            {
              v18 = *(CWindowNode **)(*((_QWORD *)this + 21) + 8 * v15);
              if ( v17 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                McTemplateU0xxxxx(
                  v14,
                  (unsigned int)&EVTDESC_BIND_GDISPRITEBITMAP_FIRST_TOKEN,
                  (_DWORD)this,
                  *((_QWORD *)this + 43),
                  (char)v18,
                  *((_QWORD *)v18 + 10),
                  *((_QWORD *)this + 9));
              v19 = CWindowNode::NotifyDirtySurface(v18, v28[0], v31, v17, (*((_BYTE *)this + 116) & 0x40) != 0);
              v4 = v19;
              if ( v19 < 0 )
                break;
              v15 = (unsigned int)(v15 + 1);
              if ( (unsigned int)v15 >= *((_DWORD *)this + 48) )
                goto LABEL_31;
            }
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x324u);
          }
        }
      }
      goto LABEL_31;
    }
    v10 = FastRegion::CRegion::Union((const struct FastRegion::Internal::CRgnData **)this + 26, a2);
    v4 = v10;
    if ( v10 >= 0 )
    {
      *((_BYTE *)this + 116) |= 0x40u;
      goto LABEL_15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x2FEu);
  }
LABEL_31:
  if ( ho )
    DeleteObject(ho);
LABEL_33:
  DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>((void **)v28);
  CRegion::~CRegion((CRegion *)v33);
  return (unsigned int)v4;
}
