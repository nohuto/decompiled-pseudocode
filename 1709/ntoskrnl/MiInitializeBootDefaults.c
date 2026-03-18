/*
 * XREFs of MiInitializeBootDefaults @ 0x14082F394
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     InitializeSListHead @ 0x1400B46E0 (InitializeSListHead.c)
 *     KiInitializeMutant @ 0x1400B4748 (KiInitializeMutant.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     strstr @ 0x14015E110 (strstr.c)
 *     MmIsVerifierEnabled @ 0x1407A22A0 (MmIsVerifierEnabled.c)
 */

__int64 __fastcall MiInitializeBootDefaults(__int64 a1)
{
  int v1; // eax
  int v3; // ecx
  int v4; // eax
  unsigned __int8 *v5; // rdi
  unsigned int i; // ebx
  __int64 result; // rax
  int v8; // eax
  ULONG VerifierFlags; // [rsp+30h] [rbp+8h] BYREF

  if ( strstr(*(const char **)(a1 + 216), "SAFEBOOT:") )
  {
    MmLargePageDriverBufferLength = -1;
    MmSpecialPoolTag = 0;
    MmProtectFreedNonPagedPool = 0;
    byte_140389295 = 1;
    dword_14040010C = 0;
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
      v8 = MiFlags | 1;
      MiFlags |= 1u;
      if ( KernelVerifier == 1 )
        MiFlags = v8 | 2;
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
  Dpc.TargetInfoAsUlong = 275;
  Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)MiAllocatePfnRepurposeLogDispatch;
  Dpc.DeferredContext = 0LL;
  Dpc.DpcData = 0LL;
  Dpc.ProcessorHistory = 0LL;
  KiInitializeMutant((__int64)&Mutant, 0, 0);
  qword_140388430 = 0LL;
  v5 = byte_140389160;
  for ( i = 0; i < 2; ++i )
  {
    InitializeSListHead(&stru_140389140[i]);
    if ( i )
      *v5 = 2 * byte_140389160[i - 1];
    else
      *v5 = 8;
    ++v5;
  }
  dword_140388C6C = 5;
  qword_1403884E0 = (__int64)&qword_1403884D8;
  qword_1403884D8 = (__int64)&qword_1403884D8;
  qword_1403884D0 = -10000000LL * dword_140400128;
  qword_140388C80 = 0LL;
  qword_140389240 = 0LL;
  qword_140388110 = 0LL;
  qword_140388128 = 0x7FF5FFFFFFFFLL;
  result = (unsigned __int8)ExGenRandom(1) << 16;
  qword_140388128 += -25165824 - result;
  return result;
}
