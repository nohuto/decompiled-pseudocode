/*
 * XREFs of SepCheckForCriticalAceRemoval @ 0x140063350
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x1404E14B0 (SeCheckForCriticalAceRemoval.c)
 * Callees:
 *     SepSidInToken @ 0x140063264 (SepSidInToken.c)
 *     SeSinglePrivilegeCheckEx @ 0x1404D569C (SeSinglePrivilegeCheckEx.c)
 */

char __fastcall SepCheckForCriticalAceRemoval(__int64 a1, __int64 a2, __int64 *a3, _BYTE *a4, _BYTE *a5)
{
  __int64 *v5; // rbx
  char result; // al
  __int64 *v7; // rdx
  __int64 v8; // rcx

  v5 = a3;
  if ( a4 )
    *a4 = 0;
  result = (char)a5;
  if ( a5 )
    *a5 = 0;
  if ( !SepAllowAllApplicationAceRemoval )
  {
    v7 = a3;
    LOBYTE(a3) = KeGetCurrentThread()->PreviousMode;
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeSinglePrivilegeCheckEx)(SeTcbPrivilege, v7, a3);
    if ( !result )
    {
      v8 = *v5;
      if ( !*v5 )
        v8 = v5[2];
      return SepSidInToken(v8, 0LL, SeTrustedInstallerSid, 0, 0, 0, 0);
    }
  }
  return result;
}
