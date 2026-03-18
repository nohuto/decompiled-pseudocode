/*
 * XREFs of NtUserDelegateInput @ 0x1C01119A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall NtUserDelegateInput(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // r15
  int v17; // eax
  __int64 v19; // rcx

  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a4);
  v12 = 0LL;
  v13 = v9;
  if ( v9 )
  {
    if ( !a5 || (a5 & 0xFFFFEFF9) != 0 )
      goto LABEL_25;
    if ( a1 )
    {
      v14 = PtiFromThreadId(a1);
      if ( !v14 )
        goto LABEL_25;
    }
    else
    {
      v14 = gptiCurrent;
    }
    if ( *(char *)(v13 + 59) >= 0 && *(char *)(v13 + 60) >= 0 )
    {
      v15 = *(_QWORD *)(v13 + 16);
      v16 = *(_QWORD *)(v15 + 400);
      if ( v16 == PsGetCurrentProcessWin32Process(v11) )
      {
        v17 = *(_DWORD *)(v13 + 336);
        if ( v17 )
        {
          if ( !a3
            && *(_QWORD *)(v13 + 328) == v14
            && *(_QWORD *)(v14 + 1200) == a2
            && !*(_QWORD *)(v14 + 1208)
            && v17 == a5 )
          {
            v19 = 1242LL;
            goto LABEL_26;
          }
        }
        else if ( v16 == *(_QWORD *)(v14 + 400) && v15 != v14 )
        {
          v11 = 1LL;
          if ( *(_DWORD *)(*(_QWORD *)(v14 + 408) + 384LL) == 1
            && *(_QWORD *)(v15 + 432) == *(_QWORD *)(v14 + 432)
            && !*(_QWORD *)(v15 + 1200) )
          {
            *(_QWORD *)(v13 + 328) = v14;
            v12 = 1LL;
            *(_DWORD *)(v13 + 336) = a5;
            *(_DWORD *)(v14 + 1184) |= 0x2000u;
            *(_DWORD *)(v14 + 464) |= 0xC0u;
            ++*(_DWORD *)(v14 + 1216);
            *(_QWORD *)(v14 + 1200) = a2;
            *(_QWORD *)(v14 + 1208) = a3;
            ++*(_DWORD *)(v15 + 1216);
            goto LABEL_16;
          }
        }
      }
      v19 = 5LL;
LABEL_26:
      UserSetLastError(v19, v10);
      goto LABEL_16;
    }
LABEL_25:
    v19 = 87LL;
    goto LABEL_26;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v11, v10);
  return v12;
}
