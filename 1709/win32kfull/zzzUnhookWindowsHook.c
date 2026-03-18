/*
 * XREFs of zzzUnhookWindowsHook @ 0x1C01C4D00
 * Callers:
 *     <none>
 * Callees:
 *     PhkNextValid @ 0x1C0055C18 (PhkNextValid.c)
 *     PhkFirstValid @ 0x1C0056078 (PhkFirstValid.c)
 *     zzzUnhookWindowsHookEx @ 0x1C0056178 (zzzUnhookWindowsHookEx.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall zzzUnhookWindowsHook(int a1, __int64 a2)
{
  __int64 i; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx

  if ( (unsigned int)(a1 + 1) > 0xF )
  {
    v8 = 1426LL;
  }
  else
  {
    for ( i = PhkFirstValid(gptiCurrent, a1); ; i = PhkNextValid(v7) )
    {
      v7 = i;
      if ( !i )
      {
        v8 = 1431LL;
        goto LABEL_14;
      }
      v6 = *(_DWORD *)(i + 68) == -1
         ? *(_QWORD *)(i + 56)
         : *(_QWORD *)(i + 56)
         + *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, v4, v5) + 400)
                     + 8LL * *(int *)(i + 68)
                     + 384);
      if ( v6 == a2 )
        break;
    }
    if ( *(_QWORD *)(v7 + 16) == gptiCurrent )
      return zzzUnhookWindowsHookEx((struct tagHOOK *)v7);
    v8 = 5LL;
  }
LABEL_14:
  UserSetLastError(v8, a2);
  return 0LL;
}
