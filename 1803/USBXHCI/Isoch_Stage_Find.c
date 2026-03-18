/*
 * XREFs of Isoch_Stage_Find @ 0x1C002852C
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C00272C8 (Isoch_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_dddd @ 0x1C000DF64 (WPP_RECORDER_SF_dddd.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C001F7E0 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C00214B0 (WPP_RECORDER_SF_DDDDD.c)
 *     WPP_RECORDER_SF_DDq @ 0x1C0024800 (WPP_RECORDER_SF_DDq.c)
 *     WPP_RECORDER_SF_DDqDD @ 0x1C0024A20 (WPP_RECORDER_SF_DDqDD.c)
 */

unsigned __int8 *__fastcall Isoch_Stage_Find(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 *v4; // r14
  __int64 *v5; // rdi
  unsigned __int8 *v7; // rbx
  __int64 v10; // r8
  unsigned int v11; // eax
  unsigned int v13; // eax
  unsigned __int8 *v14; // r10
  unsigned __int8 *NextStage; // rax
  unsigned int v16; // esi
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h]
  __int64 v19; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-38h]
  __int64 v21; // [rsp+48h] [rbp-30h]

  v3 = *(unsigned __int16 *)(a3 + 2);
  v4 = (__int64 *)(a1 + 384);
  v5 = *(__int64 **)(a1 + 384);
  v7 = 0LL;
  while ( 1 )
  {
    if ( v4 == v5 )
    {
      v11 = *(_DWORD *)(a2 + 12);
      LODWORD(v19) = HIDWORD(*(_QWORD *)a3);
      LODWORD(v18) = HIWORD(v11) & 0x1F;
      LODWORD(v17) = HIBYTE(v11);
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        4u,
        0xEu,
        0x13u,
        (__int64)&WPP_f9020e9f93d73638c8a5c21896bb3fa5_Traceguids,
        v17,
        v18,
        v19,
        v3);
      return v7;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v18) = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
      LODWORD(v17) = HIBYTE(*(_DWORD *)(a2 + 12));
      WPP_RECORDER_SF_DDq(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        (unsigned int)v17,
        0x12u,
        (__int64)&WPP_f9020e9f93d73638c8a5c21896bb3fa5_Traceguids,
        v17,
        v18,
        v5[3]);
    }
    v10 = HIDWORD(*(_QWORD *)a3);
    if ( *(_DWORD *)(v5[6] + 128) == v10 )
      break;
    v5 = (__int64 *)*v5;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = *(_DWORD *)(a2 + 12);
    LODWORD(v19) = *(_DWORD *)(v5[6] + 128);
    LODWORD(v18) = HIWORD(v13) & 0x1F;
    LODWORD(v17) = HIBYTE(v13);
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      5u,
      v10,
      0x14u,
      (__int64)&WPP_f9020e9f93d73638c8a5c21896bb3fa5_Traceguids,
      v17,
      v18,
      v19,
      v10,
      v3);
  }
  v14 = (unsigned __int8 *)(v5 + 16);
  *((_BYTE *)v5 + 133) = *((_BYTE *)v5 + 132);
  *((_BYTE *)v5 + 134) = *((_BYTE *)v5 + 130);
  do
  {
    NextStage = StageQueue_ForwardScanGetNextStage(v14);
    v7 = NextStage;
    if ( !NextStage )
    {
      LODWORD(v21) = v3;
      LODWORD(v20) = HIDWORD(*(_QWORD *)a3);
      LODWORD(v18) = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
      LODWORD(v17) = HIBYTE(*(_DWORD *)(a2 + 12));
      WPP_RECORDER_SF_DDqDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        (unsigned int)v18,
        (unsigned int)v17,
        0x16u,
        (__int64)&WPP_f9020e9f93d73638c8a5c21896bb3fa5_Traceguids,
        v17,
        v18,
        v5[3],
        v20,
        v21);
      return 0LL;
    }
  }
  while ( v3 > *((_DWORD *)NextStage + 11) );
  if ( !v3 || v3 > *((_DWORD *)NextStage + 12) - 1 )
  {
    v16 = v3 + 1;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v20) = v16;
      LODWORD(v19) = *((_DWORD *)NextStage + 12);
      LODWORD(v18) = HIWORD(*(_DWORD *)(a2 + 12)) & 0x1F;
      LODWORD(v17) = HIBYTE(*(_DWORD *)(a2 + 12));
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        5u,
        0xEu,
        0x15u,
        (__int64)&WPP_f9020e9f93d73638c8a5c21896bb3fa5_Traceguids,
        v17,
        v18,
        v19,
        v20);
    }
    *((_DWORD *)v5 + 25) = v16;
    *((_DWORD *)v7 + 12) = v16;
  }
  return v7;
}
