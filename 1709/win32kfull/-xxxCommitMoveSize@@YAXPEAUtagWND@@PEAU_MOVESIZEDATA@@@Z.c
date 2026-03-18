/*
 * XREFs of ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C01DA1B4
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01D9AC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01DAD48 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C01DB798 (-xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     CkptRestore @ 0x1C004B898 (CkptRestore.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z @ 0x1C01D88C0 (-MakeArrangedStateObservable@@YAXQEBU_MOVESIZEDATA@@@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C01D8FFC (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01DA938 (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     MigrateRectMonitors @ 0x1C01DCF04 (MigrateRectMonitors.c)
 */

void __fastcall xxxCommitMoveSize(struct tagWND *a1, struct _MOVESIZEDATA *a2)
{
  int v4; // ebp
  int v5; // esi
  __int64 v6; // rdx
  int v8; // r15d
  int v9; // ebp
  BOOL v10; // r14d
  struct tagRECT *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r11d
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rbp
  LONG v18; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned int v28; // ecx
  __int64 v29; // rcx
  int v30; // r8d
  int v31; // ecx
  struct tagRECT *Prop; // rax
  struct tagRECT *v33; // r14
  int v34; // eax
  int v35; // edx
  int v36; // ecx
  int v37; // r10d
  int v38; // eax
  int v39; // ecx
  int v40; // edx
  int v41; // ecx
  char v42; // al
  __int64 v43; // rdx
  _QWORD v44[3]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v45[3]; // [rsp+58h] [rbp-60h] BYREF
  struct tagRECT v46; // [rsp+70h] [rbp-48h] BYREF

  v4 = 0;
  v5 = 0;
  if ( *((_QWORD *)a1 + 13) != GetDesktopWindow((__int64)a1) )
  {
LABEL_70:
    v31 = *((_DWORD *)a2 + 49);
    if ( (v31 & 0x7000) == 0x1000 && (v31 & 0x20) == 0 || (((v31 & 0x100000) == 0) & *((_BYTE *)a1 + 71)) != 0 )
    {
      Prop = (struct tagRECT *)GetProp((__int64)a1, atomCheckpointProp, 1);
      v33 = Prop;
      if ( Prop )
      {
        v46 = *(struct tagRECT *)((char *)a2 + 24);
        SwapRect(Prop, &v46);
        xxxMinMaximizeEx(*((struct tagWND **)a2 + 2), 9u, 4, 0LL, 0LL);
        SwapRect(&v46, v33);
        MakeArrangedStateObservable(a2);
      }
    }
    v34 = *((_DWORD *)a2 + 44);
    v35 = 516;
    if ( (v34 == 9 && !v5 || v34 == 10) && !v4 )
      v35 = 517;
    v36 = v35 | 0x10;
    if ( (*((_DWORD *)a2 + 85) & 0x20) == 0 )
      v36 = v35;
    v37 = v36;
    if ( (v36 & 1) == 0 && (*((_DWORD *)a2 + 49) & 0x300) != 0 )
      v37 = v36 | 0x100000;
    v38 = *((_DWORD *)a2 + 70);
    v39 = *((_DWORD *)a2 + 9);
    v40 = v37 | 0x200000;
    *((_DWORD *)a2 + 49) |= 0x80000000;
    if ( (v38 & 8) == 0 )
      v40 = v37;
    xxxSetWindowPos(
      a1,
      0LL,
      *((unsigned int *)a2 + 6),
      *((unsigned int *)a2 + 7),
      *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 6),
      v39 - *((_DWORD *)a2 + 7),
      v40);
    v41 = *((_DWORD *)a2 + 49);
    if ( (v41 & 0x100000) != 0 && gSqmIsOptedIn )
    {
      v42 = *((_BYTE *)a1 + 305) & 3;
      if ( v42 == 3 )
      {
        v43 = 3537LL;
      }
      else if ( v42 )
      {
        v43 = 3529LL;
      }
      else
      {
        if ( (*((_BYTE *)a1 + 71) & 0x20) != 0 )
        {
LABEL_102:
          CkptRestore((__int64)a1, (struct _MOVESIZEDATA *)((char *)a2 + 24));
LABEL_103:
          if ( (*((_DWORD *)a2 + 49) & 0x100000) != 0 )
          {
            if ( gSqmIsOptedIn )
            {
              WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3531LL, *((unsigned int *)a2 + 79));
              WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3528LL, *((unsigned int *)a2 + 80));
              WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3536LL, *((unsigned int *)a2 + 81));
            }
          }
          return;
        }
        if ( (*((_DWORD *)a2 + 49) & 0x6000) == 0x6000 )
        {
          v43 = 3535LL;
        }
        else if ( (*((_DWORD *)a2 + 49) & 0x7000) == 0x1000 )
        {
          v43 = 3530LL;
        }
        else
        {
          if ( (v41 & 0x6000) == 0 )
            goto LABEL_101;
          v43 = 5882LL;
        }
      }
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v43, 1LL);
    }
