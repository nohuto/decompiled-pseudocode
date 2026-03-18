/*
 * XREFs of PpmUpdatePerfStates @ 0x1406F9EC0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     PpmAcquireLock @ 0x1400AF45C (PpmAcquireLock.c)
 *     PpmReleaseLock @ 0x1400E49C8 (PpmReleaseLock.c)
 *     PpmReinitializeHeteroEngine @ 0x1405B4FD8 (PpmReinitializeHeteroEngine.c)
 *     PpmPerfUpdateDomainPolicy @ 0x1405B62EC (PpmPerfUpdateDomainPolicy.c)
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
    v3 = *(_QWORD *)(KeGetPrcb(v7) + 24176);
    if ( *(_DWORD *)(v3 + 320) != *(_DWORD *)a1 )
    {
      *(_DWORD *)(v3 + 320) = *(_DWORD *)a1;
      v2 = 1;
    }
  }
  if ( v2 )
    result = PpmPerfUpdateDomainPolicy(1);
  else
    result = PpmReleaseLock(&PpmPerfPolicyLock);
  if ( (unsigned int)PpmPerfDomainCount > 1 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    return PpmReinitializeHeteroEngine(1);
  }
  return result;
}
