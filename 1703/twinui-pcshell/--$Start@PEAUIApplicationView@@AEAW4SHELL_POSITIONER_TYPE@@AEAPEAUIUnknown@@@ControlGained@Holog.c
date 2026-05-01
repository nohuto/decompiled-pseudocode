/*
 * XREFs of ??$Start@PEAUIApplicationView@@AEAW4SHELL_POSITIONER_TYPE@@AEAPEAUIUnknown@@@ControlGained@HolographicPositionerTelemetry@@SA?AV01@$$QEAPEAUIApplicationView@@AEAW4SHELL_POSITIONER_TYPE@@AEAPEAUIUnknown@@@Z @ 0x1800DE638
 * Callers:
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D8B70 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 * Callees:
 *     ?StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1800D6340 (-StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_.c)
 *     memset @ 0x180194E50 (memset.c)
 */

__int64 __fastcall HolographicPositionerTelemetry::ControlGained::Start<IApplicationView *,enum SHELL_POSITIONER_TYPE &,IUnknown * &>(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *),
        int *a3,
        __int64 *a4)
{
  __int64 v4; // rbx
  _QWORD *v8; // rcx

  *(_QWORD *)(a1 + 16) = a1;
  v4 = a1 + 56;
  *(_QWORD *)(a1 + 40) = a1 + 96;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  v8 = (_QWORD *)(a1 + 136);
  *(_BYTE *)(v4 + 4) = 0;
  *(_BYTE *)(v4 + 64) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = "ControlGained";
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_QWORD *)(v4 + 72) = 1LL;
  v8[18] = 0LL;
  v8[19] = 0LL;
  memset(v8, 0, 0x90uLL);
  *(_QWORD *)(v4 + 240) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)a1 = &HolographicPositionerTelemetry::ControlGained::`vftable';
  HolographicPositionerTelemetry::ControlGained::StartActivity(a1, *a2, *a3, *a4);
  return a1;
}
