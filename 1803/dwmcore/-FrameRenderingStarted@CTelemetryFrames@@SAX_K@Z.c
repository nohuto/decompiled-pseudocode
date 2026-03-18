/*
 * XREFs of ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18005EB8C
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x1800227E0 (_anonymous_namespace_--FramesReport--OffsetInMillisecondsFromStartOfReport.c)
 *     _anonymous_namespace_::SealCurrentFrameSequenceLocked @ 0x180022D44 (_anonymous_namespace_--SealCurrentFrameSequenceLocked.c)
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Variant_DwmHintingPpm@@W4VariantReportingKind@2@_N@Z @ 0x180052D60 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Varia.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BAD1C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CAX_NW4Reportin.c)
 *     HintPpm @ 0x180149458 (HintPpm.c)
 */

void __fastcall CTelemetryFrames::FrameRenderingStarted(__int64 a1)
{
  LARGE_INTEGER v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rsi
  int v6; // eax
  __int32 v7; // ebx
  int v8; // ebx
  _QWORD *v9; // rcx
  char OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  if ( byte_1802D5EB5 )
  {
    anonymous_namespace_::SealCurrentFrameSequenceLocked(1);
    byte_1802D5EB5 = 0;
    xmmword_1802D6128 = xmmword_1802D6118;
  }
  v2 = g_qpcFrequency;
  v3 = a1 - qword_1802D60F8;
  qword_1802D60F8 = a1;
  v4 = 1000 * (v3 % g_qpcFrequency.QuadPart) % g_qpcFrequency.QuadPart;
  v5 = 1000 * (v3 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart + 1000 * (v3 / g_qpcFrequency.QuadPart);
  if ( v5 >= CCommonRegistryData::m_telemetryFramesSequenceIdleIntervalMilliseconds )
    anonymous_namespace_::SealCurrentFrameSequenceLocked(0);
  byte_1802D63C1 = v5 > 0x2A;
  if ( v5 > 0x2A )
  {
    ++dword_1802D624C;
    ((void (__fastcall *)(_QWORD, _QWORD))wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::ReportUsageToService)(
      (LARGE_INTEGER)v2.QuadPart,
      v4);
    if ( wil::Feature<__WilFeatureTraits_Feature_DwmHintingPpm>::__private_IsVariantEqual(4u) )
      HintPpm(3LL);
  }
  if ( dword_1802D6268 )
    goto LABEL_7;
  qword_1802D63B0 = a1;
  v9 = (_QWORD *)*((_QWORD *)qword_1802D6148 + 5);
  if ( (v9[1] - *v9) / 480LL )
    dword_1802D627C = anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(v9, a1);
  if ( CallNtPowerInformation(SystemExecutionState, 0LL, 0, &OutputBuffer, 4u) < 0 || (OutputBuffer & 2) == 0 )
LABEL_7:
    v6 = dword_1802D6260;
  else
    v6 = dword_1802D6260 | 0x20;
  dword_1802D6260 = v6 | dword_1802D5EB0;
  byte_1802D6101 = byte_1802D5EA8;
  if ( byte_1802D5EA8 )
  {
    byte_1802D5EA8 = 0;
    dword_1802D6260 = v6 | dword_1802D5EB0 | 0x100;
  }
  dword_1802D5EB0 = 0;
  v7 = _InterlockedExchange(&dword_1802D5EAC, 0);
  dword_1802D6264 |= v7;
  ++dword_1802D6268;
  dword_1802D5EA4 = v7;
  v8 = MEMORY[0x7FFE02E4];
  if ( GetTickCount() - v8 < 0x3E8 )
    dword_1802D6260 |= 1u;
  `anonymous namespace'::_frameStartSnaphot = dword_1802D62E8;
  dword_1802D6140 = dword_1802D62F0;
  dword_1802D613C = dword_1802D62EC;
  dword_1802D6144 = dword_1802D62F4;
}
