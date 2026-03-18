/*
 * XREFs of ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C007618C
 * Callers:
 *     RIMUnInitialize @ 0x1C00760F0 (RIMUnInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C00091F4 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     RIMFreeSpecificDevWorker @ 0x1C000E7F0 (RIMFreeSpecificDevWorker.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     DbgPrintRIMAlways @ 0x1C00F0070 (DbgPrintRIMAlways.c)
 */

__int64 __fastcall dumpRimDevLeaksAndCleanup(struct _LIST_ENTRY *a1, char *a2)
{
  __int64 *v2; // rsi
  __int64 *v4; // rdi
  void *v5; // rbx
  __int64 v6; // r8

  v2 = (__int64 *)gObRimDevList;
  if ( (__int64 *)gObRimDevList == &gObRimDevList )
    return 0LL;
  WPP_RECORDER_SF_s(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)a2,
    0x13u,
    0xCu,
    (__int64)&WPP_061ba18ef66b318792488a11d9e561fa_Traceguids,
    "RIMDevObj leaks");
  DbgPrintRIMAlways("%s\n");
  do
  {
    v4 = v2 - 2;
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0xDu,
      (__int64)&WPP_061ba18ef66b318792488a11d9e561fa_Traceguids,
      v2 - 2);
    DbgPrintRIMAlways("Leaked %p: ");
    v2 = (__int64 *)*v2;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0xEu,
      (__int64)&WPP_061ba18ef66b318792488a11d9e561fa_Traceguids);
    DbgPrintRIMAlways("Cleaning up\n");
    v5 = (void *)v4[51];
    RIMFreeSpecificDevWorker((__int64)v5, (__int64)(v4 + 8), v6);
    ObfDereferenceObject(v5);
  }
  while ( v2 != &gObRimDevList );
  return 1LL;
}
