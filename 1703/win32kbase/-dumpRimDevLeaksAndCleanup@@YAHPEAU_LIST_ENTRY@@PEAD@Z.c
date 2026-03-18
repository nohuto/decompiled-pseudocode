/*
 * XREFs of ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00671EC
 * Callers:
 *     RIMUnInitialize @ 0x1C0067150 (RIMUnInitialize.c)
 * Callees:
 *     RIMFreeSpecificDevWorker @ 0x1C0008734 (RIMFreeSpecificDevWorker.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_s @ 0x1C008D364 (WPP_RECORDER_SF_s.c)
 *     DbgPrintRIMAlways @ 0x1C00FF030 (DbgPrintRIMAlways.c)
 */

__int64 __fastcall dumpRimDevLeaksAndCleanup(struct _LIST_ENTRY *a1, char *a2)
{
  __int64 *v2; // rsi
  __int64 *v4; // rdi
  int v5; // edx
  void *v6; // rbx

  v2 = (__int64 *)gObRimDevList;
  if ( (__int64 *)gObRimDevList == &gObRimDevList )
    return 0LL;
  WPP_RECORDER_SF_s(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    19,
    12,
    (__int64)&WPP_061ba18ef66b318792488a11d9e561fa_Traceguids,
    (__int64)"RIMDevObj leaks");
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
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      19,
      14,
      (__int64)&WPP_061ba18ef66b318792488a11d9e561fa_Traceguids);
    DbgPrintRIMAlways("Cleaning up\n");
    v6 = (void *)v4[51];
    RIMFreeSpecificDevWorker((__int64)v6, (__int64)(v4 + 8));
    ObfDereferenceObject(v6);
  }
  while ( v2 != &gObRimDevList );
  return 1LL;
}
