/*
 * XREFs of PpmUpdatePerfStates @ 0x1406C92D0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     PpmReleaseLock @ 0x14006F948 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14006FC2C (PpmAcquireLock.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     PpmCheckCustomRun @ 0x140135D90 (PpmCheckCustomRun.c)
 *     PpmPerfCalculateMinMaxStates @ 0x1401603FC (PpmPerfCalculateMinMaxStates.c)
 *     PpmReapplyPerfPolicy @ 0x1405C019C (PpmReapplyPerfPolicy.c)
 */

LONG __fastcall PpmUpdatePerfStates(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rcx
  LONG result; // eax
  unsigned __int16 *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+30h] [rbp-18h]
  ULONG v7; // [rsp+50h] [rbp+8h] BYREF

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v2 = 0;
  v5[1] = *(unsigned __int16 **)(a1 + 16);
  v6 = 0;
  v5[0] = (unsigned __int16 *)(a1 + 8);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v7, v5) )
  {
    v3 = *(_QWORD *)(KeGetPrcb(v7) + 24304);
    if ( *(_DWORD *)(v3 + 320) != *(_DWORD *)a1 )
    {
      *(_DWORD *)(v3 + 320) = *(_DWORD *)a1;
      PpmPerfCalculateMinMaxStates(v3);
      v2 = 1;
    }
  }
  if ( v2 )
    result = PpmCheckCustomRun(2);
  else
    result = PpmReleaseLock(&PpmPerfPolicyLock);
  if ( (unsigned int)PpmPerfDomainCount > 1 )
  {
    LOWORD(v7) = 0;
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v7 |= 0x20u;
    return PpmReapplyPerfPolicy(&v7);
  }
  return result;
}
