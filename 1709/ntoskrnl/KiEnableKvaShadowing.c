/*
 * XREFs of KiEnableKvaShadowing @ 0x140423770
 * Callers:
 *     KiInitializeBootStructures @ 0x1404270C0 (KiInitializeBootStructures.c)
 *     KxInitializeProcessorState @ 0x1405B7C18 (KxInitializeProcessorState.c)
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     HvlRescindEnlightenments @ 0x14017AF24 (HvlRescindEnlightenments.c)
 *     KiInitializeDescriptorIst @ 0x14017B438 (KiInitializeDescriptorIst.c)
 *     KiSetAddressPolicy @ 0x14017B484 (KiSetAddressPolicy.c)
 *     KiIsKvaLeakSimulated @ 0x14017BA38 (KiIsKvaLeakSimulated.c)
 *     KiIsKvaShadowDisabled @ 0x14017BA4C (KiIsKvaShadowDisabled.c)
 *     KiInitializeIdt @ 0x1404233F4 (KiInitializeIdt.c)
 *     KiShadowProcessorAllocation @ 0x14042391C (KiShadowProcessorAllocation.c)
 */

__int64 __fastcall KiEnableKvaShadowing(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // r11
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 result; // rax
  __int16 v12; // cx

  if ( !KiIsKvaShadowDisabled() )
  {
    if ( (KeFeatureBits2 & 0x18000) == 0x8000 )
      *(_QWORD *)(v2 + 11520) = 3LL;
    if ( KiIsKvaLeakSimulated() )
      KiKvaLeakageSimulate = 1;
    if ( !KiKvaLeakage && !KiKvaLeakageSimulate )
      return 1LL;
    v5 = __readcr3();
    *(_QWORD *)(v4 + 28288) = v5;
    *(_QWORD *)(v3 + 4216) = *(_QWORD *)(v3 + 4100);
    KiInitializeDescriptorIst(v4, v3);
    *(_QWORD *)(v6 + 4100) = v6 + 16896;
    if ( *(_DWORD *)(a1 + 36) )
    {
      result = KiShadowProcessorAllocation(a1, v6);
      if ( !(_DWORD)result )
        return result;
      v12 = *(_WORD *)(KeGetPrcb(0) + 28316);
      *(_DWORD *)(a1 + 28312) |= 2u;
      *(_WORD *)(a1 + 28316) = v12;
      goto LABEL_20;
    }
    KiInitializeIdt(v6, 1);
    KeGetCurrentThread()->ApcState.Process->AddressPolicy = 1;
    byte_14041BC40 = 1;
    KiSetAddressPolicy();
    *(_WORD *)(a1 + 28316) = 24;
    if ( (*(_QWORD *)(a1 + 25248) & 0x40000000000LL) != 0 )
    {
      v7 = __readcr4();
      __writecr4(v7 & 0xFFFFFFFFFFFDFF7FuLL | 0x20000);
      v8 = __readcr3();
      __writecr3(v8 | 2);
      KiFlushPcid = 1;
    }
    HvlRescindEnlightenments();
    KiKvaShadow = 1;
    if ( KiFlushPcid )
    {
      if ( *(_BYTE *)(a1 + 141) != 1 )
      {
LABEL_17:
        KiKvaShadowMode = 1;
LABEL_20:
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
    v10 = __readcr4();
    __writecr4(v9 & v10);
    goto LABEL_17;
  }
  KiIsKvaShadowConfigDisabled = 1;
  return 1LL;
}
