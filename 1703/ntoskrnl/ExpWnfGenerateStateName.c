/*
 * XREFs of ExpWnfGenerateStateName @ 0x1404C2A70
 * Callers:
 *     NtCreateWnfStateName @ 0x1404C2738 (NtCreateWnfStateName.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140722D4C (ExpWnfAllocateNextPersistentNameSequence.c)
 */

__int64 __fastcall ExpWnfGenerateStateName(__int64 *a1, int a2, int a3, char a4)
{
  char v4; // si
  __int64 HostSilo; // rbx
  char *ServerSiloGlobals; // rax
  volatile signed __int64 *v10; // rax
  signed __int64 v11; // r8
  bool v12; // zf
  signed __int64 v13; // r8
  __int64 result; // rax
  signed __int64 v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a3;
  if ( a3 == 4 )
  {
    HostSilo = PsGetHostSilo();
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals(HostSilo);
  }
  else
  {
    HostSilo = PsGetCurrentServerSilo();
    ServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  }
  v10 = (volatile signed __int64 *)(ServerSiloGlobals + 904);
  if ( (unsigned int)(a2 - 2) > 1 )
  {
    result = ExpWnfAllocateNextPersistentNameSequence(HostSilo, v15);
    if ( (int)result < 0 )
      return result;
    v13 = v15[0];
  }
  else
  {
    do
    {
      v11 = _InterlockedExchangeAdd64(v10 + 6, 1uLL);
      v12 = v11 == -1;
      v13 = v11 + 1;
      v15[0] = v13;
    }
    while ( v12 );
  }
  if ( (v13 & 0xFFE0000000000000uLL) != 0 )
    return 3221225473LL;
  *a1 = *a1 & 1 | (16 * (a2 & 3 | (unsigned __int16)(4 * (v4 & 0xF)))) & 0x3FF | 1 | (((2 * v13) | (a4 != 0)) << 10);
  return 0LL;
}
