/*
 * XREFs of Bulk_FindStage @ 0x1C002E3B0
 * Callers:
 *     Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x1C002EF6C (Bulk_ProcessStreamOnEndpointStopOrHalt.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002F2C0 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002F58C (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0021F30 (StageQueue_ForwardScanGetNextStage.c)
 *     TR_DoesSegmentContainDequeuePointer @ 0x1C0022B74 (TR_DoesSegmentContainDequeuePointer.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C0032BF4 (WPP_RECORDER_SF_DDDqq.c)
 */

char __fastcall Bulk_FindStage(__int64 a1, __int64 a2, unsigned __int8 **a3, _DWORD *a4)
{
  char v5; // bl
  int v6; // r13d
  unsigned __int8 *v7; // rsi
  __int64 v8; // rcx
  __int64 *i; // r14
  int v11; // edx
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // r15
  int v14; // r8d
  signed __int64 v15; // r11
  unsigned __int8 *NextStage; // rax
  int v17; // edx

  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + 16LL * *(unsigned int *)(a1 + 192);
  if ( !a2 )
  {
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xEu,
      0x2Fu,
      (__int64)&WPP_553939f7980432fd09db0e6ec2743bdf_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64));
LABEL_3:
    *a3 = 0LL;
    *a4 = 0;
    return v5;
  }
  if ( a2 != v8 )
  {
    for ( i = *(__int64 **)(a1 + 368); (__int64 *)(a1 + 368) != i; i = (__int64 *)*i )
    {
      *((_BYTE *)i + 133) = *((_BYTE *)i + 132);
      *((_BYTE *)i + 134) = *((_BYTE *)i + 130);
      while ( 2 )
      {
        NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)i + 128);
        v7 = NextStage;
        if ( NextStage )
        {
          v11 = *((_DWORD *)NextStage + 26);
          v12 = NextStage + 24;
          v13 = (unsigned __int8 *)*((_QWORD *)v7 + 3);
          while ( v12 != v13 )
          {
            if ( TR_DoesSegmentContainDequeuePointer((__int64)v13, v11, 0xFFFFFFFF, v15) )
              goto LABEL_19;
            v13 = *(unsigned __int8 **)v13;
            v12 = v7 + 24;
            v11 = 0;
          }
          if ( !TR_DoesSegmentContainDequeuePointer(*((_QWORD *)v7 + 14), v11, *((_DWORD *)v7 + 30), v15) )
          {
            ++v6;
            continue;
          }
LABEL_19:
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v17 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
            LOBYTE(v17) = 5;
            WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v17, v14, 49);
          }
          goto LABEL_21;
        }
        break;
      }
    }
    goto LABEL_3;
  }
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    4u,
    0xEu,
    0x30u,
    (__int64)&WPP_553939f7980432fd09db0e6ec2743bdf_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    *(_DWORD *)(a1 + 64));
  v6 = *(_DWORD *)(a1 + 348);
LABEL_21:
  v5 = 1;
  *a3 = v7;
  *a4 = v6;
  return v5;
}
