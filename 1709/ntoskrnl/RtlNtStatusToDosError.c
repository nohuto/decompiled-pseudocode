/*
 * XREFs of RtlNtStatusToDosError @ 0x14056B830
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x14057B9FC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x14057BEE8 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x14057C4E4 (LocalGetSidForString.c)
 *     EtwpEnableKeyProviders @ 0x1405A8170 (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405A8348 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpInitializeAutoLoggers @ 0x1405A8E4C (EtwpInitializeAutoLoggers.c)
 *     EtwStartAutoLogger @ 0x1405A90A0 (EtwStartAutoLogger.c)
 *     LocalConvertAclToString @ 0x14073215C (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x140732C08 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x140733530 (LocalGetStringForSid.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x140110170 (RtlNtStatusToDosErrorNoTeb.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  _DWORD *Teb; // rdx

  if ( (KeGetCurrentThread()->MiscFlags & 0x400) == 0 && KeGetCurrentThread()->ApcStateIndex != 1 )
  {
    Teb = KeGetCurrentThread()->Teb;
    if ( Teb )
      Teb[1172] = Status;
  }
  return RtlNtStatusToDosErrorNoTeb(Status);
}
