/*
 * XREFs of rimDereferenceDev @ 0x1C000E690
 * Callers:
 *     RIMFreeSpecificDev @ 0x1C000C69C (RIMFreeSpecificDev.c)
 *     RIMCreateDev @ 0x1C000D350 (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E724 (WPP_RECORDER_SF_qq.c)
 */

LONG_PTR __fastcall rimDereferenceDev(__int64 a1)
{
  void *v1; // rsi
  void *v2; // rdi
  void *v3; // rbx

  v1 = *(void **)(a1 + 16);
  v2 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v3 = *(void **)(a1 + 32);
  if ( (*(_DWORD *)(a1 + 184) & 0x400000) == 0 )
  {
    WPP_RECORDER_SF_qq(
      WPP_GLOBAL_Control->DeviceExtension,
      3,
      20,
      10,
      (__int64)&WPP_9161076fa35a349775df2bff3996d00f_Traceguids,
      (char)v1,
      a1);
    ObCloseHandle(v1, 1);
  }
  ZwClose(v2);
  return ObfDereferenceObject(v3);
}
