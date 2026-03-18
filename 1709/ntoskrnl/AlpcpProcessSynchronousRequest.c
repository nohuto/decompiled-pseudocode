/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x1404A2660
 * Callers:
 *     LpcpRequestWaitReplyPort @ 0x140463C18 (LpcpRequestWaitReplyPort.c)
 *     NtAlpcSendWaitReceivePort @ 0x14049E130 (NtAlpcSendWaitReceivePort.c)
 *     LpcSendWaitReceivePort @ 0x1406DC2E0 (LpcSendWaitReceivePort.c)
 *     LpcpReplyWaitReplyPort @ 0x1406DC390 (LpcpReplyWaitReplyPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x140108160 (ObReferenceObjectSafe.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AlpcpCancelMessage @ 0x140462B18 (AlpcpCancelMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x1404636D8 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140466D78 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpExposeAttributes @ 0x14049F2C0 (AlpcpExposeAttributes.c)
 *     AlpcpUnlockBlob @ 0x14049FE60 (AlpcpUnlockBlob.c)
 *     AlpcpSendMessage @ 0x1404A01A0 (AlpcpSendMessage.c)
 *     AlpcpReadMessageData @ 0x1404A25E0 (AlpcpReadMessageData.c)
 *     AlpcpReceiveSynchronousReply @ 0x1404A2C40 (AlpcpReceiveSynchronousReply.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x140570190 (AlpcpExposeCapturedContextAttribute.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1405815A0 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x1406DCDDC (AlpcpEnterFreeEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x1406DCE44 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406DD418 (AlpcpGetDataFromUserVaSafe.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProcessSynchronousRequest(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        int *Address,
        __int64 *a8,
        unsigned __int8 a9,
        unsigned __int8 a10)
{
  int v12; // r13d
  unsigned __int8 v13; // cl
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  _QWORD *v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  int *v19; // rsi
  int *v20; // rax
  ULONG v21; // r10d
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  ULONG v26; // eax
  bool v27; // zf
  unsigned int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rdx
  ULONG v31; // eax
  ULONG v32; // ecx
  unsigned __int64 v33; // rcx
  int v34; // eax
  unsigned int v35; // r12d
  unsigned int v36; // eax
  ULONG_PTR v37; // rdi
  int v38; // edx
  int v39; // r12d
  unsigned int v40; // r12d
  char *v41; // rdx
  __int16 v42; // ax
  __int16 v43; // ax
  void *v44; // rcx
  signed __int64 v46; // rax
  signed __int64 *v47; // r13
  __int64 v48; // r12
  PVOID Object; // [rsp+30h] [rbp-E8h]
  int v50; // [rsp+38h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-D0h] BYREF
  __int64 *v52; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v53; // [rsp+58h] [rbp-C0h]
  __int64 v54; // [rsp+60h] [rbp-B8h]
  __int64 v55; // [rsp+68h] [rbp-B0h]
  __int64 v56; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD v57[8]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE v58[88]; // [rsp+C0h] [rbp-58h] BYREF

  memset(v57, 0, sizeof(v57));
  v12 = 0;
  v50 = 0;
  v53 = -1LL;
  v13 = a9;
  if ( a9 )
  {
    v14 = (__int64)a8;
    if ( a8 )
    {
      if ( (unsigned __int64)a8 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      v56 = *(_QWORD *)v14;
      a8 = &v56;
    }
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v33 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v33 = a5;
      *(_BYTE *)v33 = *(_BYTE *)v33;
      *(_BYTE *)(v33 + 23) = *(_BYTE *)(v33 + 23);
    }
    else
    {
      v15 = a5;
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a5 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 39) = *(_BYTE *)(v15 + 39);
    }
    v16 = a6;
    if ( a6 )
    {
      v17 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      v53 = *(_QWORD *)v17;
      v18 = (__int64)a6;
      if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
        v18 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v18 = *(_QWORD *)v18;
    }
    v19 = Address;
    if ( Address )
    {
      v20 = Address;
      if ( (unsigned __int64)Address >= 0x7FFFFFFF0000LL )
        v20 = (int *)0x7FFFFFFF0000LL;
      v12 = *v20;
      v21 = 8;
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        if ( v12 < 0 )
          v21 = 20;
        v31 = v21 + 16;
        if ( (v12 & 0x40000000) == 0 )
          v31 = v21;
        v32 = v31 + 20;
        if ( (v12 & 0x20000000) == 0 )
          v32 = v31;
        v26 = v32 + 16;
        if ( (v12 & 0x10000000) == 0 )
          v26 = v32;
        v27 = (v12 & 0x8000000) == 0;
        v28 = v26 + 24;
        v21 = 4;
      }
      else
      {
        v22 = 8;
        if ( v12 < 0 )
          v22 = 32;
        v23 = v22 + 32;
        if ( (v12 & 0x40000000) == 0 )
          v23 = v22;
        v24 = v23 + 32;
        if ( (v12 & 0x20000000) == 0 )
          v24 = v23;
        v25 = v24 + 24;
        if ( (v12 & 0x10000000) == 0 )
          v25 = v24;
        v26 = v25 + 24;
        if ( (v12 & 0x8000000) == 0 )
          v26 = v25;
        v27 = (v12 & 0x4000000) == 0;
        v28 = v26 + 8;
      }
      if ( v27 )
        v28 = v26;
      v29 = v28 + 8;
      if ( (v12 & 0x2000000) == 0 )
        v29 = v28;
      v30 = (__int64)Address;
      if ( (unsigned __int64)(v29 - 1) > 0xFFE )
      {
        ProbeForWrite(Address, (unsigned int)v29, v21);
      }
      else
      {
        if ( ((v21 - 1) & (unsigned int)Address) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Address >= 0x7FFFFFFF0000LL )
          v30 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v30 = *(_BYTE *)v30;
        *(_BYTE *)(v30 + (unsigned int)v29 - 1) = *(_BYTE *)(v30 + (unsigned int)v29 - 1);
      }
      v50 = v12;
    }
    else
    {
      v12 = 0;
    }
    v13 = a9;
  }
  else
  {
    v16 = a6;
    if ( a6 )
      v53 = *a6;
    v19 = Address;
    if ( Address )
    {
      v12 = *Address;
      v50 = *Address;
    }
  }
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    Object = (PVOID)a1;
    v54 = a1;
    goto LABEL_63;
  }
  v52 = *(__int64 **)(a1 + 16);
  v47 = v52 - 2;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v52 - 2), 0LL);
  v48 = *v52;
  Object = (PVOID)v48;
  v54 = *v52;
  if ( v48 && ObReferenceObjectSafe(v48) )
  {
    if ( _InterlockedCompareExchange64(v47, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v47);
    KeAbPostRelease((ULONG_PTR)v47);
    v12 = v50;
    v13 = a9;
LABEL_63:
    v57[0] = a1;
    LODWORD(v57[6]) = a2;
    if ( (*(_DWORD *)(a1 + 416) & 0x1000) != 0 )
      v34 = AlpcpSendLegacySynchronousRequest(a1, (__int64)v57, a3, v13);
    else
      v34 = AlpcpSendMessage((__int64)v57, (__m256i *)a3, a4, v13);
    v35 = v34;
    if ( v34 >= 0 )
    {
      BugCheckParameter2 = 0LL;
      v57[0] = Object;
      v35 = AlpcpReceiveSynchronousReply((unsigned int)v57, a10, (unsigned int)&BugCheckParameter2, v12, (__int64)a8);
      LODWORD(v52) = v35;
      if ( !v35 )
      {
        v36 = a2 & 0xC0000000;
        v37 = BugCheckParameter2;
        v38 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
        v39 = 24;
        if ( v36 != 0x80000000 )
          v39 = 40;
        v40 = v38 + v39;
        if ( v16 && (v55 = v40, v40 > v53) )
        {
          v35 = AlpcpReturnMessageOnInsufficientBuffer(Object, BugCheckParameter2, v58);
          if ( v35 == -1073741789 )
          {
            AlpcpUnlockMessage(v37);
            *v16 = v55;
            AlpcpExposeCapturedContextAttribute(a2, v58, (unsigned int)v12, v19);
            v44 = Object;
            goto LABEL_94;
          }
          AlpcpCancelMessage((__int64)Object, v37, 0x10000);
        }
        else
        {
          if ( v36 == 0x80000000 )
          {
            *(_WORD *)a5 = v38;
            *(_WORD *)(a5 + 2) = v38 + 24;
            v42 = *(_WORD *)(v37 + 246);
            if ( v42 )
              v43 = v42 - 16;
            else
              v43 = 0;
            *(_WORD *)(a5 + 6) = v43;
            *(_WORD *)(a5 + 4) = *(_WORD *)(v37 + 244) | 0x1000;
            *(_DWORD *)(a5 + 8) = *(_DWORD *)(v37 + 248);
            *(_DWORD *)(a5 + 12) = *(_DWORD *)(v37 + 256);
            *(_DWORD *)(a5 + 16) = *(_DWORD *)(v37 + 264);
            *(_DWORD *)(a5 + 20) = *(_DWORD *)(v37 + 272);
            *(_DWORD *)(a5 + 20) = *(_DWORD *)(v37 + 272);
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a5 + 4) &= 0xC00Fu;
            v41 = (char *)(a5 + 24);
          }
          else
          {
            *(_OWORD *)a5 = *(_OWORD *)(BugCheckParameter2 + 240);
            *(_OWORD *)(a5 + 16) = *(_OWORD *)(v37 + 256);
            *(_QWORD *)(a5 + 32) = *(_QWORD *)(v37 + 272);
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a5 + 4) &= 0xC00Fu;
            v41 = (char *)(a5 + 40);
          }
          if ( *(_QWORD *)(v37 + 176) )
            AlpcpGetDataFromUserVaSafe(v37, v41);
          else
            AlpcpReadMessageData(v37, v41);
          if ( v16 )
            *v16 = v40;
          if ( v19 )
            AlpcpExposeAttributes(a1, a2, v37, v12, v19);
          v35 = (unsigned int)v52;
          if ( (*(_DWORD *)(v37 + 40) & 0x200) != 0 && (*(_DWORD *)(a1 + 416) & 0x2000) != 0 )
          {
            v46 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v37, 0LL);
            v37 = BugCheckParameter2;
            if ( !v46 )
            {
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterFreeEventMessageLog(BugCheckParameter2);
              ++*(_WORD *)(v37 - 30);
              *(_DWORD *)(v37 + 264) |= 0x80000000;
              AlpcpClearOwnerPortMessage(v37);
            }
          }
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterStateChangeEventMessageLog(v37);
          AlpcpUnlockBlob(v37);
        }
      }
    }
    v44 = Object;
LABEL_94:
    if ( v44 != (void *)a1 )
      ObfDereferenceObject(v44);
    return v35;
  }
  if ( _InterlockedCompareExchange64(v52 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v52 - 2);
  KeAbPostRelease((ULONG_PTR)(v52 - 2));
  return 3221225527LL;
}
