/*
 * XREFs of Control_ValidateED0TrbPointerOnMismatch @ 0x1C00263A4
 * Callers:
 *     Control_ProcessTransferEventWithED0 @ 0x1C00248A4 (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDx @ 0x1C0027614 (WPP_RECORDER_SF_DDx.c)
 */

void __fastcall Control_ValidateED0TrbPointerOnMismatch(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r8d
  __int64 v10; // rdx
  int v11; // r8d

  v3 = a1[22];
  v4 = *(_QWORD *)(v3 + 24);
  if ( *a2 < v4 || *a2 >= v4 + *(unsigned int *)(v3 + 40) )
  {
    v10 = a1[6];
    v11 = *(unsigned __int8 *)(v10 + 135);
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_DDx(*(_QWORD *)(a1[7] + 80), v10, v11, 14);
    v9 = 4127;
  }
  else
  {
    if ( (*(_QWORD *)(a1[5] + 272) & 0x4000000000LL) != 0 )
    {
      v5 = a1[6];
      v6 = *(unsigned __int8 *)(v5 + 135);
      LOBYTE(v5) = 3;
      WPP_RECORDER_SF_DDx(*(_QWORD *)(a1[7] + 80), v5, v6, 12);
      return;
    }
    v7 = a1[6];
    v8 = *(unsigned __int8 *)(v7 + 135);
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_DDx(*(_QWORD *)(a1[7] + 80), v7, v8, 13);
    v9 = 4128;
  }
  Controller_ReportFatalError(a1[5], 2, v9, a1[6], a1[7], (__int64)a1);
}
