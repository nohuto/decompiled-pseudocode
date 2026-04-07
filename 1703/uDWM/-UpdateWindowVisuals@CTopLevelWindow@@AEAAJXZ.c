/*
 * XREFs of ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x1800293B0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180032CC0 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 * Callees:
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18001532C (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?BlendColors@@YAKKKM@Z @ 0x1800160F0 (-BlendColors@@YAKKKM@Z.c)
 *     ?Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019240 (-Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019310 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180019900 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x18001C2C4 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x18001C2DC (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x18001C314 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetColor@CText@@QEAAXK@Z @ 0x18001C34C (-SetColor@CText@@QEAAXK@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x18001C394 (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?SetScalingFactor@CText@@QEAAXN@Z @ 0x18001C43C (-SetScalingFactor@CText@@QEAAXN@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x180021BDC (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x18002382C (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180026D5C (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180026EDC (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x180026F0C (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18002906C (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180029E14 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x18002AB80 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18002ABA4 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18002B6B0 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002BEB4 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002C510 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z @ 0x1800367E8 (-GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004D268 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1800794B0 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x180080398 (-CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowVisuals(CTopLevelWindow *this)
{
  unsigned int v2; // ebx
  struct CTopLevelWindow::WindowFrame *v3; // rax
  int v4; // ebx
  struct CTopLevelWindow::WindowFrame *v5; // r14
  __int64 v6; // r8
  bool v7; // r15
  __int64 *v8; // rcx
  char v9; // dl
  __int64 *v10; // rcx
  char v11; // dl
  __int64 v12; // r12
  unsigned int v13; // r13d
  __int64 v14; // rbp
  void *(*v15)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdx
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  void (__fastcall *v22)(CVisual *, int); // rax
  int v23; // eax
  int v24; // ebp
  bool IsSheetOfGlass; // al
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
  CAtlasedImage *v41; // rcx
  int updated; // eax
  char v43; // r15
  struct CVisual **v44; // rdi
  _DWORD *CurrentDefaultColorizationFlags; // rax
  int WindowColorizationColor; // ebx
  unsigned int v47; // r9d
  int v48; // r8d
  int v49; // eax
  struct CAtlasedImage *v51; // rdx
  __int64 v52; // rbx
  int v53; // ecx
  void (__fastcall *v54)(CVisual *); // rax
  __int64 v55; // rcx
  void (__fastcall *v56)(CVisual *, int); // rax
  int v57; // eax
  __int64 v58; // rdi
  int v59; // ecx
  void (__fastcall *v60)(CVisual *); // rax
  __int64 v61; // rbx
  void *(*v62)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v63; // rax
  __int64 v64; // rdi
  _DWORD *v65; // r15
  unsigned int v66; // edx
  unsigned int v67; // ecx
  _QWORD *j; // rax
  int v69; // eax
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 *v72; // rdx
  __int64 *v73; // r8
  void (__fastcall *v74)(CVisual *, int); // rax
  int v75; // edi
  __int64 v76; // r9
  CVisual *v77; // rbx
  unsigned int v78; // edx
  __int64 v79; // rcx
  __int64 i; // r8
  void (__fastcall *v81)(CVisual *, int); // rax
  volatile signed __int32 *v82; // rcx
  void *(__fastcall *v83)(CAtlasedImage *__hidden, unsigned int); // rax
  __int64 v84; // r8
  __int64 v85; // rdx
  struct CVisual *v86; // rdx
  struct CVisual *v87; // rdx
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int inserted; // eax
  __int64 v92; // rax
  __int64 v93; // rax
  CAtlasedRectsVisual *v94; // rcx
  CBaseObject *v95; // rcx
  CAtlasedImage *v96; // rcx
  CAtlasedImage *v97; // rcx
  CAtlasedImage *v98; // rcx
  CAtlasedImage *v99; // rcx
  CAtlasedImage *v100; // rcx
  CAtlasedImage *v101; // rcx
  CAtlasedImage *v102; // rcx
  CAtlasedImage *v103; // rcx
  CAtlasedImage *v104; // rcx
  CAtlasedImage *v105; // rcx
  CAtlasedImage *v106; // rcx
  CAtlasedImage *v107; // rcx
  CAtlasedImage *v108; // rcx
  CAtlasedImage *v109; // rcx
  __int64 v110; // rcx
  int v111; // eax
  CBaseObject *v112; // rcx
  __int64 v113; // rcx
  int v114; // eax
  CBaseObject *v115; // rcx
  int HolographicSlate; // eax
  unsigned int v117; // [rsp+20h] [rbp-D8h]
  unsigned __int8 v118; // [rsp+30h] [rbp-C8h]
  char v119; // [rsp+31h] [rbp-C7h]
  __int64 *v120; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v121; // [rsp+40h] [rbp-B8h] BYREF
  int v122; // [rsp+48h] [rbp-B0h] BYREF
  struct CTopLevelWindow::WindowFrame *v123; // [rsp+50h] [rbp-A8h]
  tagLOGFONTW v124; // [rsp+60h] [rbp-98h] BYREF

  v2 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v2;
  v3 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *((_DWORD *)this + 146),
         0,
         (*(_BYTE *)(*((_QWORD *)this + 90) + 595LL) & 0x20) != 0);
  v4 = *((_DWORD *)this + 146);
  v5 = v3;
  v123 = v3;
  LOBYTE(v6) = (unsigned __int8)IsOpenThemeDataPresent() && (v4 & 6) != 0;
  v118 = v6;
  v7 = (*((_DWORD *)this + 146) & 0x20000) != 0;
  v8 = (__int64 *)*((_QWORD *)this + 32);
  v119 = v7;
  v9 = *((_BYTE *)v8 + 84);
  if ( v7 != (v9 & 1) )
  {
    v92 = *v8;
    *((_BYTE *)v8 + 84) = v7 | v9 & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v92 + 24))(v8, 16LL);
    v6 = v118;
  }
  v10 = (__int64 *)*((_QWORD *)this + 67);
  v11 = *((_BYTE *)v10 + 84);
  if ( v7 != (v11 & 1) )
  {
    v93 = *v10;
    *((_BYTE *)v10 + 84) = v7 | v11 & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v93 + 24))(v10, 16LL);
    v6 = v118;
  }
  v12 = 0LL;
  v13 = 0;
  v14 = 0LL;
  do
  {
    v15 = WPF::ProcessHeapImpl::AllocClear;
    if ( (_BYTE)v6 )
    {
      if ( *((_QWORD *)this + v14 + 37) )
      {
LABEL_12:
        if ( v5 )
        {
          v16 = *((_QWORD *)v5 + 2 * v14 + 187);
          if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16) && *((_QWORD *)v5 + 2 * v14 + 188) )
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
            (**(void (__fastcall ***)(__int64, __int64, __int64, void (__fastcall *)(CVisual *)))v18)(
              v18,
              1LL,
              v6,
              CVisual::SetDirtyChildren);
          *(_QWORD *)(v17 + 72) = v16;
          if ( v16 )
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
          *(_DWORD *)(v17 + 96) |= 1u;
          v55 = *(_QWORD *)(v17 + 80);
          if ( v55 )
          {
            v56 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v55 + 24LL);
            if ( v56 == CVisual::SetDirtyFlags )
            {
              v57 = *(_DWORD *)(v55 + 80);
              if ( (v57 & 0x2000) == 0 )
              {
                v58 = *(_QWORD *)(v55 + 24);
                for ( *(_DWORD *)(v55 + 80) = v57 | 0x2000; v58; v58 = *(_QWORD *)(v58 + 24) )
                {
                  v59 = *(_DWORD *)(v58 + 80);
                  if ( (v59 & 1) != 0 )
                    break;
                  v60 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v58 + 32LL);
                  if ( v60 == CVisual::SetDirtyChildren )
                    *(_DWORD *)(v58 + 80) = v59 | 1;
                  else
                    ((void (__fastcall *)(__int64, void *(*)(WPF::ProcessHeapImpl *__hidden, unsigned __int64), __int64, void (__fastcall *)(CVisual *)))v60)(
                      v58,
                      v15,
                      v6,
                      CVisual::SetDirtyChildren);
                }
              }
            }
            else
            {
              ((void (__fastcall *)(__int64, __int64, __int64, void (__fastcall *)(CVisual *)))v56)(
                v55,
                0x2000LL,
                v6,
                CVisual::SetDirtyChildren);
            }
          }
        }
        if ( (v13 - 18 > 3 || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16)) && v16 )
        {
          v19 = *((_QWORD *)this + v14 + 37);
          if ( *(_DWORD *)(v19 + 24) != *(_DWORD *)(v16 + 24) || *(_DWORD *)(v19 + 28) != *(_DWORD *)(v16 + 28) )
          {
            v20 = *(_QWORD *)(v16 + 24);
            *(_DWORD *)(v19 + 96) |= 1u;
            *(_QWORD *)(v19 + 24) = v20;
            v21 = *(_QWORD *)(v19 + 80);
            if ( v21 )
            {
              v22 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v21 + 24LL);
              if ( v22 == CVisual::SetDirtyFlags )
              {
                v23 = *(_DWORD *)(v21 + 80);
                if ( (v23 & 0x2000) == 0 )
                {
                  v52 = *(_QWORD *)(v21 + 24);
                  for ( *(_DWORD *)(v21 + 80) = v23 | 0x2000; v52; v52 = *(_QWORD *)(v52 + 24) )
                  {
                    v53 = *(_DWORD *)(v52 + 80);
                    if ( (v53 & 1) != 0 )
                      break;
                    v54 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v52 + 32LL);
                    if ( v54 == CVisual::SetDirtyChildren )
                      *(_DWORD *)(v52 + 80) = v53 | 1;
                    else
                      ((void (__fastcall *)(__int64, void *(*)(WPF::ProcessHeapImpl *__hidden, unsigned __int64), __int64, void (__fastcall *)(CVisual *)))v54)(
                        v52,
                        v15,
                        v6,
                        CVisual::SetDirtyChildren);
                  }
                }
              }
              else
              {
                ((void (__fastcall *)(__int64, __int64, __int64, void (__fastcall *)(CVisual *)))v22)(
                  v21,
                  0x2000LL,
                  v6,
                  CVisual::SetDirtyChildren);
              }
            }
          }
          v12 = *((_QWORD *)this + v14 + 37);
        }
        else
        {
          v76 = *((_QWORD *)this + v14 + 37);
          v77 = *(CVisual **)(v76 + 80);
          if ( v77 )
          {
            v78 = *((_DWORD *)v77 + 66);
            v79 = 0LL;
            for ( i = *((_QWORD *)v77 + 30); (unsigned int)v79 < v78; v79 = (unsigned int)(v79 + 1) )
            {
              if ( v76 == *(_QWORD *)(i + 8 * v79) )
                break;
            }
            if ( (unsigned int)v79 < v78 )
            {
              if ( (unsigned int)v79 < v78 - 1 )
              {
                do
                {
                  v85 = (unsigned int)(v79 + 1);
                  *(_QWORD *)(i + 8 * v79) = *(_QWORD *)(i + 8 * v85);
                  v79 = v85;
                }
                while ( (unsigned int)v85 < *((_DWORD *)v77 + 66) - 1 );
              }
              --*((_DWORD *)v77 + 66);
            }
            *(_QWORD *)(v76 + 80) = 0LL;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v76 + 8), 0xFFFFFFFF) == 1 )
              (**(void (__fastcall ***)(__int64, __int64, __int64))v76)(v76, 1LL, i);
            v81 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v77 + 24LL);
            if ( v81 == CVisual::SetDirtyFlags )
              CVisual::SetDirtyFlags(v77, 0x2000);
            else
              ((void (__fastcall *)(CVisual *, __int64, __int64))v81)(v77, 0x2000LL, i);
          }
          v82 = (volatile signed __int32 *)*((_QWORD *)this + v14 + 37);
          if ( v82 )
          {
            if ( _InterlockedExchangeAdd(v82 + 2, 0xFFFFFFFF) == 1 )
            {
              v83 = **(void *(__fastcall ***)(CAtlasedImage *__hidden, unsigned int))v82;
              if ( v83 == CAtlasedImage::`vector deleting destructor' )
                CAtlasedImage::`vector deleting destructor'((CAtlasedImage *)v82, 1u);
              else
                v83((CAtlasedImage *)v82, 1u);
            }
            *((_QWORD *)this + v14 + 37) = 0LL;
          }
        }
        goto LABEL_22;
      }
      v61 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v62 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v62 == WPF::ProcessHeapImpl::AllocClear )
        v63 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x88uLL);
      else
        v63 = (_DWORD *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64, __int64, void (__fastcall *)(CVisual *)))v62)(
                          WPF::g_pProcessHeap,
                          136LL,
                          v6,
                          CVisual::SetDirtyChildren);
      if ( !v63 )
      {
        v2 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xA5u);
        v117 = 1994;
LABEL_233:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, v117);
        return v2;
      }
      *(_QWORD *)v63 = &CAtlasedImage::`vftable';
      v64 = 0LL;
      v63[2] = 1;
      *((_QWORD *)v63 + 9) = 0LL;
      *((_QWORD *)v63 + 11) = 0LL;
      v63[8] = 0x7FFFFFFF;
      v63[10] = 0x7FFFFFFF;
      v63[9] = 0x7FFFFFFF;
      v63[11] = 0x7FFFFFFF;
      v63[13] = 0x80000000;
      v63[12] = 0x80000000;
      v63[15] = 0x7FFFFFFF;
      v63[14] = 0x7FFFFFFF;
      v63[17] = -1;
      v63[33] = 22;
      *((_QWORD *)v63 + 13) = v61;
      *((_QWORD *)this + v14 + 37) = v63;
      v63[33] = v13;
      v65 = (_DWORD *)*((_QWORD *)this + 34);
      if ( v12 )
      {
        v66 = v65[66];
        v67 = 0;
        for ( j = (_QWORD *)*((_QWORD *)v65 + 30); v67 < v66; ++j )
        {
          if ( v12 == *j )
            break;
          ++v67;
        }
        if ( v67 == v66 )
        {
          v75 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x5Au);
          v2 = -2147024809;
          goto LABEL_175;
        }
        v64 = v67 + 1;
      }
      v121 = *((_QWORD *)this + v14 + 37);
      if ( (unsigned int)v64 > v65[66] )
      {
        v2 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1C3u);
      }
      else
      {
        v120 = &v121;
        v69 = DynArrayImpl<0>::Grow((int)v65 + 240, 8, 1, 0, (__int64)&v120);
        v2 = v69;
        if ( v69 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v69, 0x1CDu);
        }
        else
        {
          ++v65[66];
          v70 = *((_QWORD *)v65 + 30);
          v71 = (unsigned int)(v65[66] - 1);
          if ( (unsigned int)v71 > (unsigned int)v64 )
          {
            v84 = v70 + 8 * v71;
            do
            {
              v71 = (unsigned int)(v71 - 1);
              v84 -= 8LL;
              *(_QWORD *)(v84 + 8) = *(_QWORD *)(v70 + 8 * v71);
            }
            while ( (unsigned int)v71 > (unsigned int)v64 );
          }
          v72 = v120;
          v73 = (__int64 *)(v70 + 8 * v64);
          if ( v120 >= v73 && (unsigned __int64)v120 < v70 + 8 * ((unsigned __int64)(unsigned int)v65[66] - 1) )
            v72 = ++v120;
          *v73 = *v72;
        }
        if ( (v2 & 0x80000000) == 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v121 + 8));
          *(_QWORD *)(v121 + 80) = v65;
          v74 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v65 + 24LL);
          if ( v74 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags((CVisual *)v65, 0x2000);
          else
            v74((CVisual *)v65, 0x2000);
          goto LABEL_115;
        }
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x73u);
LABEL_115:
      v75 = v2;
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x61u);
LABEL_175:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v75, 0x7CFu);
        return v2;
      }
      v5 = v123;
      goto LABEL_12;
    }
    v51 = (struct CAtlasedImage *)*((_QWORD *)this + v14 + 37);
    if ( v51 )
    {
      v94 = (CAtlasedRectsVisual *)*((_QWORD *)v51 + 10);
      if ( v94 )
      {
        CAtlasedRectsVisual::RemoveAtlasImage(v94, v51);
        v6 = v118;
      }
      v95 = (CBaseObject *)*((_QWORD *)this + v14 + 37);
      if ( v95 )
      {
        CBaseObject::Release(v95);
        *((_QWORD *)this + v14 + 37) = 0LL;
LABEL_22:
        v6 = v118;
      }
    }
    ++v13;
    ++v14;
  }
  while ( v13 < 0x16 );
  v24 = 2;
  if ( (_BYTE)v6 )
  {
    IsSheetOfGlass = CTopLevelWindow::IsSheetOfGlass(this);
    v26 = (CAtlasedImage *)*((_QWORD *)this + 37);
    if ( IsSheetOfGlass )
    {
      if ( *((_DWORD *)v26 + 16) != 10 )
      {
        *((_DWORD *)v26 + 16) = 10;
        CAtlasedImage::SetDirtyFlags(v26, 1u, 0x2000u);
      }
      v96 = (CAtlasedImage *)*((_QWORD *)this + 38);
      if ( *((_DWORD *)v96 + 16) != 8 )
      {
        *((_DWORD *)v96 + 16) = 8;
        CAtlasedImage::SetDirtyFlags(v96, 1u, 0x2000u);
      }
      v97 = (CAtlasedImage *)*((_QWORD *)this + 39);
      if ( *((_DWORD *)v97 + 16) != 9 )
      {
        *((_DWORD *)v97 + 16) = 9;
        CAtlasedImage::SetDirtyFlags(v97, 1u, 0x2000u);
      }
      v98 = (CAtlasedImage *)*((_QWORD *)this + 40);
      if ( *((_DWORD *)v98 + 16) != 2 )
      {
        *((_DWORD *)v98 + 16) = 2;
        CAtlasedImage::SetDirtyFlags(v98, 1u, 0x2000u);
      }
      v99 = (CAtlasedImage *)*((_QWORD *)this + 41);
      if ( *((_DWORD *)v99 + 16) != 1 )
      {
        *((_DWORD *)v99 + 16) = 1;
        CAtlasedImage::SetDirtyFlags(v99, 1u, 0x2000u);
      }
      v100 = (CAtlasedImage *)*((_QWORD *)this + 42);
      if ( *((_DWORD *)v100 + 16) != 6 )
      {
        *((_DWORD *)v100 + 16) = 6;
        CAtlasedImage::SetDirtyFlags(v100, 1u, 0x2000u);
      }
      v101 = (CAtlasedImage *)*((_QWORD *)this + 43);
      if ( *((_DWORD *)v101 + 16) != 4 )
      {
        *((_DWORD *)v101 + 16) = 4;
        CAtlasedImage::SetDirtyFlags(v101, 1u, 0x2000u);
      }
      v102 = (CAtlasedImage *)*((_QWORD *)this + 44);
      if ( *((_DWORD *)v102 + 16) != 5 )
      {
        *((_DWORD *)v102 + 16) = 5;
        CAtlasedImage::SetDirtyFlags(v102, 1u, 0x2000u);
      }
      v103 = (CAtlasedImage *)*((_QWORD *)this + 46);
      if ( *((_DWORD *)v103 + 16) != 10 )
      {
        *((_DWORD *)v103 + 16) = 10;
        CAtlasedImage::SetDirtyFlags(v103, 1u, 0x2000u);
      }
      v104 = (CAtlasedImage *)*((_QWORD *)this + 47);
      if ( *((_DWORD *)v104 + 16) != 8 )
      {
        *((_DWORD *)v104 + 16) = 8;
        CAtlasedImage::SetDirtyFlags(v104, 1u, 0x2000u);
      }
      v105 = (CAtlasedImage *)*((_QWORD *)this + 48);
      if ( *((_DWORD *)v105 + 16) != 9 )
      {
        *((_DWORD *)v105 + 16) = 9;
        CAtlasedImage::SetDirtyFlags(v105, 1u, 0x2000u);
      }
      v106 = (CAtlasedImage *)*((_QWORD *)this + 49);
      if ( *((_DWORD *)v106 + 16) != 2 )
      {
        *((_DWORD *)v106 + 16) = 2;
        CAtlasedImage::SetDirtyFlags(v106, 1u, 0x2000u);
      }
      v107 = (CAtlasedImage *)*((_QWORD *)this + 50);
      if ( *((_DWORD *)v107 + 16) != 1 )
      {
        *((_DWORD *)v107 + 16) = 1;
        CAtlasedImage::SetDirtyFlags(v107, 1u, 0x2000u);
      }
      v108 = (CAtlasedImage *)*((_QWORD *)this + 51);
      if ( *((_DWORD *)v108 + 16) != 6 )
      {
        *((_DWORD *)v108 + 16) = 6;
        CAtlasedImage::SetDirtyFlags(v108, 1u, 0x2000u);
      }
      v109 = (CAtlasedImage *)*((_QWORD *)this + 52);
      if ( *((_DWORD *)v109 + 16) != 4 )
      {
        *((_DWORD *)v109 + 16) = 4;
        CAtlasedImage::SetDirtyFlags(v109, 1u, 0x2000u);
      }
      v41 = (CAtlasedImage *)*((_QWORD *)this + 53);
      if ( *((_DWORD *)v41 + 16) == 5 )
        goto LABEL_57;
      *((_DWORD *)v41 + 16) = 5;
    }
    else
    {
      if ( *((_DWORD *)v26 + 16) )
      {
        *((_DWORD *)v26 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v26, 1u, 0x2000u);
      }
      v27 = (CAtlasedImage *)*((_QWORD *)this + 38);
      if ( *((_DWORD *)v27 + 16) )
      {
        *((_DWORD *)v27 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v27, 1u, 0x2000u);
      }
      v28 = (CAtlasedImage *)*((_QWORD *)this + 39);
      if ( *((_DWORD *)v28 + 16) )
      {
        *((_DWORD *)v28 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v28, 1u, 0x2000u);
      }
      v29 = (CAtlasedImage *)*((_QWORD *)this + 40);
      if ( *((_DWORD *)v29 + 16) )
      {
        *((_DWORD *)v29 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v29, 1u, 0x2000u);
      }
      v30 = (CAtlasedImage *)*((_QWORD *)this + 41);
      if ( *((_DWORD *)v30 + 16) )
      {
        *((_DWORD *)v30 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v30, 1u, 0x2000u);
      }
      v31 = (CAtlasedImage *)*((_QWORD *)this + 42);
      if ( *((_DWORD *)v31 + 16) )
      {
        *((_DWORD *)v31 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v31, 1u, 0x2000u);
      }
      v32 = (CAtlasedImage *)*((_QWORD *)this + 43);
      if ( *((_DWORD *)v32 + 16) )
      {
        *((_DWORD *)v32 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v32, 1u, 0x2000u);
      }
      v33 = (CAtlasedImage *)*((_QWORD *)this + 44);
      if ( *((_DWORD *)v33 + 16) )
      {
        *((_DWORD *)v33 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v33, 1u, 0x2000u);
      }
      v34 = (CAtlasedImage *)*((_QWORD *)this + 46);
      if ( *((_DWORD *)v34 + 16) )
      {
        *((_DWORD *)v34 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v34, 1u, 0x2000u);
      }
      v35 = (CAtlasedImage *)*((_QWORD *)this + 47);
      if ( *((_DWORD *)v35 + 16) )
      {
        *((_DWORD *)v35 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v35, 1u, 0x2000u);
      }
      v36 = (CAtlasedImage *)*((_QWORD *)this + 48);
      if ( *((_DWORD *)v36 + 16) )
      {
        *((_DWORD *)v36 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v36, 1u, 0x2000u);
      }
      v37 = (CAtlasedImage *)*((_QWORD *)this + 49);
      if ( *((_DWORD *)v37 + 16) )
      {
        *((_DWORD *)v37 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v37, 1u, 0x2000u);
      }
      v38 = (CAtlasedImage *)*((_QWORD *)this + 50);
      if ( *((_DWORD *)v38 + 16) )
      {
        *((_DWORD *)v38 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v38, 1u, 0x2000u);
      }
      v39 = (CAtlasedImage *)*((_QWORD *)this + 51);
      if ( *((_DWORD *)v39 + 16) )
      {
        *((_DWORD *)v39 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v39, 1u, 0x2000u);
      }
      v40 = (CAtlasedImage *)*((_QWORD *)this + 52);
      if ( *((_DWORD *)v40 + 16) )
      {
        *((_DWORD *)v40 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v40, 1u, 0x2000u);
      }
      v41 = (CAtlasedImage *)*((_QWORD *)this + 53);
      if ( !*((_DWORD *)v41 + 16) )
        goto LABEL_57;
      *((_DWORD *)v41 + 16) = 0;
    }
    CAtlasedImage::SetDirtyFlags(v41, 1u, 0x2000u);
  }
LABEL_57:
  updated = CTopLevelWindow::UpdateButtonVisuals(this, (struct CBitmapSource **)v5);
  v2 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x820u);
    return v2;
  }
  if ( (*((_DWORD *)this + 146) & 0x10080) != 0 )
  {
    if ( !*((_QWORD *)this + 65) )
    {
      v90 = CImage::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CImage **)this + 65);
      v2 = v90;
      if ( v90 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v90, 0x826u);
        return v2;
      }
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(*((_QWORD *)this + 32) + 32LL),
                   *((struct CVisual **)this + 65),
                   *((struct CVisual **)this + 34),
                   1u,
                   1);
      v2 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x827u);
        return v2;
      }
      CVisual::SetDirtyFlags(this, 0x20000);
    }
    v43 = v119;
    if ( *((char *)this + 584) < 0 )
      v24 = 3;
    *(_DWORD *)(*((_QWORD *)this + 65) + 192LL) = v24;
    CVisual::SetRTLMirror(*((CVisual **)this + 65), v119);
  }
  else
  {
    v86 = (struct CVisual *)*((_QWORD *)this + 65);
    if ( v86 )
    {
      v110 = *((_QWORD *)v86 + 3);
      if ( v110 )
      {
        v111 = VisualCollection::Remove((VisualCollection *)(v110 + 32), v86);
        v2 = v111;
        if ( v111 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v111, 0x836u);
          return v2;
        }
        CVisual::SetDirtyFlags(this, 4096);
      }
      v112 = (CBaseObject *)*((_QWORD *)this + 65);
      if ( v112 )
      {
        CBaseObject::Release(v112);
        *((_QWORD *)this + 65) = 0LL;
      }
    }
    v43 = v119;
  }
  if ( (*((_BYTE *)this + 584) & 8) != 0 )
  {
    v44 = (struct CVisual **)((char *)this + 512);
    if ( !*((_QWORD *)this + 64) )
    {
      v88 = CText::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CText **)this + 64);
      v2 = v88;
      if ( v88 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v88, 0x843u);
        return v2;
      }
      v89 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 34) + 32LL), *v44, 0LL, 1u, 1);
      v2 = v89;
      if ( v89 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v89, 0x846u);
        return v2;
      }
      CVisual::SetDirtyFlags(this, 0x10000);
    }
    CurrentDefaultColorizationFlags = CTopLevelWindow::GetCurrentDefaultColorizationFlags(this, &v122);
    WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(
                                (__int64)this,
                                *CurrentDefaultColorizationFlags | 8u);
    CText::SetBackgroundColor(*v44, WindowColorizationColor);
    if ( v5 )
    {
      v47 = BYTE2(WindowColorizationColor)
          + 5 * BYTE1(WindowColorizationColor)
          + 2 * (unsigned __int8)WindowColorizationColor;
      if ( v47 > 0x400 == (unsigned __int8)BYTE2(*((_DWORD *)v5 + 462))
                        + 5 * (unsigned __int8)BYTE1(*((_DWORD *)v5 + 462))
                        + 2 * (unsigned int)(unsigned __int8)*((_DWORD *)v5 + 462) > 0x400 )
      {
        v113 = 318LL;
        if ( v47 <= 0x400 )
          v113 = 292LL;
        CImmersiveColor::GetColor(v113);
      }
      if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
        v48 = BlendColors(WindowColorizationColor, v48, 0.40000001);
      CText::SetColor(*v44, v48);
    }
    memset_0(&v124, 0, sizeof(v124));
    CWindowData::GetNonClientCaptionFont(*((CWindowData **)this + 90), &v124);
    CText::SetFont(*v44, &v124);
    CText::SetScalingFactor(*v44, *(double *)(*((_QWORD *)this + 90) + 304LL));
    CVisual::SetRTLMirror(*v44, v43);
    CText::SetRTLReading(*v44, (*((_DWORD *)this + 146) & 0x80000) != 0);
    CText::SetReverseAlignment(*v44, (*((_DWORD *)this + 146) & 0x400000) != 0);
  }
  else
  {
    v87 = (struct CVisual *)*((_QWORD *)this + 64);
    if ( v87 )
    {
      v114 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 34) + 32LL), v87);
      v2 = v114;
      if ( v114 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v114, 0x86Fu);
        return v2;
      }
      v115 = (CBaseObject *)*((_QWORD *)this + 64);
      if ( v115 )
      {
        CBaseObject::Release(v115);
        *((_QWORD *)this + 64) = 0LL;
      }
    }
  }
  v49 = CTopLevelWindow::EnsureClientAreaNode(this);
  v2 = v49;
  if ( v49 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x874u);
    return v2;
  }
  v2 = 0;
  if ( (*((_BYTE *)this + 241) & 4) != 0 )
  {
    HolographicSlate = CTopLevelWindow::CreateHolographicSlate(this);
    v2 = HolographicSlate;
    if ( HolographicSlate < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, HolographicSlate, 0x108u);
  }
  else
  {
    CTopLevelWindow::ReleaseHolographicSlate(this);
  }
  if ( (v2 & 0x80000000) != 0 )
  {
    v117 = 2166;
    goto LABEL_233;
  }
  return v2;
}
