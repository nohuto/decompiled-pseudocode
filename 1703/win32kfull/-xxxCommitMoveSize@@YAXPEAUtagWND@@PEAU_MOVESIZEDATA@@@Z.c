/*
 * XREFs of ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01F27EC
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F20A8 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01F43E4 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     CkptRestore @ 0x1C001D438 (CkptRestore.c)
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01F0B24 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C01F12D0 (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01F2FA4 (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     MigrateRectMonitors @ 0x1C01F5BCC (MigrateRectMonitors.c)
 */

void __fastcall xxxCommitMoveSize(struct tagWND *a1, struct _MOVESIZEDATA *a2)
{
  int v4; // r15d
  int v5; // ebp
  __int64 DesktopWindow; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10; // r12d
  int *v11; // rax
  int v12; // r10d
  int v13; // r11d
  int *v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rbp
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // ecx
  int v23; // r8d
  int v24; // ecx
  struct tagRECT *Prop; // rax
  struct tagRECT *v26; // r14
  int v27; // eax
  int v28; // edx
  int v29; // ecx
  int v30; // r10d
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // ecx
  char v35; // al
  __int64 v36; // rdx
  _QWORD v37[3]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v38[3]; // [rsp+58h] [rbp-60h] BYREF
  struct tagRECT v39; // [rsp+70h] [rbp-48h] BYREF

  v4 = 0;
  v5 = 0;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( *(_QWORD *)(v8 + 104) != DesktopWindow )
  {
LABEL_67:
    v24 = *((_DWORD *)a2 + 45);
    if ( (v24 & 0x1000) != 0 && (v24 & 0x6000) == 0 && (v24 & 0x20) == 0
      || (*((_BYTE *)a1 + 71) & 1) != 0 && (v24 & 0x100000) == 0 )
    {
      Prop = (struct tagRECT *)GetProp((__int64)a1, atomCheckpointProp, 1);
      v26 = Prop;
      if ( Prop )
      {
        v39 = *(struct tagRECT *)((char *)a2 + 8);
        SwapRect(Prop, &v39);
        xxxMinMaximizeEx(*(struct tagWND **)a2, 9u, 4, 0LL, 0LL);
        SwapRect(&v39, v26);
        MakeArrangedStateObservable(a2);
      }
    }
    v27 = *((_DWORD *)a2 + 40);
    v28 = 516;
    if ( (v27 == 9 && !v5 || v27 == 10) && !v4 )
      v28 = 517;
    v29 = v28 | 0x10;
    if ( (*((_DWORD *)a2 + 81) & 0x20) == 0 )
      v29 = v28;
    v30 = v29;
    if ( (v29 & 1) == 0 && (*((_DWORD *)a2 + 45) & 0x300) != 0 )
      v30 = v29 | 0x100000;
    v31 = *((_DWORD *)a2 + 66);
    v32 = *((_DWORD *)a2 + 5);
    v33 = v30 | 0x200000;
    *((_DWORD *)a2 + 45) |= 0x80000000;
    if ( (v31 & 8) == 0 )
      v33 = v30;
    xxxSetWindowPos(
      a1,
      0LL,
      *((unsigned int *)a2 + 2),
      *((unsigned int *)a2 + 3),
      *((_DWORD *)a2 + 4) - *((_DWORD *)a2 + 2),
      v32 - *((_DWORD *)a2 + 3),
      v33);
    v34 = *((_DWORD *)a2 + 45);
    if ( (v34 & 0x100000) == 0 || !gSqmIsOptedIn )
    {
LABEL_101:
      if ( (*((_BYTE *)a1 + 71) & 0x20) == 0 )
        goto LABEL_103;
      goto LABEL_102;
    }
    v35 = *((_BYTE *)a1 + 305) & 3;
    if ( v35 == 3 )
    {
      v36 = 3537LL;
    }
    else
    {
      if ( v35 )
      {
        v36 = 3529LL;
        goto LABEL_100;
      }
      if ( (*((_BYTE *)a1 + 71) & 0x20) != 0 )
      {
LABEL_102:
        CkptRestore((__int64)a1, (struct _MOVESIZEDATA *)((char *)a2 + 8));
LABEL_103:
        if ( (*((_DWORD *)a2 + 45) & 0x100000) != 0 )
        {
          if ( gSqmIsOptedIn )
          {
            WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3531LL, *((unsigned int *)a2 + 75));
            WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3528LL, *((unsigned int *)a2 + 76));
            WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3536LL, *((unsigned int *)a2 + 77));
          }
        }
        return;
      }
      if ( (*((_DWORD *)a2 + 45) & 0x6000) != 0x6000 )
      {
        if ( (v34 & 0x1000) != 0 )
        {
          if ( (v34 & 0x6000) == 0 )
          {
            v36 = 3530LL;
            goto LABEL_100;
          }
        }
        else if ( (v34 & 0x6000) == 0 )
        {
          goto LABEL_101;
        }
        v36 = 5882LL;
        goto LABEL_100;
      }
      v36 = 3535LL;
    }
