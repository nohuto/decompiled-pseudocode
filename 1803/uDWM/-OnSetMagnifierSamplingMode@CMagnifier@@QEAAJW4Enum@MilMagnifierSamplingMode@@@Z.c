/*
 * XREFs of ?OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x180079660
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180079C18 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifier::OnSetMagnifierSamplingMode(__int64 a1, int a2)
{
  __int64 v2; // r8
  int v3; // eax
  unsigned int v4; // ebx

  v2 = 2LL;
  if ( a2 != 1 )
    v2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 16LL) + 1232LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL),
         *(unsigned int *)(*(_QWORD *)(a1 + 32) + 24LL),
         v2);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1DFu);
  return v4;
}
