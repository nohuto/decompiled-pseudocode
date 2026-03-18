/*
 * XREFs of xxxDeferWindowPosAndCheckPoint @ 0x1C00B79CC
 * Callers:
 *     ?xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z @ 0x1C00B7444 (-xxxProcessDesktopRecalc@@YAXPEAUtagASYNCDTOPRECALC@@@Z.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01B6194 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _DeferWindowPos @ 0x1C00632C8 (_DeferWindowPos.c)
 *     FindOldMonitor @ 0x1C00B7BF4 (FindOldMonitor.c)
 *     ?_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z @ 0x1C00B7CD0 (-_ShouldMaximizeWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?zzzNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00FBBB8 (-zzzNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     IsValidMonitor @ 0x1C00FC0E4 (IsValidMonitor.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z @ 0x1C01B43EC (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@@Z.c)
 *     EvaluateArrangeState @ 0x1C01F5AB8 (EvaluateArrangeState.c)
 *     MigrateRectMonitors @ 0x1C01F5BCC (MigrateRectMonitors.c)
 *     xxxEvaluateDestRectForMonitorMigration @ 0x1C01F7344 (xxxEvaluateDestRectForMonitorMigration.c)
 *     xxxInitializeMoveSizeData @ 0x1C01F76A4 (xxxInitializeMoveSizeData.c)
 */

