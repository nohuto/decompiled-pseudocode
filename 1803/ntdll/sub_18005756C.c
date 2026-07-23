/*
 * XREFs of sub_18005756C @ 0x18005756C
 * Callers:
 *     TpAllocIoCompletion @ 0x180057380 (TpAllocIoCompletion.c)
 *     sub_180108CB4 @ 0x180108CB4 (sub_180108CB4.c)
 *     sub_180109250 @ 0x180109250 (sub_180109250.c)
 * Callees:
 *     sub_180058E68 @ 0x180058E68 (sub_180058E68.c)
 *     ZwSetInformationFile @ 0x18009AFA0 (ZwSetInformationFile.c)
 *     sub_1801086C8 @ 0x1801086C8 (sub_1801086C8.c)
 */

NTSTATUS __fastcall sub_18005756C(void *a1, __int64 a2, PPEB_LDR_DATA Ldr)
{
  PPEB_LDR_DATA v3; // rbx
  PVOID EntryInProgress; // rax
  NTSTATUS result; // eax
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  _IO_STATUS_BLOCK v7; // [rsp+40h] [rbp-18h] BYREF

  v3 = Ldr;
  if ( a1 && a2 && Ldr && (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
  {
    EntryInProgress = v3->EntryInProgress;
    v6[1] = a2;
    v6[0] = EntryInProgress;
    result = ZwSetInformationFile(a1, &v7, v6, 0x10u, FileCompletionInformation);
    if ( result >= 0 )
    {
      sub_180058E68(v3, 1LL);
      return 0;
    }
  }
  else
  {
    sub_1801086C8(a1, a2, Ldr);
    return -1073741811;
  }
  return result;
}
