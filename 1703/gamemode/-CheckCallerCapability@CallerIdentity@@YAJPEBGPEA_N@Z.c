/*
 * XREFs of ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x1800024B0
 * Callers:
 *     CheckCachedCapability @ 0x1800012C4 (CheckCachedCapability.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002040 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800020B0 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1800020E8 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18000240C (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 */

__int64 __fastcall CallerIdentity::CheckCallerCapability(CallerIdentity *this, unsigned __int16 *a2, bool *a3)
{
  int CallingProcessHandle; // eax
  void *v5; // rdx
  __int64 v6; // r8
  void **v7; // r9
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HANDLE hObject; // [rsp+30h] [rbp+8h] BYREF

  hObject = 0LL;
  *(_BYTE *)a2 = 0;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle((__int64)this, (__int64)a2, &hObject);
  v8 = CallingProcessHandle;
  if ( CallingProcessHandle >= 0 )
  {
    v8 = CallerIdentity::CheckCapabilityFromProcessHandle((CallerIdentity *)hObject, v5, a2, v7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x47, v6, (const char *)(unsigned int)CallingProcessHandle);
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      (const char *)v8);
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return v8;
}
