/*
 * XREFs of NtGdiDestroyOPMProtectedOutput @ 0x1C00EE100
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C007E4D0 (UserSessionSwitchEnterCrit.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C00EDCB0 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 */

__int64 __fastcall NtGdiDestroyOPMProtectedOutput(COPM *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // edi
  int v6; // ebx

  result = UserSessionSwitchEnterCrit((__int64)a1, a2, a3);
  v5 = 0;
  if ( (int)result >= 0 )
  {
    v6 = OPMDestroyProtectedOutput(a1);
    UserSessionSwitchLeaveCrit();
    if ( v6 < 0 )
      return (unsigned int)v6;
    return v5;
  }
  return result;
}
