/*
 * XREFs of NtUserRegisterEdgy @ 0x1C0110840
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsShellProcess @ 0x1C0090B7C (IsShellProcess.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     EdgyUnregisterListener @ 0x1C0110778 (EdgyUnregisterListener.c)
 *     ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1C0110A24 (-_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall NtUserRegisterEdgy(unsigned int a1, __int64 a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int i; // edi
  __int128 *v12; // rcx
  ULONG64 v13; // rdx
  __int64 v14; // rdx
  int updated; // eax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v20; // rcx
  __int128 v21; // [rsp+30h] [rbp-68h] BYREF
  __int128 v22; // [rsp+40h] [rbp-58h]
  __int128 v23; // [rsp+60h] [rbp-38h]
  __int128 v24; // [rsp+70h] [rbp-28h]

  v6 = 0;
  EnterCrit(0LL, 1LL);
  if ( !a1 )
  {
    v20 = 87LL;
LABEL_29:
    UserSetLastError(v20, v7);
    goto LABEL_26;
  }
  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 400LL)) )
  {
    v20 = 5LL;
    goto LABEL_29;
  }
  for ( i = 0; i < a1; ++i )
  {
    v12 = (__int128 *)(a2 + 32LL * i);
    v13 = (ULONG64)(v12 + 2);
    if ( v12 + 2 < v12 || v13 > MmUserProbeAddress )
      v12 = (__int128 *)MmUserProbeAddress;
    v23 = *v12;
    v24 = v12[1];
    v21 = v23;
    v22 = (unsigned __int64)v24;
    if ( a3 )
    {
      LOBYTE(v13) = 19;
      if ( !HMValidateHandle(v21, v13, v9, v10)
        || *((_QWORD *)&v21 + 1)
        && ((v16 = ValidateHwnd(*((_QWORD *)&v21 + 1)), (v18 = v16) == 0)
         || *(char *)(v16 + 59) < 0
         || *(char *)(v16 + 60) < 0
         || *(_QWORD *)(*(_QWORD *)(v16 + 16) + 400LL) != PsGetCurrentProcessWin32Process(v17)
         || *(_DWORD *)(v18 + 336)) )
      {
        UserSetLastError(87LL, v14);
        goto LABEL_26;
      }
      updated = Edgy::_AddOrUpdateListener(
                  *(_QWORD *)(gptiCurrent + 432LL),
                  v21,
                  (unsigned int)v22,
                  *((_QWORD *)&v21 + 1));
    }
    else
    {
      updated = EdgyUnregisterListener((__int64)&v21);
    }
    if ( a3 && !updated )
    {
      UserSetLastError(8LL, v7);
      goto LABEL_26;
    }
  }
  v6 = 1;
LABEL_26:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v6;
}
