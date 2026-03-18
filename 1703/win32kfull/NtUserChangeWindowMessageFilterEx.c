/*
 * XREFs of NtUserChangeWindowMessageFilterEx @ 0x1C00C9250
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _ChangeWindowMessageFilterEx @ 0x1C00C93A8 (_ChangeWindowMessageFilterEx.c)
 */

__int64 __fastcall NtUserChangeWindowMessageFilterEx(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  int v15; // ebx
  __int64 v17; // rcx
  __int64 *v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-38h]
  _QWORD v20[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( !v8 )
  {
    v15 = 0;
    goto LABEL_17;
  }
  v20[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v20;
  v20[1] = v8;
  ++*(_DWORD *)(v8 + 8);
  if ( *(_QWORD *)(gptiCurrent + 376LL) != *(_QWORD *)(*(_QWORD *)(v8 + 16) + 376LL) )
  {
    v17 = 5LL;
    goto LABEL_19;
  }
  if ( *(char *)(v8 + 60) < 0 || *(char *)(v8 + 59) < 0 )
  {
    v17 = 1400LL;
    goto LABEL_19;
  }
  if ( a3 > 2 )
    goto LABEL_18;
  if ( !a3 )
  {
    if ( !a2 )
      goto LABEL_8;
    goto LABEL_18;
  }
  if ( !a2 )
  {
LABEL_18:
    v17 = 87LL;
LABEL_19:
    v15 = 0;
    UserSetLastError(v17);
    goto LABEL_16;
  }
LABEL_8:
  if ( !a4 )
  {
    LODWORD(v19) = 8;
LABEL_10:
    v15 = ChangeWindowMessageFilterEx((struct tagWND *)v8, a2);
    if ( v15 && a4 )
    {
      v14 = a4 + 1;
      if ( a4 + 1 < a4 || (unsigned __int64)v14 > W32UserProbeAddress )
      {
        v14 = (_QWORD *)W32UserProbeAddress;
        *W32UserProbeAddress = 0;
      }
      *a4 = v19;
    }
    goto LABEL_16;
  }
  v18 = a4;
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > W32UserProbeAddress )
    v18 = (__int64 *)W32UserProbeAddress;
  v19 = *v18;
  if ( (unsigned int)*v18 == 8 )
    goto LABEL_10;
  UserSetLastError(87LL);
  v15 = 0;
LABEL_16:
  ThreadUnlock1(v14, v13);
LABEL_17:
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v15;
}
