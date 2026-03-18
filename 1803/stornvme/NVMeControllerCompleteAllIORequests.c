/*
 * XREFs of NVMeControllerCompleteAllIORequests @ 0x1C00053A4
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C50 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C000559C (NVMeControllerReset.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C0005284 (NVMeCompleteSubmissionQueueRequests.c)
 */

void __fastcall NVMeControllerCompleteAllIORequests(__int64 a1, char a2)
{
  unsigned int i; // edi
  unsigned __int16 j; // di

  StorPortStallExecution(10000LL);
  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 240);
        NVMeCompleteSubmissionQueueRequests(
          a1,
          *(_QWORD *)(a1 + 552) + 136LL * i++,
          *(unsigned __int16 *)(a1 + 238),
          0,
          1,
          0,
          a2) )
  {
    ;
  }
  for ( j = 0; *(_WORD *)(a1 + 244) && j < 0x1388u; ++j )
    StorPortStallExecution(10LL);
  NVMeCompleteSubmissionQueueRequests(a1, a1 + 248, *(unsigned __int16 *)(a1 + 236), 0, 1, 0, a2);
}
