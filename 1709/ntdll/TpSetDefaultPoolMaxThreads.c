/*
 * XREFs of TpSetDefaultPoolMaxThreads @ 0x18010A920
 * Callers:
 *     RtlpTpInitializeData @ 0x180011910 (RtlpTpInitializeData.c)
 * Callees:
 *     TpSetPoolMaxThreads @ 0x18000A220 (TpSetPoolMaxThreads.c)
 *     TppPoolpDereferenceGlobalPool @ 0x1800110F8 (TppPoolpDereferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x180013550 (TpPoolReferenceExistingGlobalPool.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     TpSetPoolMaxThreadsSoftLimit @ 0x180083A00 (TpSetPoolMaxThreadsSoftLimit.c)
 */

signed __int64 __fastcall TpSetDefaultPoolMaxThreads(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned int v5; // esi
  unsigned int v6; // ebp
  signed __int64 result; // rax
  int v8; // eax
  int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9

  v5 = 8 * MEMORY[0x7FFE03C0];
  if ( (unsigned int)(8 * MEMORY[0x7FFE03C0]) < 0x300 )
    v5 = 768;
  v6 = 4 * MEMORY[0x7FFE03C0];
  if ( (unsigned int)(4 * MEMORY[0x7FFE03C0]) < 0x180 )
    v6 = 384;
  result = (unsigned int)TppPoolpGlobalPoolMaxThreads;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 <= TppPoolpGlobalPoolMaxThreads )
      return result;
    goto LABEL_10;
  }
  if ( a1 <= v6 )
    return result;
  result = v5;
  if ( a1 > v5 )
LABEL_10:
    result = a1;
  if ( !(_DWORD)result )
    return result;
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpGlobalPoolLock, a2, a3, a4);
  v8 = TppPoolpGlobalPoolMaxThreads;
  v9 = 0;
  if ( TppPoolpGlobalPoolMaxThreads )
  {
    if ( a1 > TppPoolpGlobalPoolMaxThreads )
      goto LABEL_17;
  }
  else if ( a1 > v6 )
  {
    v9 = v5;
    if ( a1 <= v5 )
    {
LABEL_18:
      if ( v9 )
        v8 = v9;
      TppPoolpGlobalPoolMaxThreads = v8;
      goto LABEL_21;
    }
LABEL_17:
    v9 = a1;
    goto LABEL_18;
  }
LABEL_21:
  result = RtlReleaseSRWLockExclusive(&TppPoolpGlobalPoolLock);
  if ( v9 )
  {
    result = TpPoolReferenceExistingGlobalPool();
    v10 = result;
    if ( result )
    {
      TpSetPoolMaxThreads(result, v9);
      TpSetPoolMaxThreadsSoftLimit(v10, 0LL, v11, v12);
      return TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, (__int64)&TppPoolpGlobalPoolLock);
    }
  }
  return result;
}
