/*
 * XREFs of NtUserRegisterEdgy @ 0x1C0105C80
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C001BECC (IsShellProcess.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     EdgyUnregisterListener @ 0x1C0105BB4 (EdgyUnregisterListener.c)
 *     ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1C0105E64 (-_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall NtUserRegisterEdgy(unsigned int a1, __int64 a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  __int128 *v12; // rcx
  int updated; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-78h]
  __int128 v21; // [rsp+30h] [rbp-68h] BYREF
  __int128 v22; // [rsp+40h] [rbp-58h]
  __int128 v23; // [rsp+60h] [rbp-38h]
  __int128 v24; // [rsp+70h] [rbp-28h]

  v6 = 0;
  LODWORD(v20) = 0;
  EnterCrit(0LL, 1LL);
  if ( !a1 )
  {
    v19 = 87LL;
LABEL_29:
    UserSetLastError(v19);
    goto LABEL_26;
  }
  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 376LL)) )
  {
    v19 = 5LL;
    goto LABEL_29;
  }
  v11 = 0;
  HIDWORD(v20) = 0;
  while ( v11 < a1 )
  {
    v12 = (__int128 *)(a2 + 32LL * v11);
    if ( v12 + 2 < v12 || (unsigned __int64)(v12 + 2) > W32UserProbeAddress )
      v12 = (__int128 *)W32UserProbeAddress;
    v23 = *v12;
    v24 = v12[1];
    v21 = v23;
    v22 = (unsigned __int64)v24;
    if ( a3 )
    {
      if ( !HMValidateHandle(v21, 19)
        || *((_QWORD *)&v21 + 1)
        && ((v14 = ValidateHwnd(*((_QWORD *)&v21 + 1)), (v17 = v14) == 0)
         || *(char *)(v14 + 59) < 0
         || *(char *)(v14 + 60) < 0
         || *(_QWORD *)(*(_QWORD *)(v14 + 16) + 376LL) != PsGetCurrentProcessWin32Process(v16, v15)
         || *(_DWORD *)(v17 + 336)) )
      {
        UserSetLastError(87LL);
        goto LABEL_26;
      }
      updated = Edgy::_AddOrUpdateListener(
                  *(_QWORD *)(gptiCurrent + 408LL),
                  v21,
                  (unsigned int)v22,
                  *((_QWORD *)&v21 + 1),
                  v20);
    }
    else
    {
      updated = EdgyUnregisterListener((__int64)&v21);
    }
    if ( a3 && !updated )
    {
      UserSetLastError(8LL);
      goto LABEL_26;
    }
    HIDWORD(v20) = ++v11;
  }
  v6 = 1;
LABEL_26:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v6;
}
