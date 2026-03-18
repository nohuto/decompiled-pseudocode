/*
 * XREFs of traceFrame @ 0x1C010DDF0
 * Callers:
 *     RIMFixUpCompleteFrame @ 0x1C010E5D0 (RIMFixUpCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C005557C (WPP_RECORDER_SF_DD.c)
 *     tracePointerFlags @ 0x1C010DED4 (tracePointerFlags.c)
 */

__int64 __fastcall traceFrame(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // r9d
  __int64 result; // rax
  _DWORD *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v3 = 44;
  if ( !*(_DWORD *)(a1 + 56) )
    v3 = 45;
  result = WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             3,
             20,
             v3,
             (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids);
  if ( *(_DWORD *)(a1 + 24) )
  {
    v5 = (_DWORD *)(*(_QWORD *)(a1 + 88) + 48LL);
    do
    {
      LODWORD(v7) = *((unsigned __int16 *)v5 - 20);
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x14u,
        0x2Eu,
        (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids,
        v7);
      LODWORD(v9) = v5[1];
      LODWORD(v8) = *v5;
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v6,
        0x14u,
        0x2Bu,
        (__int64)&WPP_0d10099da51a341e4944493a9655787d_Traceguids,
        v8,
        v9);
      result = tracePointerFlags((unsigned int)*(v5 - 5));
      ++v1;
      v5 += 42;
    }
    while ( v1 < *(_DWORD *)(a1 + 24) );
  }
  return result;
}
