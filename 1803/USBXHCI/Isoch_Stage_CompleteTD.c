/*
 * XREFs of Isoch_Stage_CompleteTD @ 0x1C0027F88
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0026FC0 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C00272C8 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0029BD4 (Isoch_Transfer_CompleteStaleStages.c)
 * Callees:
 *     StageQueue_Release @ 0x1C001F820 (StageQueue_Release.c)
 *     TR_GetUsbdStatusFromTrbCompletionCode @ 0x1C0020B68 (TR_GetUsbdStatusFromTrbCompletionCode.c)
 *     TR_ReleaseSegments @ 0x1C0021108 (TR_ReleaseSegments.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0024F54 (WPP_RECORDER_SF_DDqq.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C002879C (Isoch_Stage_FreeScatterGatherList.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C00299BC (Isoch_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x1C002AECC (WPP_RECORDER_SF_DDqqD.c)
 */

void __fastcall Isoch_Stage_CompleteTD(__int64 *a1, unsigned int a2, int a3, char a4, _BYTE *a5, _DWORD *a6, char a7)
{
  __int64 v7; // rsi
  _DWORD *v9; // r15
  int v10; // r8d
  _BYTE *v11; // r12
  char v12; // r11
  int v13; // r14d
  __int64 v15; // rbx
  __int64 v16; // rbp
  unsigned int v17; // r14d
  __int64 v18; // r15
  _DWORD *v19; // r12
  __int64 v20; // rcx
  int UsbdStatusFromTrbCompletionCode; // eax
  __int64 v22; // r9
  int v23; // edx
  __int64 v24; // r8
  __int64 v25; // r14
  KIRQL v26; // dl
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  unsigned int v29; // [rsp+98h] [rbp+10h]

  v29 = a2;
  v7 = *a1;
  v9 = a6;
  v10 = -1;
  v11 = a5;
  v12 = a4;
  v13 = *((_DWORD *)a1 + 12);
  v15 = *(_QWORD *)(*a1 + 56);
  *a6 = 0;
  v16 = *(_QWORD *)(v7 + 48);
  *a5 = 0;
  v17 = v13 - 1;
  if ( v17 && *(_DWORD *)(v16 + 12LL * (v17 - 1) + 148) == -1 )
  {
    v18 = (int)(v17 - 1);
    if ( (int)(v17 - 1) >= 0 )
    {
      v19 = (_DWORD *)(v16 + 148 + 12 * v18);
      do
      {
        if ( *v19 != -1 )
          break;
        v20 = *(_QWORD *)(v15 + 56);
        LODWORD(v28) = *(_DWORD *)(v20 + 144);
        LODWORD(v27) = *(unsigned __int8 *)(*(_QWORD *)(v15 + 48) + 135LL);
        WPP_RECORDER_SF_DDqq(
          *(_QWORD *)(v20 + 80),
          2u,
          0xFFFFFFFFLL,
          0x18u,
          (__int64)&WPP_f9020e9f93d73638c8a5c21896bb3fa5_Traceguids,
          v27,
          v28,
          *(_QWORD *)(v7 + 24),
          a1);
        *v19 = -1073545216;
        v10 = -1;
        v19 -= 3;
        --v18;
      }
      while ( v18 >= 0 );
      a2 = v29;
      v11 = a5;
      v12 = a4;
    }
    v9 = a6;
  }
  if ( *(_DWORD *)(v16 + 12LL * v17 + 148) == -1 && (a2 - 26 > 2 || a3) )
  {
    UsbdStatusFromTrbCompletionCode = TR_GetUsbdStatusFromTrbCompletionCode(v15, a2, 0xFFFFFFFF);
    *(_DWORD *)(v16 + 4 * v22 + 148) = UsbdStatusFromTrbCompletionCode;
    *(_DWORD *)(v7 + 84) += a3;
    if ( *(_DWORD *)(*(_QWORD *)(v15 + 56) + 120LL) == 5 )
      *(_DWORD *)(v16 + 4 * v22 + 144) = a3;
  }
  if ( v17 == *((_DWORD *)a1 + 11) )
  {
    if ( v12 )
    {
      v23 = *(unsigned __int8 *)(*(_QWORD *)(v15 + 48) + 135LL);
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_DDqqD(*(_QWORD *)(*(_QWORD *)(v15 + 56) + 80LL), v23, v10, 25);
      LOBYTE(v24) = a7;
      Isoch_Stage_FreeScatterGatherList(v15, a1, v24);
      *(_BYTE *)(v15 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 96));
      v25 = *a1;
      if ( *((_BYTE *)a1 + 56) )
      {
        IoFreeMdl((PMDL)a1[8]);
        a1[8] = 0LL;
        *((_BYTE *)a1 + 56) = 0;
      }
      TR_ReleaseSegments(v15, (unsigned __int64 *)a1 + 1, 1);
      TR_ReleaseSegments(v15, (unsigned __int64 *)a1 + 3, 0);
      StageQueue_Release((unsigned __int8 *)(v25 + 128), (unsigned __int8 *)a1);
      ++*(_DWORD *)(v7 + 112);
      if ( *(_DWORD *)(v7 + 100) == *(_DWORD *)(v7 + 96) )
        Isoch_Transfer_CompleteCancelable(v15, v7, -1, -1, 0, 0);
      --*(_DWORD *)(v15 + 376);
      v26 = *(_BYTE *)(v15 + 104);
      *v9 = *(_DWORD *)(v15 + 376);
      KeReleaseSpinLock((PKSPIN_LOCK)(v15 + 96), v26);
      *v11 = 1;
    }
    else if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_DDqqD(
        *(_QWORD *)(*(_QWORD *)(v15 + 56) + 80LL),
        a2,
        *(unsigned __int8 *)(*(_QWORD *)(v15 + 48) + 135LL),
        26);
    }
  }
}
