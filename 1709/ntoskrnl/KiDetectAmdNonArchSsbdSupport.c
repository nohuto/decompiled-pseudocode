/*
 * XREFs of KiDetectAmdNonArchSsbdSupport @ 0x14017B798
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x14017B4B0 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140134970 (HviIsAnyHypervisorPresent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall KiDetectAmdNonArchSsbdSupport(__int64 a1, __int16 *a2)
{
  __int16 v2; // r8
  __int64 v15; // rax

  v2 = *a2;
  if ( (*a2 & 0x40) == 0 )
  {
    _RAX = 0x80000000LL;
    __asm { cpuid }
    if ( (unsigned int)_RAX < 0x80000008 )
    {
      LODWORD(_RBX) = 0;
    }
    else
    {
      _RAX = 2147483656LL;
      __asm { cpuid }
    }
    if ( (_RBX & 0x2000000) != 0 )
    {
      KiSsbdMsr = -1073676001;
      *a2 = v2 | 0x40;
      return;
    }
    if ( !HviIsAnyHypervisorPresent() )
    {
      switch ( *(_BYTE *)(a1 + 64) )
      {
        case 0x15:
          v15 = 0x40000000000000LL;
          break;
        case 0x16:
          v15 = 0x200000000LL;
          break;
        case 0x17:
          KiSsbdBit = 1024LL;
          goto LABEL_15;
        default:
          return;
      }
      KiSsbdBit = v15;
LABEL_15:
      *a2 |= 0x40u;
      KiSsbdMsr = -1073672160;
    }
  }
}
