/*
 * XREFs of CommonBuffer_WdfEvtCleanupCallback @ 0x1C0006930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 */

__int64 __fastcall CommonBuffer_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned int v4; // ebx
  struct _PCW_INSTANCE *v5; // rcx
  unsigned int *v6; // rdi
  __int64 result; // rax
  unsigned int v8; // edx

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B2C8);
  v3 = v2;
  v4 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)v2 + 72LL),
      5u,
      8u,
      0xDu,
      (__int64)&WPP_2b4f898d1d553c000803289ecd93c2f6_Traceguids,
      a1);
  v5 = *(struct _PCW_INSTANCE **)(v3 + 16);
  if ( v5 )
    PcwCloseInstance(v5);
  v6 = (unsigned int *)(v3 + 144);
  do
  {
    result = *v6;
    v8 = v6[1];
    if ( (_DWORD)result != v8 )
    {
      LOBYTE(v8) = 3;
      result = WPP_RECORDER_SF_ddL(
                 *(_QWORD *)(*(_QWORD *)(v3 + 96) + 72LL),
                 v8,
                 8,
                 10,
                 (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
                 v4,
                 result,
                 v6[1]);
    }
    ++v4;
    v6 += 16;
  }
  while ( v4 < 2 );
  return result;
}
