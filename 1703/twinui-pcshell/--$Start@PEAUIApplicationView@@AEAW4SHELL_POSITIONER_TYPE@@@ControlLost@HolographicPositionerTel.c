/*
 * XREFs of ??$Start@PEAUIApplicationView@@AEAW4SHELL_POSITIONER_TYPE@@@ControlLost@HolographicPositionerTelemetry@@SA?AV01@$$QEAPEAUIApplicationView@@AEAW4SHELL_POSITIONER_TYPE@@@Z @ 0x1800DE56C
 * Callers:
 *     ?ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnknown@@@Z @ 0x1800D89C0 (-ControlLost@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAPEAUIUnkn.c)
 * Callees:
 *     ?StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1800D6900 (-StartActivity@ControlLost@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_PO.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall HolographicPositionerTelemetry::ControlLost::Start<IApplicationView *,enum SHELL_POSITIONER_TYPE &>(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        int *a3)
{
  __int64 v3; // rbx
  _QWORD *v7; // rcx

  *(_QWORD *)(a1 + 16) = a1;
  v3 = a1 + 56;
  *(_QWORD *)(a1 + 40) = a1 + 96;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  v7 = (_QWORD *)(a1 + 136);
  *(_BYTE *)(v3 + 4) = 0;
  *(_BYTE *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 48) = "ControlLost";
  *(_QWORD *)(v3 + 56) = 0LL;
  *(_QWORD *)(v3 + 72) = 1LL;
  v7[18] = 0LL;
  v7[19] = 0LL;
  memset(v7, 0, 0x90uLL);
  *(_QWORD *)(v3 + 240) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)a1 = &HolographicPositionerTelemetry::ControlLost::`vftable';
  HolographicPositionerTelemetry::ControlLost::StartActivity(a1, *a2, *a3);
  return a1;
}
