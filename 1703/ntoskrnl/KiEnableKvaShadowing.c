/*
 * XREFs of KiEnableKvaShadowing @ 0x140403784
 * Callers:
 *     KiInitializeBootStructures @ 0x14040F390 (KiInitializeBootStructures.c)
 *     KxInitializeProcessorState @ 0x1405A7C04 (KxInitializeProcessorState.c)
 * Callees:
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     HvlRescindEnlightenments @ 0x14017B6CC (HvlRescindEnlightenments.c)
 *     KiInitializeDescriptorIst @ 0x14017BCB4 (KiInitializeDescriptorIst.c)
 *     KiSetAddressPolicy @ 0x14017BD00 (KiSetAddressPolicy.c)
 *     KiIsKvaLeakSimulated @ 0x14017C32C (KiIsKvaLeakSimulated.c)
 *     KiIsKvaShadowDisabled @ 0x14017C340 (KiIsKvaShadowDisabled.c)
 *     KiInitializeIdt @ 0x1404033F4 (KiInitializeIdt.c)
 *     KiShadowProcessorAllocation @ 0x140403934 (KiShadowProcessorAllocation.c)
 */

__int64 __fastcall KiEnableKvaShadowing(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  char v5; // al
  unsigned __int64 v6; // rax
  __int64 v7; // r11
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 result; // rax
  __int16 v13; // cx

  if ( !(unsigned __int8)KiIsKvaShadowDisabled() )
  {
    if ( (KeFeatureBits2 & 0x18000) == 0x8000 )
      *(_QWORD *)(v2 + 11520) = 3LL;
    if ( (unsigned __int8)KiIsKvaLeakSimulated() )
    {
      v5 = 1;
      KiKvaLeakageSimulate = 1;
    }
    else
    {
      v5 = KiKvaLeakageSimulate;
    }
    if ( !KiKvaLeakage && !v5 )
      return 1LL;
    v6 = __readcr3();
    *(_QWORD *)(v4 + 28288) = v6;
    *(_QWORD *)(v3 + 4216) = *(_QWORD *)(v3 + 4100);
    KiInitializeDescriptorIst(v4, v3);
    *(_QWORD *)(v7 + 4100) = v7 + 16896;
    if ( *(_DWORD *)(a1 + 36) )
    {
      result = KiShadowProcessorAllocation(a1, v7);
      if ( !(_DWORD)result )
        return result;
      v13 = *(_WORD *)(KeGetPrcb(0) + 28316);
      *(_DWORD *)(a1 + 28312) |= 2u;
      *(_WORD *)(a1 + 28316) = v13;
      goto LABEL_21;
    }
    KiInitializeIdt(v7, 1);
    KeGetCurrentThread()->ApcState.Process->AddressPolicy = 1;
    byte_1403FAC40 = 1;
    KiSetAddressPolicy();
    *(_WORD *)(a1 + 28316) = 24;
    if ( (*(_QWORD *)(a1 + 25576) & 0x40000000000LL) != 0 )
    {
      v8 = __readcr4();
      __writecr4(v8 & 0xFFFFFFFFFFFDFF7FuLL | 0x20000);
      v9 = __readcr3();
      __writecr3(v9 | 2);
      KiFlushPcid = 1;
    }
    HvlRescindEnlightenments();
    KiKvaShadow = 1;
    if ( KiFlushPcid )
    {
      if ( *(_BYTE *)(a1 + 141) != 1 )
      {
LABEL_18:
        KiKvaShadowMode = 1;
LABEL_21:
        if ( KiFlushPcid )
          _interlockedbittestandset64((volatile signed __int32 *)(a1 + 28288), 0x3FuLL);
        return 1LL;
      }
    }
    else if ( *(_BYTE *)(a1 + 141) != 1 )
    {
      KiKvaShadowMode = 2;
      return 1LL;
    }
    v11 = __readcr4();
    __writecr4(v10 & v11);
    goto LABEL_18;
  }
  KiIsKvaShadowConfigDisabled = 1;
  return 1LL;
}
