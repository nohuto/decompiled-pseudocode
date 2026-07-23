/*
 * XREFs of DbgPrintEx @ 0x18005FEB0
 * Callers:
 *     sub_180002BD0 @ 0x180002BD0 (sub_180002BD0.c)
 *     sub_18000BC3C @ 0x18000BC3C (sub_18000BC3C.c)
 *     sub_180015A40 @ 0x180015A40 (sub_180015A40.c)
 *     RtlQueryInformationActivationContext @ 0x180017DF0 (RtlQueryInformationActivationContext.c)
 *     sub_18003697C @ 0x18003697C (sub_18003697C.c)
 *     RtlFindActivationContextSectionGuid @ 0x18003D710 (RtlFindActivationContextSectionGuid.c)
 *     sub_18003F37C @ 0x18003F37C (sub_18003F37C.c)
 *     RtlFindActivationContextSectionString @ 0x18003F770 (RtlFindActivationContextSectionString.c)
 *     sub_18003FB50 @ 0x18003FB50 (sub_18003FB50.c)
 *     sub_18003FCD8 @ 0x18003FCD8 (sub_18003FCD8.c)
 *     sub_18003FF6C @ 0x18003FF6C (sub_18003FF6C.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180043B20 (RtlDeactivateActivationContextUnsafeFast.c)
 *     TpCheckTerminateWorker @ 0x180050E80 (TpCheckTerminateWorker.c)
 *     RtlCreateActivationContext @ 0x180054430 (RtlCreateActivationContext.c)
 *     sub_180054594 @ 0x180054594 (sub_180054594.c)
 *     sub_180054610 @ 0x180054610 (sub_180054610.c)
 *     sub_180054E40 @ 0x180054E40 (sub_180054E40.c)
 *     sub_180055158 @ 0x180055158 (sub_180055158.c)
 *     sub_180055274 @ 0x180055274 (sub_180055274.c)
 *     sub_180055830 @ 0x180055830 (sub_180055830.c)
 *     sub_180055C50 @ 0x180055C50 (sub_180055C50.c)
 *     sub_180055E4C @ 0x180055E4C (sub_180055E4C.c)
 *     RtlAcquireResourceShared @ 0x1800738A0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x180073980 (RtlAcquireResourceExclusive.c)
 *     RtlDeactivateActivationContext @ 0x1800783E0 (RtlDeactivateActivationContext.c)
 *     sub_18007E938 @ 0x18007E938 (sub_18007E938.c)
 *     sub_18007EA24 @ 0x18007EA24 (sub_18007EA24.c)
 *     sub_18007EDF0 @ 0x18007EDF0 (sub_18007EDF0.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180080700 (RtlQueryActivationContextApplicationSettings.c)
 *     sub_180095B20 @ 0x180095B20 (sub_180095B20.c)
 *     sub_1800DA690 @ 0x1800DA690 (sub_1800DA690.c)
 *     sub_1800E0520 @ 0x1800E0520 (sub_1800E0520.c)
 *     sub_1800E07A8 @ 0x1800E07A8 (sub_1800E07A8.c)
 *     sub_1800E0AE0 @ 0x1800E0AE0 (sub_1800E0AE0.c)
 *     sub_1800E7354 @ 0x1800E7354 (sub_1800E7354.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E7490 (RtlpNotOwnerCriticalSection.c)
 *     RtlAssert @ 0x1800EAE80 (RtlAssert.c)
 *     sub_1800F7568 @ 0x1800F7568 (sub_1800F7568.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F8510 (RtlUnhandledExceptionFilter2.c)
 * Callees:
 *     sub_18005FF34 @ 0x18005FF34 (sub_18005FF34.c)
 */

ULONG DbgPrintEx(ULONG ComponentId, ULONG Level, PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return sub_18005FF34(&dword_1801150C2, ComponentId, Level, Format, (__int64 *)va, 1);
}
