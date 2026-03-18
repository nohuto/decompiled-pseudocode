/*
 * XREFs of RtlNtStatusToDosError @ 0x1405B74B0
 * Callers:
 *     LocalConvertStringSDToSD_Rev1 @ 0x140600EC4 (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x140601100 (LocalGetAclForString.c)
 *     LocalGetSidForString @ 0x140601728 (LocalGetSidForString.c)
 *     EtwpEnableKeyProviders @ 0x14062A460 (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x14062A638 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpInitializeAutoLoggers @ 0x14063DCC0 (EtwpInitializeAutoLoggers.c)
 *     EtwStartAutoLogger @ 0x14063DF10 (EtwStartAutoLogger.c)
 *     LocalConvertAclToString @ 0x140795A60 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1407964E0 (LocalConvertSDToStringSD_Rev1.c)
 *     LocalGetStringForSid @ 0x140796DD4 (LocalGetStringForSid.c)
 * Callees:
 *     RtlNtStatusToDosErrorNoTeb @ 0x140125E50 (RtlNtStatusToDosErrorNoTeb.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  _DWORD *Teb; // rdx

  if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = KeGetCurrentThread()->Teb;
  if ( Teb )
    Teb[1172] = Status;
  return RtlNtStatusToDosErrorNoTeb(Status);
}