__int64 __fastcall xxxDeferWindowPosAndCheckPoint(
        __int64 a1,
        __int64 a2,
        struct tagMONITORRECTS *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        int a6,
        char a7)
{
  int v9; // r12d
  int v10; // esi
  int v11; // r15d
  __int64 Prop; // rax
  __int64 v13; // r14
  int v14; // eax
  int v16; // edx
  struct tagWND *v17; // rcx
  struct tagMONITOR *v18; // r8
  int OldMonitor; // eax
  int v20; // ecx
  int v21; // eax
  unsigned __int16 v22; // r14
  int v23; // eax
  unsigned __int16 v24; // cx
  __int64 v25; // r10
  struct tagMONITOR *NewMonitor; // r13
  __int64 DispInfo; // rax
  _QWORD *v28; // rax
  int v29; // eax
  __int64 v30; // r14
  struct tagMONITOR *v31; // r9
  _QWORD *v32; // rax
  int v33; // eax
  __int64 v34; // rax
  _QWORD *v35; // rdx
  _QWORD *v36; // r10
  _QWORD *v37; // r8
  _QWORD *v38; // r11
  bool v39; // zf
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // [rsp+50h] [rbp-B0h]
  __int64 v51; // [rsp+60h] [rbp-A0h]
  int v52; // [rsp+60h] [rbp-A0h]
  struct tagRECT v54; // [rsp+78h] [rbp-88h] BYREF
  __int128 v55; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v56[68]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v57[42]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v58[144]; // [rsp+410h] [rbp+310h] BYREF

  memset(v58, 0, 0x88uLL);
  memset(v56, 0, sizeof(v56));
  v49 = 0;
  v56[5] = v58;
  *(_QWORD *)&v54.left = 0LL;
  *(_QWORD *)&v54.right = 0LL;
  v9 = 9;
  v10 = 1;
  if ( (dword_1C03257DC & 1) != 0 && (*(_BYTE *)(a2 + 305) & 3) != 0 )
  {
    v11 = 3;
    v49 = EvaluateArrangeState(a2);
    memset(v57, 0, 0x148uLL);
    v20 = *(_DWORD *)(a2 + 128);
    v21 = *(_DWORD *)(a2 + 136) - v20;
    v57[0] = a2;
    v22 = v20 + v21 / 2;
    if ( v49 == 3 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        v23 = *(_DWORD *)(gpsi + 1896LL);
      else
        v23 = *(_DWORD *)(gpsi + 2284LL);
      v24 = v23 + *(_WORD *)(a2 + 132) - 1;
    }
    else
    {
      v24 = *(_WORD *)(a2 + 132) + 2;
    }
    HIDWORD(v57[22]) = HIDWORD(v57[22]) & 0xFFFC7FFF | 0x30000;
    xxxInitializeMoveSizeData(a2, v57, 9LL, v22 | (v24 << 16), 11);
  }
  else if ( (*(_DWORD *)(a2 + 304) & 0x8000) != 0 || (*(_BYTE *)(a2 + 60) & 0x40) != 0 )
  {
    v11 = 2;
  }
  else
  {
    v11 = 0;
  }
  Prop = GetProp(a2, atomCheckpointProp, 1);
  v13 = Prop;
  if ( Prop )
  {
    if ( a5 )
    {
      *(_DWORD *)(Prop + 32) &= ~8u;
      OldMonitor = FindOldMonitor(a5, a3, *(unsigned int *)(a2 + 368));
      if ( OldMonitor != -1 )
      {
        if ( v11 == 3 )
        {
          v25 = 120LL * OldMonitor;
          v51 = v25;
          NewMonitor = *(struct tagMONITOR **)((char *)a3 + v25 + 112);
          if ( !NewMonitor || !(unsigned int)IsValidMonitor(*(_QWORD *)((char *)a3 + v25 + 112)) )
          {
            NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a3 + v25 + 8));
            if ( !NewMonitor )
            {
              DispInfo = GetDispInfo();
              v25 = v51;
              NewMonitor = *(struct tagMONITOR **)(DispInfo + 88);
            }
          }
          *(_DWORD *)(v56[5] + 28LL) = *(_DWORD *)((char *)a3 + v25 + 8);
          *(_DWORD *)(v56[5] + 32LL) = *(_DWORD *)((char *)a3 + v25 + 12);
          *(_DWORD *)(v56[5] + 36LL) = *(_DWORD *)((char *)a3 + v25 + 16);
          *(_DWORD *)(v56[5] + 40LL) = *(_DWORD *)((char *)a3 + v25 + 20);
          *(_DWORD *)(v56[5] + 76LL) = *(_DWORD *)((char *)a3 + v25 + 24);
          *(_DWORD *)(v56[5] + 80LL) = *(_DWORD *)((char *)a3 + v25 + 28);
          *(_DWORD *)(v56[5] + 84LL) = *(_DWORD *)((char *)a3 + v25 + 32);
          *(_DWORD *)(v56[5] + 88LL) = *(_DWORD *)((char *)a3 + v25 + 36);
          *(_DWORD *)(v56[5] + 44LL) = *(_DWORD *)((char *)a3 + v25 + 40);
          *(_DWORD *)(v56[5] + 48LL) = *(_DWORD *)((char *)a3 + v25 + 44);
          *(_DWORD *)(v56[5] + 52LL) = *(_DWORD *)((char *)a3 + v25 + 48);
          *(_DWORD *)(v56[5] + 56LL) = *(_DWORD *)((char *)a3 + v25 + 52);
          *(_DWORD *)(v56[5] + 92LL) = *(_DWORD *)((char *)a3 + v25 + 56);
          *(_DWORD *)(v56[5] + 96LL) = *(_DWORD *)((char *)a3 + v25 + 60);
          *(_DWORD *)(v56[5] + 100LL) = *(_DWORD *)((char *)a3 + v25 + 64);
          *(_DWORD *)(v56[5] + 104LL) = *(_DWORD *)((char *)a3 + v25 + 68);
          *(_DWORD *)(v56[5] + 60LL) = *(_DWORD *)((char *)a3 + v25 + 72);
          *(_DWORD *)(v56[5] + 64LL) = *(_DWORD *)((char *)a3 + v25 + 76);
          *(_DWORD *)(v56[5] + 68LL) = *(_DWORD *)((char *)a3 + v25 + 80);
          *(_DWORD *)(v56[5] + 72LL) = *(_DWORD *)((char *)a3 + v25 + 84);
          *(_DWORD *)(v56[5] + 108LL) = *(_DWORD *)((char *)a3 + v25 + 88);
          *(_DWORD *)(v56[5] + 112LL) = *(_DWORD *)((char *)a3 + v25 + 92);
          *(_DWORD *)(v56[5] + 116LL) = *(_DWORD *)((char *)a3 + v25 + 96);
          *(_DWORD *)(v56[5] + 120LL) = *(_DWORD *)((char *)a3 + v25 + 100);
          v28 = v56;
          if ( (a7 & 1) != 0 )
            LODWORD(v28) = v57[27];
          v52 = (int)v28;
          if ( (unsigned int)MigrateRectMonitors(
                               a2,
                               (_DWORD)a5,
                               (_DWORD)v28,
                               (unsigned int)&v55,
                               (__int64)NewMonitor,
                               0LL,
                               (__int64)v57,
                               0) )
            *(_OWORD *)v13 = v55;
          if ( (*(_BYTE *)(a2 + 71) & 0x20) != 0 )
          {
            v29 = *(_DWORD *)(v13 + 32);
            if ( (v29 & 0x20) != 0 || (v29 & 0x40) != 0 )
            {
              if ( (v29 & 0x20) == 0 || (v29 & 0x40) == 0 )
              {
                if ( (v29 & 0x40) != 0 )
                {
                  v9 = 11;
                }
                else if ( (v29 & 0x20) != 0 )
                {
                  v9 = 13;
                }
              }
              if ( (unsigned int)MigrateRectMonitors(
                                   a2,
                                   (int)v13 + 36,
                                   v52,
                                   (unsigned int)&v55,
                                   (__int64)NewMonitor,
                                   0LL,
                                   (__int64)v57,
                                   v9) )
                *(_OWORD *)(v13 + 36) = v55;
              else
                *(_DWORD *)(v13 + 32) &= 0xFFFFFF9F;
            }
          }
        }
        else
        {
          zzzNormalizeRect((struct tagWND *)a2, a5, (struct tagRECT *)v13, a3, OldMonitor, v11, 0);
        }
      }
    }
  }
  v14 = FindOldMonitor(a4, a3, *(unsigned int *)(a2 + 368));
  if ( v14 == -1 )
    return a1;
  if ( v11 == 3 )
  {
    v30 = 120LL * v14;
    if ( !*(_QWORD *)((char *)a3 + v30 + 112) || !(unsigned int)IsValidMonitor(*((_QWORD *)a3 + 15 * v14 + 14)) )
    {
      v31 = FindNewMonitor((struct tagRECT *)((char *)a3 + v30 + 8));
      if ( !v31 )
        v31 = *(struct tagMONITOR **)(GetDispInfo() + 88);
    }
    *(_DWORD *)(v56[5] + 28LL) = *(_DWORD *)((char *)a3 + v30 + 8);
    *(_DWORD *)(v56[5] + 32LL) = *(_DWORD *)((char *)a3 + v30 + 12);
    *(_DWORD *)(v56[5] + 36LL) = *(_DWORD *)((char *)a3 + v30 + 16);
    *(_DWORD *)(v56[5] + 40LL) = *(_DWORD *)((char *)a3 + v30 + 20);
    *(_DWORD *)(v56[5] + 76LL) = *(_DWORD *)((char *)a3 + v30 + 24);
    *(_DWORD *)(v56[5] + 80LL) = *(_DWORD *)((char *)a3 + v30 + 28);
    *(_DWORD *)(v56[5] + 84LL) = *(_DWORD *)((char *)a3 + v30 + 32);
    *(_DWORD *)(v56[5] + 88LL) = *(_DWORD *)((char *)a3 + v30 + 36);
    *(_DWORD *)(v56[5] + 44LL) = *(_DWORD *)((char *)a3 + v30 + 40);
    *(_DWORD *)(v56[5] + 48LL) = *(_DWORD *)((char *)a3 + v30 + 44);
    *(_DWORD *)(v56[5] + 52LL) = *(_DWORD *)((char *)a3 + v30 + 48);
    *(_DWORD *)(v56[5] + 56LL) = *(_DWORD *)((char *)a3 + v30 + 52);
    *(_DWORD *)(v56[5] + 92LL) = *(_DWORD *)((char *)a3 + v30 + 56);
    *(_DWORD *)(v56[5] + 96LL) = *(_DWORD *)((char *)a3 + v30 + 60);
    *(_DWORD *)(v56[5] + 100LL) = *(_DWORD *)((char *)a3 + v30 + 64);
    *(_DWORD *)(v56[5] + 104LL) = *(_DWORD *)((char *)a3 + v30 + 68);
    *(_DWORD *)(v56[5] + 60LL) = *(_DWORD *)((char *)a3 + v30 + 72);
    *(_DWORD *)(v56[5] + 64LL) = *(_DWORD *)((char *)a3 + v30 + 76);
    *(_DWORD *)(v56[5] + 68LL) = *(_DWORD *)((char *)a3 + v30 + 80);
    *(_DWORD *)(v56[5] + 72LL) = *(_DWORD *)((char *)a3 + v30 + 84);
    *(_DWORD *)(v56[5] + 108LL) = *(_DWORD *)((char *)a3 + v30 + 88);
    *(_DWORD *)(v56[5] + 112LL) = *(_DWORD *)((char *)a3 + v30 + 92);
    *(_DWORD *)(v56[5] + 116LL) = *(_DWORD *)((char *)a3 + v30 + 96);
    *(_DWORD *)(v56[5] + 120LL) = *(_DWORD *)((char *)a3 + v30 + 100);
    v32 = v56;
    if ( (a7 & 1) != 0 )
      v32 = (_QWORD *)v57[27];
    v57[27] = v32;
    v33 = *(_DWORD *)(a2 + 368) & 0xF;
    if ( v33 == 2 )
    {
      v34 = *((_QWORD *)v31 + 5);
      v35 = (_QWORD *)(v56[5] + 28LL);
      v36 = (_QWORD *)(v56[5] + 76LL);
      v37 = (_QWORD *)(v34 + 28);
      v38 = (_QWORD *)(v34 + 76);
    }
    else
    {
      v39 = v33 == 1;
      v40 = *((_QWORD *)v31 + 5);
      if ( v39 )
      {
        v35 = (_QWORD *)(v56[5] + 60LL);
        v37 = (_QWORD *)(v40 + 60);
        v36 = (_QWORD *)(v56[5] + 108LL);
        v38 = (_QWORD *)(v40 + 108);
      }
      else
      {
        v35 = (_QWORD *)(v56[5] + 44LL);
        v37 = (_QWORD *)(v40 + 44);
        v36 = (_QWORD *)(v56[5] + 92LL);
        v38 = (_QWORD *)(v40 + 92);
      }
    }
    v41 = *v35 - *v37;
    if ( *v35 == *v37 )
      v41 = v35[1] - v37[1];
    if ( v41 )
      goto LABEL_64;
    v42 = *v36 - *v38;
    if ( *v36 == *v38 )
      v42 = v36[1] - v38[1];
    if ( v42 )
LABEL_64:
      v43 = 0;
    else
      v43 = 1;
    *(_QWORD *)&v55 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v55;
    ++*((_DWORD *)v31 + 2);
    *((_QWORD *)&v55 + 1) = v31;
    if ( (unsigned int)xxxEvaluateDestRectForMonitorMigration(v49, (unsigned int)v57, a2, (_DWORD)v31, v43) )
    {
      a6 |= 0x100000u;
      v54 = *(struct tagRECT *)&v57[3];
    }
    else
    {
      v10 = 0;
    }
    ThreadUnlock1(v45, v44);
  }
  else
  {
    if ( (unsigned int)_ShouldMaximizeWindow((struct tagWND *)a2) )
      v11 = 1;
    v18 = zzzNormalizeRect(v17, &v54, a4, a3, v16, v11, 0);
    if ( (*(_BYTE *)(a2 + 61) & 8) == 0 )
      return DeferWindowPos(a1, a2, 0LL, v54.left, v54.top, v54.right - v54.left, v54.bottom - v54.top, a6, 0);
    if ( (*(_DWORD *)(a2 + 368) & 0xF) == 0
      && (v46 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 408LL)) != 0
      && (*(_DWORD *)(**(_QWORD **)(v46 + 8) + 52LL) & 1) != 0 )
    {
      v47 = *((_QWORD *)v18 + 12);
    }
    else if ( (*(_DWORD *)(a2 + 368) & 0xF) == 1
           && (v48 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 408LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v48 + 8) + 52LL) & 1) != 0 )
    {
      v47 = *((_QWORD *)v18 + 13);
    }
    else
    {
      v47 = *((_QWORD *)v18 + 11);
    }
    *(_QWORD *)(a2 + 216) = v47;
  }
  if ( !v10 )
    return a1;
  return DeferWindowPos(a1, a2, 0LL, v54.left, v54.top, v54.right - v54.left, v54.bottom - v54.top, a6, 0);
}
