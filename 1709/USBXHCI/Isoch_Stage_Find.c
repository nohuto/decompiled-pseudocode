/*
 * XREFs of Isoch_Stage_Find @ 0x1C002AAA4
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0029850 (Isoch_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_dddd @ 0x1C00152C4 (WPP_RECORDER_SF_dddd.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0021F30 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C0023B20 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0026EBC (WPP_RECORDER_SF_DDq.c)
 *     WPP_RECORDER_SF_DDqDD @ 0x1C0026FBC (WPP_RECORDER_SF_DDqDD.c)
 */

unsigned __int8 *__fastcall Isoch_Stage_Find(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 *v4; // r14
  __int64 *v5; // rdi
  unsigned __int8 *v9; // rbx
  __int64 v10; // r11
  __int64 v11; // r10
  unsigned __int8 *v13; // r10
  unsigned __int8 *NextStage; // rax
  __int64 v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+40h] [rbp-38h]
  __int64 v19; // [rsp+48h] [rbp-30h]

  v3 = *(unsigned __int16 *)(a3 + 2);
  v4 = (__int64 *)(a1 + 384);
  v5 = *(__int64 **)(a1 + 384);
  v9 = 0LL;
  if ( (__int64 *)(a1 + 384) == v5 )
  {
LABEL_6:
    LODWORD(v17) = HIDWORD(*(_QWORD *)a3);
    LODWORD(v16) = *(_WORD *)(a2 + 14) & 0x1F;
    LODWORD(v15) = *(unsigned __int8 *)(a2 + 15);
    WPP_RECORDER_SF_dddd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xEu,
      0x13u,
      (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
      v15,
      v16,
      v17,
      v3);
  }
  else
  {
    while ( 1 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v16) = *(_WORD *)(a2 + 14) & 0x1F;
        LODWORD(v15) = *(unsigned __int8 *)(a2 + 15);
        WPP_RECORDER_SF_DDq(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          (unsigned int)v16,
          0x12u,
          (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
          v15,
          v16,
          v5[3]);
      }
      v10 = v5[6];
      v11 = HIDWORD(*(_QWORD *)a3);
      if ( *(_DWORD *)(v10 + 128) == v11 )
        break;
      v5 = (__int64 *)*v5;
      if ( v4 == v5 )
        goto LABEL_6;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v17) = *(_DWORD *)(v10 + 128);
      LODWORD(v16) = *(_WORD *)(a2 + 14) & 0x1F;
      LODWORD(v15) = *(unsigned __int8 *)(a2 + 15);
      WPP_RECORDER_SF_DDDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        (unsigned int)v16,
        0x14u,
        (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
        v15,
        v16,
        v17,
        v11,
        v3);
    }
    v13 = (unsigned __int8 *)(v5 + 16);
    *((_BYTE *)v5 + 133) = *((_BYTE *)v5 + 132);
    *((_BYTE *)v5 + 134) = *((_BYTE *)v5 + 130);
    do
    {
      NextStage = StageQueue_ForwardScanGetNextStage(v13);
      v9 = NextStage;
      if ( !NextStage )
      {
        LODWORD(v19) = v3;
        LODWORD(v18) = HIDWORD(*(_QWORD *)a3);
        LODWORD(v16) = *(_WORD *)(a2 + 14) & 0x1F;
        LODWORD(v15) = *(unsigned __int8 *)(a2 + 15);
        WPP_RECORDER_SF_DDqDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          *(unsigned __int8 *)(a2 + 15),
          (unsigned int)v16,
          0x16u,
          (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
          v15,
          v16,
          v5[3],
          v18,
          v19);
        return 0LL;
      }
    }
    while ( v3 > *((_DWORD *)NextStage + 11) );
    if ( !v3 || v3 > *((_DWORD *)NextStage + 12) - 1 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v18) = v3 + 1;
        LODWORD(v17) = *((_DWORD *)NextStage + 12);
        LODWORD(v16) = *(_WORD *)(a2 + 14) & 0x1F;
        LODWORD(v15) = *(unsigned __int8 *)(a2 + 15);
        WPP_RECORDER_SF_dddd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          0xEu,
          0x15u,
          (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
          v15,
          v16,
          v17,
          v18);
      }
      *((_DWORD *)v5 + 25) = v3 + 1;
      *((_DWORD *)v9 + 12) = v3 + 1;
    }
  }
  return v9;
}
