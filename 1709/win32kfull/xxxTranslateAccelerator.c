/*
 * XREFs of xxxTranslateAccelerator @ 0x1C00FC58C
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1C00FC480 (NtUserTranslateAccelerator.c)
 * Callees:
 *     xxxSetSysMenu @ 0x1C007AD30 (xxxSetSysMenu.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     _GetKeyState @ 0x1C00FC8DC (_GetKeyState.c)
 *     SystoChar @ 0x1C00FC96C (SystoChar.c)
 *     xxxLoadSysDesktopMenu @ 0x1C011DAE4 (xxxLoadSysDesktopMenu.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z @ 0x1C013E248 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z.c)
 */

__int64 __fastcall xxxTranslateAccelerator(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int8 v20; // cl
  char v21; // di
  int v23; // eax
  unsigned __int64 v24; // r15
  int v25; // r14d
  unsigned int v26; // ebx
  __int64 v27; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 SysDesktopMenu; // rbx
  __int64 *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // eax
  unsigned __int8 v38; // [rsp+50h] [rbp-30h]
  HMENU v39; // [rsp+58h] [rbp-28h] BYREF
  __int64 v40; // [rsp+60h] [rbp-20h] BYREF
  __int64 v41; // [rsp+68h] [rbp-18h]

  v3 = a3;
  v39 = 0LL;
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
  v23 = v7 - 2;
  if ( v23 )
  {
    v37 = v23 - 2;
    if ( !v37 )
      goto LABEL_3;
    if ( v37 != 2 )
      return 0LL;
  }
  v9 = v8;
LABEL_4:
  v10 = *(_QWORD *)(gptiCurrent + 416LL);
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
  v19 = 0LL;
  v20 = v15 | 4;
  if ( (v16 & 0x8000) == 0 )
    v20 = v15;
  v38 = v20;
  do
  {
    v21 = *(_BYTE *)v5;
    if ( *(unsigned __int16 *)(v5 + 2) == *(_QWORD *)(v3 + 16)
      && (_DWORD)v9 == (v21 & 1)
      && (!v9 || (((unsigned __int8)v21 ^ v20) & 0xC) == 0)
      && (((unsigned __int8)v21 ^ v20) & 0x10) == 0 )
    {
      v24 = *(unsigned __int16 *)(v5 + 4);
      v25 = 0;
      v26 = 0;
      if ( *(_WORD *)(v5 + 4) )
      {
        if ( (*(_BYTE *)(BugCheckParameter2 + 71) & 0x40) != 0 )
          goto LABEL_28;
        v27 = *(_QWORD *)(BugCheckParameter2 + 208);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, 0LL);
        v40 = *(_QWORD *)(ThreadWin32Thread + 392);
        *(_QWORD *)(ThreadWin32Thread + 392) = &v40;
        v41 = v27;
        if ( v27 )
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
        v26 = xxxTA_AccelerateMenu(BugCheckParameter2, (struct tagMENU *const)v27, v24, &v39);
        ThreadUnlock1(v30, v29);
        v19 = 0LL;
        if ( (*(_BYTE *)(BugCheckParameter2 + 71) & 0x40) != 0 || !v26 )
        {
LABEL_28:
          SysDesktopMenu = *(_QWORD *)(BugCheckParameter2 + 200);
          if ( SysDesktopMenu || (*(_BYTE *)(BugCheckParameter2 + 70) & 8) == 0 )
          {
            v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, 0LL);
            v40 = *(_QWORD *)(v36 + 392);
            *(_QWORD *)(v36 + 392) = &v40;
            v41 = SysDesktopMenu;
            if ( SysDesktopMenu )
              _InterlockedIncrement((volatile signed __int32 *)(SysDesktopMenu + 8));
          }
          else
          {
            v32 = (__int64 *)(*(_QWORD *)(BugCheckParameter2 + 24) + 56LL);
            SysDesktopMenu = *v32;
            if ( !*v32 )
              SysDesktopMenu = xxxLoadSysDesktopMenu(v32, 16LL);
            v33 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19);
            v40 = *(_QWORD *)(v33 + 392);
            *(_QWORD *)(v33 + 392) = &v40;
            v41 = SysDesktopMenu;
            if ( SysDesktopMenu )
              _InterlockedIncrement((volatile signed __int32 *)(SysDesktopMenu + 8));
            xxxSetSysMenu((struct tagWND *)BugCheckParameter2);
          }
          v26 = xxxTA_AccelerateMenu(BugCheckParameter2, (struct tagMENU *const)SysDesktopMenu, v24, &v39);
          if ( v26 )
            v25 = 1;
          ThreadUnlock1(v35, v34);
          v19 = 0LL;
        }
      }
      v17 = *(_BYTE *)(BugCheckParameter2 + 71) & 8;
      if ( (v26 & 1) == 0
        && (!v26
         || ((*(_BYTE *)(BugCheckParameter2 + 71) & 0x20) == 0 || v25)
         && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 104LL)
         && (*(_BYTE *)(BugCheckParameter2 + 71) & 8) == 0) )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        if ( v25 )
          xxxSendTransformableMessageTimeout(
            (__int64 *)BugCheckParameter2,
            274LL,
            v24,
            (struct _LARGE_STRING *)0x10000,
            0,
            0,
            0LL,
            1u,
            0);
        else
          xxxSendTransformableMessageTimeout((__int64 *)BugCheckParameter2, 273LL, v24 | 0x10000, 0LL, 0, 0, 0LL, 1u, 1);
        v21 = 0x80;
        v19 = 0LL;
      }
      if ( v39 )
      {
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(
          (__int64 *)BugCheckParameter2,
          293LL,
          (unsigned __int64)v39,
          0LL,
          0,
          0,
          0LL,
          1u,
          1);
        v19 = 0LL;
        v39 = 0LL;
      }
      v20 = v38;
      v3 = a3;
      v6 = 1;
    }
    v5 += 6LL;
  }
  while ( v21 >= 0 && !v6 );
  return v6;
}
