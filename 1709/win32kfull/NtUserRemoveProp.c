/*
 * XREFs of NtUserRemoveProp @ 0x1C00F0980
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserRemoveProp(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // r9d
  int v11; // r8d
  __int64 v12; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rcx
  __int64 v16; // rax

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwndEx(a1, 1LL, 1LL);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL);
    if ( *(_QWORD *)(v9 + 16) == v4
      || gbEnforceUIPI && (v9 = *(unsigned int *)(*(_QWORD *)(v4 + 16) + 464LL), (v9 & 0xC) == 0)
      || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9),
          v5 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 400LL),
          v15 = *(unsigned int *)(v5 + 740),
          *(_DWORD *)(CurrentProcessWin32Process + 740) == (_DWORD)v15)
      && (v16 = PsGetCurrentProcessWin32Process(v15),
          v5 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 400LL),
          *(_DWORD *)(v16 + 744) == *(_DWORD *)(v5 + 744)) )
    {
      v6 = *(_QWORD *)(v8 + 184);
      if ( v6 && a2 )
      {
        v10 = *(_DWORD *)(v6 + 4);
        v5 = v6 + 8;
        v11 = v10;
        if ( v10 )
        {
          while ( *(_WORD *)(v5 + 8) != a2 || (*(_BYTE *)(v5 + 10) & 1) != 0 )
          {
            v5 += 16LL;
            if ( !--v11 )
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
          v7 = *(_QWORD *)v5;
          *(_DWORD *)(v6 + 4) = v10 - 1;
          v6 = *(_QWORD *)(v8 + 184);
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
      UserSetLastError(5LL, v5);
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
