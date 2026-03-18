/*
 * XREFs of NtUserSystemParametersInfoForDpi @ 0x1C00F5FA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     _SystemParametersInfoForDpi @ 0x1C00F6100 (_SystemParametersInfoForDpi.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtUserSystemParametersInfoForDpi(int a1, int a2, _DWORD *a3, __int64 a4, int a5)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  __int64 CurrentProcessWow64Process; // rax
  size_t v14; // r15
  _DWORD *v15; // rax
  int v16; // edx
  int v17; // r9d
  const void *v18; // rdi
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9

  EnterCrit(0LL, 1LL);
  if ( !a5 || !a3 )
    goto LABEL_12;
  switch ( a1 )
  {
    case 41:
      v12 = 504;
      break;
    case 31:
      v12 = 92;
      break;
    case 45:
      v12 = 108;
      break;
    default:
      goto LABEL_12;
  }
  if ( a2 != v12 )
  {
LABEL_12:
    v19 = 0;
    UserSetLastError(87LL);
    goto LABEL_9;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v9, v8, v10, v11);
  v14 = v12;
  ProbeForWrite(a3, v12, CurrentProcessWow64Process != 0 ? 1 : 4);
  v15 = (_DWORD *)Win32AllocPoolWithQuotaZInit(v12, 2037674837LL);
  v18 = v15;
  if ( !v15 )
    ExRaiseStatus(-1073741801);
  *v15 = *a3;
  v19 = SystemParametersInfoForDpi(a1, v16, (_DWORD)v15, v17, a5);
  memmove(a3, v18, v14);
  Win32FreePool(v18);
LABEL_9:
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return v19;
}
