/*
 * XREFs of BiSetBootOptions @ 0x1407E55C0
 * Callers:
 *     BiExportEfiBootManager @ 0x1407E4690 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwSetBootOptions @ 0x1401AA4C0 (ZwSetBootOptions.c)
 *     BiReleasePrivilege @ 0x1406069F8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140606A48 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x140609614 (BiLogMessage.c)
 */

__int64 __fastcall BiSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = BiAcquirePrivilege(0x16u, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = ZwSetBootOptions(BootOptions, FieldsToChange);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to set boot options. Status: %x", (unsigned int)v5);
    BiReleasePrivilege(&v7);
  }
  return (unsigned int)v4;
}
