/*
 * XREFs of DxgkEtwShutdown @ 0x1C0035B00
 * Callers:
 *     DxgkUnload @ 0x1C01910D0 (DxgkUnload.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C0035CB4 (McGenEventUnregister.c)
 */

ULONG __fastcall DxgkEtwShutdown(ULONGLONG *a1)
{
  ULONG result; // eax

  result = McGenEventUnregister(a1);
  Microsoft_Windows_DxgKrnlHandle = 0LL;
  return result;
}
