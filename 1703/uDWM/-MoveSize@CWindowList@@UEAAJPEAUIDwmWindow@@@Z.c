/*
 * XREFs of ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F800
 * Callers:
 *     <none>
 * Callees:
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x180004628 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023604 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180033CE0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180034C00 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180035260 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180035A54 (--0CWindowData@@QEAA@XZ.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180036344 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180036468 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180082544 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x1800996C8 (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x18009C5E4 (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 *     ?OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT@@@Z @ 0x18009C6D0 (-OnWindowPositionChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagPOINT.c)
 *     ?OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z @ 0x18009C774 (-OnWindowSizeChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@UtagSIZE@@@Z.c)
 */

__int64 __fastcall CWindowList::MoveSize(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rbx
  int v5; // edi
  struct CWindowData *v6; // rsi
  char v7; // r15
  struct tagRECT *v8; // r14
  int v9; // r9d
  int v10; // edi
  __int64 v11; // rdx
  int v12; // esi
  unsigned int v13; // r8d
  LONG v14; // esi
  LONG v15; // edi
  int v16; // r9d
  _QWORD *v17; // rdx
  unsigned int v18; // r8d
  LONG x; // ecx
  LONG y; // eax
  __int64 v21; // rax
  char v22; // cl
  unsigned __int8 v23; // dl
  unsigned int v24; // esi
  __int64 v25; // r15
  CWindowData *v26; // r14
  char v27; // cl
  unsigned __int8 v28; // dl
  int v29; // r9d
  __int64 v30; // rdx
  unsigned int v31; // r8d
  RECT v32; // xmm0
  __int64 v33; // r9
  __int64 v34; // r10
  __int64 v35; // rdx
  __int64 v36; // r8
  RECT v37; // xmm0
  __int64 v38; // rax
  unsigned int v39; // ebx
  __int64 v41; // rsi
  char v42; // di
  unsigned int i; // r14d
  __int64 v44; // rax
  int v45; // ecx
  __int64 v46; // rbx
  __int64 v47; // r13
  char v48; // r15
  CWindowList *v49; // rcx
  int updated; // eax
  __int64 v51; // r13
  unsigned int v52; // r8d
  __int64 v53; // rcx
  unsigned int v54; // edx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdx
  const struct CStoryboard *v59; // r15
  unsigned int v60; // r14d
  __int64 v61; // r9
  __int64 v62; // rcx
  unsigned int v63; // r14d
  CWindowData *v64; // rax
  CWindowData *v65; // rax
  int v66; // eax
  __int64 v67; // rax
  struct tagPOINT *v68; // rcx
  bool v69; // di
  HWND v70; // rcx
  int v71; // ecx
  wchar_t **v72; // rdx
  WCHAR *v73; // rax
  int v74; // r9d
  int v75; // r8d
  int v76; // [rsp+30h] [rbp-D0h]
  struct tagPOINT v77; // [rsp+38h] [rbp-C8h] BYREF
  CAnimationScheduler *v78; // [rsp+40h] [rbp-C0h]
  struct tagPOINT v79; // [rsp+48h] [rbp-B8h]
  CWindowList *v80; // [rsp+50h] [rbp-B0h]
  struct tagPOINT v81; // [rsp+58h] [rbp-A8h] BYREF
  int v82; // [rsp+60h] [rbp-A0h]
  int v83; // [rsp+64h] [rbp-9Ch]
  RECT rc1; // [rsp+68h] [rbp-98h] BYREF
  RECT v85; // [rsp+78h] [rbp-88h] BYREF
  RECT rc2; // [rsp+88h] [rbp-78h] BYREF
  RECT v87; // [rsp+98h] [rbp-68h] BYREF
  WCHAR ClassName[264]; // [rsp+B0h] [rbp-50h] BYREF

  v80 = this;
  v79 = (struct tagPOINT)&CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v6 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v6 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v64 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v64 || (v65 = CWindowData::CWindowData(v64), (v6 = v65) == 0LL) )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x57Cu);
    goto LABEL_108;
  }
  *((_QWORD *)v65 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v65);
  *((_QWORD *)v6 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v66 = CWindowList::SyncWindowData(this, a2, v6);
  v5 = v66;
  if ( v66 >= 0 )
LABEL_2:
    v4 = v6;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v66, 0x580u);
  v76 = v5;
  if ( v5 < 0 )
  {
LABEL_108:
    v39 = v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x84Fu);
    goto LABEL_38;
  }
  if ( !v4 )
  {
    v39 = v5;
    goto LABEL_38;
  }
  v7 = 0;
  (*(void (__fastcall **)(struct IDwmWindow *, struct tagPOINT *))(*(_QWORD *)a2 + 88LL))(a2, &v81);
  v8 = (struct tagRECT *)((char *)v4 + 188);
  v9 = 0;
  v10 = v81.x - *((_DWORD *)v4 + 47);
  v11 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  v12 = v81.y - *((_DWORD *)v4 + 48);
  v13 = *(_DWORD *)(v11 + 72);
  if ( v13 )
  {
    while ( **(_QWORD **)(*(_QWORD *)(v11 + 48) + 8LL * (unsigned int)v9) != *((_QWORD *)v4 + 5) )
    {
      if ( ++v9 >= v13 )
        goto LABEL_6;
    }
    if ( v9 >= 0 )
    {
      _mm_lfence();
      v55 = *(_QWORD *)(*(_QWORD *)(v11 + 48) + 8LL * (unsigned int)v9);
      if ( (*(_BYTE *)(v55 + 40) & 4) != 0 )
      {
        v67 = *(_QWORD *)(v55 + 104);
        v10 = v81.x - v67;
        v12 = v81.y - HIDWORD(v67);
      }
    }
  }
