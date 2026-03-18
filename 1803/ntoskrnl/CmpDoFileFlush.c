/*
 * XREFs of CmpDoFileFlush @ 0x140006EB0
 * Callers:
 *     CmpFileFlush @ 0x140498590 (CmpFileFlush.c)
 * Callees:
 *     ZwFlushBuffersFile @ 0x1401A7E20 (ZwFlushBuffersFile.c)
 */

NTSTATUS __fastcall CmpDoFileFlush(void *a1)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  if ( CmpNoWrite )
    return 0;
  result = ZwFlushBuffersFile(a1, &IoStatusBlock);
  if ( result < 0 )
  {
    CmRegistryIODebug = 4;
    qword_140862878 = (__int64)a1;
    dword_140862880 = result;
  }
  return result;
}
