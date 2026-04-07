/*
 * XREFs of ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180034AFC
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180026880 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180026D60 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18002AA70 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x1800096A0 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180019674 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x180069AF4 (-InsertAt@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18006B544 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18006B6BC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18006B6EC (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x18006C444 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 */

__int64 __fastcall CLivePreview::OnWindowShowHide(CLivePreview *this, struct CWindowData *a2, bool *a3, char a4)
{
  int v4; // esi
  unsigned int v5; // ebx
  int v6; // r13d
  char v10; // r15
  CLivePreview *v11; // rcx
  bool v12; // si
  int inserted; // eax
  struct CTopLevelWindow *v14; // rax
  struct CTopLevelWindow *v15; // r8
  __int64 v16; // r15
  __int64 v17; // rcx
  struct CVisual *v18; // rdx
  CBaseObject *v19; // rcx
  struct CVisual *v20; // rdx
  CBaseObject *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  char *v24; // r15
  __int64 v25; // r8
  __int64 v26; // r9
  char v27; // cl
  unsigned int v28; // eax
  char v29; // al
  CTopLevelWindow *v30; // r13
  struct CVisual **v31; // rsi
  struct CVisual **v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rbx
  __int64 v35; // r15
  CTopLevelWindow *v36; // rbx
  int v37; // r9d
  CBaseObject *v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rcx
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int64 v45; // rsi
  __int64 v46; // rdx
  struct CVisual *v47; // rdx
  CBaseObject *v48; // rcx
  struct CVisual *v49; // rdx
  CBaseObject *v50; // rcx
  CTopLevelWindow *v51; // rcx
  unsigned int v52; // eax
  __int64 v53; // r9
  __int64 v54; // rax
  __int128 v55; // xmm1
  __int64 v56; // rcx
  __int64 v57; // xmm0_8
  int v58; // ebx
  __int64 v59; // r15
  struct CWindowData **v60; // r13
  unsigned int v61; // eax
  __int64 v62; // r9
  unsigned int v63; // edx
  __int64 v64; // rax
  __int64 v65; // rcx
  unsigned int v66; // [rsp+20h] [rbp-E0h]
  char v67; // [rsp+30h] [rbp-D0h]
  bool IsTrulyMaximized; // [rsp+30h] [rbp-D0h]
  char v69; // [rsp+31h] [rbp-CFh]
  CTopLevelWindow *v70; // [rsp+38h] [rbp-C8h] BYREF
  struct CTopLevelWindow *v71; // [rsp+40h] [rbp-C0h] BYREF
  bool *v72; // [rsp+48h] [rbp-B8h]
  struct CWindowData *v73; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v74; // [rsp+58h] [rbp-A8h]
  bool v75; // [rsp+68h] [rbp-98h]
  struct CTopLevelWindow *v76; // [rsp+70h] [rbp-90h]
  WCHAR ClassName[264]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *((_DWORD *)this + 90);
  v5 = 0;
  v6 = *((_DWORD *)this + 82);
  v72 = a3;
  if ( v4 <= 0 && v6 <= 0 )
    return v5;
  v10 = 0;
  v69 = 0;
  v67 = 0;
  if ( a4 || !CLivePreview::_IsEligibleForLivePreview(this, a2) )
  {
    v33 = (unsigned int)(v4 - 1);
    if ( (int)v33 >= 0 )
    {
      v34 = *((_QWORD *)this + 42);
      while ( *(struct CWindowData **)(v34 + 48 * v33 + 8) != a2 )
      {
        v33 = (unsigned int)(v33 - 1);
        if ( (int)v33 < 0 )
          goto LABEL_74;
      }
      v35 = 48 * v33;
      v36 = *(CTopLevelWindow **)(48 * v33 + v34);
      CTopLevelWindow::StopLivePreviewAnimation(v36);
      inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v36 + 3) + 32LL), v36);
      v5 = inserted;
      if ( inserted < 0 )
      {
        v66 = 1857;
        goto LABEL_64;
      }
      v38 = *(CBaseObject **)(v35 + *((_QWORD *)this + 42) + 16);
      if ( v38 )
      {
        CBaseObject::Release(v38);
        *(_QWORD *)(v35 + *((_QWORD *)this + 42) + 16) = 0LL;
      }
      v39 = *((_DWORD *)this + 90);
      if ( (unsigned int)v33 >= v39 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u);
        v66 = 1860;
LABEL_66:
        v5 = -2147024809;
        v37 = -2147024809;
        goto LABEL_67;
      }
      v40 = *((_QWORD *)this + 42);
      if ( (unsigned int)v33 < v39 - 1 )
      {
        do
        {
          v41 = (unsigned int)v33;
          LODWORD(v33) = v33 + 1;
          v42 = 6 * v41;
          v43 = *(_OWORD *)(v40 + 48LL * (unsigned int)v33 + 16);
          *(_OWORD *)(v40 + 8 * v42) = *(_OWORD *)(v40 + 48LL * (unsigned int)v33);
          v44 = *(_OWORD *)(v40 + 48LL * (unsigned int)v33 + 32);
          *(_OWORD *)(v40 + 8 * v42 + 16) = v43;
          *(_OWORD *)(v40 + 8 * v42 + 32) = v44;
        }
        while ( (unsigned int)v33 < *((_DWORD *)this + 90) - 1 );
      }
      --*((_DWORD *)this + 90);
    }
