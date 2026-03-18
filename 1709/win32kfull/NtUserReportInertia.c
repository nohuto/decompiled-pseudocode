/*
 * XREFs of NtUserReportInertia @ 0x1C000CBF0
 * Callers:
 *     <none>
 * Callees:
 *     InvalidateInertiaInfo @ 0x1C000CCD8 (InvalidateInertiaInfo.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0061FD0 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     AddInertiaInfo @ 0x1C020D67C (AddInertiaInfo.c)
 *     ValidateInertiaInfo @ 0x1C020DA10 (ValidateInertiaInfo.c)
 */

__int64 __fastcall NtUserReportInertia(__int64 a1, int a2, __int64 a3, ULONG64 a4, unsigned __int64 a5)
{
  int v9; // ebx
  __int64 v10; // rsi
  int v11; // r12d
  int v12; // edi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 CurrentProcess; // rax
  int v19; // r13d
  unsigned __int64 v20; // rdi
  int v21; // r12d
  ULONG64 v22; // rdx
  __int64 v24; // [rsp+60h] [rbp-108h] BYREF
  int v25; // [rsp+68h] [rbp-100h]
  __int64 v26; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v27; // [rsp+80h] [rbp-E8h]
  int v28; // [rsp+88h] [rbp-E0h]
  __int128 v29; // [rsp+98h] [rbp-D0h]
  __int128 v30; // [rsp+A8h] [rbp-C0h]
  __int64 v31; // [rsp+B8h] [rbp-B0h]
  _OWORD v32[2]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-88h]
  _BYTE v34[64]; // [rsp+F0h] [rbp-78h] BYREF

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
      v17 = 5LL;
      goto LABEL_44;
    }
  }
  if ( v11 )
  {
    if ( a4 )
    {
      if ( !v12 )
      {
        v19 = 0;
        if ( !v10 || *(char *)(v10 + 60) < 0 || *(char *)(v10 + 59) < 0 )
        {
          v17 = 1400LL;
          goto LABEL_44;
        }
        v20 = a5;
        if ( (unsigned int)IsCompositionInputWindow((struct tagWND *)v10) && !a5
          || gptiCurrent != *(_QWORD *)(v10 + 16) && gptiCurrent != *(_QWORD *)(v10 + 328) )
        {
          goto LABEL_13;
        }
        if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
           - *(_DWORD *)(gptiCurrent + 1232LL) > 0x7D0 )
          goto LABEL_20;
        goto LABEL_34;
      }
      v19 = 1;
      v20 = a5;
      if ( a5 )
      {
LABEL_34:
        v21 = (*(_DWORD *)(gptiCurrent + 1184LL) >> 17) & 1;
        if ( a4 + 12 < a4 || a4 + 12 > MmUserProbeAddress )
          a4 = MmUserProbeAddress;
        v27 = *(_QWORD *)a4;
        v28 = *(_DWORD *)(a4 + 8);
        v24 = v27;
        v25 = v28;
        if ( v20 )
        {
          v22 = v20;
          if ( v20 + 40 < v20 || v20 + 40 > MmUserProbeAddress )
            v22 = MmUserProbeAddress;
          v29 = *(_OWORD *)v22;
          v30 = *(_OWORD *)(v22 + 16);
          v31 = *(_QWORD *)(v22 + 32);
          v32[0] = v29;
          v32[1] = v30;
          v33 = v31;
        }
        if ( (unsigned int)ValidateInertiaInfo(&v24, (unsigned __int64)v32 & -(__int64)(v20 != 0), v34, &v26) )
        {
          v13 = AddInertiaInfo(
                  gptiCurrent,
                  a1,
                  v10,
                  v21,
                  v19,
                  (__int64)&v24,
                  v26,
                  (unsigned __int64)v32 & -(__int64)(v20 != 0),
                  (unsigned __int64)v34 & -(__int64)(v20 != 0));
          goto LABEL_11;
        }
      }
    }
LABEL_13:
    v17 = 87LL;
LABEL_44:
    UserSetLastError(v17);
    goto LABEL_12;
  }
  v13 = InvalidateInertiaInfo(gptiCurrent, a1);
LABEL_11:
  v9 = v13;
LABEL_12:
  UserSessionSwitchLeaveCrit(v15, v14);
  return v9;
}
