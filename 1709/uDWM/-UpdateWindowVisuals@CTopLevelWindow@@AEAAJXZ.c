/*
 * XREFs of ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DC00
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x18002BC20 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 * Callees:
 *     ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z @ 0x180011BA4 (-GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x1800149A4 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x1800149BC (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x1800149D4 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetColor@CText@@QEAAXK@Z @ 0x180014A0C (-SetColor@CText@@QEAAXK@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x180014A54 (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?SetScalingFactor@CText@@QEAAXN@Z @ 0x180014AFC (-SetScalingFactor@CText@@QEAAXN@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x1800193A8 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18001BA18 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x18001BA98 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x18001BADC (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x18001D8C8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18001E5B8 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x18001EFB0 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ @ 0x18001EFD0 (-ReleaseHolographicSlate@CTopLevelWindow@@AEAAXXZ.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020324 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180020A50 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x1800241D8 (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x1800312C4 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?BlendColors@@YAKKKM@Z @ 0x180035794 (-BlendColors@@YAKKKM@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800359E4 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180035BAC (-Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     IsOpenThemeDataPresent @ 0x180045BAC (IsOpenThemeDataPresent.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18006D808 (-GetColor@ColorCache@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x180078498 (-CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowVisuals(CTopLevelWindow *this)
{
  unsigned int v2; // ebx
  struct CTopLevelWindow::WindowFrame *v3; // rax
  int v4; // ebx
  struct CTopLevelWindow::WindowFrame *v5; // r14
  bool v6; // bl
  char v7; // r15
  __int64 v8; // r12
  unsigned int v9; // r13d
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  CVisual *v16; // rcx
  void (__fastcall *v17)(CVisual *, int); // rax
  int v18; // eax
  CVisual *v19; // rbx
  int v20; // ecx
  int v21; // ebp
  bool IsSheetOfGlass; // al
  CAtlasedImage *v23; // rcx
  CAtlasedImage *v24; // rcx
  CAtlasedImage *v25; // rcx
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
  int updated; // eax
  char v40; // r15
  struct CVisual ***v41; // rdi
  _DWORD *CurrentDefaultColorizationFlags; // rax
  unsigned int WindowColorizationColor; // ebx
  unsigned int v44; // r9d
  unsigned int v45; // r8d
  int v46; // eax
  struct CAtlasedImage *v48; // rdx
  CVisual *v49; // rcx
  void (__fastcall *v50)(CVisual *, int); // rax
  __int64 v51; // rbx
  void *(*v52)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v53; // rax
  __int64 v54; // rdi
  _DWORD *v55; // r15
  unsigned int v56; // edx
  unsigned int v57; // ecx
  _QWORD *j; // rax
  int v59; // eax
  __int64 v60; // rdx
  __int64 v61; // r9
  __int64 *v62; // rdx
  __int64 *v63; // r8
  void (__fastcall *v64)(CVisual *, int); // rax
  __int64 v65; // r9
  CVisual *v66; // rbx
  unsigned int v67; // edx
  __int64 v68; // rcx
  __int64 i; // r8
  void (__fastcall *v70)(CVisual *, int); // rax
  CBaseObject *v71; // rcx
  void (__fastcall *v72)(CVisual *); // rax
  __int64 v73; // r8
  struct CVisual *v74; // rdx
  struct CVisual *v75; // rdx
  __int64 v76; // rdx
  int v77; // eax
  int inserted; // eax
  int v79; // eax
  int v80; // eax
  CAtlasedRectsVisual *v81; // rcx
  CBaseObject *v82; // rcx
  CAtlasedImage *v83; // rcx
  CAtlasedImage *v84; // rcx
  CAtlasedImage *v85; // rcx
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
  __int64 v97; // rcx
  int v98; // eax
  CBaseObject *v99; // rcx
  __int64 v100; // rcx
  int v101; // eax
  CBaseObject *v102; // rcx
  int HolographicSlate; // eax
  unsigned int v104; // [rsp+20h] [rbp-D8h]
  char v105; // [rsp+30h] [rbp-C8h]
  bool v106; // [rsp+31h] [rbp-C7h]
  __int64 *v107; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v108; // [rsp+40h] [rbp-B8h] BYREF
  int v109; // [rsp+48h] [rbp-B0h] BYREF
  struct CTopLevelWindow::WindowFrame *v110; // [rsp+50h] [rbp-A8h]
  tagLOGFONTW v111; // [rsp+60h] [rbp-98h] BYREF

  v2 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v2;
  v3 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *((_DWORD *)this + 146),
         0,
         (*(_BYTE *)(*((_QWORD *)this + 90) + 595LL) & 0x20) != 0);
  v4 = *((_DWORD *)this + 146);
  v5 = v3;
  v110 = v3;
  v6 = (unsigned __int8)IsOpenThemeDataPresent() && (v4 & 6) != 0;
  v106 = v6;
  v7 = (*((_DWORD *)this + 146) & 0x20000) != 0;
  v105 = v7;
  CVisual::SetRTLMirror(*((CVisual **)this + 32), v7);
  CVisual::SetRTLMirror(*((CVisual **)this + 67), v7);
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  do
  {
    if ( v6 )
    {
      if ( *((_QWORD *)this + v10 + 37) )
      {
LABEL_8:
        if ( v5 )
        {
          v11 = *((_QWORD *)v5 + 2 * v10 + 187);
          if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16) && *((_QWORD *)v5 + 2 * v10 + 188) )
            v11 = *((_QWORD *)v5 + 2 * v10 + 188);
        }
        else
        {
          v11 = 0LL;
        }
        v12 = *((_QWORD *)this + v10 + 37);
        v13 = *(_QWORD *)(v12 + 72);
        if ( v13 != v11 )
        {
          if ( v13 && _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 8), 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(__int64, __int64))v13)(v13, 1LL);
          *(_QWORD *)(v12 + 72) = v11;
          if ( v11 )
            _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
          *(_DWORD *)(v12 + 96) |= 1u;
          v49 = *(CVisual **)(v12 + 80);
          if ( v49 )
          {
            v50 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v49 + 24LL);
            if ( v50 == CVisual::SetDirtyFlags )
              CVisual::SetDirtyFlags(v49, 0x2000);
            else
              v50(v49, 0x2000);
          }
        }
        if ( (v9 - 18 > 3 || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16)) && v11 )
        {
          v14 = *((_QWORD *)this + v10 + 37);
          if ( *(_DWORD *)(v14 + 24) != *(_DWORD *)(v11 + 24) || *(_DWORD *)(v14 + 28) != *(_DWORD *)(v11 + 28) )
          {
            v15 = *(_QWORD *)(v11 + 24);
            *(_DWORD *)(v14 + 96) |= 1u;
            *(_QWORD *)(v14 + 24) = v15;
            v16 = *(CVisual **)(v14 + 80);
            if ( v16 )
            {
              v17 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v16 + 24LL);
              if ( v17 == CVisual::SetDirtyFlags )
              {
                v18 = *((_DWORD *)v16 + 20);
                if ( (v18 & 0x2000) == 0 )
                {
                  v19 = (CVisual *)*((_QWORD *)v16 + 3);
                  for ( *((_DWORD *)v16 + 20) = v18 | 0x2000; v19; v19 = (CVisual *)*((_QWORD *)v19 + 3) )
                  {
                    v20 = *((_DWORD *)v19 + 20);
                    if ( (v20 & 1) != 0 )
                      break;
                    v72 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v19 + 32LL);
                    if ( v72 == CVisual::SetDirtyChildren )
                      *((_DWORD *)v19 + 20) = v20 | 1;
                    else
                      v72(v19);
                  }
                }
              }
              else
              {
                v17(v16, 0x2000);
              }
            }
          }
          v8 = *((_QWORD *)this + v10 + 37);
        }
        else
        {
          v65 = *((_QWORD *)this + v10 + 37);
          v66 = *(CVisual **)(v65 + 80);
          if ( v66 )
          {
            v67 = *((_DWORD *)v66 + 66);
            v68 = 0LL;
            for ( i = *((_QWORD *)v66 + 30); (unsigned int)v68 < v67; v68 = (unsigned int)(v68 + 1) )
            {
              if ( v65 == *(_QWORD *)(i + 8 * v68) )
                break;
            }
            if ( (unsigned int)v68 < v67 )
            {
              if ( (unsigned int)v68 < v67 - 1 )
              {
                do
                {
                  v76 = (unsigned int)(v68 + 1);
                  *(_QWORD *)(i + 8 * v68) = *(_QWORD *)(i + 8 * v76);
                  v68 = v76;
                }
                while ( (unsigned int)v76 < *((_DWORD *)v66 + 66) - 1 );
              }
              --*((_DWORD *)v66 + 66);
            }
            *(_QWORD *)(v65 + 80) = 0LL;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v65 + 8), 0xFFFFFFFF) == 1 )
              (**(void (__fastcall ***)(__int64, __int64, __int64))v65)(v65, 1LL, i);
            v70 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v66 + 24LL);
            if ( v70 == CVisual::SetDirtyFlags )
              CVisual::SetDirtyFlags(v66, 0x2000);
            else
              ((void (__fastcall *)(CVisual *, __int64, __int64))v70)(v66, 0x2000LL, i);
          }
          v71 = (CBaseObject *)*((_QWORD *)this + v10 + 37);
          if ( v71 )
          {
            CBaseObject::Release(v71);
            *((_QWORD *)this + v10 + 37) = 0LL;
          }
        }
        v6 = v106;
        goto LABEL_21;
      }
      v51 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v52 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v52 == WPF::ProcessHeapImpl::AllocClear )
        v53 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x88uLL);
      else
        v53 = (_DWORD *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v52)(WPF::g_pProcessHeap, 136LL);
      if ( !v53 )
      {
        v2 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xA5u);
        v104 = 1987;
        goto LABEL_218;
      }
      *(_QWORD *)v53 = &CAtlasedImage::`vftable';
      v54 = 0LL;
      v53[2] = 1;
      *((_QWORD *)v53 + 9) = 0LL;
      *((_QWORD *)v53 + 11) = 0LL;
      v53[8] = 0x7FFFFFFF;
      v53[10] = 0x7FFFFFFF;
      v53[9] = 0x7FFFFFFF;
      v53[11] = 0x7FFFFFFF;
      v53[13] = 0x80000000;
      v53[12] = 0x80000000;
      v53[15] = 0x7FFFFFFF;
      v53[14] = 0x7FFFFFFF;
      v53[17] = -1;
      v53[33] = 22;
      *((_QWORD *)v53 + 13) = v51;
      *((_QWORD *)this + v10 + 37) = v53;
      v53[33] = v9;
      v55 = (_DWORD *)*((_QWORD *)this + 34);
      if ( v8 )
      {
        v56 = v55[66];
        v57 = 0;
        for ( j = (_QWORD *)*((_QWORD *)v55 + 30); v57 < v56; ++j )
        {
          if ( v8 == *j )
            break;
          ++v57;
        }
        if ( v57 == v56 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x5Au);
          v2 = -2147024809;
LABEL_160:
          v104 = 1992;
LABEL_218:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, v104);
          return v2;
        }
        v54 = v57 + 1;
      }
      v108 = *((_QWORD *)this + v10 + 37);
      if ( (unsigned int)v54 > v55[66] )
      {
        v2 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1C3u);
      }
      else
      {
        v107 = &v108;
        v59 = DynArrayImpl<0>::Grow((int)v55 + 240, 8, 1, 0, (__int64)&v107);
        v2 = v59;
        if ( v59 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x1CDu);
        }
        else
        {
          v60 = (unsigned int)v55[66];
          v61 = *((_QWORD *)v55 + 30);
          v55[66] = v60 + 1;
          if ( (unsigned int)v60 > (unsigned int)v54 )
          {
            v73 = v61 + 8 * v60;
            do
            {
              v60 = (unsigned int)(v60 - 1);
              v73 -= 8LL;
              *(_QWORD *)(v73 + 8) = *(_QWORD *)(v61 + 8 * v60);
            }
            while ( (unsigned int)v60 > (unsigned int)v54 );
          }
          v62 = v107;
          v63 = (__int64 *)(v61 + 8 * v54);
          if ( v107 >= v63 && (unsigned __int64)v107 < v61 + 8 * ((unsigned __int64)(unsigned int)v55[66] - 1) )
            v62 = ++v107;
          *v63 = *v62;
        }
        if ( (v2 & 0x80000000) == 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v108 + 8));
          *(_QWORD *)(v108 + 80) = v55;
          v64 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v55 + 24LL);
          if ( v64 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags((CVisual *)v55, 0x2000);
          else
            v64((CVisual *)v55, 0x2000);
          goto LABEL_101;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x73u);
LABEL_101:
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x61u);
        goto LABEL_160;
      }
      v5 = v110;
      goto LABEL_8;
    }
    v48 = (struct CAtlasedImage *)*((_QWORD *)this + v10 + 37);
    if ( v48 )
    {
      v81 = (CAtlasedRectsVisual *)*((_QWORD *)v48 + 10);
      if ( v81 )
        CAtlasedRectsVisual::RemoveAtlasImage(v81, v48);
      v82 = (CBaseObject *)*((_QWORD *)this + v10 + 37);
      if ( v82 )
      {
        CBaseObject::Release(v82);
        *((_QWORD *)this + v10 + 37) = 0LL;
      }
    }
LABEL_21:
    ++v9;
    ++v10;
  }
  while ( v9 < 0x16 );
  v21 = 2;
  if ( v6 )
  {
    IsSheetOfGlass = CTopLevelWindow::IsSheetOfGlass(this);
    v23 = (CAtlasedImage *)*((_QWORD *)this + 37);
    if ( IsSheetOfGlass )
    {
      if ( *((_DWORD *)v23 + 16) != 10 )
      {
        *((_DWORD *)v23 + 16) = 10;
        CAtlasedImage::SetDirtyFlags(v23, 1u, 0x2000u);
      }
      v83 = (CAtlasedImage *)*((_QWORD *)this + 38);
      if ( *((_DWORD *)v83 + 16) != 8 )
      {
        *((_DWORD *)v83 + 16) = 8;
        CAtlasedImage::SetDirtyFlags(v83, 1u, 0x2000u);
      }
      v84 = (CAtlasedImage *)*((_QWORD *)this + 39);
      if ( *((_DWORD *)v84 + 16) != 9 )
      {
        *((_DWORD *)v84 + 16) = 9;
        CAtlasedImage::SetDirtyFlags(v84, 1u, 0x2000u);
      }
      v85 = (CAtlasedImage *)*((_QWORD *)this + 40);
      if ( *((_DWORD *)v85 + 16) != 2 )
      {
        *((_DWORD *)v85 + 16) = 2;
        CAtlasedImage::SetDirtyFlags(v85, 1u, 0x2000u);
      }
      v86 = (CAtlasedImage *)*((_QWORD *)this + 41);
      if ( *((_DWORD *)v86 + 16) != 1 )
      {
        *((_DWORD *)v86 + 16) = 1;
        CAtlasedImage::SetDirtyFlags(v86, 1u, 0x2000u);
      }
      v87 = (CAtlasedImage *)*((_QWORD *)this + 42);
      if ( *((_DWORD *)v87 + 16) != 6 )
      {
        *((_DWORD *)v87 + 16) = 6;
        CAtlasedImage::SetDirtyFlags(v87, 1u, 0x2000u);
      }
      v88 = (CAtlasedImage *)*((_QWORD *)this + 43);
      if ( *((_DWORD *)v88 + 16) != 4 )
      {
        *((_DWORD *)v88 + 16) = 4;
        CAtlasedImage::SetDirtyFlags(v88, 1u, 0x2000u);
      }
      v89 = (CAtlasedImage *)*((_QWORD *)this + 44);
      if ( *((_DWORD *)v89 + 16) != 5 )
      {
        *((_DWORD *)v89 + 16) = 5;
        CAtlasedImage::SetDirtyFlags(v89, 1u, 0x2000u);
      }
      v90 = (CAtlasedImage *)*((_QWORD *)this + 46);
      if ( *((_DWORD *)v90 + 16) != 10 )
      {
        *((_DWORD *)v90 + 16) = 10;
        CAtlasedImage::SetDirtyFlags(v90, 1u, 0x2000u);
      }
      v91 = (CAtlasedImage *)*((_QWORD *)this + 47);
      if ( *((_DWORD *)v91 + 16) != 8 )
      {
        *((_DWORD *)v91 + 16) = 8;
        CAtlasedImage::SetDirtyFlags(v91, 1u, 0x2000u);
      }
      v92 = (CAtlasedImage *)*((_QWORD *)this + 48);
      if ( *((_DWORD *)v92 + 16) != 9 )
      {
        *((_DWORD *)v92 + 16) = 9;
        CAtlasedImage::SetDirtyFlags(v92, 1u, 0x2000u);
      }
      v93 = (CAtlasedImage *)*((_QWORD *)this + 49);
      if ( *((_DWORD *)v93 + 16) != 2 )
      {
        *((_DWORD *)v93 + 16) = 2;
        CAtlasedImage::SetDirtyFlags(v93, 1u, 0x2000u);
      }
      v94 = (CAtlasedImage *)*((_QWORD *)this + 50);
      if ( *((_DWORD *)v94 + 16) != 1 )
      {
        *((_DWORD *)v94 + 16) = 1;
        CAtlasedImage::SetDirtyFlags(v94, 1u, 0x2000u);
      }
      v95 = (CAtlasedImage *)*((_QWORD *)this + 51);
      if ( *((_DWORD *)v95 + 16) != 6 )
      {
        *((_DWORD *)v95 + 16) = 6;
        CAtlasedImage::SetDirtyFlags(v95, 1u, 0x2000u);
      }
      v96 = (CAtlasedImage *)*((_QWORD *)this + 52);
      if ( *((_DWORD *)v96 + 16) != 4 )
      {
        *((_DWORD *)v96 + 16) = 4;
        CAtlasedImage::SetDirtyFlags(v96, 1u, 0x2000u);
      }
      v38 = (CAtlasedImage *)*((_QWORD *)this + 53);
      if ( *((_DWORD *)v38 + 16) == 5 )
        goto LABEL_55;
      *((_DWORD *)v38 + 16) = 5;
    }
    else
    {
      if ( *((_DWORD *)v23 + 16) )
      {
        *((_DWORD *)v23 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v23, 1u, 0x2000u);
      }
      v24 = (CAtlasedImage *)*((_QWORD *)this + 38);
      if ( *((_DWORD *)v24 + 16) )
      {
        *((_DWORD *)v24 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v24, 1u, 0x2000u);
      }
      v25 = (CAtlasedImage *)*((_QWORD *)this + 39);
      if ( *((_DWORD *)v25 + 16) )
      {
        *((_DWORD *)v25 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v25, 1u, 0x2000u);
      }
      v26 = (CAtlasedImage *)*((_QWORD *)this + 40);
      if ( *((_DWORD *)v26 + 16) )
      {
        *((_DWORD *)v26 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v26, 1u, 0x2000u);
      }
      v27 = (CAtlasedImage *)*((_QWORD *)this + 41);
      if ( *((_DWORD *)v27 + 16) )
      {
        *((_DWORD *)v27 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v27, 1u, 0x2000u);
      }
      v28 = (CAtlasedImage *)*((_QWORD *)this + 42);
      if ( *((_DWORD *)v28 + 16) )
      {
        *((_DWORD *)v28 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v28, 1u, 0x2000u);
      }
      v29 = (CAtlasedImage *)*((_QWORD *)this + 43);
      if ( *((_DWORD *)v29 + 16) )
      {
        *((_DWORD *)v29 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v29, 1u, 0x2000u);
      }
      v30 = (CAtlasedImage *)*((_QWORD *)this + 44);
      if ( *((_DWORD *)v30 + 16) )
      {
        *((_DWORD *)v30 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v30, 1u, 0x2000u);
      }
      v31 = (CAtlasedImage *)*((_QWORD *)this + 46);
      if ( *((_DWORD *)v31 + 16) )
      {
        *((_DWORD *)v31 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v31, 1u, 0x2000u);
      }
      v32 = (CAtlasedImage *)*((_QWORD *)this + 47);
      if ( *((_DWORD *)v32 + 16) )
      {
        *((_DWORD *)v32 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v32, 1u, 0x2000u);
      }
      v33 = (CAtlasedImage *)*((_QWORD *)this + 48);
      if ( *((_DWORD *)v33 + 16) )
      {
        *((_DWORD *)v33 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v33, 1u, 0x2000u);
      }
      v34 = (CAtlasedImage *)*((_QWORD *)this + 49);
      if ( *((_DWORD *)v34 + 16) )
      {
        *((_DWORD *)v34 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v34, 1u, 0x2000u);
      }
      v35 = (CAtlasedImage *)*((_QWORD *)this + 50);
      if ( *((_DWORD *)v35 + 16) )
      {
        *((_DWORD *)v35 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v35, 1u, 0x2000u);
      }
      v36 = (CAtlasedImage *)*((_QWORD *)this + 51);
      if ( *((_DWORD *)v36 + 16) )
      {
        *((_DWORD *)v36 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v36, 1u, 0x2000u);
      }
      v37 = (CAtlasedImage *)*((_QWORD *)this + 52);
      if ( *((_DWORD *)v37 + 16) )
      {
        *((_DWORD *)v37 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v37, 1u, 0x2000u);
      }
      v38 = (CAtlasedImage *)*((_QWORD *)this + 53);
      if ( !*((_DWORD *)v38 + 16) )
        goto LABEL_55;
      *((_DWORD *)v38 + 16) = 0;
    }
    CAtlasedImage::SetDirtyFlags(v38, 1u, 0x2000u);
  }
LABEL_55:
  updated = CTopLevelWindow::UpdateButtonVisuals(this, (struct CBitmapSource **)v5);
  v2 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x819u);
    return v2;
  }
  if ( (*((_DWORD *)this + 146) & 0x10080) != 0 )
  {
    if ( !*((_QWORD *)this + 65) )
    {
      v77 = CImage::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CImage **)this + 65);
      v2 = v77;
      if ( v77 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0x81Fu);
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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x820u);
        return v2;
      }
      CVisual::SetDirtyFlags(this, 0x20000);
    }
    v40 = v105;
    if ( *((char *)this + 584) < 0 )
      v21 = 3;
    *(_DWORD *)(*((_QWORD *)this + 65) + 192LL) = v21;
    CVisual::SetRTLMirror(*((CVisual **)this + 65), v105);
  }
  else
  {
    v75 = (struct CVisual *)*((_QWORD *)this + 65);
    if ( v75 )
    {
      v97 = *((_QWORD *)v75 + 3);
      if ( v97 )
      {
        v98 = VisualCollection::Remove((VisualCollection *)(v97 + 32), v75);
        v2 = v98;
        if ( v98 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v98, 0x82Fu);
          return v2;
        }
        CVisual::SetDirtyFlags(this, 4096);
      }
      v99 = (CBaseObject *)*((_QWORD *)this + 65);
      if ( v99 )
      {
        CBaseObject::Release(v99);
        *((_QWORD *)this + 65) = 0LL;
      }
    }
    v40 = v105;
  }
  if ( (*((_BYTE *)this + 584) & 8) != 0 )
  {
    v41 = (struct CVisual ***)((char *)this + 512);
    if ( !*((_QWORD *)this + 64) )
    {
      v79 = CText::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CText **)this + 64);
      v2 = v79;
      if ( v79 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v79, 0x83Cu);
        return v2;
      }
      v80 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 34) + 32LL), *v41, 0LL, 1u, 1);
      v2 = v80;
      if ( v80 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v80, 0x83Fu);
        return v2;
      }
      CVisual::SetDirtyFlags(this, 0x10000);
    }
    CurrentDefaultColorizationFlags = CTopLevelWindow::GetCurrentDefaultColorizationFlags((__int64)this, &v109);
    WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(
                                (__int64)this,
                                *CurrentDefaultColorizationFlags | 8u);
    CText::SetBackgroundColor((CText *)*v41, WindowColorizationColor);
    if ( v5 )
    {
      v44 = BYTE2(WindowColorizationColor)
          + 5 * BYTE1(WindowColorizationColor)
          + 2 * (unsigned __int8)WindowColorizationColor;
      if ( v44 > 0x400 == (unsigned __int8)BYTE2(*((_DWORD *)v5 + 462))
                        + 5 * (unsigned __int8)BYTE1(*((_DWORD *)v5 + 462))
                        + 2 * (unsigned int)(unsigned __int8)*((_DWORD *)v5 + 462) > 0x400 )
      {
        v100 = 318LL;
        if ( v44 <= 0x400 )
          v100 = 292LL;
        ColorCache::GetColor(v100);
      }
      if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
        v45 = BlendColors(WindowColorizationColor, v45, 0.40000001);
      CText::SetColor((CText *)*v41, v45);
    }
    memset_0(&v111, 0, sizeof(v111));
    CWindowData::GetNonClientCaptionFont(*((CWindowData **)this + 90), &v111);
    CText::SetFont((CText *)*v41, &v111);
    CText::SetScalingFactor((CText *)*v41, *(double *)(*((_QWORD *)this + 90) + 304LL));
    CVisual::SetRTLMirror((CVisual *)*v41, v40);
    CText::SetRTLReading((CText *)*v41, (*((_DWORD *)this + 146) & 0x80000) != 0);
    CText::SetReverseAlignment((CText *)*v41, (*((_DWORD *)this + 146) & 0x400000) != 0);
  }
  else
  {
    v74 = (struct CVisual *)*((_QWORD *)this + 64);
    if ( v74 )
    {
      v101 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 34) + 32LL), v74);
      v2 = v101;
      if ( v101 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v101, 0x868u);
        return v2;
      }
      v102 = (CBaseObject *)*((_QWORD *)this + 64);
      if ( v102 )
      {
        CBaseObject::Release(v102);
        *((_QWORD *)this + 64) = 0LL;
      }
    }
  }
  v46 = CTopLevelWindow::EnsureClientAreaNode(this);
  v2 = v46;
  if ( v46 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x86Du);
    return v2;
  }
  v2 = 0;
  if ( (*((_BYTE *)this + 241) & 4) != 0 )
  {
    HolographicSlate = CTopLevelWindow::CreateHolographicSlate(this);
    v2 = HolographicSlate;
    if ( HolographicSlate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, HolographicSlate, 0x101u);
  }
  else
  {
    CTopLevelWindow::ReleaseHolographicSlate(this);
  }
  if ( (v2 & 0x80000000) != 0 )
  {
    v104 = 2159;
    goto LABEL_218;
  }
  return v2;
}
