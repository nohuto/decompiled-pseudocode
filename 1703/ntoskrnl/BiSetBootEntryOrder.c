/*
 * XREFs of BiSetBootEntryOrder @ 0x140738388
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x140736030 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x140737628 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwSetBootEntryOrder @ 0x140180E80 (ZwSetBootEntryOrder.c)
 *     BiReleasePrivilege @ 0x14058D134 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14058D184 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiSetBootEntryOrder(PULONG Ids, PULONG Count)
{
  unsigned int v2; // edi
  NTSTATUS v4; // ebx
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = (unsigned int)Count;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v6);
  if ( v4 >= 0 )
  {
    v4 = ZwSetBootEntryOrder(Ids, (PULONG)v2);
    BiReleasePrivilege(&v6);
  }
  return (unsigned int)v4;
}
