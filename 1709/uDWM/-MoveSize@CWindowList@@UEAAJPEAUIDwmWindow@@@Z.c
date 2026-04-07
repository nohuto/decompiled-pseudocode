/*
 * XREFs of ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180028630
 * Callers:
 *     <none>
 * Callees:
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x1800038D4 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180010BB0 (--0CWindowData@@QEAA@XZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18001144C (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180011570 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800182E4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x1800263D0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800272C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180027A40 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x18007A034 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x18007D108 (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x18009A768 (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x18009A854 (-OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT.c)
 *     ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x18009A8F8 (-OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z.c)
 */

__int64 __fastcall CWindowList::MoveSize(CWindowList *this, struct IDwmWindow *a2)
{
  struct IDwmWindow *v3; // r12
  unsigned int v4; // r14d
  struct CWindowData *v5; // rbx
  int v6; // edi
  struct CWindowData *v7; // rsi
  char v8; // r13
  struct tagRECT *v9; // r15
  int v10; // r8d
  int v11; // edi
  __int64 v12; // rcx
  int v13; // esi
  unsigned int v14; // edx
  LONG v15; // esi
  LONG v16; // edi
  int v17; // r8d
  __int64 v18; // rcx
  unsigned int v19; // edx
  LONG x; // ecx
  LONG y; // eax
  __int64 v22; // rax
  char v23; // al
  unsigned int v24; // esi
  __int64 v25; // r13
  CWindowData *v26; // r15
  char v27; // al
  int v28; // r8d
  __int64 v29; // rcx
  unsigned int v30; // edx
  RECT v31; // xmm0
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  unsigned int v35; // edx
  RECT v36; // xmm0
  __int64 v37; // rax
  unsigned int v38; // ebx
  __int64 v40; // rsi
  char v41; // di
  __int64 v42; // rax
  int v43; // ecx
  __int64 v44; // rbx
  char v45; // r13
  CWindowList *v46; // rcx
  int updated; // eax
  unsigned int v48; // r8d
  __int64 v49; // rcx
  unsigned int v50; // edx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  struct CStoryboard *v55; // r15
  unsigned int v56; // r12d
  __int64 v57; // r9
  __int64 v58; // rcx
  const struct CStoryboard *v59; // r15
  struct tagPOINT v60; // r15
  unsigned int v61; // r12d
  CWindowData *v62; // rax
  CWindowData *v63; // rax
  int v64; // eax
  __int64 v65; // rax
  struct tagPOINT *v66; // rcx
  bool v67; // di
  HWND v68; // rcx
  int v69; // ecx
  wchar_t **v70; // rdx
  WCHAR *v71; // rax
  int v72; // r9d
  int v73; // r8d
  int v74; // [rsp+30h] [rbp-D0h]
  struct tagPOINT v75; // [rsp+38h] [rbp-C8h] BYREF
  struct tagPOINT v76; // [rsp+48h] [rbp-B8h]
  struct CStoryboard *v77; // [rsp+50h] [rbp-B0h]
  struct IDwmWindow *v78; // [rsp+58h] [rbp-A8h]
  CWindowList *v79; // [rsp+60h] [rbp-A0h]
  struct tagPOINT v80; // [rsp+68h] [rbp-98h] BYREF
  int v81; // [rsp+70h] [rbp-90h]
  int v82; // [rsp+74h] [rbp-8Ch]
  RECT rc1; // [rsp+78h] [rbp-88h] BYREF
  RECT v84; // [rsp+88h] [rbp-78h] BYREF
  RECT rc2; // [rsp+98h] [rbp-68h] BYREF
  RECT v86; // [rsp+A8h] [rbp-58h] BYREF
  WCHAR ClassName[264]; // [rsp+C0h] [rbp-40h] BYREF

  v79 = this;
  v78 = a2;
  v76 = (struct tagPOINT)&CDesktopManager::s_csDwmInstance;
  v3 = a2;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v3 + 8LL))(v3);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v3 + 16LL))(v3) )
    goto LABEL_2;
  v62 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v62 || (v63 = CWindowData::CWindowData(v62), (v7 = v63) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x5BAu);
    goto LABEL_109;
  }
  *((_QWORD *)v63 + 3) = v3;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v3)(v3, v63);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v3 + 24LL))(v3);
  v64 = CWindowList::SyncWindowData(this, v3, v7);
  v6 = v64;
  if ( v64 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v64, 0x5BEu);
  v74 = v6;
  if ( v6 < 0 )
  {
LABEL_109:
    v38 = v6;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x888u);
    goto LABEL_38;
  }
  if ( !v5 )
  {
    v38 = v6;
    goto LABEL_38;
  }
  v8 = 0;
  (*(void (__fastcall **)(struct IDwmWindow *, struct tagPOINT *))(*(_QWORD *)v3 + 88LL))(v3, &v80);
  v9 = (struct tagRECT *)((char *)v5 + 188);
  v10 = 0;
  v11 = v80.x - *((_DWORD *)v5 + 47);
  v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
  v13 = v80.y - *((_DWORD *)v5 + 48);
  v14 = *(_DWORD *)(v12 + 72);
  if ( v14 )
  {
    while ( **(_QWORD **)(*(_QWORD *)(v12 + 48) + 8LL * (unsigned int)v10) != *((_QWORD *)v5 + 5) )
    {
      if ( ++v10 >= v14 )
        goto LABEL_6;
    }
    if ( v10 >= 0 )
    {
      _mm_lfence();
      v51 = *(_QWORD *)(*(_QWORD *)(v12 + 48) + 8LL * (unsigned int)v10);
      if ( (*(_BYTE *)(v51 + 40) & 4) != 0 )
      {
        v65 = *(_QWORD *)(v51 + 104);
        v11 = v80.x - v65;
        v13 = v80.y - HIDWORD(v65);
      }
    }
  }
