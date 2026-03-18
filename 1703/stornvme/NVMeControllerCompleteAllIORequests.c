/*
 * XREFs of NVMeControllerCompleteAllIORequests @ 0x1C0005038
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C10 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C0005138 (NVMeControllerReset.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C0004F18 (NVMeCompleteSubmissionQueueRequests.c)
 */

void __fastcall NVMeControllerCompleteAllIORequests(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r9
  unsigned int i; // edi
  unsigned __int16 j; // di

  StorPortExtendedFunction(81LL, a1, 10000LL, a4);
  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 232);
        NVMeCompleteSubmissionQueueRequests(
          a1,
          *(_QWORD *)(a1 + 544) + 136LL * i++,
          *(unsigned __int16 *)(a1 + 230),
          0,
          1,
          0,
          a2) )
  {
    ;
  }
  for ( j = 0; *(_WORD *)(a1 + 236) && j < 0x1388u; ++j )
    StorPortExtendedFunction(81LL, a1, 10LL, v6);
  NVMeCompleteSubmissionQueueRequests(a1, a1 + 240, *(unsigned __int16 *)(a1 + 228), 0, 1, 0, a2);
}
