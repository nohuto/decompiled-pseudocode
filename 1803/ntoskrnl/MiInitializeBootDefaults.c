/*
 * XREFs of MiInitializeBootDefaults @ 0x1408C69EC
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     InitializeSListHead @ 0x14006A770 (InitializeSListHead.c)
 *     KiInitializeMutant @ 0x1400D3988 (KiInitializeMutant.c)
 *     strstr @ 0x140187E10 (strstr.c)
 *     MmIsVerifierEnabled @ 0x14080F2D0 (MmIsVerifierEnabled.c)
 */

__int64 __fastcall MiInitializeBootDefaults(__int64 a1)
{
  int v1; // eax
  int v3; // ecx
  int v4; // ecx
  char *v5; // rdi
  unsigned int i; // ebx
  char v7; // al
  __int64 result; // rax
  int v9; // eax
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    MmLargePageDriverBufferLength = -1;
    MmSpecialPoolTag = 0;
    MmProtectFreedNonPagedPool = 0;
    byte_1403CC515 = 1;
    dword_14044B16C = 0;
    MEMORY[0xFFFFF780000002EC] = 1;
  }
  else
  {
    v1 = MmPageValidationFrequency;
    if ( _BitScanReverse((unsigned int *)&v3, MmPageValidationFrequency) )
      v1 = 1 << v3;
    MmPageValidationFrequency = v1;
    if ( v1 )
    {
      MiFlags |= 0x80u;
      MmPageValidationFrequency = v1 - 1;
    }
    if ( MmIsVerifierEnabled(&VerifierFlags) >= 0 )
    {
      v9 = MiFlags | 1;
      MiFlags |= 1u;
      if ( KernelVerifier == 1 )
        MiFlags = v9 | 2;
    }
    if ( MmSpecialPoolTag )
      MmProtectFreedNonPagedPool = 1;
    if ( (MiFlags & 1) != 0 )
    {
      MmLargePageDriverBufferLength = -1;
      MmProtectFreedNonPagedPool = 1;
    }
  }
  v4 = MiFlags | 8;
  MiFlags |= 8u;
  if ( (NtGlobalFlag & 0x80000) == 0 )
    MiFlags = v4 | 0x40;
  stru_1403CC0C8.TargetInfoAsUlong = 275;
  stru_1403CC0C8.DeferredRoutine = (PKDEFERRED_ROUTINE)MiAllocatePfnRepurposeLogDispatch;
  stru_1403CC0C8.DeferredContext = 0LL;
  stru_1403CC0C8.DpcData = 0LL;
  stru_1403CC0C8.ProcessorHistory = 0LL;
  KiInitializeMutant((__int64)&Mutant, 0LL, 0);
  qword_1403CB5B0 = 0LL;
  v5 = byte_1403CC3E0;
  for ( i = 0; i < 2; ++i )
  {
    InitializeSListHead(&stru_1403CC3C0[i]);
    if ( i )
      v7 = 2 * byte_1403CC3E0[i - 1];
    else
      v7 = 8;
    *v5++ = v7;
  }
  dword_1403CBF2C = 5;
  qword_1403CB668 = (__int64)&qword_1403CB660;
  qword_1403CB660 = (__int64)&qword_1403CB660;
  qword_1403CB658 = -10000000LL * dword_14044B188;
  qword_1403CBF40 = 0LL;
  qword_1403CC4C0 = 0LL;
  qword_1403CB290 = 0LL;
  qword_1403CB2A8 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1) << 16;
  qword_1403CB2A8 += 0xFFFFFFFDFF800000uLL - result;
  return result;
}
