/*
 * XREFs of ?AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z @ 0x180054A30
 * Callers:
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x180022C00 (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ @ 0x180055064 (-DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180055C64 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18004FCA8 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N@Z @ 0x180053130 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N@Z.c)
 *     ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x180056130 (-AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z.c)
 *     ?AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@AEA_N@Z @ 0x180056AA0 (-AddValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeede.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180073B6C (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180073E60 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18007599C (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180075A88 (-Intersect@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180075C28 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x1800B0910 (-GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     floor_0 @ 0x1800D5366 (floor_0.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?SubtractValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEAPEAUHRGN__@@@Z @ 0x180135DC4 (-SubtractValidRect@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNot.c)
 *     Template_xxxxx @ 0x18013C060 (Template_xxxxx.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180197528 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::AddDirtyRects(
        CGdiSpriteBitmap *this,
        const struct tagRECT *a2,
        unsigned int a3,
        void *a4)
{
  unsigned int v4; // r12d
  __int64 v5; // r13
  void *v6; // rdi
  const struct tagRECT *v7; // r15
  CGdiSpriteBitmap *v8; // rsi
  int v9; // r14d
  __int64 v10; // rax
  unsigned int *p_right; // r15
  __int64 v12; // r13
  LONG v13; // r14d
  LONG v14; // esi
  __m128i v15; // xmm6
  __m128i v16; // xmm7
  __m128i v17; // xmm8
  LONG v18; // edi
  LONG v19; // ebx
  float v20; // xmm0_4
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm8_4
  LONG v24; // eax
  LONG v25; // eax
  LONG v26; // eax
  LONG v27; // eax
  __int64 v28; // rdi
  __int64 v29; // rbx
  int v30; // eax
  CWindowNode *v31; // rbx
  int v32; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 (__fastcall ***v36)(_QWORD, GUID *, __int64 *); // rcx
  int v37; // eax
  unsigned int v38; // edi
  LONG *p_top; // rbx
  int v40; // r8d
  LONG v41; // eax
  LONG v42; // r9d
  bool v43; // sf
  LONG v44; // ecx
  int v45; // edx
  int v46; // eax
  int v47; // eax
  int valid; // eax
  char v49; // [rsp+48h] [rbp-C0h] BYREF
  int appended; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v51; // [rsp+50h] [rbp-B8h]
  void *v52; // [rsp+58h] [rbp-B0h]
  __int64 v53; // [rsp+60h] [rbp-A8h]
  HGDIOBJ v54; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+70h] [rbp-98h] BYREF
  HGDIOBJ ho; // [rsp+78h] [rbp-90h] BYREF
  CGdiSpriteBitmap *v57; // [rsp+80h] [rbp-88h]
  const struct tagRECT *v58; // [rsp+88h] [rbp-80h]
  struct tagRECT v59; // [rsp+90h] [rbp-78h] BYREF
  int *v60; // [rsp+A8h] [rbp-60h] BYREF
  int v61; // [rsp+B0h] [rbp-58h] BYREF
  HGDIOBJ *p_ho; // [rsp+B8h] [rbp-50h]
  int *v63; // [rsp+F8h] [rbp-10h] BYREF
  int v64; // [rsp+100h] [rbp-8h] BYREF

  v4 = 0;
  v5 = a3;
  v52 = a4;
  v6 = a4;
  LODWORD(v53) = a3;
  v7 = a2;
  v58 = a2;
  v8 = this;
  v57 = this;
  v55 = 0LL;
  ho = 0LL;
  if ( !a3 )
    return 0LL;
  if ( !*((_QWORD *)this + 48)
    || (*((_BYTE *)this + 148) & 0x20) == 0
    || (memset_0(&v60, 0, 0x38uLL),
        v34 = *((_QWORD *)v8 + 14),
        p_ho = &ho,
        appended = 56,
        CRedirectedGDISurface::GetInformation(v34, 0LL, &appended, &v60),
        !ho) )
  {
    appended = CRegion::AppendRects<tagRECT>((CGdiSpriteBitmap *)((char *)v8 + 240));
    v9 = appended;
    if ( appended < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x399u);
      goto LABEL_46;
    }
    *((_BYTE *)v8 + 148) |= 0x80u;
    goto LABEL_6;
  }
  v64 = 0;
  v63 = &v64;
  CRegion::SetHRGN((CRegion *)&v63, (HRGN)ho);
  v61 = 0;
  v60 = &v61;
  v35 = CRegion::AppendRects<tagRECT>((FastRegion::CRegion *)&v60);
  v9 = v35;
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x38Eu);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v60);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v63);
    goto LABEL_46;
  }
  v9 = FastRegion::CRegion::Copy((FastRegion::CRegion *)&v60, (const struct CRegion *)&v60);
  if ( v9 >= 0 )
    v9 = FastRegion::CRegion::Intersect((FastRegion::CRegion *)&v60, (const struct CRegion *)&v63);
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x391u);
    goto LABEL_87;
  }
  appended = FastRegion::CRegion::Union((CGdiSpriteBitmap *)((char *)v8 + 240), (const struct CRegion *)&v60);
  v9 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, appended, 0x394u);
LABEL_87:
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v60);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v63);
    goto LABEL_46;
  }
  *((_BYTE *)v8 + 148) |= 0x80u;
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v60);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v63);
LABEL_6:
  if ( *((_QWORD *)v8 + 48) )
  {
    if ( !v6 )
    {
      v6 = (void *)*((_QWORD *)v8 + 46);
      v52 = v6;
    }
    if ( (_DWORD)v5 )
    {
      v10 = v5;
      p_right = (unsigned int *)&v7->right;
      v51 = v5;
      while ( 1 )
      {
        v12 = *((_QWORD *)v8 + 48);
        v13 = 0;
        v14 = 0;
        v15 = _mm_cvtsi32_si128(*(p_right - 1));
        v16 = _mm_cvtsi32_si128(*p_right);
        v17 = _mm_cvtsi32_si128(p_right[1]);
        v18 = *(_DWORD *)(v12 + 168);
        v19 = *(_DWORD *)(v12 + 172);
        v20 = (float)(int)*(p_right - 2);
        *(_QWORD *)&v59.left = 0LL;
        v59.right = v18;
        v59.bottom = v19;
        LODWORD(v21) = _mm_cvtepi32_ps(v15).m128_u32[0];
        LODWORD(v22) = _mm_cvtepi32_ps(v16).m128_u32[0];
        LODWORD(v23) = _mm_cvtepi32_ps(v17).m128_u32[0];
        if ( v20 >= 16777216.0 || v21 >= 16777216.0 || v22 < -16777215.0 || v23 < -16777215.0 )
          goto LABEL_93;
        if ( v20 >= -16777215.0 )
        {
          v24 = ((int)floor_0((float)(v20 * 16.0) + 0.5) + 7) >> 4;
          if ( v24 > 0 )
          {
            v13 = v24;
            v59.left = v24;
          }
        }
        if ( v21 >= -16777215.0 )
        {
          v25 = ((int)floor_0((float)(v21 * 16.0) + 0.5) + 7) >> 4;
          if ( v25 > 0 )
          {
            v14 = v25;
            v59.top = v25;
          }
        }
        if ( v22 < 16777216.0 )
        {
          v26 = ((int)floor_0((float)(v22 * 16.0) + 0.5) + 7) >> 4;
          if ( v26 < v18 )
          {
            v18 = v26;
            v59.right = v26;
          }
        }
        if ( v23 < 16777216.0 )
        {
          v27 = ((int)floor_0((float)(v23 * 16.0) + 0.5) + 7) >> 4;
          if ( v27 < v19 )
          {
            v19 = v27;
            v59.bottom = v27;
          }
        }
        if ( v18 <= v13 || v19 <= v14 )
        {
          v10 = v51;
LABEL_93:
          *(_QWORD *)&v59.right = 0LL;
          *(_QWORD *)&v59.left = 0LL;
          goto LABEL_38;
        }
        LODWORD(v28) = *(_DWORD *)(v12 + 288);
        v54 = 0LL;
        v49 = 0;
        if ( !(_DWORD)v28 )
          goto LABEL_37;
        while ( 1 )
        {
          v28 = (unsigned int)(v28 - 1);
          v29 = *(_QWORD *)(v12 + 264) + 96 * v28;
          if ( *(_DWORD *)(v29 + 8) == (_DWORD)v52 )
            break;
          valid = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::SubtractValidRect(
                    *(_QWORD *)(v12 + 264) + 96 * v28,
                    &v59,
                    &v54);
          if ( valid < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, valid, 0x339u);
            goto LABEL_35;
          }
LABEL_58:
          if ( !(_DWORD)v28 )
            goto LABEL_35;
        }
        if ( g_LockAndReadSharedSurfaceTexture )
          CD3DDeviceLevel1::ReadTexture(
            *(CD3DDeviceLevel1 **)(*(_QWORD *)(v29 + 16) + 16LL),
            *(struct ID3D11Texture2D **)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 160LL) + 128LL));
        CBitmap::AddDirtyRect((CBitmap *)(v12 + 24), &v59);
        v30 = CBitmapOfDeviceBitmaps::DeviceBitmapInfo::AddValidRect(v29, &v59, &v54, &v49);
        if ( v30 >= 0 )
          break;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x330u);
LABEL_35:
        if ( v54 )
          DeleteObject(v54);
LABEL_37:
        v10 = v51;
LABEL_38:
        v8 = v57;
        p_right += 4;
        v51 = --v10;
        if ( !v10 )
        {
          LODWORD(v5) = v53;
          v7 = v58;
          goto LABEL_40;
        }
      }
      if ( v49 )
        goto LABEL_35;
      goto LABEL_58;
    }
    goto LABEL_41;
  }
  v36 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v8 + 10);
  if ( !v36 )
  {
LABEL_41:
    if ( *((_DWORD *)v8 + 56) )
    {
      while ( 1 )
      {
        v31 = *(CWindowNode **)(*((_QWORD *)v8 + 25) + 8LL * v4);
        if ( (*((_BYTE *)v8 + 148) & 2) == 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_xxxxx(
            v4,
            (unsigned int)&EVTDESC_BIND_GDISPRITEBITMAP_FIRST_TOKEN,
            (_DWORD)v8,
            (_DWORD)v6,
            (char)v31,
            *((_QWORD *)v31 + 10),
            *((_QWORD *)v8 + 13));
        v32 = CWindowNode::NotifyDirtySurface(v31, v7, v5, (*((_BYTE *)v8 + 148) & 2) == 0);
        v9 = v32;
        if ( v32 < 0 )
          break;
        if ( ++v4 >= *((_DWORD *)v8 + 56) )
          goto LABEL_45;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x3E3u);
    }
    else
    {
      v9 = appended;
LABEL_45:
      *((_BYTE *)v8 + 148) |= 2u;
    }
    goto LABEL_46;
  }
  v37 = (**v36)(v36, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, &v55);
  appended = v37;
  v9 = v37;
  if ( v37 >= 0 )
  {
    v38 = 0;
    if ( (_DWORD)v5 )
    {
      p_top = &v7->top;
      while ( 1 )
      {
        v40 = *(p_top - 1);
        v41 = v40 - *((_DWORD *)v8 + 33);
        if ( v41 < 0 )
          v41 = 0;
        v42 = *p_top;
        v43 = *p_top - *((_DWORD *)v8 + 35) < 0;
        v44 = *p_top - *((_DWORD *)v8 + 35);
        v59.left = v41;
        if ( v43 )
          v44 = 0;
        v45 = p_top[1] - v40;
        v59.top = v44;
        if ( v45 < 0 )
          v45 = 0;
        if ( *((_DWORD *)v8 + 18) < v45 + v41 )
          v59.right = *((_DWORD *)v8 + 18);
        else
          v59.right = v45 + v41;
        v46 = p_top[2] - v42;
        if ( v46 < 0 )
          v46 = 0;
        v59.bottom = *((_DWORD *)v8 + 19) < v46 + v44 ? *((_DWORD *)v8 + 19) : v46 + v44;
        if ( !TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v59) )
        {
          v47 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v55 + 40LL))(v55, &v59);
          appended = v47;
          v9 = v47;
          if ( v47 < 0 )
            break;
        }
        ++v38;
        p_top += 4;
        if ( v38 >= (unsigned int)v5 )
          goto LABEL_40;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v47, 0x3C8u);
      goto LABEL_46;
    }
LABEL_40:
    LODWORD(v6) = (_DWORD)v52;
    goto LABEL_41;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x3BAu);
LABEL_46:
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  if ( ho )
    DeleteObject(ho);
  return (unsigned int)v9;
}
