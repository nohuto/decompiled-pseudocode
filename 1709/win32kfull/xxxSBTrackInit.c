/*
 * XREFs of xxxSBTrackInit @ 0x1C0210C18
 * Callers:
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     xxxDoScrollMenu @ 0x1C0210740 (xxxDoScrollMenu.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     xxxCapture @ 0x1C0046908 (xxxCapture.c)
 *     CalcSBStuff @ 0x1C0077264 (CalcSBStuff.c)
 *     GetWndSBDisableFlags @ 0x1C0082EC0 (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01B5C04 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C020DDE4 (zzzShowCaret.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C020F6D8 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C020FBDC (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C021009C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 */

__int64 __fastcall xxxSBTrackInit(struct tagWND *a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbx
  struct tagWND **v11; // r15
  __int128 v12; // xmm0
  __int64 *v13; // r12
  unsigned int v14; // ecx
  int v15; // eax
  int v16; // r9d
  char *v17; // rsi
  unsigned __int16 v18; // ax
  unsigned int v19; // edx
  __int64 v20; // rcx
  int v21; // r8d
  __int128 *v22; // r10
  __int128 *v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  int v27; // r15d
  int v28; // r13d
  int v29; // eax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  char WndSBDisableFlags; // [rsp+38h] [rbp-41h]
  __int128 v38; // [rsp+40h] [rbp-39h] BYREF
  char v39; // [rsp+50h] [rbp-29h] BYREF

  result = safe_cast_fnid_to_PSBWND((__int64)a1);
  v9 = result;
  if ( *(_QWORD *)(*(_QWORD *)(v8 + 16) + 688LL) || !result && !v7 )
    return result;
  result = Win32AllocPoolWithQuota(104LL, 1953723221LL);
  v10 = result;
  if ( !result )
    return result;
  *(_DWORD *)result &= ~1u;
  *(_QWORD *)&v38 = result + 8;
  v11 = (struct tagWND **)(result + 16);
  *(_QWORD *)(result + 64) = 0LL;
  *((_QWORD *)&v38 + 1) = a1;
  v12 = v38;
  *(_QWORD *)(result + 8) = 0LL;
  *(_QWORD *)(result + 16) = 0LL;
  v13 = (__int64 *)(result + 24);
  *(_QWORD *)(result + 24) = 0LL;
  v38 = v12;
  *(_QWORD *)(result + 48) = xxxTrackBox;
  HMAssignmentLock(&v38);
  *(_QWORD *)(*((_QWORD *)a1 + 2) + 688LL) = v10;
  v14 = *(_DWORD *)v10 & 0xFFFFFFFB | (a3 == 0 ? 4 : 0);
  *(_DWORD *)v10 = v14;
  if ( (v14 & 4) != 0 )
  {
    *(_QWORD *)&v38 = v10 + 16;
    *((_QWORD *)&v38 + 1) = a1;
    HMAssignmentLock(&v38);
    v15 = 2 * *(_DWORD *)(v9 + 8);
    *(_QWORD *)&v38 = v10 + 24;
    *(_DWORD *)v10 ^= (*(_DWORD *)v10 ^ v15) & 2;
    *((_QWORD *)&v38 + 1) = *((_QWORD *)a1 + 13);
    HMAssignmentLock(&v38);
    v16 = *(_DWORD *)(v9 + 12);
    v17 = (char *)(v9 + 16);
    WndSBDisableFlags = v16;
    *(_DWORD *)(v10 + 88) = 2;
  }
  else
  {
    v18 = WORD1(a2) - *((_WORD *)a1 + 66);
    if ( (*((_BYTE *)a1 + 66) & 0x40) != 0 )
      a2 = (unsigned __int16)(*((_WORD *)a1 + 68) - a2) | (v18 << 16);
    else
      a2 = (unsigned __int16)(a2 - *((_WORD *)a1 + 64)) | (v18 << 16);
    *(_QWORD *)&v38 = v10 + 24;
    *((_QWORD *)&v38 + 1) = a1;
    HMAssignmentLock(&v38);
    v38 = (unsigned __int64)v11;
    HMAssignmentLock(&v38);
    v19 = *(_DWORD *)v10 ^ (*(_DWORD *)v10 ^ (2 * a3)) & 2;
    *(_DWORD *)v10 = v19;
    v17 = &v39;
    WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, (v19 >> 1) & 1);
    LOBYTE(v16) = WndSBDisableFlags;
    *(_DWORD *)(v10 + 88) = a3 != 6;
  }
  *(_QWORD *)(v10 + 96) = v17;
  if ( (v16 & 3) == 3 )
    goto LABEL_12;
  if ( (*(_DWORD *)v10 & 4) == 0 )
  {
    CalcSBStuff((__int64)a1, (__int64)v17, (*(_DWORD *)v10 >> 1) & 1);
    LOBYTE(v16) = WndSBDisableFlags;
  }
  v21 = *(_DWORD *)v10;
  v22 = &v38;
  if ( ((*(_DWORD *)v10 >> 1) & 1) == 0 )
    v22 = (__int128 *)((char *)&v38 + 4);
  v23 = (__int128 *)((char *)&v38 + 4);
  if ( ((*(_DWORD *)v10 >> 1) & 1) != 0 )
  {
    v24 = (unsigned int)SWORD1(a2);
  }
  else
  {
    v23 = &v38;
    v24 = (unsigned int)(__int16)a2;
  }
  *(_DWORD *)v22 = *((_DWORD *)v17 + 6);
  *(_DWORD *)v23 = *((_DWORD *)v17 + 4);
  *((_DWORD *)v22 + 2) = *((_DWORD *)v17 + 7);
  v25 = *((_DWORD *)v17 + 5);
  *(_DWORD *)(v10 + 56) = -1;
  *((_DWORD *)v23 + 2) = v25;
  if ( (int)v24 < *((_DWORD *)v17 + 9) )
  {
    if ( (v16 & 1) != 0 )
    {
      if ( (v21 & 4) != 0 )
        goto LABEL_23;
      goto LABEL_12;
    }
    *(_DWORD *)(v10 + 56) = 0;
    v26 = *((_DWORD *)v17 + 9);
    goto LABEL_33;
  }
  if ( (int)v24 >= *((_DWORD *)v17 + 10) )
  {
    if ( (v16 & 2) != 0 )
    {
      if ( (v21 & 4) != 0 )
      {
        zzzShowCaret(*v11, v24);
LABEL_23:
        result = *((_QWORD *)a1 + 2);
        if ( v10 != *(_QWORD *)(result + 688) )
          return result;
      }
LABEL_12:
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 688LL) = 0LL;
      HMAssignmentUnlock(v10 + 24);
      HMAssignmentUnlock(v10 + 16);
      v20 = v10 + 8;
LABEL_54:
      HMAssignmentUnlock(v20);
      return Win32FreePool(v10, v33, v34);
    }
    *(_DWORD *)(v10 + 56) = 1;
    *(_DWORD *)v23 = *((_DWORD *)v17 + 10);
