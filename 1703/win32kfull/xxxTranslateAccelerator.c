/*
 * XREFs of xxxTranslateAccelerator @ 0x1C00B81C8
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1C00B7FE0 (NtUserTranslateAccelerator.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     _GetKeyState @ 0x1C00B89D4 (_GetKeyState.c)
 *     SystoChar @ 0x1C00B8A70 (SystoChar.c)
 *     xxxSetSysMenu @ 0x1C00C1FC0 (xxxSetSysMenu.c)
 *     xxxLoadSysDesktopMenu @ 0x1C0114BE4 (xxxLoadSysDesktopMenu.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z @ 0x1C01374F4 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z.c)
 */

__int64 __fastcall xxxTranslateAccelerator(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // r12
  unsigned int v6; // r14d
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r13
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rcx
  int v13; // ebx
  __int16 KeyState; // ax
  unsigned __int8 v15; // di
  __int16 v16; // ax
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // cl
  char v20; // di
  int v22; // eax
  unsigned __int64 v23; // r15
  int v24; // r14d
  unsigned int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 SysDesktopMenu; // rbx
  __int64 *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  unsigned __int8 v34; // [rsp+50h] [rbp-30h]
  HMENU v35; // [rsp+58h] [rbp-28h] BYREF
  __int64 v36; // [rsp+60h] [rbp-20h] BYREF
  __int64 v37; // [rsp+68h] [rbp-18h]

  v3 = a3;
  v35 = 0LL;
  if ( (gfInNumpadHexInput & 2) != 0 )
    return 0LL;
  v5 = a2 + 28;
  v6 = 0;
  v7 = SystoChar(*(unsigned int *)(a3 + 8), *(_QWORD *)(a3 + 24)) - 256;
  if ( !v7 )
  {
LABEL_3:
    v9 = (unsigned int)(v8 + 1);
    goto LABEL_4;
  }
  v22 = v7 - 2;
  if ( v22 )
  {
    v33 = v22 - 2;
    if ( !v33 )
      goto LABEL_3;
    if ( v33 != 2 )
      return 0LL;
  }
  v9 = v8;
LABEL_4:
  v10 = *(_QWORD *)(gptiCurrent + 392LL);
  if ( v10
    && ((unsigned __int8)*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 48) + 32LL) + 80LL) & (unsigned __int8)(v8 + 1)) != 0
    && (GetKeyState(165LL) & 0x8000) != 0 )
  {
    v12 = 163LL;
    v11 = 164;
  }
  else
  {
    v11 = 18;
    v12 = 17LL;
  }
  v13 = ((unsigned __int16)GetKeyState(v12) >> 12) & 8;
  KeyState = GetKeyState(v11);
  v15 = v13 | 0x10;
  if ( (KeyState & 0x8000) == 0 )
    v15 = v13;
  v16 = GetKeyState(16LL);
  v18 = 0LL;
  v19 = v15 | 4;
  if ( (v16 & 0x8000) == 0 )
    v19 = v15;
  v34 = v19;
  do
  {
    v20 = *(_BYTE *)v5;
    if ( *(unsigned __int16 *)(v5 + 2) == *(_QWORD *)(v3 + 16)
      && (_DWORD)v9 == (v20 & 1)
      && (!v9 || (((unsigned __int8)v20 ^ v19) & 0xC) == 0)
      && (((unsigned __int8)v20 ^ v19) & 0x10) == 0 )
    {
      v23 = *(unsigned __int16 *)(v5 + 4);
      v24 = 0;
      v25 = 0;
      if ( *(_WORD *)(v5 + 4) )
      {
        v26 = *(_QWORD *)(a1 + 208);
        if ( (*(_BYTE *)(a1 + 71) & 0x40) != 0 )
          goto LABEL_28;
        v36 = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = &v36;
        v37 = v26;
        if ( v26 )
          ++*(_DWORD *)(v26 + 8);
        v25 = xxxTA_AccelerateMenu((struct tagWND *const)a1, (struct tagMENU *const)v26, v23, &v35);
        ThreadUnlock1(v28, v27);
        v18 = 0LL;
        if ( (*(_BYTE *)(a1 + 71) & 0x40) != 0 || !v25 )
        {
LABEL_28:
          SysDesktopMenu = *(_QWORD *)(a1 + 200);
          if ( SysDesktopMenu || (*(_BYTE *)(a1 + 70) & 8) == 0 )
          {
            v36 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v36;
            v37 = SysDesktopMenu;
            if ( SysDesktopMenu )
              ++*(_DWORD *)(SysDesktopMenu + 8);
          }
          else
          {
            v30 = (__int64 *)(*(_QWORD *)(a1 + 24) + 56LL);
            SysDesktopMenu = *v30;
            if ( !*v30 )
              SysDesktopMenu = xxxLoadSysDesktopMenu(v30, 16LL);
            v36 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v36;
            v37 = SysDesktopMenu;
            if ( SysDesktopMenu )
              ++*(_DWORD *)(SysDesktopMenu + 8);
            xxxSetSysMenu(a1, v26, v17, v18);
          }
          v25 = xxxTA_AccelerateMenu((struct tagWND *const)a1, (struct tagMENU *const)SysDesktopMenu, v23, &v35);
          if ( v25 )
            v24 = 1;
          ThreadUnlock1(v32, v31);
          v18 = 0LL;
        }
      }
      if ( (v25 & 1) == 0
        && (!v25
         || ((*(_BYTE *)(a1 + 71) & 0x20) == 0 || v24)
         && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL)
         && (*(_BYTE *)(a1 + 71) & 8) == 0) )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        if ( v24 )
          xxxSendTransformableMessageTimeout(a1, 0x112u, v23, (struct _LARGE_STRING *)0x10000, 0, 0, 0LL, 1, 0);
        else
          xxxSendTransformableMessageTimeout(a1, 0x111u, v23 | 0x10000, 0LL, 0, 0, 0LL, 1, 1);
        v20 = 0x80;
        v18 = 0LL;
      }
      if ( v35 )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(a1, 0x125u, (unsigned __int64)v35, 0LL, 0, 0, 0LL, 1, 1);
        v18 = 0LL;
        v35 = 0LL;
      }
      v19 = v34;
      v3 = a3;
      v6 = 1;
    }
    v5 += 6LL;
  }
  while ( v20 >= 0 && !v6 );
  return v6;
}
