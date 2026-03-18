/*
 * XREFs of TR_SendCompleteStageRequest @ 0x1C00211E4
 * Callers:
 *     Control_TransferData_Free @ 0x1C00228C8 (Control_TransferData_Free.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C002879C (Isoch_Stage_FreeScatterGatherList.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C002E33C (Bulk_Stage_FreeScatterGatherList.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall TR_SendCompleteStageRequest(__int64 a1, int a2)
{
  __int64 v4; // rcx
  _QWORD v6[6]; // [rsp+30h] [rbp-48h] BYREF

  memset(v6, 0, sizeof(v6));
  v4 = *(_QWORD *)(a1 + 40);
  v6[3] = *(_QWORD *)(a1 + 288);
  LODWORD(v6[4]) = 42;
  LODWORD(v6[5]) = a2;
  return SecureChannel_SendRequestSynchronously(*(_QWORD *)(v4 + 112), (unsigned int)v6, 48, 0, 0);
}
