/*
 * XREFs of ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180024F10
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180019E84 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180024790 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x180024DB8 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18003E33C (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004D268 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?SetSize@CHolographicSlate@@QEAAJII@Z @ 0x18007996C (-SetSize@CHolographicSlate@@QEAAJII@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaBounds(CTopLevelWindow *this)
{
  unsigned int v1; // r14d
  int v2; // edi
  struct CVisual **v3; // rsi
  int v5; // edi
  __int64 v6; // r9
  int cxLeftWidth; // r10d
  int cxRightWidth; // r11d
  int cyBottomHeight; // edi
  __int64 v10; // rax
  int v11; // edx
  int v12; // r8d
  int v13; // ecx
  int cyTopHeight; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v18; // r15
  int v19; // eax
  int inserted; // eax
  struct CVisual *v21; // rcx
  unsigned int v22; // r10d
  unsigned int v23; // r11d
  unsigned __int64 v24; // xmm0_8
  __int64 v25; // rax
  int v26; // r9d
  int v27; // r8d
  __int64 v28; // rax
  __m128 v29; // xmm3
  __int64 v30; // rcx
  unsigned __int64 v31; // xmm1_8
  int v32; // eax
  CHolographicSlate *v33; // rcx
  _DWORD *v34; // rax
  unsigned int v35; // r8d
  int v36; // eax
  unsigned int v37; // [rsp+20h] [rbp-50h]
  struct _MARGINS v38; // [rsp+40h] [rbp-30h] BYREF
  struct _MARGINS v39; // [rsp+50h] [rbp-20h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = (struct CVisual **)((char *)this + 472);
  if ( !*((_QWORD *)this + 59) )
  {
    v18 = *((_QWORD *)this + 90);
    if ( *(_DWORD *)(v18 + 128) )
    {
      v19 = CClientArea::Create(
              *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
              *(_DWORD *)(v18 + 128),
              (struct CClientArea **)this + 59);
      v2 = v19;
      if ( v19 >= 0 )
        *((_QWORD *)*v3 + 30) = v18;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x4Cu);
      if ( v2 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x796u);
        goto LABEL_2;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 66) + 32LL), *v3, 0LL, 1u, 1);
      v2 = inserted;
      if ( inserted < 0 )
      {
        v37 = 1944;
LABEL_40:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, v37);
        goto LABEL_2;
      }
      v21 = *v3;
      *(_QWORD *)&v39.cxLeftWidth = 0LL;
      *(_QWORD *)&v39.cyTopHeight = 0LL;
      CVisual::SetInsetFromParent((struct _MARGINS *)v21, &v39);
      if ( (*((_BYTE *)this + 240) & 8) != 0 )
      {
        inserted = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
        v2 = inserted;
        if ( inserted < 0 )
        {
          v37 = 1951;
          goto LABEL_40;
        }
      }
    }
  }
LABEL_2:
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x1368u);
  }
  else if ( *v3 )
  {
    v5 = *((_DWORD *)this + 146);
    *(_QWORD *)&v38.cxLeftWidth = 0LL;
    *(_QWORD *)&v38.cyTopHeight = 0LL;
    v39 = *(struct _MARGINS *)(*((_QWORD *)this + 90) + 48LL);
    if ( (unsigned __int8)IsOpenThemeDataPresent() && (v5 & 6) != 0 || (*((_DWORD *)this + 146) & 0x200000) != 0 )
    {
      if ( (*((_BYTE *)this + 240) & 8) != 0 )
        v6 = 636LL;
      else
        v6 = 620LL;
      cxLeftWidth = *(_DWORD *)((char *)this + v6);
      cxRightWidth = *(_DWORD *)((char *)this + v6 + 4);
      cyBottomHeight = *(_DWORD *)((char *)this + v6 + 12);
      v10 = *((_QWORD *)this + 90);
      if ( v10 && (*(_BYTE *)(v10 + 592) & 8) == 0 )
      {
        cyTopHeight = *(_DWORD *)((char *)this + v6 + 8);
      }
      else
      {
        v11 = *((_DWORD *)this + 151) - cxLeftWidth - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL);
        if ( v11 < 0 )
          v11 = 0;
        v12 = *((_DWORD *)this + 152) - cxRightWidth - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
        if ( v12 < 0 )
          v12 = 0;
        v13 = *((_DWORD *)this + 154) - cyBottomHeight - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
        if ( v13 < 0 )
          v13 = 0;
        cyTopHeight = *(_DWORD *)((char *)this + v6 + 8);
        cxLeftWidth += v11;
        cxRightWidth += v12;
        cyBottomHeight += v13;
      }
    }
    else
    {
      cyBottomHeight = v38.cyBottomHeight;
      cyTopHeight = v38.cyTopHeight;
      cxRightWidth = v38.cxRightWidth;
      cxLeftWidth = v38.cxLeftWidth;
    }
    v39.cxRightWidth += cyTopHeight;
    v39.cxLeftWidth += cxLeftWidth;
    v39.cyTopHeight -= cxRightWidth;
    v39.cyBottomHeight -= cyBottomHeight;
    v15 = *((_QWORD *)this + 90);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64))(**(_QWORD **)(*((_QWORD *)*v3 + 2) + 16LL)
                                                                                       + 528LL))(
           *(_QWORD *)(*((_QWORD *)*v3 + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)*v3 + 2) + 24LL),
           v15 + 188,
           v15 + 204,
           v15 + 220,
           v15 + 236);
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x137Du);
    }
    else
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _MARGINS *))(**(_QWORD **)(*((_QWORD *)*v3 + 2) + 16LL)
                                                                        + 520LL))(
             *(_QWORD *)(*((_QWORD *)*v3 + 2) + 16LL),
             *(unsigned int *)(*((_QWORD *)*v3 + 2) + 24LL),
             &v39);
      if ( v2 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x1381u);
      }
      else
      {
        v16 = *((_QWORD *)this + 100);
        if ( v16
          && ((*(void (__fastcall **)(__int64, struct _MARGINS *))(*(_QWORD *)v16 + 32LL))(v16, &v39),
              v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 21)
                                                     + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21)),
              v2 < 0) )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x1386u);
        }
        else
        {
          v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)*v3 + 2) + 16LL) + 352LL))(
                 *(_QWORD *)(*((_QWORD *)*v3 + 2) + 16LL),
                 *(unsigned int *)(*((_QWORD *)*v3 + 2) + 24LL));
          if ( v2 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x138Du);
          }
          else
          {
            v2 = 0;
            if ( *((_QWORD *)this + 97) )
            {
              v22 = 0;
              v23 = 0;
              if ( *((_BYTE *)this + 772) )
              {
                *(_QWORD *)&v38.cxLeftWidth = 0LL;
                *(_QWORD *)&v38.cyTopHeight = 0LL;
                CTopLevelWindow::GetOutsideMargins(this, &v38);
                v22 = v38.cxLeftWidth;
                v23 = v38.cyTopHeight;
                v24 = _mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 90) + 48LL), 8).m128i_u64[0];
                v25 = *(_QWORD *)(*((_QWORD *)this + 90) + 48LL);
                v26 = v24 - v38.cxRightWidth - v25 - v38.cxLeftWidth;
                v27 = HIDWORD(v24) - HIDWORD(v25) - v38.cyBottomHeight - v38.cyTopHeight;
              }
              else
              {
                v28 = *((_QWORD *)this + 90);
                v29 = (__m128)*(unsigned __int64 *)(v28 + 172);
                v30 = *(_QWORD *)(v28 + 204);
                v31 = _mm_srli_si128(*(__m128i *)(v28 + 204), 8).m128i_u64[0];
                v26 = (int)(float)((float)((int)v31 - v30) * v29.m128_f32[0]);
                v27 = (int)(float)((float)(HIDWORD(v31) - HIDWORD(v30)) * _mm_shuffle_ps(v29, v29, 85).m128_f32[0]);
              }
              v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, int))(**(_QWORD **)(*((_QWORD *)this + 97) + 16LL)
                                                                                        + 816LL))(
                      *(_QWORD *)(*((_QWORD *)this + 97) + 16LL),
                      *(unsigned int *)(*((_QWORD *)this + 97) + 24LL),
                      v22,
                      v23,
                      v26,
                      v27);
              v2 = v32;
              if ( v32 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x1571u);
            }
            if ( v2 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x1390u);
            }
            else
            {
              v2 = 0;
              if ( (*((_BYTE *)this + 241) & 4) != 0 )
              {
                v33 = (CHolographicSlate *)*((_QWORD *)this + 98);
                if ( v33 )
                {
                  v34 = (_DWORD *)*((_QWORD *)this + 90);
                  v35 = 0;
                  if ( v34[54] - v34[52] >= 0 )
                    v35 = v34[54] - v34[52];
                  if ( v34[53] - v34[51] >= 0 )
                    v1 = v34[53] - v34[51];
                  v36 = CHolographicSlate::SetSize(v33, v1, v35);
                  v2 = v36;
                  if ( v36 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x136u);
                }
              }
              if ( v2 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x1392u);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