LABEL_100:
    WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v36, 1LL);
    goto LABEL_101;
  }
  if ( !*(_DWORD *)(v7 + 224) && (*(_DWORD *)(v7 + 180) & 0x300) == 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)a2 + 70LL) & 1) != 0 )
    {
      v10 = 1;
      goto LABEL_10;
    }
    *((_DWORD *)a2 + 45) |= 0x80000u;
  }
  v10 = 0;
LABEL_10:
  if ( (*((_DWORD *)a2 + 45) & 0x300) != 0 || v10 )
    v5 = 1;
  v11 = (int *)GetProp((__int64)a1, atomCheckpointProp, 1);
  v14 = v11;
  if ( v11 )
  {
    if ( (unsigned int)(*((_DWORD *)a2 + 40) - 1) <= 1 && (v12 & 0x6000) == 0x6000 && v13 == 768 )
    {
      *v11 = *((_DWORD *)a2 + 2);
      v11[2] = *((_DWORD *)a2 + 4);
    }
    else if ( *((_QWORD *)a2 + 25) == *((_QWORD *)a2 + 27) )
    {
      if ( (v12 & 0x1000) == 0
        && v5
        && ((*((_DWORD *)a2 + 66) & 8) == 0 || *((_DWORD *)a2 + 26) != -32000 || *((_DWORD *)a2 + 27) != -32000) )
      {
        *(_OWORD *)v11 = *(_OWORD *)((char *)a2 + 104);
      }
    }
    else if ( v10 || (*((_BYTE *)a1 + 305) & 3) != 0 )
    {
      if ( (v12 & 0x1000000) != 0
        && (*(_QWORD *)v11 != *((_QWORD *)a2 + 17) || *((_QWORD *)v11 + 1) != *((_QWORD *)a2 + 18)) )
      {
        *(_OWORD *)v11 = *(_OWORD *)((char *)a2 + 136);
      }
      v15 = *((_QWORD *)a2 + 25);
      if ( (*((_BYTE *)a1 + 305) & 3) == 3 )
        v15 = MonitorFromRect(v11, 2u);
      v16 = *((_QWORD *)a2 + 27);
      if ( (*((_DWORD *)a2 + 45) & 0x300) == 0x300 )
      {
        v17 = *((_DWORD *)a2 + 71);
        if ( *v14 <= v17 && v17 < v14[2] )
          v16 = MonitorFromRect(v14, 2u);
      }
      if ( (*((_BYTE *)a1 + 305) & 3) == 3 && (*((_DWORD *)a2 + 45) & 0x300) == 0x300 )
        *((_DWORD *)a2 + 45) |= 0x80000u;
      v37[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v37;
      v37[1] = v15;
      if ( v15 )
        ++*(_DWORD *)(v15 + 8);
      v38[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v38;
      v38[1] = v16;
      if ( v16 )
        ++*(_DWORD *)(v16 + 8);
      if ( *(_WORD *)(*(_QWORD *)(v15 + 40) + 128LL) != *(_WORD *)(*(_QWORD *)(v16 + 40) + 128LL)
        && (*((_DWORD *)a1 + 92) & 0xF) == 2 )
      {
        xxxGetMinMaxTrackInfo(a2, 0);
      }
      if ( (unsigned int)MigrateRectMonitors(
                           (_DWORD)a1,
                           (_DWORD)v14,
                           v15,
                           (unsigned int)&v39,
                           v16,
                           0LL,
                           (__int64)a2,
                           48) )
        *(struct tagRECT *)v14 = v39;
      ThreadUnlock1(v19, v18);
      ThreadUnlock1(v21, v20);
    }
  }
  v22 = *((_DWORD *)a2 + 45);
  if ( ((v22 ^ (v22 >> 5)) & 0x300) != 0 || (v22 & 0x80000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( *((_QWORD *)a2 + 1) != *((_QWORD *)a1 + 16) || *((_QWORD *)a2 + 2) != *((_QWORD *)a1 + 17) )
    {
      v5 = 1;
      goto LABEL_58;
    }
  }
  v5 = 0;
LABEL_58:
  MakeArrangedStateObservable(a2);
  if ( !v10 )
    goto LABEL_67;
  if ( (*((_BYTE *)a1 + 71) & 1) == 0 || *((_QWORD *)a2 + 25) != *((_QWORD *)a2 + 27) )
  {
    v23 = gdwPUDFlags & 0x10000 | 0x16;
    if ( (*((_DWORD *)a2 + 45) & 0x100000) == 0 )
      v23 = gdwPUDFlags & 0x10000 | 6;
    xxxMinMaximizeEx(a1, 3u, v23, *((_QWORD *)a2 + 27), 0LL);
  }
  if ( (*((_DWORD *)a2 + 45) & 0x100000) != 0 )
  {
    if ( gSqmIsOptedIn )
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3532LL, 1LL);
    goto LABEL_103;
  }
}
