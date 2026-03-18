/*
 * XREFs of NtUserSetProp @ 0x1C0097A50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     CreateProp @ 0x1C0097B78 (CreateProp.c)
 */

__int64 __fastcall NtUserSetProp(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  bool v13; // zf
  __int64 Prop; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwndEx(a1, 1LL, 1LL);
  v9 = 0LL;
  v10 = v6;
  if ( v6 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL);
    if ( *(_QWORD *)(v11 + 16) != v6 )
    {
      if ( !gbEnforceUIPI || (v11 = *(unsigned int *)(*(_QWORD *)(v6 + 16) + 464LL), (v11 & 0xC) != 0) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
        v7 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 400LL);
        v17 = *(unsigned int *)(v7 + 740);
        if ( *(_DWORD *)(CurrentProcessWin32Process + 740) != (_DWORD)v17
          || (v18 = PsGetCurrentProcessWin32Process(v17),
              v7 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 400LL),
              *(_DWORD *)(v18 + 744) != *(_DWORD *)(v7 + 744)) )
        {
          v19 = 5LL;
LABEL_22:
          UserSetLastError(v19, v7);
          goto LABEL_15;
        }
      }
    }
    if ( !(_WORD)a2 )
    {
      v19 = 87LL;
      goto LABEL_22;
    }
    v12 = *(_QWORD *)(v10 + 184);
    if ( v12 )
    {
      v7 = *(unsigned int *)(v12 + 4);
      v8 = v12 + 8;
      if ( (_DWORD)v7 )
      {
        while ( *(_WORD *)(v8 + 8) != (_WORD)a2 || (*(_BYTE *)(v8 + 10) & 1) != 0 )
        {
          v8 += 16LL;
          v13 = (_DWORD)v7 == 1;
          v7 = (unsigned int)(v7 - 1);
          if ( v13 )
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
    Prop = CreateProp(v10);
    v8 = Prop;
    if ( Prop )
    {
      *(_WORD *)(Prop + 8) = a2;
      *(_WORD *)(Prop + 10) = HIWORD(a2) != 0 ? 2 : 0;
LABEL_14:
      *(_QWORD *)v8 = a3;
      v9 = 1LL;
    }
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
