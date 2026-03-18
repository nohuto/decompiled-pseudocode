/*
 * XREFs of NtGdiDestroyOPMProtectedOutput @ 0x1C00A09B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchEnterCrit @ 0x1C003BA60 (UserSessionSwitchEnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C00A0C84 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 */

__int64 __fastcall NtGdiDestroyOPMProtectedOutput(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v6; // edi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  result = UserSessionSwitchEnterCrit((__int64)a1, a2, a3, a4);
  v6 = 0;
  if ( (int)result >= 0 )
  {
    v7 = OPMDestroyProtectedOutput(a1);
    UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
    if ( v7 < 0 )
      return (unsigned int)v7;
    return v6;
  }
  return result;
}
