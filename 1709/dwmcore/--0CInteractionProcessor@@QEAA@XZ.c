/*
 * XREFs of ??0CInteractionProcessor@@QEAA@XZ @ 0x180091DB8
 * Callers:
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x180091B04 (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z @ 0x1801A1DBC (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@K@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAA@W4InputType@@@Z @ 0x1800B7A0C (--0-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4FlagsEn.c)
 *     ??0?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAA@W4InputType@@@Z @ 0x1800B7A98 (--0-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4FlagsEnum@Dw.c)
 *     InitializeInteractionStateInfo @ 0x1800BC790 (InitializeInteractionStateInfo.c)
 */

CInteractionProcessor *__fastcall CInteractionProcessor::CInteractionProcessor(CInteractionProcessor *this)
{
  __int64 v2; // r8

  *(_QWORD *)this = 0LL;
  *(_OWORD *)((char *)this + 20) = xmmword_18020FF90;
  *(_OWORD *)((char *)this + 36) = xmmword_18020FFA0;
  *(_OWORD *)((char *)this + 52) = xmmword_18020FFB0;
  *(_OWORD *)((char *)this + 68) = xmmword_18020FFC0;
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
  CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>((char *)this + 320);
  *((_DWORD *)this + 120) = v2;
  *((_QWORD *)this + 62) = v2;
  *((_QWORD *)this + 63) = v2;
  *((_QWORD *)this + 64) = v2;
  *((_DWORD *)this + 130) = v2;
  *((_QWORD *)this + 66) = v2;
  *((_QWORD *)this + 67) = v2;
  *((_QWORD *)this + 68) = v2;
  *((_DWORD *)this + 138) = v2;
  *((_QWORD *)this + 70) = v2;
  *((_QWORD *)this + 71) = v2;
  *((_QWORD *)this + 72) = v2;
  *((_DWORD *)this + 146) = v2;
  *((_DWORD *)this + 176) = v2;
  *((_DWORD *)this + 193) = v2;
  *((_DWORD *)this + 210) = v2;
  *((_DWORD *)this + 227) = v2;
  *((_DWORD *)this + 244) = v2;
  *((_DWORD *)this + 261) = v2;
  *((_BYTE *)this + 1064) &= 0xF0u;
  *((_DWORD *)this + 267) = v2;
  `vector constructor iterator'(
    (CInteractionProcessor *)((char *)this + 1072),
    (unsigned int)(v2 + 12),
    (unsigned int)(v2 + 3),
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))TemporaryConfiguration::TemporaryConfiguration);
  `vector constructor iterator'(
    (CInteractionProcessor *)((char *)this + 1108),
    12LL,
    3LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))TemporaryConfiguration::TemporaryConfiguration);
  InitializeInteractionStateInfo((char *)this + 592);
  return this;
}
