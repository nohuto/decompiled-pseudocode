/*
 * XREFs of DwmAsyncNotifyDigitizerActiveContactsWrap @ 0x1C01A6B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DwmAsyncNotifyDigitizerActiveContactsWrap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rax

  v4 = (void *)ReferenceDwmApiPort(a1, a2, a3, a4);
  return DwmAsyncNotifyDigitizerActiveContacts(v4);
}
