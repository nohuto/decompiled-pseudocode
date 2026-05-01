/*
 * XREFs of ?HampSystemImpersonateUserForHost@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800606D0
 * Callers:
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800653B8 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampSystemImpersonateUserForHost(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int LastError; // ebx
  HANDLE hToken; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)QueryUserToken(
                       *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 93) + 88LL) + 88LL) + 160LL)
                                       + 88LL),
                       &hToken)
    && ImpersonateLoggedOnUser(hToken) )
  {
    LastError = 0;
  }
  else if ( (int)GetLastError() > 0 )
  {
    LastError = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    LastError = GetLastError();
  }
  if ( hToken )
    NtClose(hToken);
  return LastError;
}
