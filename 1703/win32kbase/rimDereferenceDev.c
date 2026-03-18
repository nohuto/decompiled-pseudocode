/*
 * XREFs of rimDereferenceDev @ 0x1C0094378
 * Callers:
 *     RIMCreateDev @ 0x1C005428C (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x1C0094300 (RIMFreeSpecificDev.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C004D114 (WPP_RECORDER_SF_qq.c)
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
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0xAu,
      (__int64)&WPP_4abad023f51c380e85db81e5a59c95c2_Traceguids,
      v1,
      a1);
    ObCloseHandle(v1, 1);
  }
  ZwClose(v2);
  return ObfDereferenceObject(v3);
}
