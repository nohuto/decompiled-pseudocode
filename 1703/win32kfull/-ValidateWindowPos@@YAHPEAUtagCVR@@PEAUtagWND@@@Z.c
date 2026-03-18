/*
 * XREFs of ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0064844
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C0064790 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C0062730 (_GetDesktopWindow.c)
 */

_BOOL8 __fastcall ValidateWindowPos(struct tagCVR *a1, struct tagWND *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r9
  unsigned __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 *v10; // r14
  __int64 v11; // rbx
  __int64 DesktopWindow; // rax
  struct tagWND *v14; // rdx
  __int64 v15; // rbp
  struct tagWND *v16; // r14
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  char v19; // r10
  __int64 v20; // rax

  v2 = *(_QWORD *)a1;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v7 = (unsigned __int16)v2;
  if ( (unsigned __int64)(unsigned __int16)v2 < *(_QWORD *)(gpsi + 8LL) )
  {
    v8 = v2 >> 16;
    v9 = gSharedInfo[1] + (unsigned int)(v7 * LODWORD(gSharedInfo[2]));
    v10 = (__int64 *)(gpKernelHandleTable + 16 * ((__int64)(unsigned int)(v7 * LODWORD(gSharedInfo[2])) >> 5));
    if ( ((_WORD)v8 == *(_WORD *)(v9 + 26)
       || (_WORD)v8 == 0xFFFF
       || !(_WORD)v8 && PsGetCurrentProcessWow64Process(v6, v5, gpsi, v7))
      && (*(_BYTE *)(v9 + 25) & 1) == 0
      && *(_BYTE *)(v9 + 24) == 1 )
    {
      v11 = *v10;
      if ( *v10 )
      {
        *((_QWORD *)a1 + 13) = *(_QWORD *)(v11 + 16);
        if ( (*((_DWORD *)a1 + 8) & 4) != 0 )
          return 1LL;
        DesktopWindow = GetDesktopWindow(v11);
        v14 = *(struct tagWND **)(v11 + 104);
        v15 = DesktopWindow;
        v16 = v14;
        if ( *(char *)(v11 + 59) >= 0 )
        {
          v17 = *((_QWORD *)a1 + 1);
          if ( v17 > 0xFFFFFFFFFFFFFFFDuLL )
          {
            if ( v14 != (struct tagWND *)DesktopWindow )
              return 0LL;
            return !a2 || a2 == v14;
          }
          if ( v17 )
          {
            if ( v17 == 1 )
              return !a2 || a2 == v14;
            v18 = HMValidateHandleNoSecure(v17, 1);
            if ( !v18 || (v19 = *(_BYTE *)(v18 + 59), v19 < 0) )
            {
              UserSetLastError(6LL);
              return 0LL;
            }
            if ( v11 == v18 )
              return 0LL;
            v14 = *(struct tagWND **)(v11 + 104);
            if ( v14 != *(struct tagWND **)(v18 + 104) )
              return 0LL;
            if ( !a2 )
              return 1LL;
            if ( v16 != (struct tagWND *)v15 )
              return !a2 || a2 == v14;
            if ( ((*(_BYTE *)(v11 + 59) & 4 ^ (*(unsigned __int8 *)(v11 + 64) >> 1) & 4) & 0xFFFFFFFC) != 0 )
            {
              if ( ((v19 & 4 ^ (*(unsigned __int8 *)(v18 + 64) >> 1) & 4) & 0xFFFFFFFC) == 0 )
                return 0LL;
              return !a2 || a2 == v14;
            }
            v20 = *(_QWORD *)(v18 + 88);
          }
          else
          {
            if ( !a2 )
              return 1LL;
            if ( v14 != (struct tagWND *)DesktopWindow
              || ((*(_BYTE *)(v11 + 59) & 4 ^ (*(unsigned __int8 *)(v11 + 64) >> 1) & 4) & 0xFFFFFFFC) != 0 )
            {
              return !a2 || a2 == v14;
            }
            v20 = *((_QWORD *)a2 + 14);
          }
          if ( v20 && ((*(_BYTE *)(v20 + 59) & 4 ^ (*(unsigned __int8 *)(v20 + 64) >> 1) & 4) & 0xFFFFFFFC) != 0 )
            return 0LL;
          return !a2 || a2 == v14;
        }
      }
    }
  }
  return 0LL;
}
