/*
 * XREFs of Control_ValidateED0TrbPointerOnMismatch @ 0x1C0023BC4
 * Callers:
 *     Control_ProcessTransferEventWithED0 @ 0x1C0022114 (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDx @ 0x1C0025078 (WPP_RECORDER_SF_DDx.c)
 */

void __fastcall Control_ValidateED0TrbPointerOnMismatch(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  bool v5; // cl
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r8d
  int v9; // r8d

  v3 = a1[22];
  v4 = *(_QWORD *)(v3 + 24);
  v5 = *a2 >= v4 && *a2 < v4 + *(unsigned int *)(v3 + 40);
  v6 = a1[6];
  if ( v5 )
  {
    v7 = a1[7];
    if ( (*(_QWORD *)(a1[5] + 272) & 0x4000000000LL) != 0 )
    {
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_DDx(*(_QWORD *)(v7 + 80), v6, v7, 12);
      return;
    }
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_DDx(*(_QWORD *)(v7 + 80), v6, v7, 13);
    v8 = 4128;
  }
  else
  {
    v9 = *(unsigned __int8 *)(v6 + 135);
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_DDx(*(_QWORD *)(a1[7] + 80), v6, v9, 14);
    v8 = 4127;
  }
  Controller_ReportFatalError(a1[5], 2, v8, a1[6], a1[7], (__int64)a1);
}
