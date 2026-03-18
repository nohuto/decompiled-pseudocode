/*
 * XREFs of CommonBuffer_WdfEvtCleanupCallback @ 0x1C000FA80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall CommonBuffer_WdfEvtCleanupCallback(__int64 a1)
{
  char v1; // di
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rsi
  unsigned int v5; // ebx
  struct _PCW_INSTANCE *v6; // rcx
  unsigned int *v7; // rdi
  __int64 result; // rax
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  v1 = a1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E2C8);
  v4 = v2;
  v5 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v3) = 5;
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)v2 + 72LL),
      v3,
      8,
      13,
      (__int64)&WPP_7d05ae32274238640bbafad5b1877db3_Traceguids,
      v1);
  }
  v6 = *(struct _PCW_INSTANCE **)(v4 + 16);
  if ( v6 )
    PcwCloseInstance(v6);
  v7 = (unsigned int *)(v4 + 136);
  do
  {
    result = *v7;
    if ( (_DWORD)result != v7[1] )
    {
      LODWORD(v11) = v7[1];
      LODWORD(v10) = *v7;
      LODWORD(v9) = v5;
      result = WPP_RECORDER_SF_ddd(
                 *(_QWORD *)(*(_QWORD *)(v4 + 88) + 72LL),
                 3u,
                 8u,
                 0xAu,
                 (__int64)&WPP_476c7f6a61583b4cf1c220e4dc815a48_Traceguids,
                 v9,
                 v10,
                 v11);
    }
    ++v5;
    v7 += 16;
  }
  while ( v5 < 2 );
  return result;
}
