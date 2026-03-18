/*
 * XREFs of AlpcpSendMessage @ 0x140524190
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1400E8090 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReplyPort @ 0x14042F8D0 (NtReplyPort.c)
 *     NtRequestPort @ 0x140458000 (NtRequestPort.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140472A18 (AlpcpSendLegacySynchronousRequest.c)
 *     NtReplyWaitReceivePortEx @ 0x14047C7E0 (NtReplyWaitReceivePortEx.c)
 *     NtAlpcSendWaitReceivePort @ 0x140522360 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140526710 (AlpcpProcessSynchronousRequest.c)
 *     LpcRequestPort @ 0x14053F060 (LpcRequestPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExHandleLogBadReference @ 0x14025A50C (ExHandleLogBadReference.c)
 *     AlpcpAvailableBufferSize @ 0x14041D174 (AlpcpAvailableBufferSize.c)
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140430220 (AlpcpDispatchReplyToPort.c)
 *     PsReleaseProcessWakeCounter @ 0x1404307E0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpCaptureMessageData @ 0x14043D038 (AlpcpCaptureMessageData.c)
 *     AlpcpReleaseViewAttribute @ 0x14044EE50 (AlpcpReleaseViewAttribute.c)
 *     AlpcpValidateMessage @ 0x140475544 (AlpcpValidateMessage.c)
 *     AlpcpReleaseAttributes @ 0x140475E20 (AlpcpReleaseAttributes.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140479F80 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpChargePagedPoolQuota @ 0x14047C5A0 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcReferenceBlobByHandle @ 0x14047CEE0 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404B0F24 (ExpBlockOnLockedHandleEntry.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140523D60 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchNewMessage @ 0x140524DE0 (AlpcpDispatchNewMessage.c)
 *     AlpcpCaptureAttributes @ 0x140525C00 (AlpcpCaptureAttributes.c)
 *     ExpLookupHandleTableEntry @ 0x140531E20 (ExpLookupHandleTableEntry.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x1406B112C (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpValidateDataInformation @ 0x1406B1844 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpSendMessage(__int64 a1, __m256i *a2, __int64 a3, char a4)
{
  __int64 v6; // r11
  unsigned int v7; // r13d
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // r15
  int v13; // edi
  int v14; // ebx
  bool v15; // cl
  __int16 v16; // di
  char v17; // dl
  bool v18; // al
  unsigned __int16 v19; // cx
  __int16 v20; // di
  int v21; // r14d
  PSLIST_ENTRY v22; // rax
  ULONG_PTR v23; // rdi
  signed __int64 BugCheckParameter4; // rax
  int v25; // ebx
  signed __int32 v26; // eax
  int v27; // r15d
  int v28; // r13d
  ULONG_PTR v29; // rbx
  __int64 v30; // rcx
  ULONG_PTR v31; // rbx
  signed __int32 v32; // eax
  int v33; // r12d
  __int64 v34; // rcx
  ULONG_PTR v35; // r15
  char PreviousMode; // r12
  ULONG_PTR v37; // rbx
  signed __int64 *v38; // rdi
  signed __int64 v39; // r8
  __int64 v40; // rax
  bool v41; // zf
  __int64 v42; // rdx
  signed __int64 v43; // rax
  int v44; // edx
  __int64 v45; // rax
  __int64 v46; // r8
  _QWORD *v47; // rdi
  bool v48; // r15
  _QWORD *v49; // rax
  unsigned __int64 v50; // rdx
  int v51; // edi
  _BYTE *v52; // r13
  __int64 v53; // rcx
  int v54; // eax
  unsigned int v55; // ebx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rbx
  ULONG_PTR v59; // rcx
  ULONG_PTR v60; // rcx
  ULONG_PTR v61; // rcx
  __int64 v62; // rcx
  __int64 *v63; // rdx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // rcx
  signed __int32 v67[8]; // [rsp+0h] [rbp-128h] BYREF
  bool v68; // [rsp+30h] [rbp-F8h]
  int v69; // [rsp+34h] [rbp-F4h]
  __m256i v70; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v71; // [rsp+58h] [rbp-D0h]
  unsigned int v72; // [rsp+60h] [rbp-C8h]
  __int64 v73; // [rsp+68h] [rbp-C0h]
  ULONG_PTR v74; // [rsp+70h] [rbp-B8h]
  __int64 v75; // [rsp+78h] [rbp-B0h]
  __m128i v76; // [rsp+80h] [rbp-A8h]
  __int64 v77; // [rsp+90h] [rbp-98h]
  _BYTE v78[136]; // [rsp+A0h] [rbp-88h] BYREF

  memset(v78, 0, 72);
  v6 = *(_QWORD *)a1;
  v73 = v6;
  v7 = *(_DWORD *)(a1 + 48);
  v72 = v7;
  v8 = *(_DWORD *)(v6 + 416);
  if ( (v8 & 0x10) != 0 )
    return 3221225537LL;
  if ( (v8 & 8) != 0 )
    return 3221227271LL;
  if ( (v8 & 0x20) != 0 && (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
    return 3221225527LL;
  if ( a4 )
  {
    v10 = (__int64)a2;
    if ( (v7 & 0xC0000000) == 0x80000000 )
    {
      if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v76 = *(__m128i *)v10;
      v77 = *(_QWORD *)(v10 + 16);
      v11 = _mm_cvtsi128_si32(v76);
      v70.m256i_i16[0] = v11;
      v12 = v76.m128i_i16[0] + 40;
      v70.m256i_i16[1] = v76.m128i_i16[0] + 40;
      v13 = _mm_cvtsi128_si32(_mm_srli_si128(v76, 4));
      v70.m256i_i32[1] = v13;
      v70.m256i_i64[1] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v76, 8));
      v70.m256i_i64[2] = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v76, 12));
      v14 = v77;
      v70.m256i_i32[6] = v77;
      v71 = HIDWORD(v77);
    }
    else
    {
      if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      v70 = *(__m256i *)v10;
      v71 = *(_QWORD *)(v10 + 32);
      v14 = v70.m256i_i32[6];
      LOWORD(v13) = v70.m256i_i16[2];
      v12 = v70.m256i_u16[1];
      v11 = v70.m256i_i16[0];
    }
    v15 = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
    v68 = v15;
    if ( v11 < (unsigned __int16)(v11 + 40) )
    {
      if ( v15 )
      {
        if ( (unsigned __int64)v11 + 40 <= v12 )
        {
          v12 = v11 + 40;
          v70.m256i_i16[1] = v11 + 40;
          goto LABEL_25;
        }
      }
      else if ( v11 + 40LL == v12 )
      {
LABEL_25:
        v16 = v13 & 0x7FFF;
        v70.m256i_i16[2] = v16;
        if ( v70.m256i_i16[3] )
        {
          result = AlpcpValidateDataInformation(a2, &v70);
          v69 = result;
          if ( (int)result < 0 )
            return result;
          v6 = v73;
        }
        goto LABEL_36;
      }
    }
    return 3221225485LL;
  }
  v70 = *a2;
  v71 = a2[1].m256i_i64[0];
  v17 = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
  result = AlpcpValidateMessage((unsigned __int16 *)&v70, v17);
  v69 = result;
  if ( (int)result < 0 )
    return result;
  v14 = v70.m256i_i32[6];
  v16 = v70.m256i_i16[2];
  v12 = v70.m256i_u16[1];
LABEL_36:
  v18 = (*(_DWORD *)(v6 + 256) & 0x1000) != 0 || (v7 & 2) != 0;
  v19 = (unsigned __int8)v16;
  v20 = v16 & 0xFF00;
  if ( v18 )
  {
    if ( (v7 & 1) != 0 )
    {
      if ( v14 )
      {
        v21 = 0;
        v20 = 0;
        v19 = 2;
        goto LABEL_61;
      }
      return 3221225485LL;
    }
    if ( (v7 & 0x10000) != 0 )
    {
      if ( v19 )
      {
        if ( (unsigned int)v19 - 3 > 3 && v19 != 13 || (v7 & 2) == 0 )
          return 3221225485LL;
      }
      else
      {
        v19 = 3;
      }
    }
    else if ( v19 )
    {
      if ( v19 == 1 )
      {
        if ( !v14 )
          return 3221225485LL;
        v21 = 0;
LABEL_61:
        v70.m256i_i32[6] = v14;
        if ( !a4 )
          LODWORD(v71) = 0;
        goto LABEL_74;
      }
      if ( (unsigned int)v19 - 7 > 2 || (v7 & 2) == 0 )
        return 3221225485LL;
    }
    else
    {
      v19 = 1;
    }
    v21 = 0;
    v14 = 0;
    goto LABEL_61;
  }
  if ( v19 != 7 || a4 )
  {
    if ( v14 <= 0 )
    {
      if ( (v7 & 0x10000) != 0 )
      {
        v19 = 3;
        goto LABEL_71;
      }
    }
    else if ( (v7 & 0x10000) != 0 )
    {
      v19 = 2;
      goto LABEL_71;
    }
    v19 = 1;
  }
LABEL_71:
  if ( !v14 && *(_OWORD *)&v70.m256i_u64[1] != 0LL )
    return 3221227266LL;
  v21 = 0;
LABEL_74:
  v70.m256i_i16[2] = v19 | v20 & 0xEFFF;
  if ( (unsigned __int64)v12 > *(_QWORD *)(v6 + 272) )
    return 3221225519LL;
  if ( (v7 & 0x20000) != 0 )
  {
    if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0x20) != 0 )
      return 3221225473LL;
    v14 = v70.m256i_i32[6];
  }
  if ( !v14 )
  {
    ++dword_140380014;
    v22 = RtlpInterlockedPopEntrySList(&AlpcpLookasides);
    if ( !v22 )
    {
      ++dword_140380018;
      v22 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140380030)(
                            (unsigned int)dword_140380024,
                            (unsigned int)dword_14038002C,
                            (unsigned int)dword_140380028);
      if ( !v22 )
        return 3221225626LL;
    }
    v22[1].Next = 0LL;
    *((_QWORD *)&v22[1].Next + 1) = 0LL;
    *((_QWORD *)&v22[2].Next + 1) = 0LL;
    v22[2].Next = 0LL;
    BYTE1(v22[1].Next) = 2;
    *((_QWORD *)&v22->Next + 1) = v22;
    v22->Next = v22;
    LOBYTE(v22[1].Next) |= 2u;
    *((_QWORD *)&v22[1].Next + 1) = 1LL;
    v23 = (ULONG_PTR)&v22[3];
    if ( v22 == (PSLIST_ENTRY)-48LL )
      return 3221225626LL;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v22[2], 0LL);
    *(_BYTE *)(v23 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v23, 0x26uLL, BugCheckParameter4);
    v25 = *(_DWORD *)(v23 + 264);
    memset((void *)v23, 0, 0x118uLL);
    *(_WORD *)(v23 + 242) = 40;
    --*(_WORD *)(v23 - 30);
    *(_DWORD *)(v23 + 264) = v25 & 0x7FFFFFFF;
    do
      v26 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v26 );
    *(_DWORD *)(v23 + 272) = v26;
    if ( AlpcpMessageLogEnabled )
      AlpcpEnterAllocationEventMessageLog(v23);
    *(_WORD *)(v23 + 242) = 40;
    v27 = 0;
LABEL_164:
    v33 = v70.m256i_i32[6];
    goto LABEL_165;
  }
  v28 = v7 | 0x10;
  v72 = v28;
  if ( v14 < 0 )
  {
    v29 = 0LL;
    v30 = *(_QWORD *)(v6 + 16);
    if ( v30 )
      v29 = AlpcReferenceBlobByHandle(v30 + 40, v70.m256i_i32[6] & 0x7FFFFFFF, AlpcReserveType);
    if ( !v29 )
      return 3221226224LL;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 40), 1, 0) )
    {
      AlpcpDereferenceBlobEx(v29, 1);
      return 3221227272LL;
    }
    v31 = *(_QWORD *)(v29 + 24);
    AlpcpLockForCachedReferenceBlob(v31);
    *(_DWORD *)(v31 + 40) |= 0x2000u;
    *(_DWORD *)(v31 + 264) &= ~0x80000000;
    do
      v32 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v32 );
    *(_DWORD *)(v31 + 272) = v32;
    v33 = v70.m256i_i32[6];
    v34 = v73;
    goto LABEL_138;
  }
  if ( (v14 & 0xFC000000) != 0 )
  {
    if ( AlpcpSecondaryMessageTables )
      v35 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8LL * ((unsigned int)v14 >> 26));
    else
      v35 = 0LL;
  }
  else
  {
    v35 = AlpcMessageTable;
  }
  if ( !v35 )
    return 3221227266LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v37 = v70.m256i_i32[6] & 0x3FFFFFF;
  if ( (v70.m256i_i16[12] & 0x3FC) != 0 )
  {
    v38 = (signed __int64 *)ExpLookupHandleTableEntry(v35, (unsigned int)v37);
    if ( v38 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          _m_prefetchw(v38);
          v39 = *v38;
          if ( (*v38 & 1) == 0 )
            break;
          if ( v39 == _InterlockedCompareExchange64(v38, v39 - 1, v39) )
            goto LABEL_116;
        }
        if ( !v39 )
          break;
        ExpBlockOnLockedHandleEntry(v35, v38, v39);
      }
    }
  }
  v38 = 0LL;
  ExHandleLogBadReference(v35, v37, PreviousMode);
LABEL_116:
  if ( !v38 )
    return 3221227266LL;
  v31 = (*v38 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( *(_DWORD *)(v31 + 0x108) != v70.m256i_i32[6]
    || (_DWORD)v71 && *(_DWORD *)(((*v38 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x110) != (_DWORD)v71 )
  {
LABEL_211:
    _InterlockedExchangeAdd64(v38, 1uLL);
    _InterlockedOr(v67, 0);
    if ( *(_QWORD *)(v35 + 48) )
      ExfUnblockPushLock((volatile __int64 *)(v35 + 48), 0LL);
    return 3221227266LL;
  }
  _m_prefetchw((const void *)(v31 - 24));
  v40 = *(_QWORD *)(v31 - 24);
  v41 = v40 == 0;
  if ( v40 <= 0 )
  {
LABEL_209:
    if ( !v41 )
      KeBugCheckEx(0x18u, 0LL, v31, 0x20uLL, v40);
    goto LABEL_211;
  }
  while ( 1 )
  {
    v42 = v40;
    v40 = _InterlockedCompareExchange64((volatile signed __int64 *)(v31 - 24), v40 + 1, v40);
    if ( v40 == v42 )
      break;
    if ( v40 <= 0 )
    {
      v41 = v40 == 0;
      goto LABEL_209;
    }
  }
  if ( v40 == -1 )
    goto LABEL_211;
  ExAcquirePushLockExclusiveEx(v31 - 16, 0LL);
  *(_BYTE *)(v31 - 32) |= 1u;
  v43 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 - 24), 0x10000uLL) + 0x10000;
  if ( v43 <= 0 )
    KeBugCheckEx(0x18u, 0LL, v31, 0x26uLL, v43);
  --*(_WORD *)(v31 - 30);
  _InterlockedExchangeAdd64(v38, 1uLL);
  _InterlockedOr(v67, 0);
  if ( *(_QWORD *)(v35 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(v35 + 48), 0LL);
  v33 = v70.m256i_i32[6];
  if ( *(_DWORD *)(v31 + 264) != v70.m256i_i32[6]
    || (_DWORD)v71 && *(_DWORD *)(v31 + 272) != (_DWORD)v71
    || !*(_QWORD *)(v31 + 24) && !*(_QWORD *)(v31 + 16) )
  {
    AlpcpUnlockMessage(v31);
    return 3221227266LL;
  }
  v34 = v73;
  if ( *(_QWORD *)(v31 + 184) != *(_QWORD *)(v73 + 16) && *(_QWORD *)(v31 + 192) != v73 )
    goto LABEL_137;
LABEL_138:
  v69 = 0;
  v27 = 0;
  v74 = v31;
  v23 = v31;
  v44 = *(_DWORD *)(v31 + 40);
  if ( (v44 & 0x80u) == 0 )
  {
    v45 = *(_QWORD *)(v31 + 24);
    v75 = v45;
    if ( !v45 )
      goto LABEL_156;
    v46 = *(_QWORD *)(v31 + 16);
    if ( v46 != v34 )
    {
      if ( !v46 )
      {
        v47 = *(_QWORD **)(v45 + 16);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v47 - 2), 0LL);
        if ( ((*(_DWORD *)(v75 + 416) >> 1) & 3) == 2 )
          v48 = *v47 == v73 || v47[1] == v73;
        else
          v48 = v47[2] == v73;
        if ( _InterlockedCompareExchange64(v47 - 2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v47 - 2);
        KeAbPostRelease((ULONG_PTR)(v47 - 2));
        if ( v48 )
        {
          v33 = v70.m256i_i32[6];
          v27 = v69;
          v23 = v74;
          goto LABEL_156;
        }
        goto LABEL_137;
      }
      if ( (*(_BYTE *)(v34 + 416) & 6) != 6 )
        goto LABEL_137;
      v49 = *(_QWORD **)(v34 + 16);
      if ( !v49 || *v49 != v46 )
        goto LABEL_137;
    }
    if ( (v44 & 7) == 3 )
    {
LABEL_156:
      if ( !*(_QWORD *)(v31 + 32) || *(_QWORD *)(v31 + 48) || (v28 & 0x30000) != 0 )
        goto LABEL_165;
      v50 = 792LL;
      if ( *(_QWORD *)(v31 + 224) )
        v50 = *(_QWORD *)(v31 + 232) + 792LL;
      v51 = AlpcpChargePagedPoolQuota(KeGetCurrentThread()->ApcState.Process, v50);
      v69 = v51;
      if ( v51 < 0 )
      {
        AlpcpUnlockMessage(v31);
        return (unsigned int)v51;
      }
      *(_QWORD *)(v31 + 48) = KeGetCurrentThread()->ApcState.Process;
      ObfReferenceObjectWithTag(KeGetCurrentThread()->ApcState.Process, 0x63706C41u);
      v27 = v69;
      v23 = v74;
      goto LABEL_164;
    }
LABEL_137:
    AlpcpUnlockMessage(v31);
    return 3221225506LL;
  }
LABEL_165:
  v52 = 0LL;
  v53 = a3;
  if ( a3 )
  {
    v52 = v78;
    v27 = AlpcpCaptureAttributes(v73, v72, a3, v23, v78);
    v53 = a3;
  }
  if ( !v33 || (v54 = *(_DWORD *)(v23 + 40), (v54 & 0x280) == 0) )
  {
    if ( v27 < 0 )
    {
      AlpcpUnlockMessage(v23);
      return (unsigned int)v27;
    }
    if ( v33 )
    {
      v56 = *(_QWORD *)(v23 + 208);
      if ( v56 )
      {
        PsReleaseProcessWakeCounter(v56, *(_DWORD *)(v23 + 264));
        *(_QWORD *)(v23 + 208) = 0LL;
      }
      v57 = *(_QWORD *)(v23 + 216);
      if ( v57 )
      {
        PsReleaseProcessWakeCounter(v57, *(_DWORD *)(v23 + 264));
        *(_QWORD *)(v23 + 216) = 0LL;
      }
    }
    v58 = 0LL;
    if ( v33 > 0 )
    {
      v58 = *(_QWORD *)(v23 + 160);
      *(_QWORD *)(v23 + 160) = 0LL;
      v59 = *(_QWORD *)(v23 + 136);
      if ( v59 )
      {
        AlpcpDereferenceBlobEx(v59, 1);
        *(_QWORD *)(v23 + 136) = 0LL;
      }
      v60 = *(_QWORD *)(v23 + 144);
      if ( v60 )
      {
        AlpcpReleaseViewAttribute(v60);
        *(_QWORD *)(v23 + 144) = 0LL;
      }
      v61 = *(_QWORD *)(v23 + 152);
      if ( v61 )
      {
        AlpcpDereferenceBlobEx(v61, 1);
        *(_QWORD *)(v23 + 152) = 0LL;
      }
      v62 = *(_QWORD *)(v23 + 160);
      if ( v62 )
      {
        if ( (v62 & 1) != 0 )
          ObfDereferenceObject((PVOID)(v62 & 0xFFFFFFFFFFFFFFFEuLL));
        *(_QWORD *)(v23 + 160) = 0LL;
      }
    }
    if ( v52 )
    {
      *(_OWORD *)(v23 + 104) = *(_OWORD *)v52;
      *(_OWORD *)(v23 + 120) = *((_OWORD *)v52 + 1);
      *(_OWORD *)(v23 + 136) = *((_OWORD *)v52 + 2);
      *(_OWORD *)(v23 + 152) = *((_OWORD *)v52 + 3);
      *(_QWORD *)(v23 + 168) = *((_QWORD *)v52 + 8);
    }
    if ( v58 )
      *(_QWORD *)(v23 + 160) = v58;
    if ( (v72 & 0xC0000000) == 0x80000000 )
      v63 = &a2->m256i_i64[3];
    else
      v63 = &a2[1].m256i_i64[1];
    if ( a4 && (unsigned __int64)v63 + v70.m256i_u16[0] > 0x7FFFFFFF0000LL )
    {
      v21 = -1073741819;
    }
    else
    {
      *(_QWORD *)(v23 + 176) = v63;
      v64 = AlpcpAvailableBufferSize(v23);
      if ( v65 > v64 )
        v21 = AlpcpCaptureMessageData(v66, v65, 0LL);
      if ( v21 >= 0 )
      {
        *(_QWORD *)(a1 + 8) = v23;
        *(_DWORD *)(a1 + 52) = *(__int32 *)((char *)v70.m256i_i32 + 2);
        *(_WORD *)(a1 + 56) = v70.m256i_i16[3];
        if ( !*(_QWORD *)(v23 + 24) )
          return AlpcpDispatchNewMessage();
        if ( *(_QWORD *)(v23 + 32) )
          return AlpcpDispatchReplyToWaitingThread(a1);
        return AlpcpDispatchReplyToPort(a1);
      }
    }
    AlpcpUnlockMessage(v23);
    return (unsigned int)v21;
  }
  v55 = (v54 & 0x80u) != 0 ? 0xC0000703 : 0;
  if ( v53 )
    AlpcpReleaseAttributes(v52);
  AlpcpReleaseAttributes((_QWORD *)(v23 + 104));
  AlpcpCancelMessage(v73, v23, 0x10000);
  return v55;
}
