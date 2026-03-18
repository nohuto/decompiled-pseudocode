/*
 * XREFs of ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C0070CD0
 * Callers:
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0070B80 (NtUserSetProcessDpiAwarenessContext.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     HMValidateSharedHandleNoRip @ 0x1C0070E54 (HMValidateSharedHandleNoRip.c)
 */

void __fastcall UpdateWindowTreeDpiAwareness(struct tagPROCESSINFO *a1, struct tagWND *a2)
{
  __int64 v4; // rdi
  unsigned __int64 *i; // rsi
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  int v8; // edx
  _QWORD *v9; // r12
  unsigned __int64 v10; // rbx
  char *v11; // rbp
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax

  if ( (int)IsBuildHwndListSupported() < 0 )
    v4 = 0LL;
  else
    v4 = BuildHwndList(a2, 1LL, 0LL);
  if ( v4 )
  {
    for ( i = (unsigned __int64 *)(v4 + 32); ; ++i )
    {
      v6 = *i;
      if ( *i == 1 )
        break;
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v8 = (unsigned __int16)v6;
      if ( (unsigned __int64)(unsigned __int16)v6 < *((_QWORD *)gpsi + 1) )
      {
        v9 = gpKernelHandleTable;
        v10 = v6 >> 16;
        v11 = (char *)qword_1C018E9B8 + (unsigned int)(v8 * dword_1C018E9C0);
        v12 = 3 * ((__int64)(unsigned int)(v8 * dword_1C018E9C0) >> 5);
        if ( ((_WORD)v10 == *((_WORD *)v11 + 13)
           || (_WORD)v10 == 0xFFFF
           || !(_WORD)v10 && PsGetCurrentProcessWow64Process(v7))
          && (v11[25] & 1) == 0
          && v11[24] == 1 )
        {
          v13 = v9[v12];
          if ( v13 )
          {
            if ( (int)IsUpdateWindowMonitorSupported() >= 0
              && *(struct tagPROCESSINFO **)(*(_QWORD *)(v13 + 16) + 400LL) == a1 )
            {
              v14 = *(_QWORD *)(v13 + 360);
              *(_DWORD *)(v13 + 368) = *((_DWORD *)a1 + 70);
              v15 = HMValidateSharedHandleNoRip(v14);
              UpdateWindowMonitor(v13, v15);
            }
          }
        }
      }
    }
    FreeHwndList(v4);
  }
}
