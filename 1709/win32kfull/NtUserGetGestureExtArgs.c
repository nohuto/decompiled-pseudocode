/*
 * XREFs of NtUserGetGestureExtArgs @ 0x1C01E55A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C0099110 (HMValidateHandle.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     _FreeGestureInfo @ 0x1C01F9C50 (_FreeGestureInfo.c)
 */

__int64 __fastcall NtUserGetGestureExtArgs(__int64 a1, unsigned int a2, volatile void *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 CurrentProcessWow64Process; // rax

  v6 = 1;
  EnterCrit(0LL, 1LL);
  if ( !a3 )
  {
    v10 = 87LL;
LABEL_3:
    v6 = 0;
    UserSetLastError(v10, v7);
    goto LABEL_12;
  }
  LOBYTE(v7) = 21;
  v12 = HMValidateHandle(a1, v7, v8, v9);
  v13 = v12;
  if ( !v12 )
  {
    v6 = 0;
    goto LABEL_12;
  }
  if ( *(_QWORD *)(v12 + 16) != gptiCurrent )
  {
    v10 = 5LL;
    goto LABEL_3;
  }
  if ( a2 < *(_DWORD *)(v12 + 80) )
  {
    v10 = 122LL;
    goto LABEL_3;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11);
  ProbeForWrite(a3, *(unsigned int *)(v13 + 80), CurrentProcessWow64Process != 0 ? 1 : 4);
  memmove((void *)a3, (const void *)(v13 + 88), *(unsigned int *)(v13 + 80));
  v11 = *(_QWORD *)(gptiCurrent + 1048LL);
  if ( v11 == a1 )
  {
    FreeGestureInfo(v11, 1LL);
    *(_QWORD *)(gptiCurrent + 1048LL) = 0LL;
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v11, v7);
  return v6;
}
