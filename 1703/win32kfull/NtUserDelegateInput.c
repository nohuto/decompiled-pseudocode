/*
 * XREFs of NtUserDelegateInput @ 0x1C0107040
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall NtUserDelegateInput(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // eax
  __int64 v20; // rcx

  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a4);
  v14 = 0LL;
  v15 = v9;
  if ( v9 )
  {
    if ( !a5 || (a5 & 0xFFFFEFF9) != 0 )
      goto LABEL_25;
    if ( a1 )
    {
      v16 = PtiFromThreadId(a1);
      if ( !v16 )
        goto LABEL_25;
    }
    else
    {
      v16 = gptiCurrent;
    }
    if ( *(char *)(v15 + 59) >= 0 && *(char *)(v15 + 60) >= 0 )
    {
      v17 = *(_QWORD *)(v15 + 16);
      if ( *(_QWORD *)(v17 + 376) == PsGetCurrentProcessWin32Process(v11, v10) )
      {
        v18 = *(_DWORD *)(v15 + 336);
        if ( v18 )
        {
          if ( !a3
            && *(_QWORD *)(v15 + 328) == v16
            && *(_QWORD *)(v16 + 1112) == a2
            && !*(_QWORD *)(v16 + 1120)
            && v18 == a5 )
          {
            v20 = 1242LL;
            goto LABEL_26;
          }
        }
        else if ( *(_QWORD *)(v17 + 376) == *(_QWORD *)(v16 + 376)
               && v17 != v16
               && *(_DWORD *)(*(_QWORD *)(v16 + 384) + 344LL) == 1
               && *(_QWORD *)(v17 + 408) == *(_QWORD *)(v16 + 408)
               && !*(_QWORD *)(v17 + 1112) )
        {
          *(_QWORD *)(v15 + 328) = v16;
          v14 = 1LL;
          *(_DWORD *)(v15 + 336) = a5;
          *(_DWORD *)(v16 + 1096) |= 0x2000u;
          *(_DWORD *)(v16 + 440) |= 0xC0u;
          ++*(_DWORD *)(v16 + 1128);
          *(_QWORD *)(v16 + 1112) = a2;
          *(_QWORD *)(v16 + 1120) = a3;
          ++*(_DWORD *)(v17 + 1128);
          goto LABEL_16;
        }
      }
      v20 = 5LL;
LABEL_26:
      UserSetLastError(v20);
      goto LABEL_16;
    }
LABEL_25:
    v20 = 87LL;
    goto LABEL_26;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v14;
}
