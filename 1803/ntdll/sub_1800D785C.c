/*
 * XREFs of sub_1800D785C @ 0x1800D785C
 * Callers:
 *     sub_1800D7658 @ 0x1800D7658 (sub_1800D7658.c)
 * Callees:
 *     EtwEventWriteNoRegistration @ 0x180082B90 (EtwEventWriteNoRegistration.c)
 *     ZwQueryWnfStateNameInformation @ 0x18009D630 (ZwQueryWnfStateNameInformation.c)
 *     ZwUpdateWnfStateData @ 0x18009E370 (ZwUpdateWnfStateData.c)
 */

__int64 sub_1800D785C()
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
  if ( !EtwEventWriteNoRegistration(&stru_180126A30, &EventDescriptor, 0, 0LL) )
    ++v1;
  if ( !v1 )
    return (unsigned int)-1073741696;
  return v0;
}
