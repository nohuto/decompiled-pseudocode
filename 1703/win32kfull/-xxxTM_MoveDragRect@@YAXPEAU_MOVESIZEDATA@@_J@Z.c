/*
 * XREFs of ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01F5324
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GreIsWindowResizeInProgress @ 0x1C0022E8C (GreIsWindowResizeInProgress.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     bSetDevDragRect @ 0x1C00A2540 (bSetDevDragRect.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01F0B98 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C01F1040 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C01F12D0 (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C01F470C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 */

void __fastcall xxxTM_MoveDragRect(struct _MOVESIZEDATA *a1, int a2)
{
  __int64 v2; // rax
  HWND *v4; // rcx
  int v5; // edi
  char v7; // r14
  bool v8; // zf
  unsigned int v9; // r15d
  ULONG_PTR v10; // rcx
  unsigned __int64 v11; // r8
  __int64 v12; // rcx
  __int128 v13; // xmm2
  int v14; // eax
  int v15; // eax
  unsigned __int64 v16; // r8
  ULONG_PTR v17; // rcx
  _OWORD *v18; // r14
  unsigned __int64 v19; // r8
  ULONG_PTR v20; // rcx
  unsigned int v21; // [rsp+50h] [rbp-29h] BYREF
  struct tagRECT *v22; // [rsp+58h] [rbp-21h] BYREF
  char *v23; // [rsp+60h] [rbp-19h]
  __int64 v24; // [rsp+68h] [rbp-11h]
  struct tagRECT v25; // [rsp+70h] [rbp-9h] BYREF
  int v26[4]; // [rsp+80h] [rbp+7h] BYREF

  v2 = *((_QWORD *)a1 + 24);
  v4 = *(HWND **)a1;
  v5 = 0;
  v21 = 0;
  v22 = 0LL;
  v7 = 0;
  v24 = v2;
  if ( (unsigned int)GreIsWindowResizeInProgress(*v4, 0LL) )
  {
    *((_DWORD *)a1 + 46) |= 1u;
    return;
  }
  v8 = *((_DWORD *)a1 + 40) == 9;
  v23 = (char *)a1 + 56;
  *(_OWORD *)((char *)a1 + 24) = *(_OWORD *)((char *)a1 + 8);
  *(_OWORD *)((char *)a1 + 56) = *(_OWORD *)((char *)a1 + 40);
  if ( v8 )
  {
    if ( (*((_DWORD *)a1 + 45) & 0x800) != 0 )
    {
      if ( !(unsigned int)xxxSizeOrMoveRect(a1, a2, &v21, &v25, (struct tagCHECKPOINT **)&v22) )
        return;
      v7 = v21;
      if ( (v21 & 1) != 0 )
      {
        SwapRect(v22, &v25);
        xxxMinMaximizeEx(*(struct tagWND **)a1, 9u, 4, 0LL, 0LL);
        SwapRect(&v25, v22);
        v9 = 532;
        goto LABEL_12;
      }
    }
    else if ( !(unsigned int)MoveRect((__int64)a1, a2, 0) )
    {
      return;
    }
    v9 = 534;
    goto LABEL_12;
  }
  if ( !(unsigned int)SizeRect(a1, a2, 0LL, &v21) )
    return;
  v7 = v21;
  v9 = 532;
LABEL_12:
  if ( (v7 & 2) != 0 )
  {
    v10 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 70LL) & 1) != 0 )
    {
      v11 = *((int *)a1 + 40);
      *(_OWORD *)v26 = *(_OWORD *)((char *)a1 + 24);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v10, v9, v11, (struct _LARGE_STRING *)v26, 0, 0, 0LL, 1, 0);
      xxxMinMaximizeEx(*(struct tagWND **)a1, 3u, 22, *((_QWORD *)a1 + 27), 0LL);
      v12 = *(_QWORD *)a1;
      if ( (*(_BYTE *)(*(_QWORD *)a1 + 305LL) & 3) != 0 || (*(_BYTE *)(v12 + 71) & 1) != 0 )
        v5 = 128;
      *((_DWORD *)a1 + 45) = v5 | *((_DWORD *)a1 + 45) & 0xFFFFFF7F;
      v13 = *(_OWORD *)(v12 + 128);
      *(_OWORD *)v26 = v13;
      *(_OWORD *)((char *)a1 + 24) = v13;
      *(_OWORD *)((char *)a1 + 56) = v13;
      *(_OWORD *)((char *)a1 + 8) = v13;
      *(_OWORD *)((char *)a1 + 40) = v13;
      goto LABEL_29;
    }
  }
  v14 = *((_DWORD *)a1 + 45);
  if ( (v14 & 0x4000000) != 0 )
  {
    if ( (v14 & 0x20) != 0 )
    {
      if ( (v7 & 8) != 0 )
      {
        xxxDrawDragRectEx(a1);
      }
      else if ( (v7 & 4) != 0 )
      {
        bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL), 0LL, 0LL, 0);
      }
    }
    v15 = *((_DWORD *)a1 + 45);
    if ( (v15 & 0x2000000) != 0 )
    {
      if ( (v15 & 0x20) == 0 )
      {
        v18 = v23;
        goto LABEL_28;
      }
      v16 = *((int *)a1 + 40);
      v17 = *(_QWORD *)a1;
      *(_OWORD *)v26 = *(_OWORD *)((char *)a1 + 56);
      *((_DWORD *)a1 + 45) = v15 & 0xFFFFFFDF;
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v17, v9, v16, (struct _LARGE_STRING *)v26, 0, 0, 0LL, 1, 0);
      xxxDrawDragRectEx(a1);
      *((_DWORD *)a1 + 45) |= 0x20u;
    }
  }
  v18 = (_OWORD *)((char *)a1 + 24);
LABEL_28:
  v19 = *((int *)a1 + 40);
  v20 = *(_QWORD *)a1;
  *(_OWORD *)v26 = *v18;
  _InterlockedAdd(&glSendMessage, 1u);
  xxxSendTransformableMessageTimeout(v20, v9, v19, (struct _LARGE_STRING *)v26, 0, 0, 0LL, 1, 0);
  xxxDrawDragRectEx(a1);
LABEL_29:
  if ( *((_DWORD *)a1 + 40) == 9 && ((*(_DWORD *)(*(_QWORD *)a1 + 368LL) & 0xF) == 2 || *((_QWORD *)a1 + 24) == v24) )
  {
    *((_DWORD *)a1 + 38) += v26[0] - (__int16)a2;
    *((_DWORD *)a1 + 39) += v26[1] - SHIWORD(a2);
  }
}
