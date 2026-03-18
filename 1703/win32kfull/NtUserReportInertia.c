/*
 * XREFs of NtUserReportInertia @ 0x1C0007FA0
 * Callers:
 *     <none>
 * Callees:
 *     InvalidateInertiaInfo @ 0x1C0008088 (InvalidateInertiaInfo.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     AddInertiaInfo @ 0x1C020A4D4 (AddInertiaInfo.c)
 *     ValidateInertiaInfo @ 0x1C020A868 (ValidateInertiaInfo.c)
 */

__int64 __fastcall NtUserReportInertia(__int64 a1, int a2, __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  int v9; // ebx
  __int64 v10; // rsi
  int v11; // r12d
  int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rcx
  __int64 CurrentProcess; // rax
  int v21; // r13d
  unsigned __int64 v22; // rdi
  int v23; // r12d
  unsigned __int64 v24; // rdx
  __int64 v26; // [rsp+60h] [rbp-108h] BYREF
  int v27; // [rsp+68h] [rbp-100h]
  __int64 v28; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v29; // [rsp+80h] [rbp-E8h]
  int v30; // [rsp+88h] [rbp-E0h]
  __int128 v31; // [rsp+98h] [rbp-D0h]
  __int128 v32; // [rsp+A8h] [rbp-C0h]
  __int64 v33; // [rsp+B8h] [rbp-B0h]
  _OWORD v34[2]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-88h]
  _BYTE v36[64]; // [rsp+F0h] [rbp-78h] BYREF

  EnterCrit(0LL, 1LL);
  v9 = 0;
  if ( a3 )
  {
    v10 = ValidateHwnd(a3);
    if ( !v10 )
      goto LABEL_12;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !a1 || (a2 & 0xFFFFFFF8) != 0 )
    goto LABEL_13;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 2) != 0 )
      goto LABEL_13;
    v11 = 1;
  }
  else
  {
    if ( (a2 & 2) == 0 )
      goto LABEL_13;
    v11 = 0;
  }
  v12 = a2 & 4;
  if ( v12 )
  {
    if ( a3 )
      goto LABEL_13;
    CurrentProcess = PsGetCurrentProcess();
    if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    {
LABEL_20:
      v19 = 5LL;
      goto LABEL_44;
    }
  }
  if ( v11 )
  {
    if ( a4 )
    {
      if ( !v12 )
      {
        v21 = 0;
        if ( !v10 || *(char *)(v10 + 60) < 0 || *(char *)(v10 + 59) < 0 )
        {
          v19 = 1400LL;
          goto LABEL_44;
        }
        v22 = a5;
        if ( (unsigned int)IsCompositionInputWindow((struct tagWND *)v10) && !a5
          || gptiCurrent != *(_QWORD *)(v10 + 16) && gptiCurrent != *(_QWORD *)(v10 + 328) )
        {
          goto LABEL_13;
        }
        if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
           - *(_DWORD *)(gptiCurrent + 1144LL) > 0x7D0 )
          goto LABEL_20;
        goto LABEL_34;
      }
      v21 = 1;
      v22 = a5;
      if ( a5 )
      {
LABEL_34:
        v23 = (*(_DWORD *)(gptiCurrent + 1096LL) >> 17) & 1;
        if ( a4 + 12 < a4 || a4 + 12 > W32UserProbeAddress )
          a4 = W32UserProbeAddress;
        v29 = *(_QWORD *)a4;
        v30 = *(_DWORD *)(a4 + 8);
        v26 = v29;
        v27 = v30;
        if ( v22 )
        {
          v24 = v22;
          if ( v22 + 40 < v22 || v22 + 40 > W32UserProbeAddress )
            v24 = W32UserProbeAddress;
          v31 = *(_OWORD *)v24;
          v32 = *(_OWORD *)(v24 + 16);
          v33 = *(_QWORD *)(v24 + 32);
          v34[0] = v31;
          v34[1] = v32;
          v35 = v33;
        }
        if ( (unsigned int)ValidateInertiaInfo(&v26, (unsigned __int64)v34 & -(__int64)(v22 != 0), v36, &v28) )
        {
          v13 = AddInertiaInfo(
                  gptiCurrent,
                  a1,
                  v10,
                  v23,
                  v21,
                  (__int64)&v26,
                  v28,
                  (unsigned __int64)v34 & -(__int64)(v22 != 0),
                  (unsigned __int64)v36 & -(__int64)(v22 != 0));
          goto LABEL_11;
        }
      }
    }
LABEL_13:
    v19 = 87LL;
LABEL_44:
    UserSetLastError(v19);
    goto LABEL_12;
  }
  v13 = InvalidateInertiaInfo(gptiCurrent, a1);
LABEL_11:
  v9 = v13;
LABEL_12:
  UserSessionSwitchLeaveCrit(v15, v14, v16, v17);
  return v9;
}
