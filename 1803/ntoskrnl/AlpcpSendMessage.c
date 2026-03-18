/*
 * XREFs of AlpcpSendMessage @ 0x1404CC2E0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1400F4000 (NtWaitForWorkViaWorkerFactory.c)
 *     LpcRequestPort @ 0x1404B9C80 (LpcRequestPort.c)
 *     NtAlpcSendWaitReceivePort @ 0x1404C9870 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404CB670 (AlpcpProcessSynchronousRequest.c)
 *     NtReplyWaitReceivePortEx @ 0x1404D04D0 (NtReplyWaitReceivePortEx.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404DD564 (AlpcpSendLegacySynchronousRequest.c)
 *     NtReplyPort @ 0x1404DF24C (NtReplyPort.c)
 *     NtRequestPort @ 0x140579950 (NtRequestPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AlpcpAvailableBufferSize @ 0x140489898 (AlpcpAvailableBufferSize.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1404CB2A0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x1404CCD20 (AlpcpDispatchNewMessage.c)
 *     AlpcpCaptureAttributes @ 0x1404CDA80 (AlpcpCaptureAttributes.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     PspChargeProcessWakeCounter @ 0x1404CE250 (PspChargeProcessWakeCounter.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 *     AlpcpValidateMessage @ 0x1404CF278 (AlpcpValidateMessage.c)
 *     AlpcpChargePagedPoolQuota @ 0x1404D44BC (AlpcpChargePagedPoolQuota.c)
 *     AlpcpReleaseAttributes @ 0x1404DC4C0 (AlpcpReleaseAttributes.c)
 *     PsReleaseProcessWakeCounter @ 0x1404DE130 (PsReleaseProcessWakeCounter.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1404DEDF4 (AlpcpDispatchReplyToPort.c)
 *     AlpcpReleaseViewAttribute @ 0x1404DFC44 (AlpcpReleaseViewAttribute.c)
 *     AlpcpCaptureMessageData @ 0x140556F78 (AlpcpCaptureMessageData.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x140747A28 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpValidateDataInformation @ 0x140748188 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpSendMessage(__int64 a1, __m256i *a2, __int64 a3, char a4)
{
  char v4; // r11
  __m256i *v5; // r8
  __int64 v6; // r12
  unsigned int v7; // r13d
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int16 v11; // dx
  int v12; // r14d
  bool v13; // cl
  __int16 v14; // bx
  int v15; // r10d
  bool v16; // al
  unsigned __int16 v17; // cx
  __int16 v18; // bx
  int v19; // esi
  PSLIST_ENTRY v20; // rax
  ULONG_PTR v21; // rdi
  signed __int64 BugCheckParameter4; // rax
  int v23; // ebx
  signed __int32 v24; // eax
  int v25; // ebx
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rbx
  bool v30; // di
  bool v31; // zf
  __int64 v32; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // r12
  __int64 v35; // rdx
  unsigned int v36; // ebx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rbx
  ULONG_PTR v40; // rcx
  ULONG_PTR v41; // rcx
  ULONG_PTR v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int8 *v45; // rcx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned __int16 v49; // [rsp+40h] [rbp-F8h]
  int v50; // [rsp+48h] [rbp-F0h]
  __m256i v51; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+70h] [rbp-C8h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+80h] [rbp-B8h]
  __int64 v55; // [rsp+88h] [rbp-B0h]
  __m128i v56; // [rsp+90h] [rbp-A8h]
  __int64 v57; // [rsp+A0h] [rbp-98h]
  _QWORD v58[17]; // [rsp+B0h] [rbp-88h] BYREF
  __m256i *v60; // [rsp+148h] [rbp+10h]

  v60 = a2;
  v4 = a4;
  v5 = a2;
  memset(v58, 0, 72);
  v6 = *(_QWORD *)a1;
  v54 = v6;
  v7 = *(_DWORD *)(a1 + 48);
  v8 = *(_DWORD *)(v6 + 416);
  if ( (v8 & 0x10) != 0 )
    return 3221225537LL;
  if ( (v8 & 8) != 0 )
    return 3221227271LL;
  if ( (v8 & 0x20) != 0 && (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
    return 3221225527LL;
  if ( a4 )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (v7 & 0xC0000000) == 0x80000000 )
    {
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a2;
      v56 = *(__m128i *)v10;
      v57 = *(_QWORD *)(v10 + 16);
      v11 = _mm_cvtsi128_si32(v56);
      v51.m256i_i16[0] = v11;
      v51.m256i_i16[1] = v11 + 40;
      v51.m256i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v56, 4));
      v51.m256i_i64[1] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v56, 8));
      v51.m256i_i64[2] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v56, 12));
      v12 = v57;
      v51.m256i_i32[6] = v57;
      v52 = HIDWORD(v57);
    }
    else
    {
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a2;
      v51 = *(__m256i *)v10;
      v52 = *(_QWORD *)(v10 + 32);
      v12 = v51.m256i_i32[6];
      v11 = v51.m256i_i16[0];
    }
    v49 = v11;
    v13 = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
    if ( v11 < (unsigned __int16)(v11 + 40) )
    {
      if ( v13 )
      {
        if ( (unsigned __int64)v11 + 40 <= v51.m256i_u16[1] )
        {
          v51.m256i_i16[1] = v11 + 40;
LABEL_25:
          v14 = v51.m256i_i16[2] & 0x7FFF;
          v51.m256i_i16[2] &= ~0x8000u;
          if ( v51.m256i_i16[3] )
          {
            result = AlpcpValidateDataInformation(v5, &v51);
            if ( (int)result < 0 )
              return result;
            v4 = a4;
          }
          v15 = *(_DWORD *)(v6 + 256);
          goto LABEL_36;
        }
      }
      else if ( v11 + 40LL == v51.m256i_u16[1] )
      {
        goto LABEL_25;
      }
    }
    return 3221225485LL;
  }
  v51 = *a2;
  v52 = a2[1].m256i_i64[0];
  LOBYTE(a2) = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
  result = AlpcpValidateMessage(&v51, a2, v5);
  if ( (int)result < 0 )
    return result;
  v12 = v51.m256i_i32[6];
  v14 = v51.m256i_i16[2];
  v49 = v51.m256i_i16[0];
LABEL_36:
  v16 = (v15 & 0x1000) != 0 || (v7 & 2) != 0;
  v17 = (unsigned __int8)v14;
  v18 = v14 & 0xFF00;
  if ( v16 )
  {
    if ( (v7 & 1) != 0 )
    {
      if ( v12 )
      {
        v19 = 0;
        v18 = 0;
        v17 = 2;
        goto LABEL_61;
      }
      return 3221225485LL;
    }
    if ( (v7 & 0x10000) != 0 )
    {
      if ( v17 )
      {
        if ( (unsigned int)v17 - 3 > 3 && v17 != 13 || (v7 & 2) == 0 )
          return 3221225485LL;
      }
      else
      {
        v17 = 3;
      }
    }
    else if ( v17 )
    {
      if ( v17 == 1 )
      {
        if ( !v12 )
          return 3221225485LL;
        v19 = 0;
LABEL_61:
        v51.m256i_i32[6] = v12;
        if ( !v4 )
          LODWORD(v52) = 0;
        goto LABEL_63;
      }
      if ( (unsigned int)v17 - 7 > 2 || (v7 & 2) == 0 )
        return 3221225485LL;
    }
    else
    {
      v17 = 1;
    }
    v19 = 0;
    v12 = 0;
    goto LABEL_61;
  }
  if ( v17 == 7 && !v4 )
    goto LABEL_72;
  if ( v12 <= 0 )
  {
    if ( (v7 & 0x10000) != 0 )
      v17 = 3;
    else
      v17 = 1;
LABEL_72:
    v19 = 0;
    goto LABEL_73;
  }
  v19 = 0;
  v17 = ((v7 & 0x10000) != 0) + 1;
LABEL_73:
  if ( !v12 && *(_OWORD *)&v51.m256i_u64[1] != 0LL )
    return 3221227266LL;
LABEL_63:
  v51.m256i_i16[2] = v17 | v18 & 0xEFFF;
  if ( (unsigned __int64)v51.m256i_u16[1] > *(_QWORD *)(v6 + 272) )
    return 3221225519LL;
  if ( (v7 & 0x20000) != 0 )
  {
    if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0x20) != 0 )
      return 3221225473LL;
    v12 = v51.m256i_i32[6];
    v49 = v51.m256i_i16[0];
  }
  if ( !v12 )
  {
    ++dword_1403E2414;
    v20 = RtlpInterlockedPopEntrySList(&AlpcpLookasides);
    if ( !v20 )
    {
      ++dword_1403E2418;
      v20 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1403E2430)(
                            (unsigned int)dword_1403E2424,
                            (unsigned int)dword_1403E242C,
                            (unsigned int)dword_1403E2428);
      if ( !v20 )
        return 3221225626LL;
    }
    v20[1].Next = 0LL;
    *((_QWORD *)&v20[1].Next + 1) = 0LL;
    *((_QWORD *)&v20[2].Next + 1) = 0LL;
    v20[2].Next = 0LL;
    BYTE1(v20[1].Next) = 2;
    *((_QWORD *)&v20->Next + 1) = v20;
    v20->Next = v20;
    LOBYTE(v20[1].Next) |= 2u;
    *((_QWORD *)&v20[1].Next + 1) = 1LL;
    v21 = (ULONG_PTR)&v20[3];
    if ( v20 == (PSLIST_ENTRY)-48LL )
      return 3221225626LL;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v20[2], 0LL);
    *(_BYTE *)(v21 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v21, 0x26uLL, BugCheckParameter4);
    v23 = *(_DWORD *)(v21 + 264);
    memset((void *)v21, 0, 0x118uLL);
    *(_WORD *)(v21 + 242) = 40;
    --*(_WORD *)(v21 - 30);
    *(_DWORD *)(v21 + 264) = v23 & 0x7FFFFFFF;
    do
      v24 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v24 );
    *(_DWORD *)(v21 + 272) = v24;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterAllocationEventMessageLog(v21);
    *(_WORD *)(v21 + 242) = 40;
    v25 = 0;
    v12 = v51.m256i_i32[6];
    v49 = v51.m256i_i16[0];
    goto LABEL_121;
  }
  v7 |= 0x10u;
  v25 = AlpcpLookupMessage(v6, (unsigned int)v12, (unsigned int)v52, &BugCheckParameter2);
  v50 = v25;
  v21 = BugCheckParameter2;
  if ( v25 < 0 )
    goto LABEL_120;
  v26 = *(_DWORD *)(BugCheckParameter2 + 40);
  if ( (v26 & 0x80u) != 0 )
    goto LABEL_120;
  v27 = *(_QWORD *)(BugCheckParameter2 + 24);
  v55 = v27;
  if ( v27 )
  {
    v28 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( v28 != v6 )
    {
      if ( !v28 )
      {
        v29 = *(_QWORD **)(v27 + 16);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v29 - 2), 0LL);
        if ( ((*(_DWORD *)(v55 + 416) >> 1) & 3) == 2 )
          v30 = *v29 == v6 || v29[1] == v6;
        else
          v30 = v29[2] == v6;
        if ( _InterlockedCompareExchange64(v29 - 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v29 - 2);
        KeAbPostRelease((ULONG_PTR)(v29 - 2));
        v31 = !v30;
        v21 = BugCheckParameter2;
        if ( !v31 )
        {
          v12 = v51.m256i_i32[6];
          v49 = v51.m256i_i16[0];
          v25 = v50;
          goto LABEL_106;
        }
LABEL_118:
        AlpcpUnlockMessage(v21);
        return 3221225506LL;
      }
      if ( (*(_BYTE *)(v6 + 416) & 6) != 6 )
        goto LABEL_118;
      v33 = *(_QWORD **)(v6 + 16);
      if ( !v33 || *v33 != v28 )
        goto LABEL_118;
    }
    if ( (v26 & 7) == 3 )
      goto LABEL_106;
    goto LABEL_118;
  }
LABEL_106:
  if ( *(_QWORD *)(v21 + 32) && !*(_QWORD *)(v21 + 48) && (v7 & 0x30000) == 0 )
  {
    v32 = 792LL;
    if ( *(_QWORD *)(v21 + 224) )
      v32 = *(_QWORD *)(v21 + 232) + 792LL;
    v25 = AlpcpChargePagedPoolQuota(KeGetCurrentThread()->ApcState.Process, v32);
    if ( v25 < 0 )
    {
      AlpcpUnlockMessage(BugCheckParameter2);
      return (unsigned int)v25;
    }
    *(_QWORD *)(v21 + 48) = KeGetCurrentThread()->ApcState.Process;
    ObfReferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x63706C41u);
    v12 = v51.m256i_i32[6];
    v49 = v51.m256i_i16[0];
    v21 = BugCheckParameter2;
  }
LABEL_120:
  if ( v25 < 0 )
    return (unsigned int)v25;
LABEL_121:
  v34 = 0LL;
  v35 = a3;
  if ( a3 )
  {
    v34 = v58;
    v25 = AlpcpCaptureAttributes(v54, v7, a3, v21, v58);
    v35 = a3;
  }
  if ( v12 && ((*(_DWORD *)(v21 + 40) & 0x200) != 0 || (*(_DWORD *)(v21 + 40) & 0x80) != 0) )
  {
    v36 = (*(_DWORD *)(v21 + 40) & 0x80) != 0 ? 0xC0000703 : 0;
    if ( v35 )
      AlpcpReleaseAttributes(v34);
    AlpcpReleaseAttributes(v21 + 104);
    AlpcpCancelMessage(v54, v21, 0x10000LL);
    return v36;
  }
  else if ( v25 >= 0 )
  {
    if ( v12 )
    {
      v37 = *(_QWORD *)(v21 + 208);
      if ( v37 )
      {
        PspChargeProcessWakeCounter((PVOID)(v37 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
        *(_QWORD *)(v21 + 208) = 0LL;
      }
      v38 = *(_QWORD *)(v21 + 216);
      if ( v38 )
      {
        PsReleaseProcessWakeCounter(v38, *(unsigned int *)(v21 + 264));
        *(_QWORD *)(v21 + 216) = 0LL;
      }
    }
    v39 = 0LL;
    if ( v12 > 0 )
    {
      v39 = *(_QWORD *)(v21 + 160);
      *(_QWORD *)(v21 + 160) = 0LL;
      v40 = *(_QWORD *)(v21 + 136);
      if ( v40 )
      {
        AlpcpDereferenceBlobEx(v40);
        *(_QWORD *)(v21 + 136) = 0LL;
      }
      v41 = *(_QWORD *)(v21 + 144);
      if ( v41 )
      {
        AlpcpReleaseViewAttribute(v41);
        *(_QWORD *)(v21 + 144) = 0LL;
      }
      v42 = *(_QWORD *)(v21 + 152);
      if ( v42 )
      {
        AlpcpDereferenceBlobEx(v42);
        *(_QWORD *)(v21 + 152) = 0LL;
      }
      v43 = *(_QWORD *)(v21 + 160);
      if ( v43 )
      {
        if ( (v43 & 1) != 0 )
          ObfDereferenceObject((PVOID)(v43 & 0xFFFFFFFFFFFFFFFEuLL));
        *(_QWORD *)(v21 + 160) = 0LL;
      }
    }
    if ( v34 )
    {
      *(_OWORD *)(v21 + 104) = *(_OWORD *)v34;
      *(_OWORD *)(v21 + 120) = *((_OWORD *)v34 + 1);
      *(_OWORD *)(v21 + 136) = *((_OWORD *)v34 + 2);
      *(_OWORD *)(v21 + 152) = *((_OWORD *)v34 + 3);
      *(_QWORD *)(v21 + 168) = v34[8];
    }
    if ( v39 )
      *(_QWORD *)(v21 + 160) = v39;
    v44 = 24LL;
    if ( (v7 & 0xC0000000) != 0x80000000 )
      v44 = 40LL;
    v45 = &v60->m256i_i8[v44];
    if ( a4 && (unsigned __int64)&v45[v49] > 0x7FFFFFFF0000LL )
    {
      AlpcpUnlockMessage(v21);
      return 3221225477LL;
    }
    else
    {
      *(_QWORD *)(v21 + 176) = v45;
      v46 = AlpcpAvailableBufferSize(v21);
      if ( v47 > v46 )
        v19 = AlpcpCaptureMessageData(v48, v47, 0LL);
      if ( v19 >= 0 )
      {
        *(_QWORD *)(a1 + 8) = v21;
        *(_DWORD *)(a1 + 52) = *(__int32 *)((char *)v51.m256i_i32 + 2);
        *(_WORD *)(a1 + 56) = v51.m256i_i16[3];
        if ( *(_QWORD *)(v21 + 24) )
        {
          if ( *(_QWORD *)(v21 + 32) )
            return AlpcpDispatchReplyToWaitingThread(a1);
          else
            return AlpcpDispatchReplyToPort();
        }
        else
        {
          return AlpcpDispatchNewMessage();
        }
      }
      else
      {
        AlpcpUnlockMessage(v21);
        return (unsigned int)v19;
      }
    }
  }
  else
  {
    AlpcpUnlockMessage(v21);
    return (unsigned int)v25;
  }
}
