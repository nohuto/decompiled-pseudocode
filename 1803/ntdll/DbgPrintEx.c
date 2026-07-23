/*
 * XREFs of DbgPrintEx @ 0x180006B80
 * Callers:
 *     sub_180024910 @ 0x180024910 (sub_180024910.c)
 *     sub_1800273D0 @ 0x1800273D0 (sub_1800273D0.c)
 *     RtlQueryInformationActivationContext @ 0x180028A50 (RtlQueryInformationActivationContext.c)
 *     sub_180033EB8 @ 0x180033EB8 (sub_180033EB8.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003B310 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlFindActivationContextSectionGuid @ 0x18003C960 (RtlFindActivationContextSectionGuid.c)
 *     sub_18003E4CC @ 0x18003E4CC (sub_18003E4CC.c)
 *     RtlFindActivationContextSectionString @ 0x18003E8E0 (RtlFindActivationContextSectionString.c)
 *     sub_18003EC30 @ 0x18003EC30 (sub_18003EC30.c)
 *     sub_18003F160 @ 0x18003F160 (sub_18003F160.c)
 *     sub_18003F2EC @ 0x18003F2EC (sub_18003F2EC.c)
 *     RtlCreateActivationContext @ 0x18004D910 (RtlCreateActivationContext.c)
 *     sub_18004DA74 @ 0x18004DA74 (sub_18004DA74.c)
 *     sub_18004DAF0 @ 0x18004DAF0 (sub_18004DAF0.c)
 *     sub_18004DBBC @ 0x18004DBBC (sub_18004DBBC.c)
 *     sub_18004DCD8 @ 0x18004DCD8 (sub_18004DCD8.c)
 *     sub_18004E290 @ 0x18004E290 (sub_18004E290.c)
 *     sub_18004E6B0 @ 0x18004E6B0 (sub_18004E6B0.c)
 *     sub_18004E8B0 @ 0x18004E8B0 (sub_18004E8B0.c)
 *     sub_18004E9D0 @ 0x18004E9D0 (sub_18004E9D0.c)
 *     RtlAcquireResourceShared @ 0x18006C6A0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x18006C780 (RtlAcquireResourceExclusive.c)
 *     RtlDeactivateActivationContext @ 0x180072C10 (RtlDeactivateActivationContext.c)
 *     TpCheckTerminateWorker @ 0x180073720 (TpCheckTerminateWorker.c)
 *     sub_180078F24 @ 0x180078F24 (sub_180078F24.c)
 *     sub_180079010 @ 0x180079010 (sub_180079010.c)
 *     sub_1800793D0 @ 0x1800793D0 (sub_1800793D0.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007BAE0 (RtlQueryActivationContextApplicationSettings.c)
 *     sub_18008AD60 @ 0x18008AD60 (sub_18008AD60.c)
 *     sub_1800D3DA8 @ 0x1800D3DA8 (sub_1800D3DA8.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 *     sub_1800D9DA0 @ 0x1800D9DA0 (sub_1800D9DA0.c)
 *     sub_1800DA028 @ 0x1800DA028 (sub_1800DA028.c)
 *     sub_1800DA360 @ 0x1800DA360 (sub_1800DA360.c)
 *     sub_1800E201C @ 0x1800E201C (sub_1800E201C.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800E2150 (RtlpNotOwnerCriticalSection.c)
 *     RtlAssert @ 0x1800E6440 (RtlAssert.c)
 *     sub_1800F4894 @ 0x1800F4894 (sub_1800F4894.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1800F5FF0 (RtlUnhandledExceptionFilter2.c)
 * Callees:
 *     sub_1800085D4 @ 0x1800085D4 (sub_1800085D4.c)
 */

ULONG DbgPrintEx(ULONG ComponentId, ULONG Level, PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, Format);
  return sub_1800085D4(&dword_180114112, ComponentId, Level, Format, (__int64 *)va, 1);
}