LABEL_74:
    v45 = (unsigned int)(v6 - 1);
    if ( (int)v45 >= 0 )
    {
      v46 = *((_QWORD *)this + 38);
      while ( *(struct CWindowData **)(v46 + 40 * v45) != a2 )
      {
        v45 = (unsigned int)(v45 - 1);
        if ( (int)v45 < 0 )
          goto LABEL_96;
      }
      v47 = *(struct CVisual **)(v46 + 40 * v45 + 8);
      if ( v47 )
      {
        inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v47 + 3) + 32LL), v47);
        v5 = inserted;
        if ( inserted < 0 )
        {
          v66 = 1872;
          goto LABEL_64;
        }
        v48 = *(CBaseObject **)(*((_QWORD *)this + 38) + 40 * v45 + 8);
        if ( v48 )
        {
          CBaseObject::Release(v48);
          *(_QWORD *)(*((_QWORD *)this + 38) + 40 * v45 + 8) = 0LL;
        }
      }
      v49 = *(struct CVisual **)(*((_QWORD *)this + 38) + 40 * v45 + 16);
      if ( v49 )
      {
        inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v49 + 3) + 32LL), v49);
        v5 = inserted;
        if ( inserted < 0 )
        {
          v66 = 1878;
          goto LABEL_64;
        }
        v50 = *(CBaseObject **)(*((_QWORD *)this + 38) + 40 * v45 + 16);
        if ( v50 )
        {
          CBaseObject::Release(v50);
          *(_QWORD *)(*((_QWORD *)this + 38) + 40 * v45 + 16) = 0LL;
        }
      }
      v51 = (CTopLevelWindow *)*((_QWORD *)a2 + 50);
      if ( v51 )
        CTopLevelWindow::StopLivePreviewAnimation(v51);
      v52 = *((_DWORD *)this + 82);
      if ( (unsigned int)v45 >= v52 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u);
        v66 = 1887;
        goto LABEL_66;
      }
      v53 = *((_QWORD *)this + 38);
      if ( (unsigned int)v45 < v52 - 1 )
      {
        do
        {
          v54 = (unsigned int)v45;
          LODWORD(v45) = v45 + 1;
          v55 = *(_OWORD *)(v53 + 40LL * (unsigned int)v45 + 16);
          v56 = 5 * v54;
          *(_OWORD *)(v53 + 8 * v56) = *(_OWORD *)(v53 + 40LL * (unsigned int)v45);
          v57 = *(_QWORD *)(v53 + 40LL * (unsigned int)v45 + 32);
          *(_OWORD *)(v53 + 8 * v56 + 16) = v55;
          *(_QWORD *)(v53 + 8 * v56 + 32) = v57;
        }
        while ( (unsigned int)v45 < *((_DWORD *)this + 82) - 1 );
      }
      --*((_DWORD *)this + 82);
      v69 = 1;
    }
LABEL_96:
    v58 = *((_DWORD *)this + 106) - 1;
    if ( v58 >= 0 )
    {
      v59 = 16LL * v58;
      do
      {
        v60 = *(struct CWindowData ***)(v59 + *((_QWORD *)this + 50));
        if ( v60[90] == a2 )
        {
          v61 = *((_DWORD *)this + 106);
          if ( v58 < v61 )
          {
            v62 = *((_QWORD *)this + 50);
            v63 = v58;
            if ( v58 < v61 - 1 )
            {
              do
              {
                v64 = 2LL * v63;
                v65 = 2LL * ++v63;
                *(_OWORD *)(v62 + 8 * v64) = *(_OWORD *)(v62 + 8 * v65);
              }
              while ( v63 < *((_DWORD *)this + 106) - 1 );
            }
            --*((_DWORD *)this + 106);
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x194u);
          }
          VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 63) + 32LL), (struct CVisual *)v60);
        }
        v59 -= 16LL;
        --v58;
      }
      while ( v58 >= 0 );
    }
    v5 = 0;
    goto LABEL_107;
  }
  if ( *((_BYTE *)this + 280)
    && !CLivePreview::_IsInLivePreview(this, a2)
    && (!GetClassNameW(*((HWND *)a2 + 5), ClassName, 260) || _wcsicmp(ClassName, L"SysShadow")) )
  {
    v70 = (CTopLevelWindow *)*((_QWORD *)a2 + 50);
    IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v11, a2);
    v12 = IsTrulyMaximized;
    inserted = CVisual::RenderRecursive(v70);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v66 = 1921;
LABEL_64:
      v37 = inserted;
