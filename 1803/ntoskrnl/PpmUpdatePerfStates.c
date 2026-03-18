/*
 * XREFs of PpmUpdatePerfStates @ 0x140761350
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     PpmReleaseLock @ 0x140036890 (PpmReleaseLock.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     PpmAcquireLock @ 0x14007385C (PpmAcquireLock.c)
 *     PpmPerfUpdateDomainPolicy @ 0x14061034C (PpmPerfUpdateDomainPolicy.c)
 *     PpmReinitializeHeteroEngine @ 0x14063EA98 (PpmReinitializeHeteroEngine.c)
 */

void __fastcall PpmUpdatePerfStates(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rcx
  unsigned __int16 *v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v5; // [rsp+30h] [rbp-18h]
  ULONG v6; // [rsp+50h] [rbp+8h] BYREF

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v2 = 0;
  v4[1] = *(unsigned __int16 **)(a1 + 16);
  v5 = 0;
  v4[0] = (unsigned __int16 *)(a1 + 8);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v6, v4) )
  {
    v3 = *(_QWORD *)(KeGetPrcb(v6) + 24176);
    if ( *(_DWORD *)(v3 + 320) != *(_DWORD *)a1 )
    {
      *(_DWORD *)(v3 + 320) = *(_DWORD *)a1;
      v2 = 1;
    }
  }
  if ( v2 )
    PpmPerfUpdateDomainPolicy(1);
  else
    PpmReleaseLock(&PpmPerfPolicyLock);
  if ( (unsigned int)PpmPerfDomainCount > 1 )
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    PpmReinitializeHeteroEngine(1);
  }
}
