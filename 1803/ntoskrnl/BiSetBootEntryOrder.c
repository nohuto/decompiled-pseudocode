/*
 * XREFs of BiSetBootEntryOrder @ 0x1407E5550
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x1407E2E5C (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x1407E4690 (BiExportEfiBootManager.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x1407E54A4 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 * Callees:
 *     ZwSetBootEntryOrder @ 0x1401AA4A0 (ZwSetBootEntryOrder.c)
 *     BiReleasePrivilege @ 0x1406069F8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140606A48 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x140609614 (BiLogMessage.c)
 */

__int64 __fastcall BiSetBootEntryOrder(PULONG Ids, PULONG Count)
{
  unsigned int v2; // edi
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = (unsigned int)Count;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = ZwSetBootEntryOrder(Ids, (PULONG)v2);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to set boot entry order. Status: %x", (unsigned int)v5);
    BiReleasePrivilege(&v7);
  }
  return (unsigned int)v4;
}
