/*
 * XREFs of ACPIInitializeDDB @ 0x1C009A3CC
 * Callers:
 *     ACPIInitializeDDBs @ 0x1C009A488 (ACPIInitializeDDBs.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     ACPILoadTableCheckSum @ 0x1C009AD54 (ACPILoadTableCheckSum.c)
 *     AMLILoadDDB @ 0x1C009BE08 (AMLILoadDDB.c)
 */

__int64 __fastcall ACPIInitializeDDB(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v3; // eax
  int v4; // edx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  if ( !(unsigned __int8)ACPILoadTableCheckSum(v1, *(unsigned int *)(v1 + 4)) )
    KeBugCheckEx(0xA5u, 0x11uLL, 7uLL, v1, *(unsigned int *)(v1 + 32));
  v3 = AMLILoadDDB(v1, &v6);
  if ( v3 < 0 )
  {
    LOBYTE(v4) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      22,
      37,
      (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
      v3);
    KeBugCheckEx(0xA5u, 0x11uLL, 8uLL, v1, *(unsigned int *)(v1 + 32));
  }
  *(_QWORD *)(a1 + 16) = v6;
  return 0LL;
}
