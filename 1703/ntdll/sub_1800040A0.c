/*
 * XREFs of sub_1800040A0 @ 0x1800040A0
 * Callers:
 *     sub_180003CFC @ 0x180003CFC (sub_180003CFC.c)
 * Callees:
 *     EtwEventWriteNoRegistration @ 0x180088240 (EtwEventWriteNoRegistration.c)
 *     ZwQueryWnfStateNameInformation @ 0x1800A7DD0 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x1800A8AF0 (ZwUpdateWnfStateData.c)
 */

__int64 sub_1800040A0()
{
  unsigned int v0; // ebx
  int v1; // edi
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+60h] [rbp+8h] BYREF

  v0 = 0;
  v1 = 0;
  if ( ZwQueryWnfStateNameInformation(&StateName, WnfInfoSubscribersPresent, 0LL, &v4, 4u) >= 0 && v4 )
    v1 = ZwUpdateWnfStateData(&StateName, 0LL, 0, 0LL, 0LL, 0, 0) >= 0;
  *(_QWORD *)&EventDescriptor.Id = 0LL;
  EventDescriptor.Keyword = 0LL;
  if ( !EtwEventWriteNoRegistration(&ProviderId, &EventDescriptor, 0, 0LL) )
    ++v1;
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
