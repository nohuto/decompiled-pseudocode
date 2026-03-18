/*
 * XREFs of AlpcpSendMessage @ 0x1404A01A0
 * Callers:
 *     AlpciSendDeferredMessageBeforeWait @ 0x14006AB80 (AlpciSendDeferredMessageBeforeWait.c)
 *     NtReplyWaitReceivePortEx @ 0x140464104 (NtReplyWaitReceivePortEx.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140466D78 (AlpcpSendLegacySynchronousRequest.c)
 *     NtAlpcSendWaitReceivePort @ 0x14049E130 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404A2660 (AlpcpProcessSynchronousRequest.c)
 *     LpcRequestPort @ 0x1404D6B20 (LpcRequestPort.c)
 *     NtReplyPort @ 0x14058917C (NtReplyPort.c)
 *     NtRequestPort @ 0x1405904C0 (NtRequestPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140024260 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AlpcpAvailableBufferSize @ 0x14043CC74 (AlpcpAvailableBufferSize.c)
 *     AlpcpChargePagedPoolQuota @ 0x140462248 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpCancelMessage @ 0x140462B18 (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x1404633D0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpReleaseAttributes @ 0x140465C84 (AlpcpReleaseAttributes.c)
 *     AlpcpValidateMessage @ 0x140466D34 (AlpcpValidateMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x140467EE0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpReleaseViewAttribute @ 0x140468A24 (AlpcpReleaseViewAttribute.c)
 *     AlpcpDereferenceBlobEx @ 0x14049D674 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14049FAA0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x1404A0B50 (AlpcpDispatchNewMessage.c)
 *     AlpcpAllocateBlob @ 0x1404A0EE0 (AlpcpAllocateBlob.c)
 *     AlpcpCaptureAttributes @ 0x1404A1A00 (AlpcpCaptureAttributes.c)
 *     AlpcpLookupMessage @ 0x1404A1F90 (AlpcpLookupMessage.c)
 *     PspChargeProcessWakeCounter @ 0x1404A2250 (PspChargeProcessWakeCounter.c)
 *     AlpcpCaptureMessageData @ 0x140571974 (AlpcpCaptureMessageData.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x1406DCD08 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpValidateDataInformation @ 0x1406DD468 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpSendMessage(__int64 a1, __m256i *a2, __int64 a3, char a4)
{
  char v4; // r11
  __int64 v6; // r13
  unsigned int v7; // r12d
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int16 v11; // dx
  int v12; // r14d
  bool v13; // cl
  __int16 v14; // bx
  char v15; // dl
  bool v16; // al
  unsigned __int16 v17; // cx
  __int16 v18; // bx
  int v19; // esi
  __int64 Blob; // rax
  ULONG_PTR v21; // rdi
  int v22; // ebx
  signed __int64 BugCheckParameter4; // rax
  int v24; // ebx
  signed __int32 v25; // eax
  int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rbx
  bool v30; // di
  bool v31; // zf
  _QWORD *v32; // rax
  unsigned __int64 v33; // rdx
  _QWORD *v34; // r13
  __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // ebx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rbx
  ULONG_PTR v41; // rcx
  ULONG_PTR v42; // rcx
  ULONG_PTR v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int8 *v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int16 v50; // [rsp+40h] [rbp-F8h]
  int v51; // [rsp+48h] [rbp-F0h]
  __m256i v52; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v53; // [rsp+70h] [rbp-C8h]
  ULONG_PTR v54; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v55; // [rsp+80h] [rbp-B8h]
  __int64 v56; // [rsp+88h] [rbp-B0h]
  __m128i v57; // [rsp+90h] [rbp-A8h]
  __int64 v58; // [rsp+A0h] [rbp-98h]
  _QWORD v59[17]; // [rsp+B0h] [rbp-88h] BYREF

  v4 = a4;
  memset(v59, 0, 72);
  v6 = *(_QWORD *)a1;
  v55 = v6;
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
      v57 = *(__m128i *)v10;
      v58 = *(_QWORD *)(v10 + 16);
      v11 = _mm_cvtsi128_si32(v57);
      v52.m256i_i16[0] = v11;
      v52.m256i_i16[1] = v11 + 40;
      v52.m256i_i32[1] = _mm_cvtsi128_si32(_mm_srli_si128(v57, 4));
      v52.m256i_i64[1] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v57, 8));
      v52.m256i_i64[2] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v57, 12));
      v12 = v58;
      v52.m256i_i32[6] = v58;
      v53 = HIDWORD(v58);
    }
    else
    {
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a2;
      v52 = *(__m256i *)v10;
      v53 = *(_QWORD *)(v10 + 32);
      v12 = v52.m256i_i32[6];
      v11 = v52.m256i_i16[0];
    }
    v50 = v11;
    v13 = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
    if ( v11 < (unsigned __int16)(v11 + 40) )
    {
      if ( v13 )
      {
        if ( (unsigned __int64)v11 + 40 <= v52.m256i_u16[1] )
        {
          v52.m256i_i16[1] = v11 + 40;
          goto LABEL_25;
        }
      }
      else if ( v11 + 40LL == v52.m256i_u16[1] )
      {
LABEL_25:
        v14 = v52.m256i_i16[2] & 0x7FFF;
        v52.m256i_i16[2] &= ~0x8000u;
        if ( v52.m256i_i16[3] )
        {
          result = AlpcpValidateDataInformation(a2, &v52);
          if ( (int)result < 0 )
            return result;
          v4 = a4;
        }
        goto LABEL_36;
      }
    }
    return 3221225485LL;
  }
  v52 = *a2;
  v53 = a2[1].m256i_i64[0];
  v15 = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
  result = AlpcpValidateMessage((unsigned __int16 *)&v52, v15);
  if ( (int)result < 0 )
    return result;
  v12 = v52.m256i_i32[6];
  v14 = v52.m256i_i16[2];
  v50 = v52.m256i_i16[0];
LABEL_36:
  v16 = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
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
        goto LABEL_62;
      }
      return 3221225485LL;
    }
    if ( (v7 & 0x10000) != 0 )
    {
      if ( v17 )
      {
        if ( v17 < 3u || v17 > 6u && v17 != 13 || (v7 & 2) == 0 )
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
LABEL_62:
        v52.m256i_i32[6] = v12;
        if ( !v4 )
          LODWORD(v53) = 0;
        goto LABEL_75;
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
    goto LABEL_62;
  }
  if ( v17 == 7 && !v4 )
    goto LABEL_71;
  if ( v12 <= 0 )
  {
    if ( (v7 & 0x10000) != 0 )
      v17 = 3;
    else
      v17 = 1;
LABEL_71:
    v19 = 0;
    goto LABEL_72;
  }
  v19 = 0;
  v17 = ((v7 & 0x10000) != 0) + 1;
LABEL_72:
  if ( !v12 && *(_OWORD *)&v52.m256i_u64[1] != 0LL )
    return 3221227266LL;
LABEL_75:
  v52.m256i_i16[2] = v17 | v18 & 0xEFFF;
  if ( (unsigned __int64)v52.m256i_u16[1] > *(_QWORD *)(v6 + 272) )
    return 3221225519LL;
  if ( (v7 & 0x20000) != 0 )
  {
    if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0x20) != 0 )
      return 3221225473LL;
    v12 = v52.m256i_i32[6];
    v50 = v52.m256i_i16[0];
  }
  if ( !v12 )
  {
    Blob = AlpcpAllocateBlob(&AlpcMessageType, 792LL, 0LL);
    v21 = Blob;
    if ( !Blob )
      return (unsigned int)-1073741670;
    ExAcquirePushLockExclusiveEx(Blob - 16, 0LL);
    *(_BYTE *)(v21 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v21, 0x26uLL, BugCheckParameter4);
    v24 = *(_DWORD *)(v21 + 264);
    memset((void *)v21, 0, 0x118uLL);
    *(_WORD *)(v21 + 242) = 40;
    --*(_WORD *)(v21 - 30);
    *(_DWORD *)(v21 + 264) = v24 & 0x7FFFFFFF;
    do
      v25 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v25 );
    *(_DWORD *)(v21 + 272) = v25;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterAllocationEventMessageLog(v21);
    *(_WORD *)(v21 + 242) = 40;
    v22 = 0;
    v12 = v52.m256i_i32[6];
    v50 = v52.m256i_i16[0];
    goto LABEL_121;
  }
  v7 |= 0x10u;
  v22 = AlpcpLookupMessage(v6, (unsigned int)v12, (unsigned int)v53, &v54);
  v51 = v22;
  v21 = v54;
  if ( v22 >= 0 )
  {
    v26 = *(_DWORD *)(v54 + 40);
    if ( (v26 & 0x80u) == 0 )
    {
      v27 = *(_QWORD *)(v54 + 24);
      v56 = v27;
      if ( !v27 )
      {
LABEL_111:
        if ( *(_QWORD *)(v21 + 32) && !*(_QWORD *)(v21 + 48) && (v7 & 0x30000) == 0 )
        {
          v33 = 792LL;
          if ( *(_QWORD *)(v21 + 224) )
            v33 = *(_QWORD *)(v21 + 232) + 792LL;
          v22 = AlpcpChargePagedPoolQuota(KeGetCurrentThread()->ApcState.Process, v33);
          if ( v22 < 0 )
          {
            AlpcpUnlockMessage(v54);
            return (unsigned int)v22;
          }
          *(_QWORD *)(v21 + 48) = KeGetCurrentThread()->ApcState.Process;
          ObfReferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x63706C41u);
          v12 = v52.m256i_i32[6];
          v50 = v52.m256i_i16[0];
          v21 = v54;
        }
        goto LABEL_120;
      }
      v28 = *(_QWORD *)(v54 + 16);
      if ( v28 != v6 )
      {
        if ( !v28 )
        {
          v29 = *(_QWORD **)(v27 + 16);
          ExAcquirePushLockSharedEx((ULONG_PTR)(v29 - 2), 0LL);
          if ( ((*(_DWORD *)(v56 + 416) >> 1) & 3) == 2 )
            v30 = *v29 == v6 || v29[1] == v6;
          else
            v30 = v29[2] == v6;
          if ( _InterlockedCompareExchange64(v29 - 2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v29 - 2);
          KeAbPostRelease((ULONG_PTR)(v29 - 2));
          v31 = !v30;
          v21 = v54;
          if ( !v31 )
          {
            v12 = v52.m256i_i32[6];
            v50 = v52.m256i_i16[0];
            v22 = v51;
            goto LABEL_111;
          }
LABEL_110:
          AlpcpUnlockMessage(v21);
          return 3221225506LL;
        }
        if ( (*(_BYTE *)(v6 + 416) & 6) != 6 )
          goto LABEL_110;
        v32 = *(_QWORD **)(v6 + 16);
        if ( !v32 || *v32 != v28 )
          goto LABEL_110;
      }
      if ( (v26 & 7) == 3 )
        goto LABEL_111;
      goto LABEL_110;
    }
  }
LABEL_120:
  if ( v22 < 0 )
    return (unsigned int)v22;
LABEL_121:
  v34 = 0LL;
  v35 = a3;
  if ( a3 )
  {
    v34 = v59;
    v22 = AlpcpCaptureAttributes(v55, v7, a3, v21, v59);
    v35 = a3;
  }
  if ( !v12 || (v36 = *(_DWORD *)(v21 + 40), (v36 & 0x200) == 0) && (v36 & 0x80u) == 0 )
  {
    if ( v22 < 0 )
    {
      AlpcpUnlockMessage(v21);
      return (unsigned int)v22;
    }
    if ( v12 )
    {
      v38 = *(_QWORD *)(v21 + 208);
      if ( v38 )
      {
        PspChargeProcessWakeCounter((PVOID)(v38 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
        *(_QWORD *)(v21 + 208) = 0LL;
      }
      v39 = *(_QWORD *)(v21 + 216);
      if ( v39 )
      {
        PsReleaseProcessWakeCounter(v39);
        *(_QWORD *)(v21 + 216) = 0LL;
      }
    }
    v40 = 0LL;
    if ( v12 > 0 )
    {
      v40 = *(_QWORD *)(v21 + 160);
      *(_QWORD *)(v21 + 160) = 0LL;
      v41 = *(_QWORD *)(v21 + 136);
      if ( v41 )
      {
        AlpcpDereferenceBlobEx(v41, 1);
        *(_QWORD *)(v21 + 136) = 0LL;
      }
      v42 = *(_QWORD *)(v21 + 144);
      if ( v42 )
      {
        AlpcpReleaseViewAttribute(v42);
        *(_QWORD *)(v21 + 144) = 0LL;
      }
      v43 = *(_QWORD *)(v21 + 152);
      if ( v43 )
      {
        AlpcpDereferenceBlobEx(v43, 1);
        *(_QWORD *)(v21 + 152) = 0LL;
      }
      v44 = *(_QWORD *)(v21 + 160);
      if ( v44 )
      {
        if ( (v44 & 1) != 0 )
          ObfDereferenceObject((PVOID)(v44 & 0xFFFFFFFFFFFFFFFEuLL));
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
    if ( v40 )
      *(_QWORD *)(v21 + 160) = v40;
    v45 = 40LL;
    if ( (v7 & 0xC0000000) == 0x80000000 )
      v45 = 24LL;
    v46 = &a2->m256i_i8[v45];
    if ( a4 && (unsigned __int64)&v46[v50] > 0x7FFFFFFF0000LL )
    {
      v19 = -1073741819;
    }
    else
    {
      *(_QWORD *)(v21 + 176) = v46;
      v47 = AlpcpAvailableBufferSize(v21);
      if ( v48 > v47 )
        v19 = AlpcpCaptureMessageData(v49, v48, 0LL);
      if ( v19 >= 0 )
      {
        *(_QWORD *)(a1 + 8) = v21;
        *(_DWORD *)(a1 + 52) = *(__int32 *)((char *)v52.m256i_i32 + 2);
        *(_WORD *)(a1 + 56) = v52.m256i_i16[3];
        if ( !*(_QWORD *)(v21 + 24) )
          return AlpcpDispatchNewMessage();
        if ( *(_QWORD *)(v21 + 32) )
          return AlpcpDispatchReplyToWaitingThread(a1);
        return AlpcpDispatchReplyToPort(a1);
      }
    }
    AlpcpUnlockMessage(v21);
    return (unsigned int)v19;
  }
  v37 = (v36 & 0x80u) != 0 ? 0xC0000703 : 0;
  if ( v35 )
    AlpcpReleaseAttributes(v34);
  AlpcpReleaseAttributes((_QWORD *)(v21 + 104));
  AlpcpCancelMessage(v55, v21, 0x10000);
  return v37;
}
