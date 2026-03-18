/*
 * XREFs of Bulk_FindStage @ 0x1C002BE60
 * Callers:
 *     Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x1C002CA38 (Bulk_ProcessStreamOnEndpointStopOrHalt.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x1C002CD8C (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x1C002D05C (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C001F7E0 (StageQueue_ForwardScanGetNextStage.c)
 *     TR_DoesSegmentContainDequeuePointer @ 0x1C0020430 (TR_DoesSegmentContainDequeuePointer.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x1C00306C4 (WPP_RECORDER_SF_DDDqq.c)
 */

char __fastcall Bulk_FindStage(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  char v5; // bl
  int v6; // ebp
  unsigned __int8 *v7; // rsi
  __int64 v8; // rcx
  __int64 *v9; // r14
  int v10; // edx
  unsigned __int8 *v11; // r13
  unsigned __int8 *v12; // r15
  int v13; // r8d
  signed __int64 v14; // r11
  unsigned __int8 *NextStage; // rax
  int v16; // edx
  int v18; // [rsp+90h] [rbp+8h]

  v5 = 0;
  v6 = 0;
  v18 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + 16LL * *(unsigned int *)(a1 + 192);
  if ( a2 )
  {
    if ( a2 == v8 )
    {
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        4u,
        0xEu,
        0x30u,
        (__int64)&WPP_7e05ccf1ecbe36c41fbb6a7cdf44ebc9_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        *(_DWORD *)(a1 + 64));
      v6 = *(_DWORD *)(a1 + 348);
      v5 = 1;
    }
    else
    {
      v9 = *(__int64 **)(a1 + 368);
      if ( (__int64 *)(a1 + 368) != v9 )
      {
        while ( 1 )
        {
          *((_BYTE *)v9 + 133) = *((_BYTE *)v9 + 132);
          *((_BYTE *)v9 + 134) = *((_BYTE *)v9 + 130);
LABEL_13:
          NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v9 + 128);
          v7 = NextStage;
          if ( NextStage )
            break;
          v9 = (__int64 *)*v9;
          if ( (__int64 *)(a1 + 368) == v9 )
            goto LABEL_19;
        }
        v10 = *((_DWORD *)NextStage + 26);
        v11 = NextStage + 24;
        v12 = (unsigned __int8 *)*((_QWORD *)NextStage + 3);
        while ( v11 != v12 )
        {
          if ( TR_DoesSegmentContainDequeuePointer((__int64)v12, v10, 0xFFFFFFFF, v14) )
            goto LABEL_16;
          v12 = *(unsigned __int8 **)v12;
          v10 = 0;
        }
        if ( !TR_DoesSegmentContainDequeuePointer(*((_QWORD *)v7 + 14), v10, *((_DWORD *)v7 + 30), v14) )
        {
          ++v18;
          goto LABEL_13;
        }
LABEL_16:
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v16 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
          LOBYTE(v16) = 5;
          WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v16, v13, 49);
        }
        v5 = 1;
LABEL_19:
        v6 = v18;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xEu,
      0x2Fu,
      (__int64)&WPP_7e05ccf1ecbe36c41fbb6a7cdf44ebc9_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64));
  }
  *a3 = (unsigned __int64)v7 & -(__int64)(v5 != 0);
  *a4 = v5 != 0 ? v6 : 0;
  return v5;
}
