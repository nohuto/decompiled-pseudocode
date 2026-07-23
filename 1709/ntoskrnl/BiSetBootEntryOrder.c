/*
 * XREFs of BiSetBootEntryOrder @ 0x14077CAAC
 * Callers:
 *     BiAddBootEntryToNvramDisplayOrder @ 0x14077A474 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiExportEfiBootManager @ 0x14077BC44 (BiExportEfiBootManager.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x14077CA00 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 * Callees:
 *     ZwSetBootEntryOrder @ 0x140180860 (ZwSetBootEntryOrder.c)
 *     BiReleasePrivilege @ 0x1405B16E8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1405B1738 (BiAcquirePrivilege.c)
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
