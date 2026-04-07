/*
 * XREFs of ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180019C60
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x1800098D4 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180019510 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800196FC (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x18002C3AC (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180045BAC (IsOpenThemeDataPresent.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?SetSize@CHolographicSlate@@QEAAJII@Z @ 0x18007033C (-SetSize@CHolographicSlate@@QEAAJII@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaBounds(CTopLevelWindow *this)
{
  unsigned int v1; // r14d
  int v2; // edi
  struct CVisual ***v3; // rsi
  int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // rax
  int cxLeftWidth; // r10d
  int cxRightWidth; // r11d
  int cyBottomHeight; // edi
  int v11; // eax
  int cyTopHeight; // edx
  int v13; // eax
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned int *v18; // r15
  unsigned int v19; // edx
  int v20; // eax
  int inserted; // eax
  struct CVisual **v22; // rcx
  unsigned int v23; // r10d
  unsigned int v24; // r11d
  unsigned __int64 v25; // xmm0_8
  __int64 v26; // rax
  int v27; // r9d
  int v28; // r8d
  __int64 v29; // rcx
  unsigned __int64 v30; // xmm0_8
  __int64 v31; // rdx
  int v32; // eax
  CHolographicSlate *v33; // rcx
  _DWORD *v34; // rax
  unsigned int v35; // r8d
  int v36; // eax
  unsigned int v37; // [rsp+20h] [rbp-50h]
  struct _MARGINS v38; // [rsp+40h] [rbp-30h] BYREF
  __int128 v39; // [rsp+50h] [rbp-20h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = (struct CVisual ***)((char *)this + 472);
  if ( !*((_QWORD *)this + 59) )
  {
    v18 = (unsigned int *)*((_QWORD *)this + 90);
    v19 = v18[32];
    if ( v19 )
    {
      v20 = CClientArea::Create(
              *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
              v19,
              (struct CClientArea **)this + 59);
      v2 = v20;
      if ( v20 >= 0 )
        (*v3)[30] = (struct CVisual *)v18;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x4Cu);
      if ( v2 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x78Fu);
        goto LABEL_2;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 66) + 32LL), *v3, 0LL, 1u, 1);
      v2 = inserted;
      if ( inserted < 0 )
      {
        v37 = 1937;
LABEL_37:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v37);
        goto LABEL_2;
      }
      v22 = *v3;
      *(_QWORD *)&v38.cxLeftWidth = 0LL;
      *(_QWORD *)&v38.cyTopHeight = 0LL;
      CVisual::SetInsetFromParent((struct _MARGINS *)v22, &v38);
      if ( (*((_BYTE *)this + 240) & 8) != 0 )
      {
        inserted = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
        v2 = inserted;
        if ( inserted < 0 )
        {
          v37 = 1944;
          goto LABEL_37;
        }
      }
    }
  }
LABEL_2:
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1360u);
  }
  else if ( *v3 )
  {
    v5 = *((_DWORD *)this + 146);
    *(_QWORD *)&v38.cxLeftWidth = 0LL;
    *(_QWORD *)&v38.cyTopHeight = 0LL;
    v39 = *(_OWORD *)(*((_QWORD *)this + 90) + 48LL);
    if ( (unsigned __int8)IsOpenThemeDataPresent() && (v5 & 6) != 0 || (*((_DWORD *)this + 146) & 0x200000) != 0 )
    {
      v6 = *((_BYTE *)this + 240) & 8 | 0x136LL;
      v7 = *((_QWORD *)this + 90);
      cxLeftWidth = *(_DWORD *)((char *)this + 2 * v6);
      cxRightWidth = *(_DWORD *)((char *)this + 2 * v6 + 4);
      cyBottomHeight = *(_DWORD *)((char *)this + 2 * v6 + 12);
      if ( v7 && (*(_BYTE *)(v7 + 592) & 8) == 0 )
      {
        cyTopHeight = *(_DWORD *)((char *)this + 2 * v6 + 8);
      }
      else
      {
        v11 = 0;
        if ( *((_DWORD *)this + 151) - cxLeftWidth - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL) >= 0 )
          v11 = *((_DWORD *)this + 151) - cxLeftWidth - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL);
        cyTopHeight = *(_DWORD *)((char *)this + 2 * v6 + 8);
        cxLeftWidth += v11;
        v13 = 0;
        if ( *((_DWORD *)this + 152) - cxRightWidth - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL) >= 0 )
          v13 = *((_DWORD *)this + 152) - cxRightWidth - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
        cxRightWidth += v13;
        v14 = 0;
        if ( *((_DWORD *)this + 154) - cyBottomHeight - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL) >= 0 )
          v14 = *((_DWORD *)this + 154) - cyBottomHeight - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
        cyBottomHeight += v14;
      }
    }
    else
    {
      cyBottomHeight = v38.cyBottomHeight;
      cyTopHeight = v38.cyTopHeight;
      cxRightWidth = v38.cxRightWidth;
      cxLeftWidth = v38.cxLeftWidth;
    }
    LODWORD(v39) = cxLeftWidth + v39;
    DWORD2(v39) -= cxRightWidth;
    DWORD1(v39) += cyTopHeight;
    HIDWORD(v39) -= cyBottomHeight;
    v15 = *((_QWORD *)this + 90);
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64))(**((_QWORD **)(*v3)[2] + 2)
                                                                                       + 528LL))(
           *((_QWORD *)(*v3)[2] + 2),
           *((unsigned int *)(*v3)[2] + 6),
           v15 + 188,
           v15 + 204,
           v15 + 220,
           v15 + 236);
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1375u);
    }
    else
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)(*v3)[2] + 2) + 520LL))(
             *((_QWORD *)(*v3)[2] + 2),
             *((unsigned int *)(*v3)[2] + 6),
             &v39);
      if ( v2 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1379u);
      }
      else
      {
        v16 = *((_QWORD *)this + 100);
        if ( v16
          && ((*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v16 + 32LL))(v16, &v39),
              v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25)
                                                     + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25)),
              v2 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x137Eu);
        }
        else
        {
          v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)(*v3)[2] + 2) + 352LL))(
                 *((_QWORD *)(*v3)[2] + 2),
                 *((unsigned int *)(*v3)[2] + 6));
          if ( v2 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1385u);
          }
          else
          {
            v2 = 0;
            if ( *((_QWORD *)this + 97) )
            {
              v23 = 0;
              v24 = 0;
              if ( *((_BYTE *)this + 768) )
              {
                *(_QWORD *)&v38.cxLeftWidth = 0LL;
                *(_QWORD *)&v38.cyTopHeight = 0LL;
                CTopLevelWindow::GetOutsideMargins(this, &v38);
                v23 = v38.cxLeftWidth;
                v24 = v38.cyTopHeight;
                v25 = _mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 90) + 48LL), 8).m128i_u64[0];
                v26 = *(_QWORD *)(*((_QWORD *)this + 90) + 48LL);
                v27 = v25 - v38.cxRightWidth - v26 - v38.cxLeftWidth;
                v28 = HIDWORD(v25) - HIDWORD(v26) - v38.cyBottomHeight - v38.cyTopHeight;
              }
              else
              {
                v29 = *((_QWORD *)this + 90);
                v30 = _mm_srli_si128(*(__m128i *)(v29 + 204), 8).m128i_u64[0];
                v31 = *(_QWORD *)(v29 + 204);
                v27 = (int)(float)((float)((int)v30 - v31) * *(float *)(v29 + 172));
                v28 = (int)(float)((float)(HIDWORD(v30) - HIDWORD(v31)) * *(float *)(v29 + 176));
              }
              v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, int))(**(_QWORD **)(*((_QWORD *)this + 97) + 16LL)
                                                                                        + 816LL))(
                      *(_QWORD *)(*((_QWORD *)this + 97) + 16LL),
                      *(unsigned int *)(*((_QWORD *)this + 97) + 24LL),
                      v23,
                      v24,
                      v27,
                      v28);
              v2 = v32;
              if ( v32 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x15CEu);
            }
            if ( v2 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1388u);
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
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x12Fu);
                }
              }
              if ( v2 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x138Au);
            }
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
