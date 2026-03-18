/*
 * XREFs of NtUserGetDpiForMonitor @ 0x1C005AA50
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     EngMulDiv @ 0x1C0059AB0 (EngMulDiv.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0059B98 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     HMValidateSharedHandle @ 0x1C005ABE4 (HMValidateSharedHandle.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C005B7B4 (DrvGetCurrentDpiInfoFromHDev.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A6FB0 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     UserSetLastStatus @ 0x1C013DE24 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(__int64 a1, int a2, INT *a3, INT *a4)
{
  INT v7; // esi
  INT v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // r12d
  __int64 v13; // r9
  _DWORD *v14; // rdx
  ULONG64 v15; // rcx
  __int64 v16; // r8
  _DWORD *v17; // rdx
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  INT v26; // edx
  INT v27; // edi
  INT v28; // ebx
  INT v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  INT v33; // edx
  INT v34; // ebx
  INT v35; // eax
  _BYTE v36[32]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v37[40]; // [rsp+40h] [rbp-88h] BYREF
  INT a; // [rsp+68h] [rbp-60h]
  INT v39; // [rsp+6Ch] [rbp-5Ch]
  INT v40; // [rsp+78h] [rbp-50h]
  INT v41; // [rsp+7Ch] [rbp-4Ch]
  char v42; // [rsp+9Ch] [rbp-2Ch]

  v7 = 0;
  v8 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v36);
  v9 = HMValidateSharedHandle(a1);
  v10 = v9;
  if ( !v9 || (v11 = *(_QWORD *)(v9 + 232)) == 0 )
  {
    v12 = 0;
    UserSetLastError(6LL);
    goto LABEL_12;
  }
  if ( a2 )
  {
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v11, v37);
    if ( CurrentDpiInfoFromHDev < 0 )
    {
      v12 = 0;
      UserSetLastStatus(CurrentDpiInfoFromHDev);
      goto LABEL_12;
    }
    v12 = 1;
    if ( a2 == 2 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
      {
        v7 = a;
        v8 = v39;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
        {
          v26 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v24, v23, v25) + 284);
          v27 = v26;
        }
        else
        {
          v27 = 96;
          v26 = 96;
        }
        v28 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 64LL);
        v7 = EngMulDiv(a, v26, v28);
        v8 = EngMulDiv(v39, v27, v28);
      }
      if ( (v42 & 1) != 0 || (v42 & 2) != 0 || !v7 )
      {
        v8 = 0;
        v7 = 0;
        UserSetLastError(50LL);
        v12 = 0;
      }
      goto LABEL_21;
    }
    if ( a2 == 1 )
    {
      if ( !v40 || (v42 & 2) != 0 )
      {
        v29 = 96;
        v8 = 96;
        v7 = 96;
      }
      else
      {
        v29 = 96;
        v7 = EngMulDiv(v40, 96, 100);
        v8 = EngMulDiv(v41, 96, 100);
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
      {
        v33 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v31, v30, v32) + 284);
        v29 = v33;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
          goto LABEL_21;
        v33 = 96;
      }
      v34 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 64LL);
      v7 = EngMulDiv(v7, v33, v34);
      v8 = EngMulDiv(v8, v29, v34);
    }
LABEL_21:
    if ( v42 < 0 )
    {
      v35 = v8;
      v8 = v7;
      v7 = v35;
    }
    goto LABEL_7;
  }
  v12 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    v7 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 64LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
  {
    v7 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v21, v20, v22) + 284);
  }
  else
  {
    v7 = 96;
  }
  v8 = v7;
LABEL_7:
  v14 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v14 = (_DWORD *)MmUserProbeAddress;
  *v14 = *v14;
  v15 = MmUserProbeAddress;
  v16 = (__int64)a4;
  v17 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v17 = (_DWORD *)MmUserProbeAddress;
  *v17 = *v17;
  *a3 = v7;
  *a4 = v8;
LABEL_12:
  UserSessionSwitchLeaveCrit(v15, (__int64)v17, v16, v13);
  return v12;
}
