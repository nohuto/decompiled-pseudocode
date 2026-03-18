/*
 * XREFs of KiEnableKvaShadowing @ 0x14047BF08
 * Callers:
 *     KiInitializeBootStructures @ 0x140478DD0 (KiInitializeBootStructures.c)
 *     KxInitializeProcessorState @ 0x14062B3F0 (KxInitializeProcessorState.c)
 * Callees:
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     HvlRescindEnlightenments @ 0x1400D2E3C (HvlRescindEnlightenments.c)
 *     KiSetAddressPolicy @ 0x1400FDE10 (KiSetAddressPolicy.c)
 *     KiInitializeDescriptorIst @ 0x1401761A0 (KiInitializeDescriptorIst.c)
 *     KiIsKvaLeakSimulated @ 0x1401761F0 (KiIsKvaLeakSimulated.c)
 *     KiIsKvaShadowDisabled @ 0x140176204 (KiIsKvaShadowDisabled.c)
 *     KiShadowProcessorAllocation @ 0x14047C088 (KiShadowProcessorAllocation.c)
 *     KiInitializeIdt @ 0x14047C160 (KiInitializeIdt.c)
 */

__int64 __fastcall KiEnableKvaShadowing(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r11
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 result; // rax
  __int16 v11; // cx

  if ( KiIsKvaShadowDisabled() )
  {
    BYTE1(Mm64BitPhysicalAddress) = 1;
  }
  else
  {
    if ( (KeFeatureBits2 & 0x18000) == 0x8000 )
      *(_QWORD *)(v2 + 11520) = 3LL;
    if ( KiIsKvaLeakSimulated() )
      KiKvaLeakageSimulate = 1;
    if ( KiKvaLeakage || KiKvaLeakageSimulate )
    {
      v5 = __readcr3();
      *(_QWORD *)(v4 + 28288) = v5;
      *(_QWORD *)(v3 + 4216) = *(_QWORD *)(v3 + 4100);
      KiInitializeDescriptorIst(v4, v3);
      *(_QWORD *)(v7 + 4100) = v7 + 16896;
      if ( *(_DWORD *)(a1 + 36) )
      {
        result = KiShadowProcessorAllocation(a1, v7);
        if ( !(_DWORD)result )
          return result;
        v11 = *(_WORD *)(KeGetPrcb(0) + 28316);
        *(_DWORD *)(a1 + 28312) |= 2u;
        *(_WORD *)(a1 + 28316) = v11;
      }
      else
      {
        LOBYTE(v6) = 1;
        KiInitializeIdt(v7, v6);
        KeGetCurrentThread()->ApcState.Process->AddressPolicy = 1;
        byte_140466C40 = 1;
        KiSetAddressPolicy();
        *(_WORD *)(a1 + 28316) = 24;
        if ( (*(_QWORD *)(a1 + 25248) & 0x40000000000LL) != 0 )
        {
          v8 = __readcr4();
          __writecr4(v8 & 0xFFFFFFFFFFFDFF7FuLL | 0x20000);
          v9 = __readcr3();
          __writecr3(v9 | 2);
          KiFlushPcid = 1;
        }
        HvlRescindEnlightenments();
        KiKvaShadow = 1;
        KiKvaShadowMode = 2 - (KiFlushPcid != 0);
      }
      if ( KiFlushPcid )
        _interlockedbittestandset64((volatile signed __int32 *)(a1 + 28288), 0x3FuLL);
    }
  }
  return 1LL;
}
