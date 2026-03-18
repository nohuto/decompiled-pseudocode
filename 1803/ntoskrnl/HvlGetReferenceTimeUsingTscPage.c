/*
 * XREFs of HvlGetReferenceTimeUsingTscPage @ 0x1401579F0
 * Callers:
 *     HvlGetReferenceTime @ 0x1401579C8 (HvlGetReferenceTime.c)
 * Callees:
 *     HvlpGetRegister64 @ 0x14022DB9C (HvlpGetRegister64.c)
 */

__int64 __fastcall HvlGetReferenceTimeUsingTscPage(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  int v3; // r8d
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  while ( 1 )
  {
    v2 = HvlpReferenceTscPage;
    v3 = *(_DWORD *)HvlpReferenceTscPage;
    if ( !*(_DWORD *)HvlpReferenceTscPage )
      break;
    if ( MEMORY[0xFFFFF78000000294] )
    {
      __asm { rdtscp }
    }
    else
    {
      if ( KeGetCurrentPrcb()->CpuVendor == 2 )
      {
        _mm_lfence();
      }
      else if ( KeGetCurrentPrcb()->CpuVendor == 1 )
      {
        _mm_mfence();
      }
      v2 = __rdtsc();
      LODWORD(a2) = HIDWORD(v2);
      v2 = (unsigned int)v2;
      a2 = (unsigned int)a2;
    }
    a2 = *(_QWORD *)(HvlpReferenceTscPage + 16)
       + (((v2 | (a2 << 32)) * (unsigned __int128)*(unsigned __int64 *)(HvlpReferenceTscPage + 8)) >> 64);
    v5 = a2;
    if ( *(_DWORD *)HvlpReferenceTscPage == v3 )
      return v5;
  }
  HvlpGetRegister64(589828LL, &v5);
  return v5;
}
