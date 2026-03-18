/*
 * XREFs of Bulk_ValidateStagePointer @ 0x1C0031BBC
 * Callers:
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002F58C (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0005320 (WPP_RECORDER_SF_ddd.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0021F30 (StageQueue_ForwardScanGetNextStage.c)
 */

char __fastcall Bulk_ValidateStagePointer(__int64 a1, unsigned __int8 *a2)
{
  char v2; // di
  KSPIN_LOCK *v5; // rsi
  _BYTE *v6; // r14
  _BYTE *v7; // r10
  unsigned __int8 *v8; // r11
  unsigned __int8 *NextStage; // rax
  _QWORD *v10; // r10

  v2 = 0;
  if ( a2 )
  {
    v5 = (KSPIN_LOCK *)(a1 + 96);
    v6 = (_BYTE *)(a1 + 368);
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v7 = *(_BYTE **)(a1 + 368);
LABEL_8:
    if ( v6 != v7 )
    {
      v8 = v7 + 128;
      v7[133] = v7[132];
      v7[134] = v7[130];
      do
      {
        NextStage = StageQueue_ForwardScanGetNextStage(v8);
        if ( !NextStage )
        {
          v7 = (_BYTE *)*v10;
          goto LABEL_8;
        }
      }
      while ( NextStage != a2 );
      v2 = 1;
    }
    KeReleaseSpinLock(v5, *(_BYTE *)(a1 + 104));
  }
  else
  {
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xEu,
      0x2Au,
      (__int64)&WPP_553939f7980432fd09db0e6ec2743bdf_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64));
  }
  return v2;
}
