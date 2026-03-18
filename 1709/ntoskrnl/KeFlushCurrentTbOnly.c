/*
 * XREFs of KeFlushCurrentTbOnly @ 0x14017B2B8
 * Callers:
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiFlushTbAsNeeded @ 0x14009BE70 (MiFlushTbAsNeeded.c)
 *     MiAgeWorkingSetTail @ 0x14009EF90 (MiAgeWorkingSetTail.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140227C44 (MiDbgTranslatePhysicalAddress.c)
 *     MmUpdateHiberMappings @ 0x1404306AC (MmUpdateHiberMappings.c)
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 *     MiInitializePfnsForValidMappings @ 0x140829FE8 (MiInitializePfnsForValidMappings.c)
 *     MiZeroBootMappings @ 0x14084A3F8 (MiZeroBootMappings.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x1401822F0 (KiSetUserTbFlushPending.c)
 */

unsigned __int64 __fastcall KeFlushCurrentTbOnly(int a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rcx
  __int128 v4; // [rsp+20h] [rbp-50h]
  __int128 v5; // [rsp+30h] [rbp-40h]
  __int128 v6; // [rsp+40h] [rbp-30h]
  __int128 v7; // [rsp+50h] [rbp-20h]

  if ( KiKvaShadow )
  {
    if ( a1 && a1 != 2 )
    {
      if ( KiFlushPcid )
      {
        *(_QWORD *)&v4 = 2LL;
        _EAX = 1;
        __asm { invpcid eax, [rbp+var_50] }
        goto LABEL_13;
      }
      goto LABEL_15;
    }
    if ( KiFlushPcid )
    {
      *(_QWORD *)&v5 = 2LL;
      result = 1LL;
      __asm { invpcid eax, [rbp+var_40] }
      return result;
    }
LABEL_17:
    result = __readcr3();
    __writecr3(result);
    return result;
  }
  result = 1LL;
  if ( a1 == 1 )
  {
    if ( KiFlushPcid )
    {
      *(_QWORD *)&v6 = 2LL;
      __asm { invpcid eax, [rbp+var_30] }
      return result;
    }
    goto LABEL_17;
  }
  if ( !KiFlushPcid )
  {
LABEL_15:
    v3 = __readcr4();
    if ( (v3 & 0x20080) != 0 )
    {
      result = v3 ^ 0x80;
      __writecr4(v3 ^ 0x80);
      __writecr4(v3);
      return result;
    }
    goto LABEL_17;
  }
  *(_QWORD *)&v7 = 2LL;
  __asm { invpcid eax, [rbp+var_20] }
LABEL_13:
  result = (unsigned __int64)KeGetCurrentThread();
  if ( !*(_BYTE *)(*(_QWORD *)(result + 184) + 640LL) )
    return KiSetUserTbFlushPending();
  return result;
}
