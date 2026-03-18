/*
 * XREFs of NtUserGetTouchInputInfo @ 0x1C01DAAF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00485E8 (HMValidateHandle.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     _FreeTouchInputInfo @ 0x1C01B8360 (_FreeTouchInputInfo.c)
 */

__int64 __fastcall NtUserGetTouchInputInfo(__int64 a1, unsigned int a2, volatile void *a3, int a4)
{
  __int64 v6; // rbx
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 CurrentProcessWow64Process; // rax
  SIZE_T v17; // rbx

  v6 = a2;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  if ( !a3 || a4 != 48 )
  {
    v15 = 87LL;
    goto LABEL_12;
  }
  v9 = HMValidateHandle(a1, 20);
  v14 = v9;
  if ( !v9 )
  {
    v8 = 0;
    goto LABEL_13;
  }
  if ( *(_QWORD *)(v9 + 16) != gptiCurrent )
  {
    v15 = 5LL;
LABEL_12:
    v8 = 0;
    UserSetLastError(v15);
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v9 + 24) < (unsigned int)v6 )
    v6 = *(unsigned int *)(v9 + 24);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11, v10, v12, v13);
  v17 = 48 * v6;
  ProbeForWrite(a3, v17, CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v14 + 32), v17);
  v11 = *(_QWORD *)(gptiCurrent + 952LL);
  if ( v11 == a1 )
  {
    FreeTouchInputInfo(v11);
    *(_QWORD *)(gptiCurrent + 952LL) = 0LL;
  }
LABEL_13:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v8;
}
