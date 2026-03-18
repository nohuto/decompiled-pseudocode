/*
 * XREFs of DpiMiracastHandleStartSessionDone @ 0x1C01E1B64
 * Callers:
 *     DxgkHandleMiracastEscape @ 0x1C01E27B8 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C002EDF8 (DpiMiracastEtwLogStartMiracastSessionStage.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0030410 (DpiMiracastTearDownAssociation.c)
 *     McTemplateK0qqqz @ 0x1C0031E7C (McTemplateK0qqqz.c)
 *     McTemplateK0qqz @ 0x1C0031F4C (McTemplateK0qqz.c)
 *     TraceLoggingWriteMiracastSessionStart @ 0x1C00340B0 (TraceLoggingWriteMiracastSessionStart.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C01E0FB8 (DpiMiracastBroadcastDeviceStateChange.c)
 */

__int64 __fastcall DpiMiracastHandleStartSessionDone(char *P, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  bool v8; // zf
  __int64 v9; // r8
  struct _KEVENT *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // ecx
  __int64 v19; // rdx
  _OWORD *v20; // rcx
  _OWORD *v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  int v32; // eax
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  int v35; // eax
  __int128 v36; // xmm0
  int v37; // eax
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  _OWORD v41[56]; // [rsp+40h] [rbp-C0h] BYREF

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
    v13 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v13 + 24) = *(int *)(a2 + 4);
    WdLogEvent5_WdError(v13);
    *((_DWORD *)P + 196) = *(_DWORD *)(a2 + 16);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
    {
      McTemplateK0qqqz(
        v14,
        &EventMiracastStartMiracastSessionFail,
        v15,
        *(_DWORD *)(a2 + 16),
        *(_DWORD *)(a2 + 8),
        *((_DWORD *)P + 50),
        *((const wchar_t **)P + 44));
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
        McTemplateK0qqz(
          v16,
          &EventMiracastPerfTrackStartMiracastSessionFailed,
          v17,
          *((_DWORD *)P + 110),
          *((_DWORD *)P + 50),
          *((const wchar_t **)P + 44));
    }
    DpiMiracastTearDownAssociation(P, *(_DWORD *)a2, *(_DWORD *)(a2 + 12), *(_BYTE *)(a2 + 20) != 0 ? 1 : 128, 0);
  }
  else
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
    v8 = *((_DWORD *)P + 102) == 1;
    *((_QWORD *)P + 11) = KeGetCurrentThread();
    if ( v8 )
    {
      *((_DWORD *)P + 103) = 1;
      *((_DWORD *)P + 102) = 2;
      *((_DWORD *)P + 104) = *(_DWORD *)(a2 + 12);
      DpiMiracastBroadcastDeviceStateChange((__int64)P, v6, v7);
      KeSetEvent(*((PRKEVENT *)P + 58), 0, 0);
      v10 = (struct _KEVENT *)*((_QWORD *)P + 59);
      if ( v10 )
      {
        KeSetEvent(v10, 0, 0);
        ObfDereferenceObject(*((PVOID *)P + 59));
        *((_QWORD *)P + 59) = 0LL;
      }
      v11 = MEMORY[0xFFFFF78000000014];
      v12 = *((_QWORD *)P + 80);
      *((_DWORD *)P + 162) = (MEMORY[0xFFFFF78000000014] - *((_QWORD *)P + 79)) / 10000LL;
      if ( v12 )
      {
        v11 -= v12;
        if ( v11 > 1200000000 )
          *(_DWORD *)(a2 + 32) &= ~4u;
        else
          *(_DWORD *)(a2 + 32) |= 4u;
      }
      *(_OWORD *)(P + 600) = *(_OWORD *)(a2 + 32);
      *(_OWORD *)(P + 616) = *(_OWORD *)(a2 + 48);
      if ( !P[590] && (*(_DWORD *)(a2 + 32) & 1) == 0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
          McTemplateK0qqz(
            v11,
            &EventMiracastPerfTrackStartMiracastSessionDoneNoMonitor,
            v9,
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
  memset(v41, 0, sizeof(v41));
  v18 = *(_DWORD *)(a2 + 32);
  v19 = 5LL;
  memset(&v41[1], 0, 28);
  v41[3] = *(_OWORD *)(a2 + 40);
  *(_QWORD *)&v41[4] = *(_QWORD *)(a2 + 56);
  v41[0] = 0x38000000018uLL;
  DWORD2(v41[4]) ^= (BYTE8(v41[4]) ^ (unsigned __int8)(8 * v18)) & 0x38;
  v20 = &v41[6];
  LODWORD(v41[5]) = *(_DWORD *)(a2 + 16);
  DWORD1(v41[5]) = *(_DWORD *)(a2 + 4);
  *((_QWORD *)&v41[5] + 1) = *(_QWORD *)(a2 + 8);
  v21 = (_OWORD *)(a2 + 64);
  do
  {
    v22 = v21[1];
    *v20 = *v21;
    v23 = v21[2];
    v20[1] = v22;
    v24 = v21[3];
    v20[2] = v23;
    v25 = v21[4];
    v20[3] = v24;
    v26 = v21[5];
    v20[4] = v25;
    v27 = v21[6];
    v20[5] = v26;
    v28 = v21[7];
    v21 += 8;
    v20[6] = v27;
    v20 += 8;
    *(v20 - 1) = v28;
    --v19;
  }
  while ( v19 );
  v29 = v21[1];
  *v20 = *v21;
  v30 = v21[2];
  v20[1] = v29;
  v31 = v21[3];
  v32 = *((_DWORD *)v21 + 16);
  v20[2] = v30;
  v33 = *(_OWORD *)(a2 + 772);
  v20[3] = v31;
  *((_DWORD *)v20 + 16) = v32;
  v34 = *(_OWORD *)(a2 + 788);
  v35 = *(_DWORD *)(a2 + 840);
  *(_OWORD *)((char *)&v41[50] + 8) = v33;
  DWORD1(v41[50]) = v35;
  v36 = *(_OWORD *)(a2 + 804);
  v37 = *((_DWORD *)P + 197);
  *(_OWORD *)((char *)&v41[51] + 8) = v34;
  HIDWORD(v41[54]) = v37;
  v38 = *(_OWORD *)(a2 + 820);
  WORD4(v41[54]) = 0;
  *(_OWORD *)((char *)&v41[52] + 8) = v36;
  v39 = *((_OWORD *)P + 7);
  *(_OWORD *)((char *)&v41[53] + 8) = v38;
  v41[55] = v39;
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v41);
}
