/*
 * XREFs of NtUserSystemParametersInfoForDpi @ 0x1C0101F70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _SystemParametersInfoForDpi @ 0x1C01020D0 (_SystemParametersInfoForDpi.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall NtUserSystemParametersInfoForDpi(int a1, int a2, _DWORD *a3, __int64 a4, int a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 CurrentProcessWow64Process; // rax
  size_t v12; // r15
  _DWORD *v13; // rax
  int v14; // edx
  int v15; // r9d
  const void *v16; // rdi
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx

  EnterCrit(0LL, 1LL);
  if ( !a5 || !a3 )
    goto LABEL_12;
  switch ( a1 )
  {
    case 41:
      v10 = 504;
      break;
    case 31:
      v10 = 92;
      break;
    case 45:
      v10 = 108;
      break;
    default:
      goto LABEL_12;
  }
  if ( a2 != v10 )
  {
LABEL_12:
    v17 = 0;
    UserSetLastError(87LL, v8);
    goto LABEL_9;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9);
  v12 = v10;
  ProbeForWrite(a3, v10, CurrentProcessWow64Process != 0 ? 1 : 4);
  v13 = (_DWORD *)Win32AllocPoolWithQuotaZInit(v10, 2037674837LL);
  v16 = v13;
  if ( !v13 )
    ExRaiseStatus(-1073741801);
  *v13 = *a3;
  v17 = SystemParametersInfoForDpi(a1, v14, (_DWORD)v13, v15, a5);
  memmove(a3, v16, v12);
  Win32FreePool(v16, v18, v19);
LABEL_9:
  UserSessionSwitchLeaveCrit(v21, v20);
  return v17;
}