LABEL_6:
  if ( v10 || v12 )
  {
    v79 = v81;
    v51 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v7 = 0;
    LODWORD(v78) = 0;
    if ( *(_DWORD *)(v51 + 40) )
    {
      v60 = (unsigned int)v78;
      do
      {
        v78 = *(CAnimationScheduler **)(*(_QWORD *)(v51 + 16) + 8LL * v60);
        if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v60, (HWND *)v4, v78, 0) )
          v7 |= (int)CWindowPropertyTracker::OnWindowPositionChange((CWindowPropertyTracker *)(v51 + 48), v78, v4, v79) >= 0;
        ++v60;
      }
      while ( v60 < *(_DWORD *)(v51 + 40) );
      v8 = (struct tagRECT *)((char *)v4 + 188);
    }
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( !v7 )
    {
      OffsetRect(v8, v10, v12);
      v52 = 0;
      v53 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
      v54 = *(_DWORD *)(v53 + 48);
      if ( v54 )
      {
        v61 = *(_QWORD *)(v53 + 24);
        while ( 1 )
        {
          v62 = v61 + 24LL * v52;
          if ( *(_BYTE *)(v62 + 16) )
          {
            if ( *((_QWORD *)v4 + 50) == *(_QWORD *)v62 )
              break;
          }
          if ( ++v52 >= v54 )
            goto LABEL_53;
        }
        v68 = *(struct tagPOINT **)(v62 + 8);
        v77.x = v8->left;
        v77.y = *((_DWORD *)v4 + 48);
        CVisual::SetOffset(v68, &v77);
      }
LABEL_53:
      CWindowList::OnPositionChange(v80, v4, 1);
    }
  }
  v14 = v82 - v81.x;
  if ( v82 - v81.x < 0 )
    v14 = 0;
  v15 = v83 - v81.y;
  if ( v83 - v81.y < 0 )
    v15 = 0;
  v16 = 0;
  v17 = (_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL);
  v18 = *(_DWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 72LL);
  if ( !v18 )
    goto LABEL_13;
  while ( **(_QWORD **)(*v17 + 8LL * (unsigned int)v16) != *((_QWORD *)v4 + 5) )
  {
    if ( ++v16 >= v18 )
      goto LABEL_13;
  }
  if ( v16 >= 0 && (_mm_lfence(), v56 = *(_QWORD *)(*v17 + 8LL * (unsigned int)v16), (*(_BYTE *)(v56 + 40) & 2) != 0) )
  {
    v77 = *(struct tagPOINT *)(v56 + 112);
    y = v77.y;
    x = v77.x;
  }
  else
  {
LABEL_13:
    x = v8->right - v8->left;
    if ( x < 0 )
      x = 0;
    y = v8->bottom - v8->top;
    if ( y < 0 )
      y = 0;
  }
  if ( v14 == x && v15 == y )
  {
    if ( !v7 )
    {
LABEL_20:
      v21 = *((_QWORD *)v4 + 68);
      v22 = v21 && (*(_BYTE *)(v21 + 593) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR(v4);
      v23 = *((_BYTE *)v4 + 593);
      if ( v23 >> 7 != v22 )
        CWindowData::UpdateOwnerLists(v4, v23 < 0x80u);
      v24 = 0;
      if ( *((_DWORD *)v4 + 144) )
      {
        do
        {
          v25 = *(_QWORD *)(*((_QWORD *)v4 + 69) + 8LL * v24);
          v26 = *(CWindowData **)(v25 + 544);
          if ( v26
            && (*((_BYTE *)v26 + 593) & 0x40) != 0
            && (*(_BYTE *)(v25 + 592) & 1) != 0
            && (*(_DWORD *)(v25 + 100) & 0xC00000) != 0xC00000
            && (*(char *)(v25 + 104) >= 0 || (*(_DWORD *)(v25 + 600) & 0xFFF) == 0x11) )
          {
            if ( *(_QWORD *)(v25 + 32) )
            {
              v69 = CWindowData::WillEndAnimationCloaked((CWindowData *)v25);
              if ( v69 == CWindowData::WillEndAnimationCloaked(v26)
                && ContainsRect(
                     (const struct tagRECT *)(*(_QWORD *)(v25 + 544) + 48LL),
                     (const struct tagRECT *)(v25 + 48)) )
              {
                v70 = *(HWND *)(v25 + 40);
                ClassName[0] = 0;
                if ( !GetClassNameW(v70, ClassName, 260) )
                {
LABEL_128:
                  v27 = 1;
                  goto LABEL_28;
                }
                v71 = 0;
                v72 = &off_1800A87F8;
                while ( 1 )
                {
                  v73 = ClassName;
                  do
                  {
                    v74 = *(WCHAR *)((char *)v73 + (char *)*v72 - (char *)ClassName);
                    v75 = *v73 - v74;
                    if ( v75 )
                      break;
                    ++v73;
                  }
                  while ( v74 );
                  if ( !v75 )
                    break;
                  ++v71;
                  ++v72;
                  if ( v71 )
                    goto LABEL_128;
                }
              }
            }
          }
          v27 = 0;
LABEL_28:
          v28 = *(_BYTE *)(v25 + 593);
          if ( v28 >> 7 != v27 )
            CWindowData::UpdateOwnerLists((CWindowData *)v25, v28 < 0x80u);
        }
        while ( ++v24 < *((_DWORD *)v4 + 144) );
      }
    }
LABEL_31:
    v29 = 0;
    v30 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
    v31 = *(_DWORD *)(v30 + 72);
    if ( !v31 )
      goto LABEL_32;
    while ( **(_QWORD **)(*(_QWORD *)(v30 + 48) + 8LL * (unsigned int)v29) != *((_QWORD *)v4 + 5) )
    {
      if ( ++v29 >= v31 )
        goto LABEL_32;
    }
    if ( v29 >= 0
      && (_mm_lfence(),
          v57 = *(_QWORD *)(*(_QWORD *)(v30 + 48) + 8LL * (unsigned int)v29),
          (*(_BYTE *)(v57 + 40) & 8) != 0) )
    {
      v32 = *(RECT *)(v57 + 120);
    }
    else
    {
LABEL_32:
      v32 = *(RECT *)((char *)v4 + 204);
    }
    v33 = 0LL;
    v34 = *((_QWORD *)v4 + 5);
    rc2 = v32;
    v35 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
    v36 = *(unsigned int *)(v35 + 72);
    if ( !(_DWORD)v36 )
      goto LABEL_34;
    while ( **(_QWORD **)(*(_QWORD *)(v35 + 48) + 8LL * (unsigned int)v33) != v34 )
    {
      v33 = (unsigned int)(v33 + 1);
      if ( (unsigned int)v33 >= (unsigned int)v36 )
        goto LABEL_34;
    }
    if ( (int)v33 >= 0
      && (_mm_lfence(),
          v58 = *(_QWORD *)(*(_QWORD *)(v35 + 48) + 8LL * (unsigned int)v33),
          (*(_BYTE *)(v58 + 40) & 0x10) != 0) )
    {
      v37 = *(RECT *)(v58 + 136);
    }
    else
    {
LABEL_34:
      v37 = *(RECT *)((char *)v4 + 220);
    }
    v38 = *(_QWORD *)a2;
    v87 = v37;
    (*(void (__fastcall **)(struct IDwmWindow *, RECT *, __int64, __int64))(v38 + 96))(a2, &rc1, v36, v33);
    (*(void (__fastcall **)(struct IDwmWindow *, RECT *))(*(_QWORD *)a2 + 104LL))(a2, &v85);
    (*(void (__fastcall **)(struct IDwmWindow *, __int64))(*(_QWORD *)a2 + 112LL))(a2, (__int64)v4 + 236);
    if ( !EqualRect(&rc1, &rc2) || !EqualRect(&v85, &v87) )
    {
      v41 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      v42 = 0;
      for ( i = 0; i < *(_DWORD *)(v41 + 40); ++i )
      {
        v59 = *(const struct CStoryboard **)(*(_QWORD *)(v41 + 16) + 8LL * i);
        if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)i, (HWND *)v4, v59, 0) )
          v42 |= (int)CWindowPropertyTracker::OnWindowClientContentRectChange(
                        (CWindowPropertyTracker *)(v41 + 48),
                        v59,
                        v4,
                        &rc1,
                        &v85) >= 0;
      }
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      if ( !v42 )
      {
        v44 = *((_QWORD *)v4 + 50);
        *(RECT *)((char *)v4 + 204) = rc1;
        *(RECT *)((char *)v4 + 220) = v85;
        if ( v44 )
        {
          v45 = *(_DWORD *)(v44 + 80);
          if ( (v45 & 0x4000000) == 0 )
          {
            v46 = *(_QWORD *)(v44 + 24);
            for ( *(_DWORD *)(v44 + 80) = v45 | 0x4000000; v46; v46 = *(_QWORD *)(v46 + 24) )
            {
              if ( (*(_BYTE *)(v46 + 80) & 1) != 0 )
                break;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 32LL))(v46);
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
  v77.x = v14;
  v77.y = v15;
  v47 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v48 = 0;
  LODWORD(v78) = 0;
  if ( *(_DWORD *)(v47 + 40) )
  {
    v63 = (unsigned int)v78;
    do
    {
      v79 = *(struct tagPOINT *)(*(_QWORD *)(v47 + 16) + 8LL * v63);
      if ( CAnimationScheduler::_ShouldTrack((CAnimationScheduler *)v63, (HWND *)v4, *(struct CStoryboard **)&v79, 0) )
        v48 |= (int)CWindowPropertyTracker::OnWindowSizeChange(
                      (CWindowPropertyTracker *)(v47 + 48),
                      *(const struct CStoryboard **)&v79,
                      v4,
                      (struct tagSIZE)v77) >= 0;
      ++v63;
    }
    while ( v63 < *(_DWORD *)(v47 + 40) );
    v8 = (struct tagRECT *)((char *)v4 + 188);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( v48 )
    goto LABEL_31;
  v49 = v80;
  *((_DWORD *)v4 + 49) = v14 + v8->left;
  *((_DWORD *)v4 + 50) = v15 + *((_DWORD *)v4 + 48);
  updated = CWindowList::UpdateWindowScale(v49, v4, 0);
  v76 = updated;
  if ( updated >= 0 )
    goto LABEL_20;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x888u);
LABEL_37:
  v39 = v76;
LABEL_38:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v39;
}
