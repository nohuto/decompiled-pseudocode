/*
 * XREFs of ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C00775B4
 * Callers:
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C0077450 (NtUserSetProcessDpiAwarenessContext.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x1C007772C (HMValidateSharedHandleNoRip.c)
 */

void __fastcall UpdateWindowTreeDpiAwareness(struct tagPROCESSINFO *a1, struct tagWND *a2)
{
  __int64 v4; // rdi
  unsigned __int64 *i; // rsi
  unsigned __int64 v6; // rbx
  int v7; // edx
  unsigned __int64 v8; // rbx
  char *v9; // rbp
  __int64 *v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax

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
      PsGetThreadWin32Thread(KeGetCurrentThread());
      v7 = (unsigned __int16)v6;
      if ( (unsigned __int64)(unsigned __int16)v6 < *((_QWORD *)gpsi + 1) )
      {
        v8 = v6 >> 16;
        v9 = (char *)qword_1C0189E38 + (unsigned int)(v7 * dword_1C0189E40);
        v10 = (__int64 *)((char *)gpKernelHandleTable + 16 * ((__int64)(unsigned int)(v7 * dword_1C0189E40) >> 5));
        if ( ((_WORD)v8 == *((_WORD *)v9 + 13) || (_WORD)v8 == 0xFFFF || !(_WORD)v8 && PsGetCurrentProcessWow64Process())
          && (v9[25] & 1) == 0
          && v9[24] == 1 )
        {
          v11 = *v10;
          if ( *v10 )
          {
            if ( (int)IsUpdateWindowMonitorSupported() >= 0
              && *(struct tagPROCESSINFO **)(*(_QWORD *)(v11 + 16) + 376LL) == a1 )
            {
              v12 = *(_QWORD *)(v11 + 360);
              *(_DWORD *)(v11 + 368) = *((_DWORD *)a1 + 70);
              v13 = HMValidateSharedHandleNoRip(v12);
              UpdateWindowMonitor(v11, v13);
            }
          }
        }
      }
    }
    FreeHwndList(v4);
  }
}
