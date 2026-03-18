/*
 * XREFs of zzzUnhookWindowsHook @ 0x1C01C14E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     PhkFirstValid @ 0x1C0048EE8 (PhkFirstValid.c)
 *     PhkNextValid @ 0x1C00D9418 (PhkNextValid.c)
 */

__int64 __fastcall zzzUnhookWindowsHook(int a1)
{
  __int64 i; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rcx

  if ( (unsigned int)(a1 + 1) > 0xF )
  {
    v9 = 1426LL;
  }
  else
  {
    for ( i = PhkFirstValid(gptiCurrent, a1); ; i = PhkNextValid(v8) )
    {
      v8 = i;
      if ( !i )
      {
        v9 = 1431LL;
        goto LABEL_14;
      }
      v6 = *(int *)(i + 68);
      v7 = (_DWORD)v6 == -1
         ? *(_QWORD *)(v8 + 56)
         : *(_QWORD *)(v8 + 56) + *(_QWORD *)(*(_QWORD *)(v4 + 376) + 8 * v6 + 376);
      if ( v7 == v5 )
        break;
    }
    if ( *(_QWORD *)(v8 + 16) == v4 )
      return zzzUnhookWindowsHookEx((struct tagHOOK *)v8, v2, v3);
    v9 = 5LL;
  }
LABEL_14:
  UserSetLastError(v9);
  return 0LL;
}
