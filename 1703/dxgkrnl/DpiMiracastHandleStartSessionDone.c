/*
 * XREFs of DpiMiracastHandleStartSessionDone @ 0x1C01C7A04
 * Callers:
 *     DxgkHandleMiracastEscape @ 0x1C01C8674 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C003E278 (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastTearDownAssociation @ 0x1C003F900 (DpiMiracastTearDownAssociation.c)
 *     Template_qqqz @ 0x1C0041340 (Template_qqqz.c)
 *     Template_qqz @ 0x1C0041408 (Template_qqz.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C0042E10 (TraceLoggingWriteMiracastSessionStart.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C01C6E98 (DpiMiracastBroadcastDeviceStateChange.c)
 */

__int64 __fastcall DpiMiracastHandleStartSessionDone(char *P, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  bool v9; // zf
  __int64 v10; // r8
  struct _KEVENT *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ecx
  __int64 v22; // rdx
  _OWORD *v23; // rcx
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  int v35; // eax
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  int v38; // eax
  __int128 v39; // xmm0
  int v40; // eax
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  _OWORD v44[56]; // [rsp+40h] [rbp-3A8h] BYREF

  DpiMiracastEtwLogStartMiracastSessionStage((__int64)P, 1, a3);
  *((_DWORD *)P + 175) = *(_DWORD *)(a2 + 16);
  *((_DWORD *)P + 176) = *(_DWORD *)(a2 + 4);
  *(_OWORD *)(P + 708) = *(_OWORD *)(a2 + 772);
  *(_OWORD *)(P + 724) = *(_OWORD *)(a2 + 788);
  *(_OWORD *)(P + 740) = *(_OWORD *)(a2 + 804);
  *(_OWORD *)(P + 756) = *(_OWORD *)(a2 + 820);
  *((_WORD *)P + 386) = 0;
  *((_DWORD *)P + 194) = *(_DWORD *)(a2 + 840);
  *((_DWORD *)P + 195) = *(_DWORD *)(a2 + 8);
  if ( *(int *)(a2 + 4) < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v14 + 24) = *(int *)(a2 + 4);
    WdLogEvent5_WdError(v14);
    *((_DWORD *)P + 196) = *(_DWORD *)(a2 + 16);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
    {
      Template_qqqz(
        v15,
        &EventMiracastStartMiracastSessionFail,
        v16,
        *(_DWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 8),
        *((_DWORD *)P + 50),
        *((const wchar_t **)P + 44));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
        Template_qqz(
          v17,
          &EventMiracastPerfTrackStartMiracastSessionFailed,
          v18,
          *((_DWORD *)P + 110),
          *((_DWORD *)P + 50),
          *((const wchar_t **)P + 44));
    }
    DpiMiracastTearDownAssociation(P, *(_DWORD *)a2, *(_DWORD *)(a2 + 12), *(_BYTE *)(a2 + 20) != 0 ? 1 : 128, 0);
  }
  else
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
    v9 = *((_DWORD *)P + 102) == 1;
    *((_QWORD *)P + 11) = KeGetCurrentThread();
    if ( v9 )
    {
      *((_DWORD *)P + 103) = 1;
      *((_DWORD *)P + 102) = 2;
      *((_DWORD *)P + 104) = *(_DWORD *)(a2 + 12);
      DpiMiracastBroadcastDeviceStateChange((__int64)P, v7, v8);
      KeSetEvent(*((PRKEVENT *)P + 58), 0, 0);
      v11 = (struct _KEVENT *)*((_QWORD *)P + 59);
      if ( v11 )
      {
        KeSetEvent(v11, 0, 0);
        ObfDereferenceObject(*((PVOID *)P + 59));
        *((_QWORD *)P + 59) = 0LL;
      }
      v12 = MEMORY[0xFFFFF78000000014];
      v13 = *((_QWORD *)P + 80);
      *((_DWORD *)P + 162) = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)P + 79)) / 10000LL;
      if ( v13 )
      {
        v12 -= v13;
        if ( v12 > 1200000000 )
          *(_DWORD *)(a2 + 32) &= ~4u;
        else
          *(_DWORD *)(a2 + 32) |= 4u;
      }
      *(_OWORD *)(P + 600) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(P + 616) = *(_OWORD *)(a2 + 48);
      if ( !P[590] && (*(_DWORD *)(a2 + 32) & 1) == 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
          Template_qqz(
            v12,
            &EventMiracastPerfTrackStartMiracastSessionDoneNoMonitor,
            v10,
            *((_DWORD *)P + 110),
            *((_DWORD *)P + 50),
            *((const wchar_t **)P + 44));
        P[590] = 1;
      }
    }
    *((_QWORD *)P + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
  }
  TraceLoggingWriteMiracastSessionStart();
  memset(v44, 0, sizeof(v44));
  v21 = *(_DWORD *)(a2 + 32);
  v22 = 5LL;
  memset(&v44[1], 0, 28);
  v44[3] = *(_OWORD *)(a2 + 40);
  *(_QWORD *)&v44[4] = *(_QWORD *)(a2 + 56);
  v44[0] = 0x38000000018uLL;
  DWORD2(v44[4]) ^= (BYTE8(v44[4]) ^ (unsigned __int8)(8 * v21)) & 0x38;
  v23 = &v44[6];
  LODWORD(v44[5]) = *(_DWORD *)(a2 + 16);
  DWORD1(v44[5]) = *(_DWORD *)(a2 + 4);
  *((_QWORD *)&v44[5] + 1) = *(_QWORD *)(a2 + 8);
  v24 = (_OWORD *)(a2 + 64);
  do
  {
    v25 = v24[1];
    *v23 = *v24;
    v26 = v24[2];
    v23[1] = v25;
    v27 = v24[3];
    v23[2] = v26;
    v28 = v24[4];
    v23[3] = v27;
    v29 = v24[5];
    v23[4] = v28;
    v30 = v24[6];
    v23[5] = v29;
    v31 = v24[7];
    v24 += 8;
    v23[6] = v30;
    v23 += 8;
    *(v23 - 1) = v31;
    --v22;
  }
  while ( v22 );
  v32 = v24[1];
  *v23 = *v24;
  v33 = v24[2];
  v23[1] = v32;
  v34 = v24[3];
  v35 = *((_DWORD *)v24 + 16);
  v23[2] = v33;
  v36 = *(_OWORD *)(a2 + 772);
  v23[3] = v34;
  *((_DWORD *)v23 + 16) = v35;
  v37 = *(_OWORD *)(a2 + 788);
  v38 = *(_DWORD *)(a2 + 840);
  *(_OWORD *)((char *)&v44[50] + 8) = v36;
  DWORD1(v44[50]) = v38;
  v39 = *(_OWORD *)(a2 + 804);
  v40 = *((_DWORD *)P + 197);
  *(_OWORD *)((char *)&v44[51] + 8) = v37;
  HIDWORD(v44[54]) = v40;
  v41 = *(_OWORD *)(a2 + 820);
  WORD4(v44[54]) = 0;
  *(_OWORD *)((char *)&v44[52] + 8) = v39;
  v42 = *((_OWORD *)P + 7);
  *(_OWORD *)((char *)&v44[53] + 8) = v41;
  v44[55] = v42;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v44, 0LL, v19, v20);
}
