/*
 * XREFs of _GetWindowPlacement @ 0x1C004B5A0
 * Callers:
 *     NtUserGetWindowPlacement @ 0x1C004B490 (NtUserGetWindowPlacement.c)
 *     NtUserGetInternalWindowPos @ 0x1C01E5FD0 (NtUserGetInternalWindowPos.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C004B848 (UpdateCheckpoint.c)
 *     CkptUpdate @ 0x1C004B97C (CkptUpdate.c)
 *     GetMonitorWorkRect @ 0x1C004BA28 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     _MonitorFromRect @ 0x1C005D960 (_MonitorFromRect.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     GetRect @ 0x1C0066ABC (GetRect.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00ABE04 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall GetWindowPlacement(__int64 a1, __int64 a2, int a3)
{
  _BYTE *updated; // r14
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  _QWORD *v11; // r12
  __int64 v12; // rbx
  __int128 v13; // xmm0
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v18; // eax
  __int64 Prop; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  int v22; // eax
  __int128 v23; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v24[16]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v25; // [rsp+40h] [rbp-29h] BYREF
  _BYTE v26[52]; // [rsp+50h] [rbp-19h] BYREF

  memset(v26, 0, sizeof(v26));
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
  updated = v26;
  if ( Prop )
  {
    v20 = *(_OWORD *)(Prop + 16);
    *(_OWORD *)v26 = *(_OWORD *)Prop;
    v21 = *(_OWORD *)(Prop + 32);
    v22 = *(_DWORD *)(Prop + 48);
    *(_OWORD *)&v26[16] = v20;
    *(_DWORD *)&v26[48] = v22;
    *(_OWORD *)&v26[32] = v21;
  }
  else
  {
    GetRect(a1, &v25, 66LL);
    *(_DWORD *)&v26[32] &= 0xFFFFFF80;
    *(_OWORD *)v26 = v25;
    *(_OWORD *)&v26[36] = v25;
    *(__m128i *)&v26[16] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    CkptUpdate(a1, &v25, v26);
  }
LABEL_4:
  v7 = *(_BYTE *)(a1 + 71);
  if ( (v7 & 0x20) != 0 )
    *(_DWORD *)(a2 + 8) = 2;
  else
    *(_DWORD *)(a2 + 8) = (2 * (v7 & 1)) | 1;
  *(_OWORD *)(a2 + 28) = *(_OWORD *)updated;
  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 224LL) & 1) != 0
    || (v9 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456), (*(_BYTE *)(v9 + 224) & 0x20) != 0)
    || ((*(_DWORD *)(a1 + 368) >> 8) & 0x1FF) == (((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v9, v8) >> 8) & 0x1FF) )
  {
    v10 = 0;
  }
  else
  {
    v10 = 1;
    TransformRectBetweenCoordinateSpaces(a2 + 28, a2 + 28, 0LL, a1);
  }
  v11 = (_QWORD *)(a2 + 12);
  if ( (*((_DWORD *)updated + 8) & 8) != 0 )
  {
    *v11 = *((_QWORD *)updated + 2);
    if ( v10 )
      TransformPointBetweenCoordinateSpaces(a2 + 12, a2 + 12, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a2 + 16) = -1;
    *(_DWORD *)v11 = -1;
  }
  if ( (*((_DWORD *)updated + 8) & 0x10) == 0 || (*(_BYTE *)(a1 + 59) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 24) = -1;
    *(_DWORD *)(a2 + 20) = -1;
  }
  else
  {
    *(_QWORD *)(a2 + 20) = *((_QWORD *)updated + 3);
    if ( v10 )
      TransformPointBetweenCoordinateSpaces(a2 + 20, a2 + 20, 0LL, a1);
  }
  if ( *(_QWORD *)(a1 + 104) == GetDesktopWindow(a1) && *(char *)(a1 + 64) >= 0 )
  {
    v12 = MonitorFromRect((struct tagRECT *)(a2 + 28));
    v25 = *(_OWORD *)GetMonitorWorkRect(&v23, v12);
    v13 = *(_OWORD *)GetMonitorRect(v24, v12);
    v14 = *((_DWORD *)updated + 8);
    v23 = v13;
    if ( (v14 & 8) != 0 )
    {
      *(_DWORD *)v11 += v13 - v25;
      *(_DWORD *)(a2 + 16) += DWORD1(v13) - DWORD1(v25);
    }
    v15 = v13 - v25;
    *(_DWORD *)(a2 + 28) += v13 - v25;
    *(_DWORD *)(a2 + 36) += v15;
    v16 = DWORD1(v13) - DWORD1(v25);
    *(_DWORD *)(a2 + 40) += DWORD1(v13) - DWORD1(v25);
    *(_DWORD *)(a2 + 32) += v16;
  }
  *(_DWORD *)(a2 + 4) = 0;
  if ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 )
  {
    v18 = *(_DWORD *)(a2 + 4);
    if ( (updated[32] & 1) != 0 )
      v18 = 1;
    *(_DWORD *)(a2 + 4) = v18;
  }
  if ( ((unsigned __int8)~*(_BYTE *)(a1 + 71) & ((updated[32] & 2) == 0)) == 0 )
    *(_DWORD *)(a2 + 4) |= 2u;
  *(_DWORD *)a2 = 44;
  return 1LL;
}
