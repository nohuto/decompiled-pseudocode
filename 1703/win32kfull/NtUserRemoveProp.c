/*
 * XREFs of NtUserRemoveProp @ 0x1C00DE460
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserRemoveProp(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    v11 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 408LL) + 8LL);
    if ( *(_QWORD *)(v11 + 16) == v4
      || gbEnforceUIPI && (v11 = *(unsigned int *)(*(_QWORD *)(v4 + 16) + 440LL), (v11 & 0xC) == 0)
      || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11, v5),
          v15 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 376LL),
          v16 = *(unsigned int *)(v15 + 732),
          *(_DWORD *)(CurrentProcessWin32Process + 732) == (_DWORD)v16)
      && (v17 = PsGetCurrentProcessWin32Process(v16, v15),
          v5 = *(__int64 **)(*(_QWORD *)(v10 + 16) + 376LL),
          *(_DWORD *)(v17 + 736) == *((_DWORD *)v5 + 184)) )
    {
      v6 = *(_QWORD *)(v10 + 184);
      if ( v6 && a2 )
      {
        v7 = *(unsigned int *)(v6 + 4);
        v5 = (__int64 *)(v6 + 8);
        v8 = 0xFFFFFFFFLL;
        if ( (_DWORD)v7 )
        {
          while ( *((_WORD *)v5 + 4) != a2 || (*((_BYTE *)v5 + 10) & 1) != 0 )
          {
            v5 += 2;
            v7 = (unsigned int)(v7 - 1);
            if ( !(_DWORD)v7 )
              goto LABEL_10;
          }
        }
        else
        {
LABEL_10:
          v5 = 0LL;
        }
        if ( v5 )
        {
          v9 = *v5;
          --*(_DWORD *)(v6 + 4);
          v6 = *(_QWORD *)(v10 + 184);
          v12 = 2LL * *(unsigned int *)(v6 + 4);
          *(_OWORD *)v5 = *(_OWORD *)(v6 + 16LL * *(unsigned int *)(v6 + 4) + 8);
          v5 = 0LL;
          *(_QWORD *)(v6 + 8 * v12 + 8) = 0LL;
          *(_QWORD *)(v6 + 8 * v12 + 16) = 0LL;
        }
      }
    }
    else
    {
      UserSetLastError(5LL);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
