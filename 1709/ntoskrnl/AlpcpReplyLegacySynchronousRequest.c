/*
 * XREFs of AlpcpReplyLegacySynchronousRequest @ 0x140463024
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x140464104 (NtReplyWaitReceivePortEx.c)
 *     NtReplyPort @ 0x14058917C (NtReplyPort.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x14006A750 (KeReleaseSemaphoreEx.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     AlpcpAvailableBufferSize @ 0x14043CC74 (AlpcpAvailableBufferSize.c)
 *     AlpcpCancelMessage @ 0x140462B18 (AlpcpCancelMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x14046364C (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x1404636D8 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpValidateMessage @ 0x140466D34 (AlpcpValidateMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1404672A8 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpLookupMessage @ 0x1404A1F90 (AlpcpLookupMessage.c)
 *     AlpcpCaptureMessageData @ 0x140571974 (AlpcpCaptureMessageData.c)
 *     AlpcpValidateDataInformation @ 0x1406DD468 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpReplyLegacySynchronousRequest(__int64 a1, __int128 *a2, char a3)
{
  __int128 *v3; // r15
  __int64 v5; // r14
  __int64 v6; // rdx
  int v7; // ebx
  ULONG_PTR v8; // rsi
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // r13
  _QWORD *v12; // rbx
  signed __int64 *v13; // rsi
  bool v14; // bl
  _QWORD *v15; // rax
  unsigned __int64 v16; // rax
  size_t v17; // rdx
  ULONG_PTR v18; // rbx
  __int64 v19; // r15
  __int64 v20; // rdx
  ULONG_PTR v21; // r14
  unsigned int v22; // ecx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rbx
  signed __int32 v27[12]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v28; // [rsp+30h] [rbp-68h]
  __int128 v29; // [rsp+40h] [rbp-58h] BYREF
  __int128 v30; // [rsp+50h] [rbp-48h]
  unsigned int v31; // [rsp+60h] [rbp-38h]
  int v32; // [rsp+64h] [rbp-34h]
  ULONG_PTR v33; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a2;
  v5 = *(_QWORD *)a1;
  if ( a3 )
  {
    AlpcpProbeAndCaptureMessageHeader(a2, &v29, 0LL);
    LOBYTE(v6) = 1;
    v7 = AlpcpValidateMessage(&v29, v6);
    v28 = v7;
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( WORD3(v29) )
    {
      v7 = AlpcpValidateDataInformation(v3, &v29);
      v28 = v7;
      if ( v7 < 0 )
        return (unsigned int)v7;
    }
  }
  else
  {
    v29 = *a2;
    v30 = a2[1];
    v32 = HIDWORD(*((_QWORD *)a2 + 4));
    v31 = 0;
    LOBYTE(a2) = 1;
    v7 = AlpcpValidateMessage(&v29, a2);
    if ( v7 < 0 )
      return (unsigned int)v7;
  }
  v7 = AlpcpLookupMessage(v5, DWORD2(v30), v31, &v33);
  v28 = v7;
  if ( v7 < 0 )
    return (unsigned int)v7;
  v8 = v33;
  v9 = *(_DWORD *)(v33 + 40);
  if ( (v9 & 0x80u) != 0 )
  {
    AlpcpCancelMessage(v5, v33, 0x10000);
    return (unsigned int)-1073741769;
  }
  if ( (v9 & 0x200) != 0 || !*(_QWORD *)(v33 + 32) )
    goto LABEL_47;
  v10 = *(_QWORD *)(v33 + 16);
  if ( v10 == v5 )
  {
LABEL_27:
    if ( (v9 & 7) == 3 )
    {
      v14 = 1;
      goto LABEL_29;
    }
LABEL_47:
    AlpcpUnlockMessage(v8);
    return (unsigned int)-1073741790;
  }
  if ( v10 )
  {
    if ( (*(_BYTE *)(v5 + 416) & 6) != 6 )
      goto LABEL_47;
    v15 = *(_QWORD **)(v5 + 16);
    if ( !v15 || *v15 != v10 )
      goto LABEL_47;
    goto LABEL_27;
  }
  v11 = *(_QWORD *)(v33 + 24);
  if ( !v11 )
    goto LABEL_47;
  v12 = *(_QWORD **)(v11 + 16);
  v13 = v12 - 2;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v12 - 2), 0LL);
  if ( ((*(_DWORD *)(v11 + 416) >> 1) & 3) == 2 )
    v14 = *v12 == v5 || v12[1] == v5;
  else
    v14 = v12[2] == v5;
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  v8 = v33;
LABEL_29:
  if ( !v14 )
    goto LABEL_47;
  v16 = AlpcpAvailableBufferSize(v8);
  if ( v17 > v16 )
  {
    v7 = AlpcpCaptureMessageData(v8, v17, (char *)v3 + 40);
    v28 = v7;
  }
  else
  {
    memmove((void *)(v8 + 280), (char *)v3 + 40, v17);
    v7 = 0;
    v28 = 0;
  }
  if ( v7 >= 0 )
  {
    *(_DWORD *)(v8 + 40) |= 0x10000u;
    _InterlockedOr(v27, 0);
    v18 = v33;
    v19 = *(_QWORD *)(v33 + 24);
    AlpcpClearOwnerPortMessage(v33);
    AlpcpRemoveMessageFromPendingQueue(v18, v20);
    *(_DWORD *)(v18 + 240) = v29;
    *(_WORD *)(v18 + 244) = 2;
    v21 = v33;
    *(_OWORD *)(v33 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
    *(_DWORD *)(v8 + 40) |= 0x200u;
    v22 = *(_DWORD *)(v8 + 40) & 0xFFFFFF87 | (4 * (*(_DWORD *)(v19 + 416) & 6));
    *(_DWORD *)(v8 + 40) = v22;
    if ( ((v22 >> 3) & 0xF) == 1 )
    {
      v23 = *(_QWORD *)(v19 + 16);
      ExAcquirePushLockSharedEx(v23 - 16, 0LL);
      v24 = *(_QWORD *)(v23 + 8);
      if ( v24 )
        *(_QWORD *)(v21 + 120) = *(_QWORD *)(v24 + 56);
      else
        *(_QWORD *)(v21 + 120) = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v23 - 16));
      KeAbPostRelease(v23 - 16);
      v21 = v33;
    }
    else
    {
      *(_QWORD *)(v21 + 120) = *(_QWORD *)(v19 + 56);
    }
    v25 = *(_QWORD *)(v21 + 32);
    *(_QWORD *)(v21 + 32) = 0LL;
    --*(_WORD *)(v21 - 30);
    *(_DWORD *)(v8 + 40) = *(_DWORD *)(v8 + 40) & 0xFFFEFEFF | 0x100;
    AlpcpUnlockMessage(v21);
    if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
    {
      *(_QWORD *)(a1 + 24) = v25;
    }
    else
    {
      v27[8] = 2;
      KeReleaseSemaphoreEx(v25 + 1608, 1, 1);
    }
    return v28;
  }
  else
  {
    AlpcpUnlockMessage(v8);
  }
  return (unsigned int)v7;
}
