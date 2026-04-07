/*
 * XREFs of ?OnSetSlicer@CMagnifier@@QEAAJPEBUMAGN_SLICER_PARAM@@@Z @ 0x18007D9C8
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007DBEC (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifier::OnSetSlicer(CMagnifier *this, const struct MAGN_SLICER_PARAM *a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MAGN_SLICER_PARAM *))(**(_QWORD **)(*((_QWORD *)this + 4)
                                                                                                 + 16LL)
                                                                                   + 800LL))(
         *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
         *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
         a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x243u);
  return v3;
}
