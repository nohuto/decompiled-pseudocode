/*
 * XREFs of AlpcpReplyLegacySynchronousRequest @ 0x1404DE4F0
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x1404D04D0 (NtReplyWaitReceivePortEx.c)
 *     NtReplyPort @ 0x1404DF24C (NtReplyPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeReleaseSemaphoreEx @ 0x140084C90 (KeReleaseSemaphoreEx.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     AlpcpAvailableBufferSize @ 0x140489898 (AlpcpAvailableBufferSize.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpValidateMessage @ 0x1404CF278 (AlpcpValidateMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1404DDD48 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1404DF074 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x1404DF100 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpCaptureMessageData @ 0x140556F78 (AlpcpCaptureMessageData.c)
 *     AlpcpValidateDataInformation @ 0x140748188 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpReplyLegacySynchronousRequest(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v5; // r14
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG_PTR v10; // rsi
  int v11; // ecx
  __int64 v12; // r13
  _QWORD *v13; // rbx
  signed __int64 *v14; // rsi
  bool v15; // bl
  _QWORD *v16; // rax
  unsigned __int64 v17; // rax
  size_t v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  ULONG_PTR v22; // rbx
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  ULONG_PTR v27; // r14
  unsigned int v28; // ecx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // r9
  signed __int32 v34[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v35; // [rsp+30h] [rbp-68h]
  __int128 v36; // [rsp+40h] [rbp-58h] BYREF
  __int128 v37; // [rsp+50h] [rbp-48h]
  int v38; // [rsp+60h] [rbp-38h]
  int v39; // [rsp+64h] [rbp-34h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+20h] BYREF

  v5 = *(_QWORD *)a1;
  if ( a3 )
  {
    AlpcpProbeAndCaptureMessageHeader(a2, (__int64)&v36, 0);
    v6 = AlpcpValidateMessage((unsigned __int16 *)&v36, 1);
    v35 = v6;
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( WORD3(v36) )
    {
      v6 = AlpcpValidateDataInformation(a2, &v36);
      v35 = v6;
      if ( v6 < 0 )
        return (unsigned int)v6;
    }
  }
  else
  {
    v36 = *(_OWORD *)a2;
    v37 = *(_OWORD *)(a2 + 16);
    v39 = HIDWORD(*(_QWORD *)(a2 + 32));
    v38 = 0;
    v6 = AlpcpValidateMessage((unsigned __int16 *)&v36, 1);
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  v6 = AlpcpLookupMessage(v5, DWORD2(v37), v38, &BugCheckParameter2);
  v35 = v6;
  if ( v6 < 0 )
    return (unsigned int)v6;
  v10 = BugCheckParameter2;
  v11 = *(_DWORD *)(BugCheckParameter2 + 40);
  if ( (v11 & 0x80u) != 0 )
  {
    AlpcpCancelMessage(v5, BugCheckParameter2, 0x10000LL);
    return (unsigned int)-1073741769;
  }
  if ( (v11 & 0x200) != 0 || !*(_QWORD *)(BugCheckParameter2 + 32) )
    goto LABEL_47;
  v7 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( v7 == v5 )
  {
LABEL_27:
    if ( (v11 & 7) == 3 )
    {
      v15 = 1;
      goto LABEL_29;
    }
LABEL_47:
    AlpcpUnlockMessage(v10, v7, v8, v9);
    return (unsigned int)-1073741790;
  }
  if ( v7 )
  {
    if ( (*(_BYTE *)(v5 + 416) & 6) != 6 )
      goto LABEL_47;
    v16 = *(_QWORD **)(v5 + 16);
    if ( !v16 || *v16 != v7 )
      goto LABEL_47;
    goto LABEL_27;
  }
  v12 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( !v12 )
    goto LABEL_47;
  v13 = *(_QWORD **)(v12 + 16);
  v14 = v13 - 2;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v13 - 2), 0LL);
  if ( ((*(_DWORD *)(v12 + 416) >> 1) & 3) == 2 )
    v15 = *v13 == v5 || v13[1] == v5;
  else
    v15 = v13[2] == v5;
  if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v14);
  KeAbPostRelease((ULONG_PTR)v14);
  v10 = BugCheckParameter2;
LABEL_29:
  if ( !v15 )
    goto LABEL_47;
  v17 = AlpcpAvailableBufferSize(v10);
  if ( v18 > v17 )
  {
    v6 = AlpcpCaptureMessageData(v10, v18, a2 + 40);
    v35 = v6;
  }
  else
  {
    memmove((void *)(v10 + 280), (const void *)(a2 + 40), v18);
    v6 = 0;
    v35 = 0;
  }
  if ( v6 >= 0 )
  {
    *(_DWORD *)(v10 + 40) |= 0x8000u;
    _InterlockedOr(v34, 0);
    v22 = BugCheckParameter2;
    v23 = *(_QWORD *)(BugCheckParameter2 + 24);
    AlpcpClearOwnerPortMessage(BugCheckParameter2);
    AlpcpRemoveMessageFromPendingQueue(v22);
    *(_DWORD *)(v22 + 240) = v36;
    *(_WORD *)(v22 + 244) = 2;
    v27 = BugCheckParameter2;
    *(_OWORD *)(BugCheckParameter2 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
    *(_DWORD *)(v10 + 40) |= 0x200u;
    v28 = *(_DWORD *)(v10 + 40) & 0xFFFFFF87 | (4 * (*(_DWORD *)(v23 + 416) & 6));
    *(_DWORD *)(v10 + 40) = v28;
    if ( ((v28 >> 3) & 0xF) == 1 )
    {
      v29 = *(_QWORD *)(v23 + 16);
      ExAcquirePushLockSharedEx(v29 - 16, 0LL);
      v30 = *(_QWORD *)(v29 + 8);
      if ( v30 )
        *(_QWORD *)(v27 + 120) = *(_QWORD *)(v30 + 56);
      else
        *(_QWORD *)(v27 + 120) = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v29 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v29 - 16));
      KeAbPostRelease(v29 - 16);
      v27 = BugCheckParameter2;
    }
    else
    {
      *(_QWORD *)(v27 + 120) = *(_QWORD *)(v23 + 56);
    }
    v31 = *(_QWORD *)(v27 + 32);
    *(_QWORD *)(v27 + 32) = 0LL;
    --*(_WORD *)(v27 - 30);
    *(_DWORD *)(v10 + 40) = *(_DWORD *)(v10 + 40) & 0xFFFF7EFF | 0x100;
    AlpcpUnlockMessage(v27, v24, v25, v26);
    if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
      *(_QWORD *)(a1 + 24) = v31;
    else
      KeReleaseSemaphoreEx(v31 + 1608, 1, 1, v32, 2);
    return v35;
  }
  else
  {
    AlpcpUnlockMessage(v10, v19, v20, v21);
  }
  return (unsigned int)v6;
}
