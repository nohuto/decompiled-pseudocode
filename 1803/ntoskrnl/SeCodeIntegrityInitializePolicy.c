/*
 * XREFs of SeCodeIntegrityInitializePolicy @ 0x1408C6BB0
 * Callers:
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401A7B80 (ZwQuerySystemInformation.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     SeSecureBootRegisterPolicy @ 0x1408C6C78 (SeSecureBootRegisterPolicy.c)
 */

__int64 __fastcall SeCodeIntegrityInitializePolicy(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edi
  __int64 v3; // rbx
  ULONG_PTR v4; // rdx
  NTSTATUS v6; // eax
  int v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  _BYTE SystemInformation[20]; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+44h] [rbp-14h]

  v1 = *(_QWORD *)(a1 + 240);
  v2 = 0;
  v3 = 0LL;
  if ( !v1
    || (v3 = *(_QWORD *)(v1 + 2552)) == 0
    || (v4 = *(unsigned int *)(v3 + 64), !(_DWORD)v4)
    || (v2 = SeSecureBootRegisterPolicy(*(unsigned int *)(v3 + 60) + v3 + 72, v4), v2 >= 0) )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent && (SeCiDebugOptions & 1) == 0 )
      SeCiDebugOptions |= 2u;
    if ( SeILSigningPolicy )
    {
      if ( (v6 = ZwQuerySystemInformation(SystemSecureBootPolicyInformation, SystemInformation, 0x18u, 0LL), v6 >= 0)
        && (v10 & 0x10) != 0
        || v6 == -2143092730 )
      {
        if ( (SeCiDebugOptions & 1) == 0 && (v6 < 0 || (v10 & 0x8000) == 0) )
          SeCiDebugOptions |= 4u;
      }
    }
    if ( qword_1403A5CE0 )
    {
      v2 = qword_1403A5CE0(v3, &v8, &v7);
      if ( v2 >= 0 )
      {
        SeCiStateElements = v8;
        SeCiStateElementCount = v7;
      }
    }
  }
  return (unsigned int)v2;
}