LABEL_67:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, v66);
      return v5;
    }
    v14 = (struct CTopLevelWindow *)MonitorFromWindow(*((HWND *)a2 + 5), 1u);
    v71 = v14;
    v15 = v14;
    if ( IsTrulyMaximized )
    {
      v16 = 0LL;
      if ( v6 > 0 )
      {
        v17 = *((_QWORD *)this + 38);
        while ( !*(_BYTE *)(v17 + 40 * v16 + 24) || *(struct CTopLevelWindow **)(v17 + 40 * v16 + 32) != v14 )
        {
          v16 = (unsigned int)(v16 + 1);
          if ( (int)v16 >= v6 )
            goto LABEL_30;
        }
        v18 = *(struct CVisual **)(v17 + 40 * v16 + 8);
        if ( v18 )
        {
          inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 64) + 32LL), v18);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v66 = 1934;
            goto LABEL_64;
          }
          v19 = *(CBaseObject **)(*((_QWORD *)this + 38) + 40 * v16 + 8);
          if ( v19 )
          {
            CBaseObject::Release(v19);
            *(_QWORD *)(*((_QWORD *)this + 38) + 40 * v16 + 8) = 0LL;
          }
        }
        v20 = *(struct CVisual **)(*((_QWORD *)this + 38) + 40 * v16 + 16);
        if ( v20 )
        {
          inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 66) + 32LL), v20);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v66 = 1940;
            goto LABEL_64;
          }
          v21 = *(CBaseObject **)(*((_QWORD *)this + 38) + 40 * v16 + 16);
          if ( v21 )
          {
            CBaseObject::Release(v21);
            *(_QWORD *)(*((_QWORD *)this + 38) + 40 * v16 + 16) = 0LL;
          }
        }
        v12 = IsTrulyMaximized;
        v15 = v71;
        v22 = *(_QWORD *)(*((_QWORD *)this + 38) + 40 * v16);
        *(_BYTE *)(v22 + 594) |= 0x80u;
        v23 = *(_QWORD *)(*((_QWORD *)this + 38) + 40 * v16);
        *(_BYTE *)(v23 + 594) |= 0x40u;
      }
    }
LABEL_30:
    v73 = a2;
    v24 = (char *)this + 304;
    v75 = v12;
    v76 = v15;
    v74 = 0LL;
    inserted = DynArray<LivePreviewVisual,0>::InsertAt((char *)this + 304, &v73);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v66 = 1953;
      goto LABEL_64;
    }
    v67 = 1;
    if ( *((_DWORD *)this + 142) < 0x1Eu )
    {
      v27 = *((_BYTE *)a2 + 594) & 0xBF | (*((_QWORD *)a2 + 46) != 0LL ? 0x40 : 0);
      *((_BYTE *)a2 + 594) = v27;
      v28 = *((_DWORD *)this + 143);
      if ( v28 >= 0xA )
        *((_BYTE *)a2 + 594) = v27 | 0x80;
      else
        *((_DWORD *)this + 143) = v28 + 1;
      v29 = *((_BYTE *)a2 + 594);
      if ( (v29 & 0x40) == 0 || v29 >= 0 )
      {
        v30 = v70;
        if ( v29 >= 0 )
        {
          v71 = 0LL;
          inserted = CTopLevelWindow::CloneVisualTreeForLivePreview(v70, 0, v25, v26, &v71);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v66 = 1975;
            goto LABEL_64;
          }
          v31 = (struct CVisual **)v71;
          inserted = CVisual::RenderRecursive(v71);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v66 = 1976;
            goto LABEL_64;
          }
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 64) + 32LL),
                       v31,
                       0LL,
                       0,
                       1);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v66 = 1977;
            goto LABEL_64;
          }
          *(_QWORD *)(*(_QWORD *)v24 + 8LL) = v31;
        }
        if ( (*((_BYTE *)a2 + 594) & 0x40) == 0 )
        {
          v70 = 0LL;
          inserted = CTopLevelWindow::CloneVisualTreeForLivePreview(v30, 1, v25, v26, &v70);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v66 = 1985;
            goto LABEL_64;
          }
          v32 = (struct CVisual **)v70;
          inserted = CVisual::RenderRecursive(v70);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v66 = 1986;
            goto LABEL_64;
          }
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 66) + 32LL),
                       v32,
                       0LL,
                       0,
                       1);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v66 = 1987;
            goto LABEL_64;
          }
          *(_QWORD *)(*(_QWORD *)v24 + 16LL) = v32;
        }
        ++*((_DWORD *)this + 142);
      }
      goto LABEL_108;
    }
    *((_BYTE *)a2 + 594) |= 0xC0u;
LABEL_107:
    if ( !v69 )
    {
LABEL_109:
      v10 = v67;
      goto LABEL_110;
    }
LABEL_108:
    inserted = CLivePreview::_UpdateResources((LPARAM)this);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v66 = 2007;
      goto LABEL_64;
    }
    goto LABEL_109;
  }
LABEL_110:
  if ( v72 )
    *v72 = v10;
  return v5;
}
