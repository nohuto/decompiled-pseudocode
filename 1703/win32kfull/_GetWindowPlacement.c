/*
 * XREFs of _GetWindowPlacement @ 0x1C001CFF0
 * Callers:
 *     NtUserGetWindowPlacement @ 0x1C001CEE0 (NtUserGetWindowPlacement.c)
 *     NtUserGetInternalWindowPos @ 0x1C01D9760 (NtUserGetInternalWindowPos.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C001D3E8 (UpdateCheckpoint.c)
 *     CkptUpdate @ 0x1C001D51C (CkptUpdate.c)
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 *     GetRect @ 0x1C0062FEC (GetRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall GetWindowPlacement(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE *updated; // r14
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  int v15; // esi
  _QWORD *v16; // r12
  __int64 v17; // r15
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _DWORD *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  _DWORD *v34; // r8
  int v35; // edx
  int v36; // ecx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 Prop; // rax
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  int v54; // eax
  _BYTE v55[52]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v56; // [rsp+58h] [rbp-18h] BYREF

  memset(v55, 0, sizeof(v55));
  if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 25LL) & 1) != 0 )
    return 0LL;
  if ( a3 )
  {
    updated = (_BYTE *)UpdateCheckpoint(a1);
    if ( updated )
      goto LABEL_4;
    return 0LL;
  }
  Prop = GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
  updated = v55;
  if ( Prop )
  {
    v52 = *(_OWORD *)(Prop + 16);
    *(_OWORD *)v55 = *(_OWORD *)Prop;
    v53 = *(_OWORD *)(Prop + 32);
    v54 = *(_DWORD *)(Prop + 48);
    *(_OWORD *)&v55[16] = v52;
    *(_DWORD *)&v55[48] = v54;
    *(_OWORD *)&v55[32] = v53;
  }
  else
  {
    GetRect(a1, &v56, 66LL);
    *(_DWORD *)&v55[32] &= 0xFFFFFF80;
    *(_OWORD *)v55 = v56;
    *(_OWORD *)&v55[36] = v56;
    *(__m128i *)&v55[16] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    CkptUpdate(a1, &v56, v55);
  }
LABEL_4:
  v10 = *(_BYTE *)(a1 + 71);
  if ( (v10 & 0x20) != 0 )
    *(_DWORD *)(a2 + 8) = 2;
  else
    *(_DWORD *)(a2 + 8) = (2 * (v10 & 1)) | 1;
  *(_OWORD *)(a2 + 28) = *(_OWORD *)updated;
  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v6, v7, v8) + 432) + 224LL) & 1) != 0
    || (v14 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v11, v12, v13) + 432),
        (*(_BYTE *)(v14 + 224) & 0x20) != 0)
    || (W32GetCurrentThreadDpiAwarenessContext(v14) & 0xF) == (*(_DWORD *)(a1 + 368) & 0xF) )
  {
    v15 = 0;
  }
  else
  {
    v15 = 1;
    TransformRectBetweenCoordinateSpaces(a2 + 28, a2 + 28, 0LL, a1);
  }
  v16 = (_QWORD *)(a2 + 12);
  if ( (*((_DWORD *)updated + 8) & 8) != 0 )
  {
    *v16 = *((_QWORD *)updated + 2);
    if ( v15 )
      TransformPointBetweenCoordinateSpaces(a2 + 12, a2 + 12, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a2 + 16) = -1;
    *(_DWORD *)v16 = -1;
  }
  if ( (*((_DWORD *)updated + 8) & 0x10) == 0 || (*(_BYTE *)(a1 + 59) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 24) = -1;
    *(_DWORD *)(a2 + 20) = -1;
  }
  else
  {
    *(_QWORD *)(a2 + 20) = *((_QWORD *)updated + 3);
    if ( v15 )
      TransformPointBetweenCoordinateSpaces(a2 + 20, a2 + 20, 0LL, a1);
  }
  if ( *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1, v11) && *(char *)(a1 + 64) >= 0 )
  {
    v17 = MonitorFromRect(a2 + 28, 1LL);
    if ( (W32GetCurrentThreadDpiAwarenessContext(v18) & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v19, v21, v22) + 408)
      && (v20 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v45, v46, v47) + 408) + 8LL),
          (*(_DWORD *)(v20 + 52) & 1) != 0) )
    {
      v26 = (_DWORD *)(*(_QWORD *)(v17 + 40) + 92LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext(v20) & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v23, v24, v25) + 408)
           && (v20 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v39, v40, v41) + 408) + 8LL),
               (*(_DWORD *)(v20 + 52) & 1) != 0) )
    {
      v26 = (_DWORD *)(*(_QWORD *)(v17 + 40) + 108LL);
    }
    else
    {
      v26 = (_DWORD *)(*(_QWORD *)(v17 + 40) + 76LL);
    }
    if ( (W32GetCurrentThreadDpiAwarenessContext(v20) & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v27, v29, v30) + 408)
      && (v28 = **(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v48, v49, v50) + 408) + 8LL),
          (*(_DWORD *)(v28 + 52) & 1) != 0) )
    {
      v34 = (_DWORD *)(*(_QWORD *)(v17 + 40) + 44LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext(v28) & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v31, v32, v33) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread(), v42, v43, v44) + 408)
                                       + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v34 = (_DWORD *)(*(_QWORD *)(v17 + 40) + 60LL);
    }
    else
    {
      v34 = (_DWORD *)(*(_QWORD *)(v17 + 40) + 28LL);
    }
    if ( (*((_DWORD *)updated + 8) & 8) != 0 )
    {
      *(_DWORD *)v16 += *v34 - *v26;
      *(_DWORD *)(a2 + 16) += v34[1] - v26[1];
    }
    v35 = v34[1] - v26[1];
    v36 = *v34 - *v26;
    *(_DWORD *)(a2 + 28) += v36;
    *(_DWORD *)(a2 + 36) += v36;
    *(_DWORD *)(a2 + 40) += v35;
    *(_DWORD *)(a2 + 32) += v35;
  }
  *(_DWORD *)(a2 + 4) = 0;
  if ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 )
  {
    v38 = *(_DWORD *)(a2 + 4);
    if ( (updated[32] & 1) != 0 )
      v38 = 1;
    *(_DWORD *)(a2 + 4) = v38;
  }
  if ( ((unsigned __int8)~*(_BYTE *)(a1 + 71) & ((updated[32] & 2) == 0)) == 0 )
    *(_DWORD *)(a2 + 4) |= 2u;
  *(_DWORD *)a2 = 44;
  return 1LL;
}
