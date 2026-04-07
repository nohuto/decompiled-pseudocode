/*
 * XREFs of ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180019A90
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180010A98 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x1800199A8 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18001FA0C (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x1800259D8 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x1800494F0 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?SetSize@CHolographicSlate@@QEAAJII@Z @ 0x180076DCC (-SetSize@CHolographicSlate@@QEAAJII@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaBounds(CTopLevelWindow *this)
{
  unsigned int v1; // r14d
  struct CVisual ***v2; // rsi
  int v3; // edi
  int v5; // edi
  __int128 v6; // xmm0
  __int64 v7; // rcx
  __int64 v8; // r8
  int cxLeftWidth; // r15d
  int cxRightWidth; // edi
  int cyBottomHeight; // r11d
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int cyTopHeight; // ecx
  __int64 v16; // rcx
  __int64 v17; // r10
  unsigned int *v19; // r15
  unsigned int v20; // edx
  int v21; // eax
  int inserted; // eax
  struct CVisual **v23; // rcx
  unsigned int v24; // r11d
  int v25; // eax
  CHolographicSlate *v26; // rcx
  _DWORD *v27; // rax
  unsigned int v28; // r8d
  int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-50h]
  struct _MARGINS v31; // [rsp+40h] [rbp-30h] BYREF
  __int128 v32; // [rsp+50h] [rbp-20h] BYREF

  v1 = 0;
  v2 = (struct CVisual ***)((char *)this + 472);
  v3 = 0;
  if ( !*((_QWORD *)this + 59) )
  {
    v19 = (unsigned int *)*((_QWORD *)this + 90);
    v20 = v19[32];
    if ( v20 )
    {
      v21 = CClientArea::Create(
              *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
              v20,
              (struct CClientArea **)this + 59);
      v3 = v21;
      if ( v21 >= 0 )
        (*v2)[30] = (struct CVisual *)v19;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x4Cu);
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x7CCu);
        goto LABEL_2;
      }
      inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 66) + 32LL), *v2, 0LL, 1u, 1);
      v3 = inserted;
      if ( inserted < 0 )
      {
        v30 = 1998;
LABEL_40:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, v30);
        goto LABEL_2;
      }
      v23 = *v2;
      *(_QWORD *)&v31.cxLeftWidth = 0LL;
      *(_QWORD *)&v31.cyTopHeight = 0LL;
      CVisual::SetInsetFromParent((CVisual *)v23, &v31);
      if ( (*((_BYTE *)this + 240) & 8) != 0 )
      {
        inserted = CTopLevelWindow::UpdateClientAreaMaximizedClip(this);
        v3 = inserted;
        if ( inserted < 0 )
        {
          v30 = 2005;
          goto LABEL_40;
        }
      }
    }
  }
LABEL_2:
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13ADu);
  }
  else if ( *v2 )
  {
    v5 = *((_DWORD *)this + 146);
    v6 = *(_OWORD *)(*((_QWORD *)this + 90) + 48LL);
    *(_QWORD *)&v31.cxLeftWidth = 0LL;
    *(_QWORD *)&v31.cyTopHeight = 0LL;
    v32 = v6;
    if ( (unsigned __int8)IsOpenThemeDataPresent() && (v5 & 6) != 0 || (*((_DWORD *)this + 146) & 0x200000) != 0 )
    {
      v7 = *((_BYTE *)this + 240) & 8 | 0x136LL;
      v8 = *((_QWORD *)this + 90);
      cxLeftWidth = *(_DWORD *)((char *)this + 2 * v7);
      cxRightWidth = *(_DWORD *)((char *)this + 2 * v7 + 4);
      cyBottomHeight = *(_DWORD *)((char *)this + 2 * v7 + 12);
      if ( !v8 || (*(_BYTE *)(v8 + 592) & 8) != 0 )
      {
        v12 = 0;
        if ( *((_DWORD *)this + 151) - cxLeftWidth - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL) >= 0 )
          v12 = *((_DWORD *)this + 151) - cxLeftWidth - *(_DWORD *)(*((_QWORD *)this + 40) + 24LL);
        cxLeftWidth += v12;
        v13 = 0;
        if ( *((_DWORD *)this + 152) - cxRightWidth - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL) >= 0 )
          v13 = *((_DWORD *)this + 152) - cxRightWidth - *(_DWORD *)(*((_QWORD *)this + 41) + 24LL);
        cxRightWidth += v13;
        v14 = 0;
        if ( *((_DWORD *)this + 154) - cyBottomHeight - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL) >= 0 )
          v14 = *((_DWORD *)this + 154) - cyBottomHeight - *(_DWORD *)(*((_QWORD *)this + 43) + 28LL);
        cyBottomHeight += v14;
      }
      cyTopHeight = *(_DWORD *)((char *)this + 2 * v7 + 8);
    }
    else
    {
      v8 = *((_QWORD *)this + 90);
      cyBottomHeight = v31.cyBottomHeight;
      cyTopHeight = v31.cyTopHeight;
      cxRightWidth = v31.cxRightWidth;
      cxLeftWidth = v31.cxLeftWidth;
    }
    LODWORD(v32) = cxLeftWidth + v32;
    DWORD1(v32) += cyTopHeight;
    DWORD2(v32) -= cxRightWidth;
    HIDWORD(v32) -= cyBottomHeight;
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64))(**((_QWORD **)(*v2)[2] + 2) + 544LL))(
           *((_QWORD *)(*v2)[2] + 2),
           *((unsigned int *)(*v2)[2] + 6),
           v8 + 180,
           v8 + 196,
           v8 + 212);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13C1u);
    }
    else
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)(*v2)[2] + 2) + 376LL))(
             *((_QWORD *)(*v2)[2] + 2),
             *((unsigned int *)(*v2)[2] + 6),
             *((_QWORD *)this + 90) + 228LL);
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13C5u);
      }
      else
      {
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)(*v2)[2] + 2) + 536LL))(
               *((_QWORD *)(*v2)[2] + 2),
               *((unsigned int *)(*v2)[2] + 6),
               &v32);
        if ( v3 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13C9u);
        }
        else
        {
          v16 = *((_QWORD *)this + 102);
          if ( v16
            && ((*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v16 + 40LL))(v16, &v32),
                v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 25)
                                                       + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 25)),
                v3 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13CEu);
          }
          else
          {
            v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)(*v2)[2] + 2) + 360LL))(
                   *((_QWORD *)(*v2)[2] + 2),
                   *((unsigned int *)(*v2)[2] + 6));
            if ( v3 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13D5u);
            }
            else
            {
              v17 = *((_QWORD *)this + 97);
              v3 = 0;
              if ( v17 )
              {
                v24 = 0;
                if ( *((_BYTE *)this + 768) )
                {
                  CTopLevelWindow::GetOutsideMargins(this, &v31);
                  v24 = v31.cxLeftWidth;
                  v17 = *((_QWORD *)this + 97);
                }
                v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v17 + 16) + 832LL))(
                        *(_QWORD *)(v17 + 16),
                        *(unsigned int *)(v17 + 24),
                        v24);
                v3 = v25;
                if ( v25 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x1621u);
              }
              if ( v3 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13D8u);
              }
              else
              {
                v3 = 0;
                if ( (*((_BYTE *)this + 241) & 4) != 0 )
                {
                  v26 = (CHolographicSlate *)*((_QWORD *)this + 98);
                  if ( v26 )
                  {
                    v27 = (_DWORD *)*((_QWORD *)this + 90);
                    v28 = 0;
                    if ( v27[52] - v27[50] >= 0 )
                      v28 = v27[52] - v27[50];
                    if ( v27[51] - v27[49] >= 0 )
                      v1 = v27[51] - v27[49];
                    v29 = CHolographicSlate::SetSize(v26, v1, v28);
                    v3 = v29;
                    if ( v29 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x16Eu);
                  }
                }
                if ( v3 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x13DAu);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v3;
}
