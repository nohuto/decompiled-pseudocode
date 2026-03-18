/*
 * XREFs of NtUserSetProp @ 0x1C0042A00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     CreateProp @ 0x1C0042B34 (CreateProp.c)
 */

__int64 __fastcall NtUserSetProp(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  bool v15; // zf
  __int64 Prop; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwndEx(a1, 1LL, 1LL);
  v11 = 0LL;
  v12 = v6;
  if ( v6 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL);
    if ( *(_QWORD *)(v13 + 16) != v6 )
    {
      if ( !gbEnforceUIPI || (v13 = *(unsigned int *)(*(_QWORD *)(v6 + 16) + 440LL), (v13 & 0xC) != 0) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13, v7);
        v19 = *(_QWORD *)(*(_QWORD *)(v12 + 16) + 376LL);
        v20 = *(unsigned int *)(v19 + 732);
        if ( *(_DWORD *)(CurrentProcessWin32Process + 732) != (_DWORD)v20
          || *(_DWORD *)(PsGetCurrentProcessWin32Process(v20, v19) + 736) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 376LL)
                                                                                       + 736LL) )
        {
          v21 = 5LL;
LABEL_22:
          UserSetLastError(v21);
          goto LABEL_15;
        }
      }
    }
    if ( !(_WORD)a2 )
    {
      v21 = 87LL;
      goto LABEL_22;
    }
    v14 = *(_QWORD *)(v12 + 184);
    if ( v14 )
    {
      v7 = *(unsigned int *)(v14 + 4);
      v8 = v14 + 8;
      if ( (_DWORD)v7 )
      {
        while ( *(_WORD *)(v8 + 8) != (_WORD)a2 || (*(_BYTE *)(v8 + 10) & 1) != 0 )
        {
          v8 += 16LL;
          v15 = (_DWORD)v7 == 1;
          v7 = (unsigned int)(v7 - 1);
          if ( v15 )
            goto LABEL_10;
        }
      }
      else
      {
LABEL_10:
        v8 = 0LL;
      }
      if ( v8 )
        goto LABEL_14;
    }
    Prop = CreateProp(v12);
    v8 = Prop;
    if ( Prop )
    {
      *(_WORD *)(Prop + 8) = a2;
      *(_WORD *)(Prop + 10) = HIWORD(a2) != 0 ? 2 : 0;
LABEL_14:
      *(_QWORD *)v8 = a3;
      v11 = 1LL;
    }
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v11;
}
