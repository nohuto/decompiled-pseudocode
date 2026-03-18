/*
 * XREFs of KeFlushCurrentTbOnly @ 0x14017BB28
 * Callers:
 *     MiInsertInSystemSpace @ 0x140060AA0 (MiInsertInSystemSpace.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiAgeWorkingSetTail @ 0x1400D7E80 (MiAgeWorkingSetTail.c)
 *     MiAgeWorkingSet @ 0x1400D81E0 (MiAgeWorkingSet.c)
 *     MiFlushTbAsNeeded @ 0x1400F9A20 (MiFlushTbAsNeeded.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14021B390 (MiDbgTranslatePhysicalAddress.c)
 *     MmUpdateHiberMappings @ 0x14040DF80 (MmUpdateHiberMappings.c)
 *     MiInitializePfnsForValidMappings @ 0x140800028 (MiInitializePfnsForValidMappings.c)
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 *     MiZeroBootMappings @ 0x14081354C (MiZeroBootMappings.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiSetUserTbFlushPending @ 0x140182870 (KiSetUserTbFlushPending.c)
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
        v4 = 2uLL;
        _EAX = 1;
        __asm { invpcid eax, [rbp+var_50] }
        goto LABEL_13;
      }
      goto LABEL_15;
    }
    if ( KiFlushPcid )
    {
      v5 = 2uLL;
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
      v6 = 2uLL;
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
  v7 = 2uLL;
  __asm { invpcid eax, [rbp+var_20] }
LABEL_13:
  result = (unsigned __int64)KeGetCurrentThread();
  if ( !*(_BYTE *)(*(_QWORD *)(result + 184) + 640LL) )
    return KiSetUserTbFlushPending();
  return result;
}