LABEL_101:
    if ( (*((_BYTE *)a1 + 71) & 0x20) == 0 )
      goto LABEL_103;
    goto LABEL_102;
  }
  if ( !*(_DWORD *)(v6 + 240) && (*(_DWORD *)(v6 + 196) & 0x300) == 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a2 + 2) + 70LL) & 1) != 0 )
    {
      v8 = 1;
      goto LABEL_10;
    }
    *((_DWORD *)a2 + 49) |= 0x80000u;
  }
  v8 = 0;
LABEL_10:
  v9 = *((_DWORD *)a2 + 49) & 0x300;
  v10 = v9 || v8;
  v11 = (struct tagRECT *)GetProp((__int64)a1, atomCheckpointProp, 1);
  if ( v11 )
  {
    if ( (unsigned int)(*((_DWORD *)a2 + 44) - 1) <= 1 && (v14 & 0x6000) == 0x6000 && v9 == 768 )
    {
      v11->left = *((_DWORD *)a2 + 6);
      v11->right = *((_DWORD *)a2 + 8);
    }
    else if ( *((_QWORD *)a2 + 27) == *((_QWORD *)a2 + 29) )
    {
      if ( (v14 & 0x1000) == 0
        && v10
        && ((*((_DWORD *)a2 + 70) & 8) == 0 || *((_DWORD *)a2 + 30) != -32000 || *((_DWORD *)a2 + 31) != -32000) )
      {
        *v11 = *(struct tagRECT *)((char *)a2 + 120);
      }
    }
    else if ( v8 || (*((_BYTE *)a1 + 305) & 3) != 0 )
    {
      if ( (v14 & 0x1000000) != 0 )
      {
        v15 = *(_QWORD *)&v11->left - *((_QWORD *)a2 + 19);
        if ( *(_QWORD *)&v11->left == *((_QWORD *)a2 + 19) )
          v15 = *(_QWORD *)&v11->right - *((_QWORD *)a2 + 20);
        if ( v15 )
          *v11 = *(struct tagRECT *)((char *)a2 + 152);
      }
      v16 = *((_QWORD *)a2 + 27);
      if ( (*((_BYTE *)a1 + 305) & 3) == 3 )
        v16 = MonitorFromRect(v11, 2u, 0);
      v17 = *((_QWORD *)a2 + 29);
      if ( (*((_DWORD *)a2 + 49) & 0x300) == 0x300 )
      {
        v18 = *((_DWORD *)a2 + 75);
        if ( v11->left <= v18 && v18 < v11->right )
          v17 = MonitorFromRect(v11, 2u, 0);
      }
      if ( (*((_BYTE *)a1 + 305) & 3) == 3 && (*((_DWORD *)a2 + 49) & 0x300) == 0x300 )
        *((_DWORD *)a2 + 49) |= 0x80000u;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 768LL, v12, v13);
      v44[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v44;
      v44[1] = v16;
      if ( v16 )
        _InterlockedAdd((volatile signed __int32 *)(v16 + 8), 1u);
      v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22);
      v45[0] = *(_QWORD *)(v23 + 392);
      *(_QWORD *)(v23 + 392) = v45;
      v45[1] = v17;
      if ( v17 )
        _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
      if ( *(_WORD *)(*(_QWORD *)(v16 + 40) + 64LL) != *(_WORD *)(*(_QWORD *)(v17 + 40) + 64LL)
        && (*((_DWORD *)a1 + 92) & 0xF) == 2 )
      {
        xxxGetMinMaxTrackInfo(a2, 0);
      }
      if ( (unsigned int)MigrateRectMonitors(
                           (_DWORD)a1,
                           (_DWORD)v11,
                           v16,
                           (unsigned int)&v46,
                           v17,
                           0LL,
                           (__int64)a2,
                           48) )
        *v11 = v46;
      ThreadUnlock1(v25, v24);
      ThreadUnlock1(v27, v26);
    }
  }
  v28 = *((_DWORD *)a2 + 49);
  if ( ((v28 ^ (v28 >> 5)) & 0x300) != 0 || (v28 & 0x80000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    v29 = *((_QWORD *)a2 + 3) - *((_QWORD *)a1 + 16);
    if ( !v29 )
      v29 = *((_QWORD *)a2 + 4) - *((_QWORD *)a1 + 17);
    if ( v29 )
    {
      v5 = 1;
      goto LABEL_61;
    }
  }
  v5 = 0;
LABEL_61:
  MakeArrangedStateObservable(a2);
  if ( !v8 )
    goto LABEL_70;
  if ( (*((_BYTE *)a1 + 71) & 1) == 0 || *((_QWORD *)a2 + 27) != *((_QWORD *)a2 + 29) )
  {
    v30 = gdwPUDFlags & 0x10000 | 0x16;
    if ( (*((_DWORD *)a2 + 49) & 0x100000) == 0 )
      v30 = gdwPUDFlags & 0x10000 | 6;
    xxxMinMaximizeEx(a1, 3u, v30, *((_QWORD *)a2 + 29), 0LL);
  }
  if ( (*((_DWORD *)a2 + 49) & 0x100000) != 0 )
  {
    if ( gSqmIsOptedIn )
      WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3532LL, 1LL);
    goto LABEL_103;
  }
}
