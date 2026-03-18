/*
 * XREFs of xxxDesktopWndProc @ 0x1C003CEB0
 * Callers:
 *     ?xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C011B3B0 (-xxxWrapDesktopWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C003CF20 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 */

__int64 __fastcall xxxDesktopWndProc(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  int v5; // edi
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 result; // rax

  v4 = 0LL;
  v5 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v7 = *(_QWORD *)(gptiCurrent + 408LL);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 40);
      if ( v8 )
      {
        v4 = *(_QWORD *)(v8 + 24);
        v9 = *(_DWORD *)(v4 + 32);
        if ( v9 >= 0x20 )
          return 0LL;
        v5 = 1;
        *(_DWORD *)(v4 + 32) = v9 + 1;
      }
    }
  }
  result = xxxDesktopWndProcWorker((struct tagWND *)a1, a2, a3, a4);
  if ( v5 )
    --*(_DWORD *)(v4 + 32);
  return result;
}
