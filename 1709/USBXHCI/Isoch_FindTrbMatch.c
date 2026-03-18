/*
 * XREFs of Isoch_FindTrbMatch @ 0x1C00282F4
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0029548 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C0021F30 (StageQueue_ForwardScanGetNextStage.c)
 *     TR_DoesSegmentContainDequeuePointer @ 0x1C0022B74 (TR_DoesSegmentContainDequeuePointer.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C00274F0 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_CalculateBytesTransferred @ 0x1C0027850 (Isoch_CalculateBytesTransferred.c)
 */

char __fastcall Isoch_FindTrbMatch(__int64 a1, signed __int64 *a2, __int64 *a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // ebx
  int v7; // r13d
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int8 *i; // r11
  unsigned __int8 *v12; // rbp
  unsigned __int8 *NextStage; // rax
  signed __int64 v14; // r10
  unsigned __int8 **v15; // r11
  int v16; // edx
  unsigned __int8 *v17; // r12
  unsigned __int8 *v18; // r14
  __int64 v19; // r8
  __int64 v20; // r11
  signed __int64 v21; // [rsp+A0h] [rbp+8h]
  int v22; // [rsp+A8h] [rbp+10h]

  v22 = (int)a2;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  v21 = *a2;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + 16LL * *(unsigned int *)(a1 + 192);
  if ( !*a2 )
  {
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      2u,
      0xEu,
      0x23u,
      (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
LABEL_3:
    *a3 = 0LL;
    *a5 = 0;
    *a4 = 0;
    return v6;
  }
  if ( *a2 != v9 )
  {
    for ( i = *(unsigned __int8 **)(a1 + 384); (unsigned __int8 *)(a1 + 384) != i; i = *v15 )
    {
      v12 = i + 128;
      i[133] = i[132];
      i[134] = i[130];
      NextStage = StageQueue_ForwardScanGetNextStage(i + 128);
      while ( 2 )
      {
        v8 = (__int64)NextStage;
        if ( NextStage )
        {
          v16 = *((_DWORD *)NextStage + 22);
          v17 = NextStage + 24;
          v18 = (unsigned __int8 *)*((_QWORD *)NextStage + 3);
          while ( v17 != v18 )
          {
            if ( TR_DoesSegmentContainDequeuePointer((__int64)v18, v16, 0xFFFFFFFF, v14) )
              goto LABEL_19;
            v18 = *(unsigned __int8 **)v18;
            v16 = 0;
            v14 = v21;
          }
          if ( !TR_DoesSegmentContainDequeuePointer(*(_QWORD *)(v8 + 96), v16, *(_DWORD *)(v8 + 104), v14) )
          {
            ++v7;
            NextStage = StageQueue_ForwardScanGetNextStage(v12);
            v14 = v21;
            continue;
          }
LABEL_19:
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_DDqq(
              *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
              5u,
              v19,
              0x25u,
              (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
              *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
              *(_QWORD *)(v20 + 24),
              v8);
          v6 = Isoch_CalculateBytesTransferred(a1, v8, v22);
          goto LABEL_22;
        }
        break;
      }
    }
    goto LABEL_3;
  }
  WPP_RECORDER_SF_DD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    4u,
    0xEu,
    0x24u,
    (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  v7 = *(_DWORD *)(a1 + 376);
LABEL_22:
  *a3 = v8;
  *a4 = v7;
  *a5 = v6;
  LOBYTE(v6) = 1;
  return v6;
}
