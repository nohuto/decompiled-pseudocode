/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x140526710
 * Callers:
 *     LpcpRequestWaitReplyPort @ 0x140470B28 (LpcpRequestWaitReplyPort.c)
 *     NtAlpcSendWaitReceivePort @ 0x140522360 (NtAlpcSendWaitReceivePort.c)
 *     LpcSendWaitReceivePort @ 0x1406B0B40 (LpcSendWaitReceivePort.c)
 *     LpcpReplyWaitReplyPort @ 0x1406B0BF0 (LpcpReplyWaitReplyPort.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14000CFD0 (ObReferenceObjectSafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     AlpcpAvailableBufferSize @ 0x14041D174 (AlpcpAvailableBufferSize.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x14042F794 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpCancelMessage @ 0x14042FD5C (AlpcpCancelMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x14043054C (AlpcpClearOwnerPortMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140472A18 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReadMessageData @ 0x14047C750 (AlpcpReadMessageData.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpExposeAttributes @ 0x140523560 (AlpcpExposeAttributes.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     AlpcpReceiveSynchronousReply @ 0x140526E80 (AlpcpReceiveSynchronousReply.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14056AA6C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x1406B11FC (AlpcpEnterFreeEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406B1264 (AlpcpEnterStateChangeEventMessageLog.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProcessSynchronousRequest(
        __int64 a1,
        int a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        _DWORD *Address,
        LARGE_INTEGER *a8,
        unsigned __int8 a9,
        unsigned __int8 a10)
{
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // edi
  ULONG v20; // r8d
  unsigned int v21; // eax
  __int64 v22; // rcx
  void **v23; // rdi
  void *v24; // r14
  int v26; // eax
  unsigned int v27; // r12d
  int v28; // eax
  ULONG_PTR v29; // rdi
  int v30; // edx
  unsigned int v31; // eax
  __int64 v32; // r15
  __int16 v33; // ax
  __int16 v34; // ax
  char *v35; // rdx
  char *v36; // r15
  size_t v37; // rax
  size_t v38; // rsi
  const void *v39; // rdx
  char *v40; // rcx
  signed __int64 v41; // rax
  int v42; // esi
  ULONG_PTR v43; // rdi
  char v44; // cl
  signed __int64 BugCheckParameter4; // rcx
  __int64 v46; // rbx
  int (__fastcall *v47)(ULONG_PTR); // rax
  _SLIST_HEADER *v48; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-A8h] BYREF
  int v50; // [rsp+38h] [rbp-A0h]
  unsigned int v51; // [rsp+3Ch] [rbp-9Ch]
  unsigned __int64 v52; // [rsp+40h] [rbp-98h]
  __int64 v53; // [rsp+48h] [rbp-90h]
  size_t v54; // [rsp+50h] [rbp-88h]
  __int64 v55; // [rsp+58h] [rbp-80h] BYREF
  int v56[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v57; // [rsp+68h] [rbp-70h]
  __int64 v58; // [rsp+70h] [rbp-68h]
  __int64 v59; // [rsp+78h] [rbp-60h]
  __int64 v60; // [rsp+80h] [rbp-58h]
  __int64 v61; // [rsp+88h] [rbp-50h]
  __int64 v62; // [rsp+90h] [rbp-48h]
  __int64 v63; // [rsp+98h] [rbp-40h]

  *(_QWORD *)v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v50 = 0;
  v52 = -1LL;
  if ( a9 )
  {
    v11 = (__int64)a8;
    if ( a8 )
    {
      if ( (unsigned __int64)a8 >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      v55 = *(_QWORD *)v11;
      a8 = (LARGE_INTEGER *)&v55;
    }
    v12 = a5;
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v13 = *(_BYTE *)v13;
      *(_BYTE *)(v13 + 23) = *(_BYTE *)(v13 + 23);
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = a5;
      if ( a5 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v14 = *(_BYTE *)v14;
      *(_BYTE *)(v14 + 39) = *(_BYTE *)(v14 + 39);
    }
    v15 = a6;
    if ( a6 )
    {
      v16 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      v52 = *(_QWORD *)v16;
      v17 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v17 = *(_QWORD *)v17;
    }
    if ( Address )
    {
      v18 = (__int64)Address;
      if ( (unsigned __int64)Address >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      v19 = *(_DWORD *)v18;
      v20 = 8;
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        if ( v19 < 0 )
          v20 = 20;
        if ( (v19 & 0x40000000) != 0 )
          v20 += 16;
        if ( (v19 & 0x20000000) != 0 )
          v20 += 20;
        if ( (v19 & 0x10000000) != 0 )
          v20 += 16;
        if ( (v19 & 0x8000000) != 0 )
          v20 += 24;
        if ( (v19 & 0x2000000) != 0 )
          v20 += 8;
        v21 = v20;
        v20 = 4;
      }
      else
      {
        v21 = 8;
        if ( v19 < 0 )
          v21 = 32;
        if ( (v19 & 0x40000000) != 0 )
          v21 += 32;
        if ( (v19 & 0x20000000) != 0 )
          v21 += 32;
        if ( (v19 & 0x10000000) != 0 )
          v21 += 24;
        if ( (v19 & 0x8000000) != 0 )
          v21 += 24;
        if ( (v19 & 0x4000000) != 0 )
          v21 += 8;
        if ( (v19 & 0x2000000) != 0 )
          v21 += 8;
      }
      if ( (unsigned __int64)v21 - 1 > 0xFFE )
      {
        ProbeForWrite(Address, v21, v20);
      }
      else
      {
        if ( ((v20 - 1) & (unsigned int)Address) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = (__int64)Address;
        if ( (unsigned __int64)Address >= 0x7FFFFFFF0000LL )
          v22 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v22 = *(_BYTE *)v22;
        *(_BYTE *)(v22 + v21 - 1) = *(_BYTE *)(v22 + v21 - 1);
      }
      v50 = v19;
    }
  }
  else
  {
    v15 = a6;
    if ( a6 )
      v52 = *a6;
    v12 = a5;
    if ( Address )
      v50 = *Address;
  }
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    v24 = (void *)a1;
    v53 = a1;
LABEL_77:
    *(_QWORD *)v56 = a1;
    LODWORD(v62) = a2;
    if ( (*(_DWORD *)(a1 + 416) & 0x1000) != 0 )
      v26 = AlpcpSendLegacySynchronousRequest(a1, (__int64)v56, a3, a9);
    else
      v26 = AlpcpSendMessage((__int64)v56, (__m256i *)a3, a4, a9);
    v27 = v26;
    if ( v26 >= 0 )
    {
      BugCheckParameter2 = 0LL;
      *(_QWORD *)v56 = v24;
      v27 = AlpcpReceiveSynchronousReply((int)v56, a10, (int)&BugCheckParameter2, v50, a8);
      if ( !v27 )
      {
        v28 = 40;
        if ( (a2 & 0xC0000000) == 0x80000000 )
          v28 = 24;
        v29 = BugCheckParameter2;
        v30 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
        v31 = v30 + v28;
        v51 = v31;
        if ( v15 && (v32 = v31, v31 > v52) )
        {
          v27 = AlpcpReturnMessageOnInsufficientBuffer((__int64)v24, (_QWORD *)BugCheckParameter2);
          if ( v27 == -1073741789 )
          {
            AlpcpUnlockMessage(v29);
            *a6 = v32;
          }
          else
          {
            AlpcpCancelMessage((__int64)v24, v29, 0x10000);
          }
        }
        else
        {
          if ( (a2 & 0xC0000000) == 0x80000000 )
          {
            *(_WORD *)v12 = v30;
            *(_WORD *)(v12 + 2) = v30 + 24;
            v33 = *(_WORD *)(v29 + 246);
            if ( v33 )
              v34 = v33 - 16;
            else
              v34 = 0;
            *(_WORD *)(v12 + 6) = v34;
            *(_WORD *)(v12 + 4) = *(_WORD *)(v29 + 244) | 0x1000;
            *(_DWORD *)(v12 + 8) = *(_DWORD *)(v29 + 248);
            *(_DWORD *)(v12 + 12) = *(_DWORD *)(v29 + 256);
            *(_DWORD *)(v12 + 16) = *(_DWORD *)(v29 + 264);
            *(_DWORD *)(v12 + 20) = *(_DWORD *)(v29 + 272);
            *(_DWORD *)(v12 + 20) = *(_DWORD *)(v29 + 272);
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(v12 + 4) &= 0xC00Fu;
            v35 = (char *)(v12 + 24);
            if ( *(_QWORD *)(v29 + 176) )
              AlpcpGetDataFromUserVaSafe(v29, v35);
            else
              AlpcpReadMessageData(v29, v35);
          }
          else
          {
            *(_OWORD *)v12 = *(_OWORD *)(BugCheckParameter2 + 240);
            *(_OWORD *)(v12 + 16) = *(_OWORD *)(v29 + 256);
            *(_QWORD *)(v12 + 32) = *(_QWORD *)(v29 + 272);
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(v12 + 4) &= 0xC00Fu;
            v36 = (char *)(v12 + 40);
            if ( *(_QWORD *)(v29 + 176) )
            {
              AlpcpGetDataFromUserVaSafe(v29, v12 + 40);
            }
            else
            {
              v37 = AlpcpAvailableBufferSize(v29);
              v54 = v37;
              v38 = *(unsigned __int16 *)(v29 + 240);
              v39 = (const void *)(v29 + 280);
              v40 = v36;
              if ( v38 > v37 )
              {
                memmove(v36, v39, v37);
                v38 -= v54;
                v40 = &v36[v54];
                v39 = *(const void **)(v29 + 224);
              }
              memmove(v40, v39, v38);
            }
          }
          if ( a6 )
            *a6 = v51;
          if ( Address )
            AlpcpExposeAttributes(a1, a2, v29, (__int64)Address);
          if ( (*(_DWORD *)(v29 + 40) & 0x200) != 0 && (*(_DWORD *)(a1 + 416) & 0x2000) != 0 )
          {
            v41 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v29, 0LL);
            v29 = BugCheckParameter2;
            if ( !v41 )
            {
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterFreeEventMessageLog(BugCheckParameter2);
              ++*(_WORD *)(v29 - 30);
              *(_DWORD *)(v29 + 264) |= 0x80000000;
              AlpcpClearOwnerPortMessage(v29);
            }
          }
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterStateChangeEventMessageLog(v29);
          v42 = 0;
          v43 = v29 - 48;
          v44 = *(_BYTE *)(v43 + 16);
          if ( (v44 & 1) != 0 )
          {
            v42 = 0x10000 - *(__int16 *)(v43 + 18);
            *(_BYTE *)(v43 + 16) = v44 & 0xFE;
            *(_WORD *)(v43 + 18) = 0;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v43 + 32));
          KeAbPostRelease(v43 + 32);
          if ( v42 > 0 )
          {
            BugCheckParameter4 = -v42 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v43 + 24), -v42);
            if ( BugCheckParameter4 <= 0 )
            {
              if ( BugCheckParameter4 )
                KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
              v46 = AlpcpRegisteredTypes[*(unsigned __int8 *)(v43 + 17)];
              v47 = *(int (__fastcall **)(ULONG_PTR))(v46 + 32);
              if ( !v47 || v47(BugCheckParameter2) >= 0 )
              {
                if ( (*(_BYTE *)(v43 + 16) & 2) != 0 )
                {
                  v48 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v46 + 8);
                  ++*((_DWORD *)&v48[1].HeaderX64 + 3);
                  if ( LOWORD(v48->Alignment) < LOWORD(v48[1].Alignment) )
                  {
                    RtlpInterlockedPushEntrySList(v48, (PSLIST_ENTRY)v43);
                  }
                  else
                  {
                    ++LODWORD(v48[2].Alignment);
                    ((void (__fastcall *)(ULONG_PTR))v48[3].Region)(v43);
                  }
                }
                else if ( *(_QWORD *)(v46 + 40) )
                {
                  (*((void (__fastcall **)(ULONG_PTR))&AlpcpLookasides
                   + 16 * (unsigned __int64)*(unsigned int *)(v46 + 8)
                   + 7))(v43);
                }
                else
                {
                  ExFreePoolWithTag((PVOID)v43, *(_DWORD *)(v46 + 4));
                }
              }
            }
          }
        }
      }
    }
    if ( v24 != (void *)a1 )
      ObfDereferenceObject(v24);
    return v27;
  }
  v23 = *(void ***)(a1 + 16);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v23 - 2), 0LL);
  v24 = *v23;
  v53 = (__int64)v24;
  if ( v24 && ObReferenceObjectSafe((__int64)v24) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v23 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v23 - 2);
    KeAbPostRelease((ULONG_PTR)(v23 - 2));
    goto LABEL_77;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v23 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v23 - 2);
  KeAbPostRelease((ULONG_PTR)(v23 - 2));
  return 3221225527LL;
}