LABEL_34:
    v27 = v24;
    v28 = a4;
    goto LABEL_41;
  }
  if ( (int)v24 < *((_DWORD *)v17 + 13) )
  {
    *(_DWORD *)(v10 + 56) = 2;
    *(_DWORD *)v23 = *((_DWORD *)v17 + 9);
    v26 = *((_DWORD *)v17 + 13);
LABEL_33:
    *((_DWORD *)v23 + 2) = v26;
    goto LABEL_34;
  }
  v27 = v24;
  v28 = a4;
  if ( (int)v24 < *((_DWORD *)v17 + 12) )
    goto LABEL_37;
  *(_DWORD *)(v10 + 56) = 3;
  *(_DWORD *)v23 = *((_DWORD *)v17 + 12);
  *((_DWORD *)v23 + 2) = *((_DWORD *)v17 + 10);
  while ( 1 )
  {
LABEL_41:
    if ( v28 != 1 )
      goto LABEL_44;
    v31 = *(_DWORD *)(v10 + 56);
    if ( !v31 )
      goto LABEL_47;
    if ( v31 == 1 )
    {
LABEL_44:
      if ( v28 != 2 )
        goto LABEL_47;
    }
    if ( *(_DWORD *)(v10 + 56) == 4 )
      break;
LABEL_37:
    if ( *((_DWORD *)v17 + 10) - *((_DWORD *)v17 + 9) <= *((_DWORD *)v17 + 8) )
    {
      result = *((_QWORD *)a1 + 2);
      v32 = v10 + 24;
      goto LABEL_53;
    }
    *(_DWORD *)(v10 + 56) = 4;
    CalcTrackDragRect((struct tagSBTRACK *)v10, v24);
    *(_QWORD *)(v10 + 48) = xxxTrackThumb;
    v29 = *((_DWORD *)v17 + 13);
    *((_DWORD *)v17 + 11) = v29;
    *(_DWORD *)(v10 + 76) = v29;
    v30 = *((_DWORD *)v17 + 3);
    *(_DWORD *)(v10 + 80) = v30;
    *(_DWORD *)(v10 + 84) = v30;
    *(_DWORD *)(v10 + 72) = *((_DWORD *)v17 + 11) - v27;
    xxxCapture(gptiCurrent, (__int64)a1, 3);
    result = *((_QWORD *)a1 + 2);
    if ( v10 == *(_QWORD *)(result + 688) )
    {
      v24 = *v13;
      if ( !*v13 )
        continue;
      xxxDoScroll(
        *(struct tagWND **)(v10 + 16),
        (struct tagWND *)v24,
        5LL,
        *(unsigned int *)(v10 + 80),
        (*(_DWORD *)v10 >> 1) & 1);
      result = *((_QWORD *)a1 + 2);
      if ( v10 == *(_QWORD *)(result + 688) )
        continue;
    }
    return result;
  }
  *(_DWORD *)(v10 + 72) = *((_DWORD *)v17 + 8) / -2;
LABEL_47:
  xxxCapture(gptiCurrent, (__int64)a1, 3);
  result = *((_QWORD *)a1 + 2);
  if ( v10 == *(_QWORD *)(result + 688) )
  {
    if ( *(_DWORD *)(v10 + 56) != 4 )
      *(_OWORD *)(v10 + 32) = v38;
    xxxSBTrackLoop(a1, a2, (struct tagSBCALC *)v17);
    result = *((_QWORD *)a1 + 2);
    v10 = *(_QWORD *)(result + 688);
    if ( v10 )
    {
      v32 = v10 + 24;
LABEL_53:
      *(_QWORD *)(result + 688) = 0LL;
      HMAssignmentUnlock(v32);
      HMAssignmentUnlock(v10 + 16);
      v20 = v10 + 8;
      goto LABEL_54;
    }
  }
  return result;
}
