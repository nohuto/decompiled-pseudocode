/*
 * XREFs of ??0CInteractionProcessor@@QEAA@XZ @ 0x1800B29C0
 * Callers:
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x18004B56C (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z @ 0x18019309C (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAA@W4InputType@@@Z @ 0x1800B373C (--0-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4FlagsEn.c)
 *     InitializeInteractionStateInfo @ 0x1800B37C8 (InitializeInteractionStateInfo.c)
 */

CInteractionProcessor *__fastcall CInteractionProcessor::CInteractionProcessor(CInteractionProcessor *this)
{
  __int64 v2; // r8

  *(_QWORD *)this = 0LL;
  *(_OWORD *)((char *)this + 20) = xmmword_1801F3E80;
  *(_OWORD *)((char *)this + 36) = xmmword_1801F3E90;
  *(_OWORD *)((char *)this + 52) = xmmword_1801F3EA0;
  *(_OWORD *)((char *)this + 68) = xmmword_1801F3EB0;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_BYTE *)this + 148) &= 0xF0u;
  *((_BYTE *)this + 148) |= 0x30u;
  *((_BYTE *)this + 136) &= ~1u;
  *(_QWORD *)((char *)this + 140) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 1;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 1110704128;
  *((_DWORD *)this + 33) = 1110704128;
  CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>((char *)this + 160);
  *((_QWORD *)this + 40) = v2;
  *((_QWORD *)this + 42) = v2;
  *((_QWORD *)this + 43) = v2;
  *((_QWORD *)this + 44) = v2;
  *((_DWORD *)this + 90) = v2;
  *((_QWORD *)this + 46) = v2;
  *((_QWORD *)this + 47) = v2;
  *((_QWORD *)this + 48) = v2;
  *((_DWORD *)this + 98) = v2;
  *((_DWORD *)this + 128) = v2;
  *((_DWORD *)this + 145) = v2;
  *((_DWORD *)this + 162) = v2;
  *((_DWORD *)this + 179) = v2;
  *((_DWORD *)this + 196) = v2;
  *((_DWORD *)this + 213) = v2;
  *((_BYTE *)this + 872) &= 0xF0u;
  *((_DWORD *)this + 219) = v2;
  `vector constructor iterator'(
    (CInteractionProcessor *)((char *)this + 880),
    (unsigned int)(v2 + 12),
    (unsigned int)(v2 + 3),
    (void *(*)(void *))TemporaryConfiguration::TemporaryConfiguration);
  `vector constructor iterator'(
    (CInteractionProcessor *)((char *)this + 916),
    0xCuLL,
    3uLL,
    (void *(*)(void *))TemporaryConfiguration::TemporaryConfiguration);
  InitializeInteractionStateInfo((char *)this + 400);
  return this;
}
