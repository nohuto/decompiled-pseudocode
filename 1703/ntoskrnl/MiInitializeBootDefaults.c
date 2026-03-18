/*
 * XREFs of MiInitializeBootDefaults @ 0x140812ADC
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     KiInitializeMutant @ 0x140121F00 (KiInitializeMutant.c)
 *     InitializeSListHead @ 0x14012F490 (InitializeSListHead.c)
 *     strstr @ 0x1401697D0 (strstr.c)
 *     MmIsVerifierEnabled @ 0x1407622B0 (MmIsVerifierEnabled.c)
 */

__int64 __fastcall MiInitializeBootDefaults(__int64 a1)
{
  int v1; // eax
  int v3; // ecx
  int v4; // ebx
  int v5; // ebx
  _BYTE *v6; // rdi
  unsigned int i; // ebx
  __int64 result; // rax
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    MmLargePageDriverBufferLength = -1;
    MmSpecialPoolTag = 0;
    MmProtectFreedNonPagedPool = 0;
    byte_14036CFD5 = 1;
    dword_1403E310C = 0;
    MEMORY[0xFFFFF780000002EC] = 1;
    v4 = MiFlags;
  }
  else
  {
    v1 = MmPageValidationFrequency;
    if ( _BitScanReverse((unsigned int *)&v3, MmPageValidationFrequency) )
      v1 = 1 << v3;
    v4 = MiFlags;
    MmPageValidationFrequency = v1;
    if ( v1 )
    {
      MmPageValidationFrequency = v1 - 1;
      v4 = MiFlags | 0x80;
    }
    if ( MmIsVerifierEnabled(&VerifierFlags) >= 0 )
    {
      v4 |= 1u;
      if ( KernelVerifier == 1 )
        v4 |= 2u;
    }
    if ( MmSpecialPoolTag )
      MmProtectFreedNonPagedPool = 1;
    if ( (v4 & 1) != 0 )
    {
      MmLargePageDriverBufferLength = -1;
      MmProtectFreedNonPagedPool = 1;
    }
  }
  v5 = v4 | 8;
  MiFlags = v5;
  if ( (NtGlobalFlag & 0x80000) == 0 )
    MiFlags = v5 | 0x40;
  stru_14036CC08.TargetInfoAsUlong = 275;
  stru_14036CC08.DeferredRoutine = (PKDEFERRED_ROUTINE)MiAllocatePfnRepurposeLogDispatch;
  stru_14036CC08.DeferredContext = 0LL;
  stru_14036CC08.DpcData = 0LL;
  stru_14036CC08.ProcessorHistory = 0LL;
  KiInitializeMutant((__int64)&Mutant, 0, 0);
  qword_14036C0F0 = 0LL;
  v6 = byte_14036CEA0;
  for ( i = 0; i < 2; ++i )
  {
    InitializeSListHead(&stru_14036CE80[i]);
    if ( i )
      *v6 = 2 * byte_14036CEA0[i - 1];
    else
      *v6 = 8;
    ++v6;
  }
  dword_14036CA6C = 5;
  qword_14036C1A0 = (__int64)&qword_14036C198;
  qword_14036C198 = (__int64)&qword_14036C198;
  qword_14036C190 = -10000000LL * dword_1403E312C;
  qword_14036CA80 = 0LL;
  qword_14036CF80 = 0LL;
  BugCheckParameter2 = 0LL;
  qword_14036BE28 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1) << 16;
  qword_14036BE28 += -25165824 - result;
  return result;
}
