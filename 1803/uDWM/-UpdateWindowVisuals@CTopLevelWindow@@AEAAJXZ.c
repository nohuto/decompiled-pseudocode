/*
 * XREFs of ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DD20
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18002B860 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 * Callees:
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000D460 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18000FB30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x180014EF4 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x180014F0C (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x180014F44 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetColor@CText@@QEAAXK@Z @ 0x180014F7C (-SetColor@CText@@QEAAXK@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x180014FC4 (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?SetScalingFactor@CText@@QEAAXN@Z @ 0x18001506C (-SetScalingFactor@CText@@QEAAXN@Z.c)
 *     ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z @ 0x18001558C (-GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001B868 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x18001B8E8 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x18001B91C (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001D92C (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18001E740 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x18001F29C (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18001F2BC (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18001FD70 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020554 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180020DC0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180021080 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x18002457C (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180025918 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180033750 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?BlendColors@@YAKKKM@Z @ 0x180037554 (-BlendColors@@YAKKKM@Z.c)
 *     ?Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180038004 (-Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x1800494F0 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1800745A8 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x1800818A8 (-CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowVisuals(CTopLevelWindow *this)
{
  unsigned int v2; // ebx
  struct CTopLevelWindow::WindowFrame *v3; // rax
  int v4; // ebx
  struct CTopLevelWindow::WindowFrame *v5; // rsi
  bool v6; // r8
  bool v7; // r14
  __int64 *v8; // rcx
  char v9; // dl
  __int64 *v10; // rcx
  char v11; // dl
  __int64 v12; // r12
  unsigned int v13; // r13d
  __int64 v14; // r15
  CAtlasedRectsVisual **v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  CVisual *v21; // rcx
  void (__fastcall *v22)(CVisual *__hidden, unsigned int); // rax
  int v23; // eax
  int v24; // edi
  CAtlasedImage *v25; // r9
  CAtlasedImage *v26; // rcx
  CAtlasedImage *v27; // rcx
  CAtlasedImage *v28; // rcx
  CAtlasedImage *v29; // rcx
  CAtlasedImage *v30; // rcx
  CAtlasedImage *v31; // rcx
  CAtlasedImage *v32; // rcx
  CAtlasedImage *v33; // rcx
  CAtlasedImage *v34; // rcx
  CAtlasedImage *v35; // rcx
  CAtlasedImage *v36; // rcx
  CAtlasedImage *v37; // rcx
  CAtlasedImage *v38; // rcx
  CAtlasedImage *v39; // rcx
  CAtlasedImage *v40; // rcx
  int updated; // eax
  int v42; // ecx
  __int64 v43; // rax
  bool v44; // r14
  struct CVisual *v45; // rdx
  int v46; // eax
  CVisual *v48; // rbx
  int v49; // ecx
  void (__fastcall *v50)(CVisual *__hidden); // rax
  CVisual *v51; // rcx
  void (__fastcall *v52)(CVisual *__hidden, unsigned int); // rax
  __int64 v53; // rbx
  void *(*v54)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v55; // rax
  __int64 v56; // rdi
  _DWORD *v57; // r14
  unsigned int v58; // edx
  unsigned int v59; // ecx
  _QWORD *j; // rax
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // r9
  __int64 *v64; // rdx
  __int64 *v65; // r8
  void (__fastcall *v66)(CVisual *__hidden, unsigned int); // rax
  __int64 v67; // r9
  CVisual *v68; // rbx
  unsigned int v69; // edx
  __int64 v70; // rcx
  __int64 i; // r8
  void (__fastcall *v72)(CVisual *__hidden, unsigned int); // rax
  volatile signed __int32 *v73; // rcx
  void *(__fastcall *v74)(CAtlasedImage *__hidden, unsigned int); // rax
  __int64 v75; // r8
  int *CurrentDefaultColorizationFlags; // rax
  unsigned int WindowColorizationColor; // ebx
  unsigned int v78; // r9d
  unsigned int v79; // r8d
  int v80; // eax
  int inserted; // eax
  int v82; // eax
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rax
  CAtlasedImage *v86; // rcx
  CAtlasedImage *v87; // rcx
  CAtlasedImage *v88; // rcx
  CAtlasedImage *v89; // rcx
  CAtlasedImage *v90; // rcx
  CAtlasedImage *v91; // rcx
  CAtlasedImage *v92; // rcx
  CAtlasedImage *v93; // rcx
  CAtlasedImage *v94; // rcx
  CAtlasedImage *v95; // rcx
  CAtlasedImage *v96; // rcx
  CAtlasedImage *v97; // rcx
  CAtlasedImage *v98; // rcx
  CAtlasedImage *v99; // rcx
  __int64 v100; // rcx
  int v101; // eax
  __int64 v102; // rcx
  int v103; // eax
  CBaseObject *v104; // rcx
  int HolographicSlate; // eax
  unsigned int v106; // [rsp+20h] [rbp-D8h]
  bool v107; // [rsp+30h] [rbp-C8h]
  bool v108; // [rsp+31h] [rbp-C7h]
  __int64 *v109; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v110; // [rsp+40h] [rbp-B8h] BYREF
  int v111; // [rsp+48h] [rbp-B0h] BYREF
  struct CTopLevelWindow::WindowFrame *v112; // [rsp+50h] [rbp-A8h]
  tagLOGFONTW v113; // [rsp+60h] [rbp-98h] BYREF

  v2 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v2;
  v3 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *((_DWORD *)this + 146),
         0,
         (*(_BYTE *)(*((_QWORD *)this + 90) + 595LL) & 0x10) != 0);
  v4 = *((_DWORD *)this + 146);
  v5 = v3;
  v112 = v3;
  v6 = (unsigned __int8)IsOpenThemeDataPresent() && (v4 & 6) != 0;
  v107 = v6;
  v7 = (*((_DWORD *)this + 146) & 0x20000) != 0;
  v8 = (__int64 *)*((_QWORD *)this + 32);
  v108 = v7;
  v9 = *((_BYTE *)v8 + 84);
  if ( v7 != (v9 & 1) )
  {
    v84 = *v8;
    *((_BYTE *)v8 + 84) = v7 | v9 & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v84 + 24))(v8, 16LL);
    v6 = v107;
  }
  v10 = (__int64 *)*((_QWORD *)this + 67);
  v11 = *((_BYTE *)v10 + 84);
  if ( v7 != (v11 & 1) )
  {
    v85 = *v10;
    *((_BYTE *)v10 + 84) = v7 | v11 & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v85 + 24))(v10, 16LL);
    v6 = v107;
  }
  v12 = 0LL;
  v13 = 0;
  v14 = 0LL;
  do
  {
    v15 = (CAtlasedRectsVisual **)*((_QWORD *)this + v14 + 37);
    if ( v6 )
    {
      if ( v15 )
      {
LABEL_12:
        if ( v5 )
        {
          v16 = *((_QWORD *)v5 + 2 * v14 + 187);
          if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17) && *((_QWORD *)v5 + 2 * v14 + 188) )
            v16 = *((_QWORD *)v5 + 2 * v14 + 188);
        }
        else
        {
          v16 = 0LL;
        }
        v17 = *((_QWORD *)this + v14 + 37);
        v18 = *(_QWORD *)(v17 + 72);
        if ( v18 != v16 )
        {
          if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(__int64, __int64))v18)(v18, 1LL);
          *(_QWORD *)(v17 + 72) = v16;
          if ( v16 )
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
          *(_DWORD *)(v17 + 96) |= 1u;
          v51 = *(CVisual **)(v17 + 80);
          if ( v51 )
          {
            v52 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v51 + 24LL);
            if ( v52 == CVisual::SetDirtyFlags )
              CVisual::SetDirtyFlags(v51, 0x2000u);
            else
              v52(v51, 0x2000u);
          }
        }
        if ( (v13 - 18 > 3 || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17)) && v16 )
        {
          v19 = *((_QWORD *)this + v14 + 37);
          if ( *(_DWORD *)(v19 + 24) != *(_DWORD *)(v16 + 24) || *(_DWORD *)(v19 + 28) != *(_DWORD *)(v16 + 28) )
          {
            v20 = *(_QWORD *)(v16 + 24);
            *(_DWORD *)(v19 + 96) |= 1u;
            *(_QWORD *)(v19 + 24) = v20;
            v21 = *(CVisual **)(v19 + 80);
            if ( v21 )
            {
              v22 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v21 + 24LL);
              if ( v22 == CVisual::SetDirtyFlags )
              {
                v23 = *((_DWORD *)v21 + 20);
                if ( (v23 & 0x2000) == 0 )
                {
                  v48 = (CVisual *)*((_QWORD *)v21 + 3);
                  for ( *((_DWORD *)v21 + 20) = v23 | 0x2000; v48; v48 = (CVisual *)*((_QWORD *)v48 + 3) )
                  {
                    v49 = *((_DWORD *)v48 + 20);
                    if ( (v49 & 1) != 0 )
                      break;
                    v50 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v48 + 32LL);
                    if ( v50 == CVisual::SetDirtyChildren )
                      *((_DWORD *)v48 + 20) = v49 | 1;
                    else
                      v50(v48);
                  }
                }
              }
              else
              {
                v22(v21, 0x2000u);
              }
            }
          }
          v12 = *((_QWORD *)this + v14 + 37);
        }
        else
        {
          v67 = *((_QWORD *)this + v14 + 37);
          v68 = *(CVisual **)(v67 + 80);
          if ( v68 )
          {
            v69 = *((_DWORD *)v68 + 66);
            v70 = 0LL;
            for ( i = *((_QWORD *)v68 + 30); (unsigned int)v70 < v69; v70 = (unsigned int)(v70 + 1) )
            {
              if ( v67 == *(_QWORD *)(i + 8 * v70) )
                break;
            }
            if ( (unsigned int)v70 < v69 )
            {
              for ( ; (unsigned int)v70 < v69 - 1; v69 = *((_DWORD *)v68 + 66) )
              {
                *(_QWORD *)(i + 8 * v70) = *(_QWORD *)(i + 8LL * (unsigned int)(v70 + 1));
                v70 = (unsigned int)(v70 + 1);
              }
              *((_DWORD *)v68 + 66) = v69 - 1;
            }
            *(_QWORD *)(v67 + 80) = 0LL;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v67 + 8), 0xFFFFFFFF) == 1 )
              (**(void (__fastcall ***)(__int64, __int64, __int64))v67)(v67, 1LL, i);
            v72 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v68 + 24LL);
            if ( v72 == CVisual::SetDirtyFlags )
              CVisual::SetDirtyFlags(v68, 0x2000u);
            else
              ((void (__fastcall *)(CVisual *, __int64, __int64))v72)(v68, 0x2000LL, i);
          }
          v73 = (volatile signed __int32 *)*((_QWORD *)this + v14 + 37);
          if ( v73 )
          {
            if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
            {
              v74 = **(void *(__fastcall ***)(CAtlasedImage *__hidden, unsigned int))v73;
              if ( v74 == CAtlasedImage::`vector deleting destructor' )
                CAtlasedImage::`vector deleting destructor'((CAtlasedImage *)v73, 1u);
              else
                v74((CAtlasedImage *)v73, 1u);
            }
            *((_QWORD *)this + v14 + 37) = 0LL;
          }
        }
        goto LABEL_22;
      }
      v53 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v54 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v54 == WPF::ProcessHeapImpl::AllocClear )
        v55 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x88uLL);
      else
        v55 = (_DWORD *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v54)(WPF::g_pProcessHeap, 136LL);
      if ( !v55 )
      {
        v2 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA5u);
        v106 = 2048;
        goto LABEL_224;
      }
      *(_QWORD *)v55 = &CAtlasedImage::`vftable';
      v56 = 0LL;
      v55[2] = 1;
      *((_QWORD *)v55 + 9) = 0LL;
      *((_QWORD *)v55 + 11) = 0LL;
      v55[8] = 0x7FFFFFFF;
      v55[10] = 0x7FFFFFFF;
      v55[9] = 0x7FFFFFFF;
      v55[11] = 0x7FFFFFFF;
      v55[13] = 0x80000000;
      v55[12] = 0x80000000;
      v55[15] = 0x7FFFFFFF;
      v55[14] = 0x7FFFFFFF;
      v55[17] = -1;
      v55[33] = 22;
      *((_QWORD *)v55 + 13) = v53;
      *((_QWORD *)this + v14 + 37) = v55;
      v55[33] = v13;
      v57 = (_DWORD *)*((_QWORD *)this + 34);
      if ( v12 )
      {
        v58 = v57[66];
        v59 = 0;
        for ( j = (_QWORD *)*((_QWORD *)v57 + 30); v59 < v58; ++j )
        {
          if ( v12 == *j )
            break;
          ++v59;
        }
        if ( v59 == v58 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x39u);
          v2 = -2147024809;
LABEL_166:
          v106 = 2053;
LABEL_224:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, v106);
          return v2;
        }
        v56 = v59 + 1;
      }
      v110 = *((_QWORD *)this + v14 + 37);
      if ( (unsigned int)v56 > v57[66] )
      {
        v2 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1C3u);
      }
      else
      {
        v109 = &v110;
        v61 = DynArrayImpl<0>::Grow((int)v57 + 240, 8, 1, 0, (__int64)&v109);
        v2 = v61;
        if ( v61 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x1CDu);
        }
        else
        {
          v62 = (unsigned int)v57[66];
          v63 = *((_QWORD *)v57 + 30);
          v57[66] = v62 + 1;
          if ( (unsigned int)v62 > (unsigned int)v56 )
          {
            v75 = v63 + 8 * v62;
            do
            {
              v62 = (unsigned int)(v62 - 1);
              v75 -= 8LL;
              *(_QWORD *)(v75 + 8) = *(_QWORD *)(v63 + 8 * v62);
            }
            while ( (unsigned int)v62 > (unsigned int)v56 );
          }
          v64 = v109;
          v65 = (__int64 *)(v63 + 8 * v56);
          if ( v109 >= v65 && (unsigned __int64)v109 < v63 + 8 * ((unsigned __int64)(unsigned int)v57[66] - 1) )
            v64 = ++v109;
          *v65 = *v64;
        }
        if ( (v2 & 0x80000000) == 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v110 + 8));
          *(_QWORD *)(v110 + 80) = v57;
          v66 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v57 + 24LL);
          if ( v66 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags((CVisual *)v57, 0x2000u);
          else
            v66((CVisual *)v57, 0x2000u);
          goto LABEL_101;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x4Du);
LABEL_101:
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x40u);
        goto LABEL_166;
      }
      v5 = v112;
      goto LABEL_12;
    }
    if ( v15 )
    {
      if ( v15[10] )
      {
        CAtlasedRectsVisual::RemoveAtlasImage(v15[10], *((struct CAtlasedImage **)this + v14 + 37));
        v15 = (CAtlasedRectsVisual **)*((_QWORD *)this + v14 + 37);
        v6 = v107;
      }
      if ( v15 )
      {
        CBaseObject::Release((CBaseObject *)v15);
        *((_QWORD *)this + v14 + 37) = 0LL;
LABEL_22:
        v6 = v107;
      }
    }
    ++v13;
    ++v14;
  }
  while ( v13 < 0x16 );
  v24 = 2;
  if ( v6 )
  {
    if ( CTopLevelWindow::IsSheetOfGlass(this) )
    {
      if ( *((_DWORD *)v25 + 16) != 10 )
      {
        *((_DWORD *)v25 + 16) = 10;
        CAtlasedImage::SetDirtyFlags(v25, 1u, 0x2000u);
      }
      v86 = (CAtlasedImage *)*((_QWORD *)this + 38);
      if ( *((_DWORD *)v86 + 16) != 8 )
      {
        *((_DWORD *)v86 + 16) = 8;
        CAtlasedImage::SetDirtyFlags(v86, 1u, 0x2000u);
      }
      v87 = (CAtlasedImage *)*((_QWORD *)this + 39);
      if ( *((_DWORD *)v87 + 16) != 9 )
      {
        *((_DWORD *)v87 + 16) = 9;
        CAtlasedImage::SetDirtyFlags(v87, 1u, 0x2000u);
      }
      v88 = (CAtlasedImage *)*((_QWORD *)this + 40);
      if ( *((_DWORD *)v88 + 16) != 2 )
      {
        *((_DWORD *)v88 + 16) = 2;
        CAtlasedImage::SetDirtyFlags(v88, 1u, 0x2000u);
      }
      v89 = (CAtlasedImage *)*((_QWORD *)this + 41);
      if ( *((_DWORD *)v89 + 16) != 1 )
      {
        *((_DWORD *)v89 + 16) = 1;
        CAtlasedImage::SetDirtyFlags(v89, 1u, 0x2000u);
      }
      v90 = (CAtlasedImage *)*((_QWORD *)this + 42);
      if ( *((_DWORD *)v90 + 16) != 6 )
      {
        *((_DWORD *)v90 + 16) = 6;
        CAtlasedImage::SetDirtyFlags(v90, 1u, 0x2000u);
      }
      v91 = (CAtlasedImage *)*((_QWORD *)this + 43);
      if ( *((_DWORD *)v91 + 16) != 4 )
      {
        *((_DWORD *)v91 + 16) = 4;
        CAtlasedImage::SetDirtyFlags(v91, 1u, 0x2000u);
      }
      v92 = (CAtlasedImage *)*((_QWORD *)this + 44);
      if ( *((_DWORD *)v92 + 16) != 5 )
      {
        *((_DWORD *)v92 + 16) = 5;
        CAtlasedImage::SetDirtyFlags(v92, 1u, 0x2000u);
      }
      v93 = (CAtlasedImage *)*((_QWORD *)this + 46);
      if ( *((_DWORD *)v93 + 16) != 10 )
      {
        *((_DWORD *)v93 + 16) = 10;
        CAtlasedImage::SetDirtyFlags(v93, 1u, 0x2000u);
      }
      v94 = (CAtlasedImage *)*((_QWORD *)this + 47);
      if ( *((_DWORD *)v94 + 16) != 8 )
      {
        *((_DWORD *)v94 + 16) = 8;
        CAtlasedImage::SetDirtyFlags(v94, 1u, 0x2000u);
      }
      v95 = (CAtlasedImage *)*((_QWORD *)this + 48);
      if ( *((_DWORD *)v95 + 16) != 9 )
      {
        *((_DWORD *)v95 + 16) = 9;
        CAtlasedImage::SetDirtyFlags(v95, 1u, 0x2000u);
      }
      v96 = (CAtlasedImage *)*((_QWORD *)this + 49);
      if ( *((_DWORD *)v96 + 16) != 2 )
      {
        *((_DWORD *)v96 + 16) = 2;
        CAtlasedImage::SetDirtyFlags(v96, 1u, 0x2000u);
      }
      v97 = (CAtlasedImage *)*((_QWORD *)this + 50);
      if ( *((_DWORD *)v97 + 16) != 1 )
      {
        *((_DWORD *)v97 + 16) = 1;
        CAtlasedImage::SetDirtyFlags(v97, 1u, 0x2000u);
      }
      v98 = (CAtlasedImage *)*((_QWORD *)this + 51);
      if ( *((_DWORD *)v98 + 16) != 6 )
      {
        *((_DWORD *)v98 + 16) = 6;
        CAtlasedImage::SetDirtyFlags(v98, 1u, 0x2000u);
      }
      v99 = (CAtlasedImage *)*((_QWORD *)this + 52);
      if ( *((_DWORD *)v99 + 16) != 4 )
      {
        *((_DWORD *)v99 + 16) = 4;
        CAtlasedImage::SetDirtyFlags(v99, 1u, 0x2000u);
      }
      v40 = (CAtlasedImage *)*((_QWORD *)this + 53);
      if ( *((_DWORD *)v40 + 16) == 5 )
        goto LABEL_57;
      *((_DWORD *)v40 + 16) = 5;
    }
    else
    {
      if ( *((_DWORD *)v25 + 16) )
      {
        *((_DWORD *)v25 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v25, 1u, 0x2000u);
      }
      v26 = (CAtlasedImage *)*((_QWORD *)this + 38);
      if ( *((_DWORD *)v26 + 16) )
      {
        *((_DWORD *)v26 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v26, 1u, 0x2000u);
      }
      v27 = (CAtlasedImage *)*((_QWORD *)this + 39);
      if ( *((_DWORD *)v27 + 16) )
      {
        *((_DWORD *)v27 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v27, 1u, 0x2000u);
      }
      v28 = (CAtlasedImage *)*((_QWORD *)this + 40);
      if ( *((_DWORD *)v28 + 16) )
      {
        *((_DWORD *)v28 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v28, 1u, 0x2000u);
      }
      v29 = (CAtlasedImage *)*((_QWORD *)this + 41);
      if ( *((_DWORD *)v29 + 16) )
      {
        *((_DWORD *)v29 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v29, 1u, 0x2000u);
      }
      v30 = (CAtlasedImage *)*((_QWORD *)this + 42);
      if ( *((_DWORD *)v30 + 16) )
      {
        *((_DWORD *)v30 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v30, 1u, 0x2000u);
      }
      v31 = (CAtlasedImage *)*((_QWORD *)this + 43);
      if ( *((_DWORD *)v31 + 16) )
      {
        *((_DWORD *)v31 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v31, 1u, 0x2000u);
      }
      v32 = (CAtlasedImage *)*((_QWORD *)this + 44);
      if ( *((_DWORD *)v32 + 16) )
      {
        *((_DWORD *)v32 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v32, 1u, 0x2000u);
      }
      v33 = (CAtlasedImage *)*((_QWORD *)this + 46);
      if ( *((_DWORD *)v33 + 16) )
      {
        *((_DWORD *)v33 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v33, 1u, 0x2000u);
      }
      v34 = (CAtlasedImage *)*((_QWORD *)this + 47);
      if ( *((_DWORD *)v34 + 16) )
      {
        *((_DWORD *)v34 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v34, 1u, 0x2000u);
      }
      v35 = (CAtlasedImage *)*((_QWORD *)this + 48);
      if ( *((_DWORD *)v35 + 16) )
      {
        *((_DWORD *)v35 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v35, 1u, 0x2000u);
      }
      v36 = (CAtlasedImage *)*((_QWORD *)this + 49);
      if ( *((_DWORD *)v36 + 16) )
      {
        *((_DWORD *)v36 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v36, 1u, 0x2000u);
      }
      v37 = (CAtlasedImage *)*((_QWORD *)this + 50);
      if ( *((_DWORD *)v37 + 16) )
      {
        *((_DWORD *)v37 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v37, 1u, 0x2000u);
      }
      v38 = (CAtlasedImage *)*((_QWORD *)this + 51);
      if ( *((_DWORD *)v38 + 16) )
      {
        *((_DWORD *)v38 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v38, 1u, 0x2000u);
      }
      v39 = (CAtlasedImage *)*((_QWORD *)this + 52);
      if ( *((_DWORD *)v39 + 16) )
      {
        *((_DWORD *)v39 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v39, 1u, 0x2000u);
      }
      v40 = (CAtlasedImage *)*((_QWORD *)this + 53);
      if ( !*((_DWORD *)v40 + 16) )
        goto LABEL_57;
      *((_DWORD *)v40 + 16) = 0;
    }
    CAtlasedImage::SetDirtyFlags(v40, 1u, 0x2000u);
  }
LABEL_57:
  updated = CTopLevelWindow::UpdateButtonVisuals(this, (struct CBitmapSource **)v5);
  v2 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x856u);
    return v2;
  }
  v42 = *((_DWORD *)this + 146);
  v43 = *((_QWORD *)this + 65);
  if ( (v42 & 0x10080) != 0 )
  {
    if ( !v43 )
    {
      v80 = CImage::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CImage **)this + 65);
      v2 = v80;
      if ( v80 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v80, 0x85Cu);
        return v2;
      }
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 32) + 32LL),
                   *((struct CVisual ***)this + 65),
                   *((struct CVisual **)this + 34),
                   1u,
                   1);
      v2 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x85Du);
        return v2;
      }
      CVisual::SetDirtyFlags(this, 0x20000u);
      v42 = *((_DWORD *)this + 146);
      v43 = *((_QWORD *)this + 65);
    }
    v44 = v108;
    if ( (v42 & 0x80u) != 0 )
      v24 = 3;
    *(_DWORD *)(v43 + 192) = v24;
    CVisual::SetRTLMirror(*((CVisual **)this + 65), v108);
  }
  else
  {
    if ( v43 )
    {
      v100 = *(_QWORD *)(v43 + 24);
      if ( v100 )
      {
        v101 = VisualCollection::Remove((VisualCollection *)(v100 + 32), *((struct CVisual **)this + 65));
        v2 = v101;
        if ( v101 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v101, 0x86Cu);
          return v2;
        }
        CVisual::SetDirtyFlags(this, 0x1000u);
        v43 = *((_QWORD *)this + 65);
      }
      if ( v43 )
      {
        CBaseObject::Release((CBaseObject *)v43);
        *((_QWORD *)this + 65) = 0LL;
      }
    }
    v44 = v108;
  }
  v45 = (struct CVisual *)*((_QWORD *)this + 64);
  if ( (*((_BYTE *)this + 584) & 8) != 0 )
  {
    if ( !v45 )
    {
      v82 = CText::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CText **)this + 64);
      v2 = v82;
      if ( v82 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v82, 0x879u);
        return v2;
      }
      v83 = VisualCollection::InsertRelative(
              (VisualCollection *)(*((_QWORD *)this + 34) + 32LL),
              *((struct CVisual ***)this + 64),
              0LL,
              1u,
              1);
      v2 = v83;
      if ( v83 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v83, 0x87Cu);
        return v2;
      }
      CVisual::SetDirtyFlags(this, 0x10000u);
    }
    CurrentDefaultColorizationFlags = CTopLevelWindow::GetCurrentDefaultColorizationFlags(this, &v111);
    WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(
                                (__int64)this,
                                *CurrentDefaultColorizationFlags | 8u);
    CText::SetBackgroundColor(*((CText **)this + 64), WindowColorizationColor);
    if ( v5 )
    {
      v78 = BYTE2(WindowColorizationColor)
          + 5 * BYTE1(WindowColorizationColor)
          + 2 * (unsigned __int8)WindowColorizationColor;
      if ( v78 > 0x400 == (unsigned __int8)BYTE2(*((_DWORD *)v5 + 462))
                        + 5 * (unsigned __int8)BYTE1(*((_DWORD *)v5 + 462))
                        + 2 * (unsigned int)(unsigned __int8)*((_DWORD *)v5 + 462) > 0x400 )
      {
        v102 = 318LL;
        if ( v78 <= 0x400 )
          v102 = 292LL;
        ColorCache::GetColor(v102);
      }
      if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
        v79 = BlendColors(WindowColorizationColor, v79, 0.40000001);
      CText::SetColor(*((CText **)this + 64), v79);
    }
    memset_0(&v113, 0, sizeof(v113));
    CWindowData::GetNonClientCaptionFont(*((CWindowData **)this + 90), &v113);
    CText::SetFont(*((CText **)this + 64), &v113);
    CText::SetScalingFactor(*((CText **)this + 64), *(double *)(*((_QWORD *)this + 90) + 296LL));
    CVisual::SetRTLMirror(*((CVisual **)this + 64), v44);
    CText::SetRTLReading(*((CText **)this + 64), (*((_DWORD *)this + 146) & 0x80000) != 0);
    CText::SetReverseAlignment(*((CText **)this + 64), (*((_DWORD *)this + 146) & 0x400000) != 0);
  }
  else if ( v45 )
  {
    v103 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 34) + 32LL), v45);
    v2 = v103;
    if ( v103 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v103, 0x8A5u);
      return v2;
    }
    v104 = (CBaseObject *)*((_QWORD *)this + 64);
    if ( v104 )
    {
      CBaseObject::Release(v104);
      *((_QWORD *)this + 64) = 0LL;
    }
  }
  v46 = CTopLevelWindow::EnsureClientAreaNode(this);
  v2 = v46;
  if ( v46 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x8AAu);
    return v2;
  }
  v2 = 0;
  if ( (*((_BYTE *)this + 241) & 4) != 0 )
  {
    HolographicSlate = CTopLevelWindow::CreateHolographicSlate(this);
    v2 = HolographicSlate;
    if ( HolographicSlate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, HolographicSlate, 0x140u);
  }
  else
  {
    CTopLevelWindow::ReleaseHolographicSlate(this);
  }
  if ( (v2 & 0x80000000) != 0 )
  {
    v106 = 2220;
    goto LABEL_224;
  }
  return v2;
}
