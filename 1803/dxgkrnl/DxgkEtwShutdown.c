/*
 * XREFs of DxgkEtwShutdown @ 0x1C0030DA0
 * Callers:
 *     DxgkUnload @ 0x1C0197330 (DxgkUnload.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C0030F28 (McGenEventUnregister.c)
 */

ULONG DxgkEtwShutdown()
{
  ULONG result; // eax

  result = McGenEventUnregister(&DxgkControlGuid_Context);
  DxgkControlGuid_Context = 0LL;
  return result;
}
