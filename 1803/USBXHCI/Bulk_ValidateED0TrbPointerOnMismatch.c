/*
 * XREFs of Bulk_ValidateED0TrbPointerOnMismatch @ 0x1C002F500
 * Callers:
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002CD8C (Bulk_ProcessTransferEventWithED0.c)
 * Callees:
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     Bulk_IsTransferEventLikelyDuplicate_Internal @ 0x1C002C190 (Bulk_IsTransferEventLikelyDuplicate_Internal.c)
 *     WPP_RECORDER_SF_DDDx @ 0x1C002FFC0 (WPP_RECORDER_SF_DDDx.c)
 */

void __fastcall Bulk_ValidateED0TrbPointerOnMismatch(_QWORD *a1, __int64 a2)
{
  int v4; // r8d
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // r9d
  __int64 v8; // rcx
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  char v12; // [rsp+68h] [rbp+10h] BYREF

  if ( Bulk_IsTransferEventLikelyDuplicate_Internal(a1, *(_QWORD *)a2, &v12) )
  {
    LODWORD(v5) = 0;
    v6 = *(_QWORD *)(a1[5] + 272LL);
    if ( (v6 & 0x4000000000LL) != 0 )
    {
      v7 = 43;
      v8 = a1[7];
      v9 = *(unsigned __int8 *)(a1[6] + 135LL);
LABEL_10:
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_DDDx(*(_QWORD *)(v8 + 80), v9, v4, v7);
      return;
    }
    if ( v12 )
    {
      if ( (v6 & 0x2000000000000LL) != 0 )
      {
        v5 = a1[6];
        if ( *(_DWORD *)(v5 + 20) == 3 )
        {
          v8 = a1[7];
          if ( *(_DWORD *)(v8 + 120) == 6 && (unsigned int)*(unsigned __int8 *)(a2 + 11) - 26 <= 2 )
          {
            v9 = *(unsigned __int8 *)(v5 + 135);
            v7 = 44;
            goto LABEL_10;
          }
        }
      }
    }
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_DDDx(*(_QWORD *)(a1[7] + 80LL), v5, *(unsigned __int8 *)(a1[6] + 135LL), 45);
    v10 = 4128;
  }
  else
  {
    v11 = *(unsigned __int8 *)(a1[6] + 135LL);
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_DDDx(*(_QWORD *)(a1[7] + 80LL), v11, v4, 46);
    v10 = 4127;
  }
  Controller_ReportFatalError(a1[5], 2, v10, a1[6], a1[7], (__int64)a1);
}