LABEL_6:
  if ( v11 || v13 )
  {
    v76 = v80;
    v77 = (struct CStoryboard *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v8 = 0;
    if ( *((_DWORD *)v77 + 10) )
    {
      v55 = v77;
      v56 = 0;
      do
      {
        v77 = *(struct CStoryboard **)(*((_QWORD *)v55 + 2) + 8LL * v56);
        if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v56, (HWND *)v5, v77, 0) )
          v8 |= (int)CWindowPropertyTracker::OnWindowPositionChange(
                       (struct CStoryboard *)((char *)v55 + 48),
                       v77,
                       v5,
                       v76) >= 0;
        ++v56;
      }
      while ( v56 < *((_DWORD *)v55 + 10) );
      v3 = v78;
      v9 = (struct tagRECT *)((char *)v5 + 188);
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v8 )
    {
      OffsetRect(v9, v11, v13);
      v48 = 0;
      v49 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
      v50 = *(_DWORD *)(v49 + 48);
      if ( v50 )
      {
        v57 = *(_QWORD *)(v49 + 24);
        while ( 1 )
        {
          v58 = v57 + 24LL * v48;
          if ( *(_BYTE *)(v58 + 16) )
          {
            if ( *((_QWORD *)v5 + 50) == *(_QWORD *)v58 )
              break;
          }
          if ( ++v48 >= v50 )
            goto LABEL_54;
        }
        v66 = *(struct tagPOINT **)(v58 + 8);
        v75.x = v9->left;
        v75.y = *((_DWORD *)v5 + 48);
        CVisual::SetOffset(v66, &v75);
      }
LABEL_54:
      CWindowList::OnPositionChange(v79, (struct tagRECT *)v5, 1);
    }
  }
  v15 = v81 - v80.x;
  if ( v81 - v80.x < 0 )
    v15 = 0;
  v16 = v82 - v80.y;
  if ( v82 - v80.y < 0 )
    v16 = 0;
  v17 = 0;
  v18 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
  v19 = *(_DWORD *)(v18 + 72);
  if ( !v19 )
    goto LABEL_13;
  while ( **(_QWORD **)(*(_QWORD *)(v18 + 48) + 8LL * (unsigned int)v17) != *((_QWORD *)v5 + 5) )
  {
    if ( ++v17 >= v19 )
      goto LABEL_13;
  }
  if ( v17 >= 0
    && (_mm_lfence(), v52 = *(_QWORD *)(*(_QWORD *)(v18 + 48) + 8LL * (unsigned int)v17),
                      (*(_BYTE *)(v52 + 40) & 2) != 0) )
  {
    v75 = *(struct tagPOINT *)(v52 + 112);
    y = v75.y;
    x = v75.x;
  }
  else
  {
LABEL_13:
    x = v9->right - v9->left;
    if ( x < 0 )
      x = 0;
    y = v9->bottom - v9->top;
    if ( y < 0 )
      y = 0;
  }
  if ( v15 == x && v16 == y )
  {
    if ( !v8 )
    {
LABEL_20:
      v22 = *((_QWORD *)v5 + 68);
      v23 = v22 && (*(_BYTE *)(v22 + 593) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR(v5);
      if ( *((_BYTE *)v5 + 593) >> 7 != v23 )
        CWindowData::UpdateOwnerLists(v5, !(*((_BYTE *)v5 + 593) >> 7));
      v24 = 0;
      if ( *((_DWORD *)v5 + 144) )
      {
        do
        {
          v25 = *(_QWORD *)(*((_QWORD *)v5 + 69) + 8LL * v24);
          v26 = *(CWindowData **)(v25 + 544);
          if ( v26
            && (*((_BYTE *)v26 + 593) & 0x40) != 0
            && (*(_BYTE *)(v25 + 592) & 1) != 0
            && (*(_DWORD *)(v25 + 100) & 0xC00000) != 0xC00000
            && (*(char *)(v25 + 104) >= 0 || (*(_DWORD *)(v25 + 600) & 0xFFF) == 0x11) )
          {
            if ( *(_QWORD *)(v25 + 32) )
            {
              v67 = CWindowData::WillEndAnimationCloaked((CWindowData *)v25);
              if ( v67 == CWindowData::WillEndAnimationCloaked(v26)
                && ContainsRect(
                     (const struct tagRECT *)(*(_QWORD *)(v25 + 544) + 48LL),
                     (const struct tagRECT *)(v25 + 48)) )
              {
                v68 = *(HWND *)(v25 + 40);
                ClassName[0] = 0;
                if ( !GetClassNameW(v68, ClassName, 260) )
                {
LABEL_127:
                  v27 = 1;
                  goto LABEL_28;
                }
                v69 = 0;
                v70 = &off_1800A7738;
                while ( 1 )
                {
                  v71 = ClassName;
                  do
                  {
                    v72 = *(WCHAR *)((char *)v71 + (char *)*v70 - (char *)ClassName);
                    v73 = *v71 - v72;
                    if ( v73 )
                      break;
                    ++v71;
                  }
                  while ( v72 );
                  if ( !v73 )
                    break;
                  ++v69;
                  ++v70;
                  if ( v69 )
                    goto LABEL_127;
                }
              }
            }
          }
          v27 = 0;
LABEL_28:
          if ( *(_BYTE *)(v25 + 593) >> 7 != v27 )
            CWindowData::UpdateOwnerLists((CWindowData *)v25, !(*(_BYTE *)(v25 + 593) >> 7));
        }
        while ( ++v24 < *((_DWORD *)v5 + 144) );
      }
    }
LABEL_31:
    v28 = 0;
    v29 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
    v30 = *(_DWORD *)(v29 + 72);
    if ( !v30 )
      goto LABEL_32;
    while ( **(_QWORD **)(*(_QWORD *)(v29 + 48) + 8LL * (unsigned int)v28) != *((_QWORD *)v5 + 5) )
    {
      if ( ++v28 >= v30 )
        goto LABEL_32;
    }
    if ( v28 >= 0
      && (_mm_lfence(),
          v53 = *(_QWORD *)(*(_QWORD *)(v29 + 48) + 8LL * (unsigned int)v28),
          (*(_BYTE *)(v53 + 40) & 8) != 0) )
    {
      v31 = *(RECT *)(v53 + 120);
    }
    else
    {
LABEL_32:
      v31 = *(RECT *)((char *)v5 + 204);
    }
    v32 = 0LL;
    v33 = *((_QWORD *)v5 + 5);
    rc2 = v31;
    v34 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
    v35 = *(_DWORD *)(v34 + 72);
    if ( !v35 )
      goto LABEL_34;
    while ( **(_QWORD **)(*(_QWORD *)(v34 + 48) + 8LL * (unsigned int)v32) != v33 )
    {
      v32 = (unsigned int)(v32 + 1);
      if ( (unsigned int)v32 >= v35 )
        goto LABEL_34;
    }
    if ( (int)v32 >= 0
      && (_mm_lfence(),
          v54 = *(_QWORD *)(*(_QWORD *)(v34 + 48) + 8LL * (unsigned int)v32),
          (*(_BYTE *)(v54 + 40) & 0x10) != 0) )
    {
      v36 = *(RECT *)(v54 + 136);
    }
    else
    {
LABEL_34:
      v36 = *(RECT *)((char *)v5 + 220);
    }
    v37 = *(_QWORD *)v3;
    v86 = v36;
    (*(void (__fastcall **)(struct IDwmWindow *, RECT *, __int64, __int64))(v37 + 96))(v3, &rc1, v32, v33);
    (*(void (__fastcall **)(struct IDwmWindow *, RECT *))(*(_QWORD *)v3 + 104LL))(v3, &v84);
    (*(void (__fastcall **)(struct IDwmWindow *, __int64))(*(_QWORD *)v3 + 112LL))(v3, (__int64)v5 + 236);
    if ( !EqualRect(&rc1, &rc2) || !EqualRect(&v84, &v86) )
    {
      v40 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v41 = 0;
      if ( *(_DWORD *)(v40 + 40) )
      {
        do
        {
          v59 = *(const struct CStoryboard **)(*(_QWORD *)(v40 + 16) + 8LL * v4);
          if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v4, (HWND *)v5, v59, 0) )
            v41 |= (int)CWindowPropertyTracker::OnWindowClientContentRectChange(
                          (CWindowPropertyTracker *)(v40 + 48),
                          v59,
                          v5,
                          &rc1,
                          &v84) >= 0;
          ++v4;
        }
        while ( v4 < *(_DWORD *)(v40 + 40) );
      }
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( !v41 )
      {
        v42 = *((_QWORD *)v5 + 50);
        *(RECT *)((char *)v5 + 204) = rc1;
        *(RECT *)((char *)v5 + 220) = v84;
        if ( v42 )
        {
          v43 = *(_DWORD *)(v42 + 80);
          if ( (v43 & 0x4000000) == 0 )
          {
            v44 = *(_QWORD *)(v42 + 24);
            for ( *(_DWORD *)(v42 + 80) = v43 | 0x4000000; v44; v44 = *(_QWORD *)(v44 + 24) )
            {
              if ( (*(_BYTE *)(v44 + 80) & 1) != 0 )
                break;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 32LL))(v44);
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
  v76.x = v15;
  v76.y = v16;
  v75 = (struct tagPOINT)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v45 = 0;
  if ( *(_DWORD *)(*(_QWORD *)&v75 + 40LL) )
  {
    v60 = v75;
    v61 = 0;
    do
    {
      v75 = *(struct tagPOINT *)(*(_QWORD *)(*(_QWORD *)&v60 + 16LL) + 8LL * v61);
      if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v61, (HWND *)v5, *(struct CStoryboard **)&v75, 0) )
        v45 |= (int)CWindowPropertyTracker::OnWindowSizeChange(
                      (CWindowPropertyTracker *)(*(_QWORD *)&v60 + 48LL),
                      *(const struct CStoryboard **)&v75,
                      v5,
                      (struct tagSIZE)v76) >= 0;
      ++v61;
    }
    while ( v61 < *(_DWORD *)(*(_QWORD *)&v60 + 40LL) );
    v3 = v78;
    v9 = (struct tagRECT *)((char *)v5 + 188);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( v45 )
    goto LABEL_31;
  v46 = v79;
  *((_DWORD *)v5 + 49) = v15 + v9->left;
  *((_DWORD *)v5 + 50) = v16 + *((_DWORD *)v5 + 48);
  updated = CWindowList::UpdateWindowScale(v46, v5, 0);
  v74 = updated;
  if ( updated >= 0 )
    goto LABEL_20;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x8C1u);
LABEL_37:
  v38 = v74;
LABEL_38:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v38;
}
