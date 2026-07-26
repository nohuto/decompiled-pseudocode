/*
 * XREFs of ndisFilterCancelSendNetBufferLists @ 0x1C005A830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ndisFilterCancelSendNetBufferLists(__int64 a1, __int64 a2)
{
  _QWORD v3[9]; // [rsp+30h] [rbp-48h] BYREF

  v3[1] = a1;
  v3[3] = a2;
  return KeExpandKernelStackAndCalloutEx(ndisFilterCancelSendNetBufferListsInternal, v3, 0x4CCCuLL, 0, 0LL);
}
