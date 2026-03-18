/*
 * XREFs of Isoch_FindTrbMatch @ 0x1C0025D64
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0026FC0 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1C001F7E0 (StageQueue_ForwardScanGetNextStage.c)
 *     TR_DoesSegmentContainDequeuePointer @ 0x1C0020430 (TR_DoesSegmentContainDequeuePointer.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0024F54 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_CalculateBytesTransferred @ 0x1C00252B4 (Isoch_CalculateBytesTransferred.c)
 */

char __fastcall Isoch_FindTrbMatch(__int64 a1, signed __int64 *a2, __int64 *a3, _DWORD *a4, _DWORD *a5)
{
  signed __int64 v5; // r13
  char v6; // bl
  int v8; // ebp
  __int64 v9; // rdi
  __int64 v10; // rcx
  _BYTE *v11; // r11
  unsigned __int8 *v12; // rbp
  int v13; // edx
  unsigned __int8 *v14; // r12
  unsigned __int8 *v15; // r14
  __int64 v16; // r8
  __int64 v17; // r11
  unsigned __int8 *NextStage; // rax
  _QWORD *v19; // r11
  char result; // al
  int v21; // [rsp+50h] [rbp-58h]
  int v22; // [rsp+B0h] [rbp+8h]
  int v23; // [rsp+B8h] [rbp+10h]

  v23 = (int)a2;
  v5 = *a2;
  v6 = 0;
  v21 = 0;
  v8 = 0;
  v9 = 0LL;
  v22 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + 16LL * *(unsigned int *)(a1 + 192);
  if ( *a2 )
  {
    if ( v5 == v10 )
    {
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        4u,
        0xEu,
        0x24u,
        (__int64)&WPP_f9020e9f93d73638c8a5c21896bb3fa5_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      v8 = *(_DWORD *)(a1 + 376);
      v6 = 1;
    }
    else
    {
      v11 = *(_BYTE **)(a1 + 384);
      if ( (_BYTE *)(a1 + 384) != v11 )
      {
        while ( 1 )
        {
          v12 = v11 + 128;
          v11[133] = v11[132];
          v11[134] = v11[130];
LABEL_13:
          NextStage = StageQueue_ForwardScanGetNextStage(v12);
          v9 = (__int64)NextStage;
          if ( NextStage )
            break;
          v11 = (_BYTE *)*v19;
          if ( (_BYTE *)(a1 + 384) == v11 )
            goto LABEL_19;
        }
        v13 = *((_DWORD *)NextStage + 22);
        v14 = NextStage + 24;
        v15 = (unsigned __int8 *)*((_QWORD *)NextStage + 3);
        while ( v14 != v15 )
        {
          if ( TR_DoesSegmentContainDequeuePointer((__int64)v15, v13, 0xFFFFFFFF, v5) )
            goto LABEL_16;
          v15 = *(unsigned __int8 **)v15;
          v13 = 0;
        }
        if ( !TR_DoesSegmentContainDequeuePointer(*(_QWORD *)(v9 + 96), v13, *(_DWORD *)(v9 + 104), v5) )
        {
          ++v22;
          goto LABEL_13;
        }
LABEL_16:
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_DDqq(
            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
            5u,
            v16,
            0x25u,
            (__int64)&WPP_f9020e9f93d73638c8a5c21896bb3fa5_Traceguids,
            *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
            *(_QWORD *)(v17 + 24),
            v9);
        v21 = Isoch_CalculateBytesTransferred(a1, v9, v23);
        v6 = 1;
LABEL_19:
        v8 = v22;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      2u,
      0xEu,
      0x23u,
      (__int64)&WPP_f9020e9f93d73638c8a5c21896bb3fa5_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  }
  *a3 = v9 & -(__int64)(v6 != 0);
  *a4 = v6 != 0 ? v8 : 0;
  result = v6;
  *a5 = v6 != 0 ? v21 : 0;
  return result;
}
