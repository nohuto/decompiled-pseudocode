/*
 * XREFs of ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180038224
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180031C10 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180034190 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003461C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000B6E8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180019900 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180024894 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x18006EA10 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x180075144 (-InsertAt@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180076240 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800763BC (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800763EC (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

__int64 __fastcall CLivePreview::OnWindowShowHide(CLivePreview *this, struct CWindowData *a2, bool *a3, char a4)
{
  int v4; // r14d
  unsigned int v5; // ebx
  int v6; // r13d
  char v10; // r15
  CLivePreview *v11; // rcx
  CTopLevelWindow *v12; // r14
  bool IsTrulyMaximized; // r15
  int inserted; // eax
  struct CTopLevelWindow *v15; // rax
  struct CTopLevelWindow *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r14
  struct CVisual *v20; // rdx
  CBaseObject *v21; // rcx
  struct CVisual *v22; // rdx
  CBaseObject *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  char *v26; // r15
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // cl
  unsigned int v30; // eax
  unsigned __int8 v31; // al
  struct CTopLevelWindow *v32; // r14
  struct CTopLevelWindow *v33; // rsi
  __int64 v34; // r14
  __int64 v35; // rdx
  CTopLevelWindow *v36; // rbx
  int v37; // r9d
  CBaseObject *v38; // rcx
  unsigned int v39; // eax
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v42; // rcx
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int64 v45; // r14
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
  int v58; // r15d
  __int64 v59; // r13
  unsigned int v60; // eax
  __int64 v61; // r9
  unsigned int v62; // edx
  __int64 v63; // rax
  __int64 v64; // rcx
  unsigned int v65; // [rsp+20h] [rbp-E0h]
  char v66; // [rsp+30h] [rbp-D0h]
  char v67; // [rsp+31h] [rbp-CFh]
  struct CTopLevelWindow *v68; // [rsp+38h] [rbp-C8h] BYREF
  CTopLevelWindow *v69; // [rsp+40h] [rbp-C0h]
  bool *v70; // [rsp+48h] [rbp-B8h]
  struct CWindowData *v71; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v72; // [rsp+58h] [rbp-A8h]
  bool v73; // [rsp+68h] [rbp-98h]
  struct CTopLevelWindow *v74; // [rsp+70h] [rbp-90h]
  WCHAR ClassName[264]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *((_DWORD *)this + 90);
  v5 = 0;
  v6 = *((_DWORD *)this + 82);
  v70 = a3;
  if ( v4 <= 0 && v6 <= 0 )
    return v5;
  v10 = 0;
  v67 = 0;
  v66 = 0;
  if ( a4 || !CLivePreview::_IsEligibleForLivePreview(this, a2) )
  {
    v34 = (unsigned int)(v4 - 1);
    if ( (int)v34 >= 0 )
    {
      v35 = *((_QWORD *)this + 42);
      while ( *(struct CWindowData **)(v35 + 48 * v34 + 8) != a2 )
      {
        v34 = (unsigned int)(v34 - 1);
        if ( (int)v34 < 0 )
          goto LABEL_74;
      }
      v36 = *(CTopLevelWindow **)(v35 + 48 * v34);
      CTopLevelWindow::StopLivePreviewAnimation(v36);
      inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v36 + 3) + 32LL), v36);
      v5 = inserted;
      if ( inserted < 0 )
      {
        v65 = 1857;
        goto LABEL_64;
      }
      v38 = *(CBaseObject **)(*((_QWORD *)this + 42) + 48 * v34 + 16);
      if ( v38 )
      {
        CBaseObject::Release(v38);
        *(_QWORD *)(*((_QWORD *)this + 42) + 48 * v34 + 16) = 0LL;
      }
      v39 = *((_DWORD *)this + 90);
      if ( (unsigned int)v34 >= v39 )
      {
        v5 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
        v65 = 1860;
LABEL_66:
        v37 = -2147024809;
        goto LABEL_67;
      }
      v40 = *((_QWORD *)this + 42);
      if ( (unsigned int)v34 < v39 - 1 )
      {
        do
        {
          v41 = (unsigned int)v34;
          LODWORD(v34) = v34 + 1;
          v42 = 6 * v41;
          v43 = *(_OWORD *)(v40 + 48LL * (unsigned int)v34 + 16);
          *(_OWORD *)(v40 + 8 * v42) = *(_OWORD *)(v40 + 48LL * (unsigned int)v34);
          v44 = *(_OWORD *)(v40 + 48LL * (unsigned int)v34 + 32);
          *(_OWORD *)(v40 + 8 * v42 + 16) = v43;
          *(_OWORD *)(v40 + 8 * v42 + 32) = v44;
        }
        while ( (unsigned int)v34 < *((_DWORD *)this + 90) - 1 );
      }
      --*((_DWORD *)this + 90);
      v5 = 0;
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
          v65 = 1872;
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
          v65 = 1878;
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
        v5 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
        v65 = 1887;
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
      v5 = 0;
      v67 = 1;
    }
LABEL_96:
    v58 = *((_DWORD *)this + 106) - 1;
    if ( v58 >= 0 )
    {
      v59 = 16LL * v58;
      do
      {
        v69 = *(CTopLevelWindow **)(*((_QWORD *)this + 50) + v59);
        if ( *((struct CWindowData **)v69 + 90) == a2 )
        {
          v60 = *((_DWORD *)this + 106);
          if ( v58 < v60 )
          {
            v61 = *((_QWORD *)this + 50);
            v62 = v58;
            if ( v58 < v60 - 1 )
            {
              do
              {
                v63 = 2LL * v62;
                v64 = 2LL * ++v62;
                *(_OWORD *)(v61 + 8 * v63) = *(_OWORD *)(v61 + 8 * v64);
              }
              while ( v62 < *((_DWORD *)this + 106) - 1 );
            }
            --*((_DWORD *)this + 106);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
          }
          VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 63) + 32LL), v69);
        }
        v59 -= 16LL;
        --v58;
      }
      while ( v58 >= 0 );
    }
    goto LABEL_106;
  }
  if ( *((_BYTE *)this + 280)
    && !CLivePreview::_IsInLivePreview(this, a2)
    && (!GetClassNameW(*((HWND *)a2 + 5), ClassName, 260) || _wcsicmp(ClassName, L"SysShadow")) )
  {
    v69 = (CTopLevelWindow *)*((_QWORD *)a2 + 50);
    v12 = v69;
    IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v11, a2);
    inserted = CVisual::RenderRecursive(v69);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v65 = 1921;
LABEL_64:
      v37 = inserted;
LABEL_67:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, v65);
      return v5;
    }
    v15 = (struct CTopLevelWindow *)MonitorFromWindow(*((HWND *)a2 + 5), 1u);
    v68 = v15;
    v16 = v15;
    if ( IsTrulyMaximized )
    {
      v17 = 0LL;
      if ( v6 > 0 )
      {
        v18 = *((_QWORD *)this + 38);
        while ( !*(_BYTE *)(v18 + 40 * v17 + 24) || *(struct CTopLevelWindow **)(v18 + 40 * v17 + 32) != v15 )
        {
          v17 = (unsigned int)(v17 + 1);
          if ( (int)v17 >= v6 )
            goto LABEL_30;
        }
        v19 = 5 * v17;
        v20 = *(struct CVisual **)(v18 + 40 * v17 + 8);
        if ( v20 )
        {
          inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 64) + 32LL), v20);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v65 = 1934;
            goto LABEL_64;
          }
          v21 = *(CBaseObject **)(*((_QWORD *)this + 38) + 8 * v19 + 8);
          if ( v21 )
          {
            CBaseObject::Release(v21);
            *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v19 + 8) = 0LL;
          }
        }
        v22 = *(struct CVisual **)(*((_QWORD *)this + 38) + 8 * v19 + 16);
        if ( v22 )
        {
          inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 66) + 32LL), v22);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v65 = 1940;
            goto LABEL_64;
          }
          v23 = *(CBaseObject **)(*((_QWORD *)this + 38) + 8 * v19 + 16);
          if ( v23 )
          {
            CBaseObject::Release(v23);
            *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v19 + 16) = 0LL;
          }
        }
        v16 = v68;
        v24 = *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v19);
        *(_BYTE *)(v24 + 594) |= 0x80u;
        v25 = *(_QWORD *)(*((_QWORD *)this + 38) + 8 * v19);
        v12 = v69;
        *(_BYTE *)(v25 + 594) |= 0x40u;
      }
    }
LABEL_30:
    v73 = IsTrulyMaximized;
    v71 = a2;
    v26 = (char *)this + 304;
    v74 = v16;
    v72 = 0LL;
    inserted = DynArray<LivePreviewVisual,0>::InsertAt((char *)this + 304, &v71);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v65 = 1953;
      goto LABEL_64;
    }
    v66 = 1;
    if ( *((_DWORD *)this + 142) < 0x1Eu )
    {
      v29 = *((_BYTE *)a2 + 594) & 0xBF | (*((_QWORD *)a2 + 46) != 0LL ? 0x40 : 0);
      *((_BYTE *)a2 + 594) = v29;
      v30 = *((_DWORD *)this + 143);
      if ( v30 >= 0xA )
        *((_BYTE *)a2 + 594) = v29 | 0x80;
      else
        *((_DWORD *)this + 143) = v30 + 1;
      v31 = *((_BYTE *)a2 + 594);
      if ( (v31 & 0x40) == 0 || v31 < 0x80u )
      {
        if ( v31 < 0x80u )
        {
          v68 = 0LL;
          inserted = CTopLevelWindow::CloneVisualTreeForLivePreview(v12, 0, v27, v28, &v68);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v65 = 1975;
            goto LABEL_64;
          }
          v32 = v68;
          inserted = CVisual::RenderRecursive(v68);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v65 = 1976;
            goto LABEL_64;
          }
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 64) + 32LL),
                       v32,
                       0LL,
                       0,
                       1);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v65 = 1977;
            goto LABEL_64;
          }
          *(_QWORD *)(*(_QWORD *)v26 + 8LL) = v32;
        }
        if ( (*((_BYTE *)a2 + 594) & 0x40) == 0 )
        {
          v68 = 0LL;
          inserted = CTopLevelWindow::CloneVisualTreeForLivePreview(v69, 1, v27, v28, &v68);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v65 = 1985;
            goto LABEL_64;
          }
          v33 = v68;
          inserted = CVisual::RenderRecursive(v68);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v65 = 1986;
            goto LABEL_64;
          }
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 66) + 32LL),
                       v33,
                       0LL,
                       0,
                       1);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v65 = 1987;
            goto LABEL_64;
          }
          *(_QWORD *)(*(_QWORD *)v26 + 16LL) = v33;
        }
        ++*((_DWORD *)this + 142);
      }
      goto LABEL_107;
    }
    *((_BYTE *)a2 + 594) |= 0xC0u;
LABEL_106:
    if ( !v67 )
    {
LABEL_108:
      v10 = v66;
      goto LABEL_109;
    }
LABEL_107:
    inserted = CLivePreview::_UpdateResources((LPARAM)this);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v65 = 2007;
      goto LABEL_64;
    }
    goto LABEL_108;
  }
LABEL_109:
  if ( v70 )
    *v70 = v10;
  return v5;
}
