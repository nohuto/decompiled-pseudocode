/*
 * XREFs of ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A610
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000D00C (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18002CA20 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18002E2A0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002E490 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18002E828 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z @ 0x180032CC0 (-SetHolographic@CWindowList@@UEAAJPEAUIDwmWindow@@_N@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003DBAC (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ @ 0x1800808E4 (-LivePreviewAnimation_Flipped@CTopLevelWindow@@AEAAJXZ.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180081AD8 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?SendWindowStyleChangedEvent@CTopLevelWindow@@CAXPEAVCWindowData@@I@Z @ 0x180013BDC (-SendWindowStyleChangedEvent@CTopLevelWindow@@CAXPEAVCWindowData@@I@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180014F00 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CAX_NW4Rep.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180019A30 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ConnectToParent@CVisual@@QEAAJ_N@Z @ 0x1800236E0 (-ConnectToParent@CVisual@@QEAAJ_N@Z.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180023778 (-Unhide@CVisual@@QEAAXXZ.c)
 *     ?Hide@CVisual@@QEAAXXZ @ 0x1800237B0 (-Hide@CVisual@@QEAAXXZ.c)
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180024260 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     ?IsTaskbarWindow@CTopLevelWindow@@AEAA_NXZ @ 0x18002A488 (-IsTaskbarWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x18007EFB4 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ShowWindow(CTopLevelWindow *this, __int64 a2)
{
  __int64 v2; // r8
  char v3; // di
  CTopLevelWindow *v4; // rbx
  __int64 v5; // rax
  unsigned __int8 v6; // al
  unsigned int v7; // r12d
  CProjectionBorderVisual *v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r15
  unsigned int v20; // r8d
  __int64 v21; // r9
  __int64 v22; // r9
  LONG v23; // edx
  LONG v24; // r8d
  LONG v25; // eax
  __int64 v26; // r10
  __int64 v27; // r12
  __int64 v28; // r13
  int v29; // r15d
  int v30; // r11d
  int v31; // ecx
  int v32; // r15d
  int v33; // r11d
  LONG v34; // r8d
  unsigned __int8 v35; // cl
  struct _RTL_GENERIC_TABLE *v36; // rcx
  char *v37; // rax
  _UNKNOWN **v38; // rdx
  _QWORD *i; // rax
  __int64 v40; // rcx
  int v41; // eax
  CVisual *v42; // rdi
  void (__fastcall *v43)(CVisual *); // rax
  bool v45; // dl
  struct CVisual *v46; // rdx
  __int64 v47; // rcx
  unsigned int v48; // [rsp+30h] [rbp-B8h]
  __int64 v49; // [rsp+38h] [rbp-B0h]
  __int64 v50; // [rsp+40h] [rbp-A8h]
  _QWORD Buffer[2]; // [rsp+50h] [rbp-98h] BYREF
  __int128 v52; // [rsp+60h] [rbp-88h]
  __int128 v53; // [rsp+70h] [rbp-78h]
  __int64 v54; // [rsp+80h] [rbp-68h]
  char v55; // [rsp+88h] [rbp-60h]
  struct tagRECT rcDst; // [rsp+A0h] [rbp-48h] BYREF

  v2 = *((unsigned __int8 *)this + 241);
  v3 = a2;
  v4 = this;
  if ( (v2 & 1) != 0 )
  {
    v3 = 1;
  }
  else
  {
    v5 = *((_QWORD *)this + 90);
    this = (CTopLevelWindow *)*(unsigned __int8 *)(v5 + 596);
    LOBYTE(this) = (unsigned __int8)this & 1;
    if ( (_BYTE)this || (v2 & 4) != 0 )
    {
      v3 = 0;
LABEL_5:
      v6 = *(_BYTE *)(v5 + 592);
      if ( (v6 & 1) != 0 && ((unsigned __int8)~(_BYTE)this & (unsigned __int8)~(v6 >> 2) & 1) != 0 )
      {
        v7 = CVisual::ConnectToParent(*((CVisual **)v4 + 32), 1);
        v48 = v7;
        if ( (*((_BYTE *)v4 + 240) & 1) == 0 )
        {
          CVisual::Hide(v4);
          *((_BYTE *)v4 + 240) |= 1u;
        }
        goto LABEL_10;
      }
      v7 = CVisual::ConnectToParent(*((CVisual **)v4 + 32), 0);
      v48 = v7;
      if ( (*((_BYTE *)v4 + 240) & 1) == 0 )
        goto LABEL_10;
LABEL_56:
      CVisual::Unhide(v4);
      *((_BYTE *)v4 + 240) &= ~1u;
      goto LABEL_10;
    }
    if ( !(_BYTE)a2 )
      goto LABEL_5;
  }
  wil::Feature<__WilFeatureTraits_Feature_WindowStyleUpdates>::ReportUsageToService((__int64)this, a2, v2);
  if ( CTopLevelWindow::IsTaskbarWindow(v4) )
    CTopLevelWindow::SendWindowStyleChangedEvent(*((struct CWindowData **)v4 + 90), *((_DWORD *)v4 + 146) & 0xFFF90F9F);
  v7 = CVisual::ConnectToParent(*((CVisual **)v4 + 32), 1);
  v48 = v7;
  if ( (*((_BYTE *)v4 + 240) & 1) != 0 )
    goto LABEL_56;
LABEL_10:
  v8 = *(CProjectionBorderVisual **)(*((_QWORD *)v4 + 90) + 416LL);
  if ( v8 )
  {
    v45 = v3 && (*((_BYTE *)v4 + 241) & 2) == 0;
    CProjectionBorderVisual::Show(v8, v45);
    v46 = *(struct CVisual **)(*((_QWORD *)v4 + 90) + 416LL);
    v47 = *((_QWORD *)v46 + 3);
    if ( v47 )
      VisualCollection::InsertRelative((VisualCollection *)(v47 + 32), v46, v4, 1u, 1);
  }
  v9 = 0LL;
  v10 = *((_QWORD *)v4 + 90);
  v11 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 51);
  v50 = v11;
  if ( *(_DWORD *)(v11 + 568) )
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v11 + 544) + 8 * v9);
      v13 = *(_QWORD *)(v12 + 400);
      if ( v13 )
      {
        if ( *(_QWORD *)(v12 + 120) == *(_QWORD *)(v10 + 120) )
        {
          v14 = *(_QWORD *)(v13 + 264);
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 336);
            if ( v15 )
            {
              v16 = *(_QWORD *)(v10 + 40);
              v17 = *(_QWORD *)(v14 + 368);
              if ( v16 == v17 )
                goto LABEL_41;
              v18 = *(_QWORD *)(v10 + 400);
              v19 = *(_QWORD *)(v14 + 376);
              v49 = v19;
              if ( v18 )
                break;
            }
          }
        }
      }
LABEL_48:
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)(v11 + 568) )
        return v48;
    }
    v20 = *(_DWORD *)(v15 + 312);
    v21 = 0LL;
    if ( v20 )
    {
      while ( v16 != *(_QWORD *)(*(_QWORD *)(v15 + 288) + 8 * v21) )
      {
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= v20 )
          goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      rcDst = *(struct tagRECT *)(*(_QWORD *)(v18 + 720) + 48LL);
      if ( (*(_BYTE *)(v18 + 240) & 8) != 0 )
        v22 = 636LL;
      else
        v22 = 620LL;
      v23 = *(_DWORD *)(v18 + v22) + rcDst.left;
      rcDst.left = v23;
      v24 = rcDst.right - *(_DWORD *)(v18 + v22 + 4);
      rcDst.right = v24;
      rcDst.top += *(_DWORD *)(v18 + v22 + 8);
      v25 = rcDst.bottom - *(_DWORD *)(v18 + v22 + 12);
      rcDst.bottom = v25;
      v26 = *(_QWORD *)(v18 + 320);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v18 + 328);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v18 + 344);
          if ( v28 )
          {
            v29 = *(_DWORD *)(v18 + 608) - *(_DWORD *)(v18 + v22 + 4);
            v30 = *(_DWORD *)(v18 + 616) - *(_DWORD *)(v18 + v22 + 12);
            v31 = *(_DWORD *)(v18 + 604) - *(_DWORD *)(v18 + v22) - *(_DWORD *)(v26 + 24);
            if ( v31 < 0 )
              v31 = 0;
            v32 = v29 - *(_DWORD *)(v27 + 24);
            if ( v32 < 0 )
              v32 = 0;
            v33 = v30 - *(_DWORD *)(v28 + 28);
            if ( v33 < 0 )
              v33 = 0;
            v34 = v24 - v32;
            v19 = v49;
            rcDst.bottom = v25 - v33;
            rcDst.left = v31 + v23;
            rcDst.right = v34;
          }
        }
      }
      v35 = *(_BYTE *)(v10 + 592);
      if ( (v35 & 1) == 0
        || ((unsigned __int8)~*(_BYTE *)(v10 + 596) & (unsigned __int8)~(v35 >> 2) & 1) == 0
        || (*(_DWORD *)(v10 + 100) & 0x20000000) != 0
        || !IntersectRect(&rcDst, &rcDst, (const RECT *)(v14 + 584)) )
      {
        goto LABEL_48;
      }
      v36 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 51) + 8LL);
      Buffer[1] = 0LL;
      v52 = 0LL;
      v54 = -1LL;
      v55 = 0;
      v53 = 0LL;
      Buffer[0] = v19;
      v37 = (char *)RtlLookupElementGenericTable(v36, Buffer);
      if ( v37 )
        v38 = (_UNKNOWN **)(v37 + 64);
      else
        v38 = &`CWindowList::GetWindowListForDesktop'::`5'::EmptyList;
      for ( i = v38[1]; i != v38; i = (_QWORD *)i[1] )
      {
        v40 = i[5];
        if ( v40 == v17 )
          break;
        if ( v40 == *(_QWORD *)(v10 + 40) )
          goto LABEL_48;
      }
    }
LABEL_41:
    v41 = *(_DWORD *)(v14 + 80);
    if ( (v41 & 0x10000) == 0 )
    {
      v42 = *(CVisual **)(v14 + 24);
      *(_DWORD *)(v14 + 80) = v41 | 0x10000;
      if ( v42 )
      {
        do
        {
          if ( (*((_BYTE *)v42 + 80) & 1) != 0 )
            break;
          v43 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v42 + 32LL);
          if ( v43 == CVisual::SetDirtyChildren )
            CVisual::SetDirtyChildren(v42);
          else
            v43(v42);
          v42 = (CVisual *)*((_QWORD *)v42 + 3);
        }
        while ( v42 );
        v11 = v50;
      }
    }
    goto LABEL_48;
  }
  return v7;
}
