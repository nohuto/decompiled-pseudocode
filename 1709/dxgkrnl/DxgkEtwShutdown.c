/*
 * XREFs of DxgkEtwShutdown @ 0x1C0026AC0
 * Callers:
 *     DxgkUnload @ 0x1C01A5BE0 (DxgkUnload.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C0026AE4 (McGenEventUnregister.c)
 */

ULONG DxgkEtwShutdown()
{
  ULONG result; // eax

  result = McGenEventUnregister(&DxgkControlGuid_Context);
  DxgkControlGuid_Context = 0LL;
  return result;
}
