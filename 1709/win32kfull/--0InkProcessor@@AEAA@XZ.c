/*
 * XREFs of ??0InkProcessor@@AEAA@XZ @ 0x1C00E0BA8
 * Callers:
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00E1100 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z @ 0x1C00E16C4 (-AddInkFeedbackProvider@InkFeedbackServer@@QEAAJPEAVInkFeedbackProviderBase@@@Z.c)
 *     TraceLoggingRegisterEx @ 0x1C036B410 (TraceLoggingRegisterEx.c)
 */

InkProcessor *__fastcall InkProcessor::InkProcessor(InkProcessor *this, ETWENABLECALLBACK *a2, void *a3)
{
  InkFeedbackServer *v4; // rbx

  *(_QWORD *)this = 0LL;
  v4 = (InkProcessor *)((char *)this + 96);
  *((_BYTE *)this + 8) = 0;
  *((_QWORD *)this + 10) = "HideInkCursorProvider";
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 8) = (char *)this + 56;
  *((_QWORD *)this + 7) = (char *)this + 56;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 4) = &HideInkCursorProvider::`vftable';
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  TraceLoggingRegisterEx((TraceLoggingHProvider)&pRelatedActivityId, a2, a3);
  *((_QWORD *)this + 3) = (char *)this + 16;
  *((_QWORD *)this + 2) = (char *)this + 16;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_InkProcessor__private_propertyCache,
    8134488LL,
    &unk_1C02DC964,
    1LL);
  *((_BYTE *)this + 8) = 1;
  InkFeedbackServer::AddInkFeedbackProvider(v4, (InkProcessor *)((char *)this + 32));
  return this;
}
