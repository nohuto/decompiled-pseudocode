/*
 * XREFs of AlpcpProcessSynchronousRequest @ 0x1404CB670
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x1404C9870 (NtAlpcSendWaitReceivePort.c)
 *     LpcpRequestWaitReplyPort @ 0x140560A98 (LpcpRequestWaitReplyPort.c)
 *     LpcSendWaitReceivePort @ 0x140746F50 (LpcSendWaitReceivePort.c)
 *     LpcpReplyWaitReplyPort @ 0x140747000 (LpcpReplyWaitReplyPort.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x1400A9D20 (ObReferenceObjectSafe.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AlpcpExposeAttributes @ 0x1404CA290 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveSynchronousReply @ 0x1404CBD10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReadMessageData @ 0x1404CBF1C (AlpcpReadMessageData.c)
 *     AlpcpUnlockBlob @ 0x1404CBF90 (AlpcpUnlockBlob.c)
 *     AlpcpSendMessage @ 0x1404CC2E0 (AlpcpSendMessage.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404DD564 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1404DE89C (AlpcpCancelMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x1404DF100 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1404DFD5C (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpExposeCapturedContextAttribute @ 0x140577628 (AlpcpExposeCapturedContextAttribute.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140747AFC (AlpcpEnterFreeEventMessageLog.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140747B64 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x140748138 (AlpcpGetDataFromUserVaSafe.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpProcessSynchronousRequest(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        _QWORD *a6,
        unsigned int *Address,
        __int64 *a8,
        unsigned __int8 a9,
        unsigned __int8 a10)
{
  unsigned int v12; // r14d
  unsigned __int8 v13; // r11
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int *v19; // rbx
  unsigned int *v20; // rax
  unsigned int v21; // r9d
  ULONG v22; // r10d
  int v23; // eax
  int v24; // r8d
  int v25; // ecx
  int v26; // eax
  unsigned int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // r8
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // r8d
  int v34; // ecx
  int v35; // eax
  unsigned int v36; // r13d
  unsigned int v37; // eax
  ULONG_PTR v38; // rdi
  int v39; // edx
  int v40; // r13d
  unsigned int v41; // r13d
  unsigned __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int16 v46; // ax
  __int16 v47; // ax
  __int16 v48; // cx
  void *v49; // rcx
  signed __int64 v51; // rax
  signed __int64 *v52; // r14
  __int64 v53; // r13
  PVOID Object; // [rsp+30h] [rbp-E8h]
  unsigned int v55; // [rsp+38h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-D0h] BYREF
  __int64 *v57; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v58; // [rsp+58h] [rbp-C0h]
  __int64 v59; // [rsp+60h] [rbp-B8h]
  __int64 v60; // [rsp+68h] [rbp-B0h]
  __int64 v61; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD v62[8]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE v63[88]; // [rsp+C0h] [rbp-58h] BYREF

  memset(v62, 0, sizeof(v62));
  v12 = 0;
  v55 = 0;
  v58 = -1LL;
  v13 = a9;
  if ( a9 )
  {
    v14 = (__int64)a8;
    if ( a8 )
    {
      if ( (unsigned __int64)a8 >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      v61 = *(_QWORD *)v14;
      a8 = &v61;
    }
    v15 = a5;
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a5 >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 23) = *(_BYTE *)(v15 + 23);
    }
    else
    {
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
      v58 = *(_QWORD *)v17;
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
        v20 = (unsigned int *)0x7FFFFFFF0000LL;
      v12 = *v20;
      v21 = *v20 & 0x80000000;
      v22 = 8;
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        v30 = 20;
        if ( !v21 )
          v30 = 8;
        v31 = v30 + 16;
        if ( (v12 & 0x40000000) == 0 )
          v31 = v30;
        v32 = v31 + 20;
        if ( (v12 & 0x20000000) == 0 )
          v32 = v31;
        v33 = v32 + 16;
        if ( (v12 & 0x10000000) == 0 )
          v33 = v32;
        if ( (v12 & 0x8000000) != 0 )
          v33 += 24;
        v28 = v33 + 8;
        if ( (v12 & 0x2000000) == 0 )
          v28 = v33;
        v22 = 4;
      }
      else
      {
        v23 = 32;
        if ( !v21 )
          v23 = 8;
        v24 = v23 + 32;
        if ( (v12 & 0x40000000) == 0 )
          v24 = v23;
        if ( (v12 & 0x20000000) != 0 )
          v24 += 32;
        v25 = v24 + 24;
        if ( (v12 & 0x10000000) == 0 )
          v25 = v24;
        v26 = v25 + 24;
        if ( (v12 & 0x8000000) == 0 )
          v26 = v25;
        v27 = v26 + 8;
        if ( (v12 & 0x4000000) == 0 )
          v27 = v26;
        v28 = v27 + 8;
        if ( (v12 & 0x2000000) == 0 )
          v28 = v27;
      }
      v29 = (__int64)Address;
      if ( (unsigned __int64)(v28 - 1) > 0xFFE )
      {
        ProbeForWrite(Address, (unsigned int)v28, v22);
        v13 = a9;
      }
      else
      {
        if ( ((v22 - 1) & (unsigned int)Address) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Address >= 0x7FFFFFFF0000LL )
          v29 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v29 = *(_BYTE *)v29;
        *(_BYTE *)(v29 + (unsigned int)v28 - 1) = *(_BYTE *)(v29 + (unsigned int)v28 - 1);
      }
      v55 = v12;
    }
    else
    {
      v12 = 0;
    }
  }
  else
  {
    v16 = a6;
    if ( a6 )
      v58 = *a6;
    v19 = Address;
    if ( Address )
    {
      v12 = *Address;
      v55 = *Address;
    }
  }
  v34 = *(_DWORD *)(a1 + 416);
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    Object = (PVOID)a1;
    v59 = a1;
    goto LABEL_65;
  }
  v57 = *(__int64 **)(a1 + 16);
  v52 = v57 - 2;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v57 - 2), 0LL);
  v53 = *v57;
  Object = (PVOID)v53;
  v59 = *v57;
  if ( v53 && ObReferenceObjectSafe(v53) )
  {
    if ( _InterlockedCompareExchange64(v52, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v52);
    KeAbPostRelease((ULONG_PTR)v52);
    v34 = *(_DWORD *)(a1 + 416);
    v12 = v55;
    v13 = a9;
LABEL_65:
    v62[0] = a1;
    LODWORD(v62[6]) = a2;
    if ( (v34 & 0x1000) != 0 )
      v35 = AlpcpSendLegacySynchronousRequest(a1, v62, a3, v13);
    else
      v35 = AlpcpSendMessage(v62, a3, a4, v13);
    v36 = v35;
    if ( v35 >= 0 )
    {
      BugCheckParameter2 = 0LL;
      v62[0] = Object;
      v36 = AlpcpReceiveSynchronousReply((unsigned int)v62, a10, (unsigned int)&BugCheckParameter2, v12, (__int64)a8);
      LODWORD(v57) = v36;
      if ( !v36 )
      {
        v37 = a2 & 0xC0000000;
        v38 = BugCheckParameter2;
        v39 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
        v40 = 24;
        if ( v37 != 0x80000000 )
          v40 = 40;
        v41 = v39 + v40;
        if ( v16 && (v60 = v41, v41 > v58) )
        {
          v36 = AlpcpReturnMessageOnInsufficientBuffer(Object, BugCheckParameter2, v63);
          if ( v36 == -1073741789 )
          {
            AlpcpUnlockMessage(v38);
            *v16 = v60;
            AlpcpExposeCapturedContextAttribute(a2, v63, v12, v19);
            v49 = Object;
            goto LABEL_96;
          }
          AlpcpCancelMessage(Object, v38, 0x10000LL);
        }
        else
        {
          if ( v37 == 0x80000000 )
          {
            *(_WORD *)a5 = v39;
            *(_WORD *)(a5 + 2) = v39 + 24;
            v46 = *(_WORD *)(v38 + 246);
            if ( v46 )
              v47 = v46 - 16;
            else
              v47 = 0;
            *(_WORD *)(a5 + 6) = v47;
            v48 = *(_WORD *)(v38 + 244) | 0x1000;
            *(_WORD *)(a5 + 4) = v48;
            *(_DWORD *)(a5 + 8) = *(_DWORD *)(v38 + 248);
            *(_DWORD *)(a5 + 12) = *(_DWORD *)(v38 + 256);
            *(_DWORD *)(a5 + 16) = *(_DWORD *)(v38 + 264);
            *(_DWORD *)(a5 + 20) = *(_DWORD *)(v38 + 272);
            *(_DWORD *)(a5 + 20) = *(_DWORD *)(v38 + 272);
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a5 + 4) = v48 & 0xC00F;
            v42 = a5 + 24;
          }
          else
          {
            *(_OWORD *)a5 = *(_OWORD *)(BugCheckParameter2 + 240);
            *(_OWORD *)(a5 + 16) = *(_OWORD *)(v38 + 256);
            *(_QWORD *)(a5 + 32) = *(_QWORD *)(v38 + 272);
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a5 + 4) &= 0xC00Fu;
            v42 = a5 + 40;
          }
          if ( *(_QWORD *)(v38 + 176) )
            AlpcpGetDataFromUserVaSafe(v38, v42);
          else
            AlpcpReadMessageData(v38, v42);
          if ( v16 )
            *v16 = v41;
          if ( v19 )
            AlpcpExposeAttributes(a1, a2, v38, v12, v19);
          v36 = (unsigned int)v57;
          if ( (*(_DWORD *)(v38 + 40) & 0x200) != 0 && (*(_DWORD *)(a1 + 416) & 0x2000) != 0 )
          {
            v51 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v38, 0LL);
            v38 = BugCheckParameter2;
            if ( !v51 )
            {
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterFreeEventMessageLog(BugCheckParameter2);
              ++*(_WORD *)(v38 - 30);
              *(_DWORD *)(v38 + 264) |= 0x80000000;
              AlpcpClearOwnerPortMessage(v38);
            }
          }
          if ( AlpcpMessageLogEnabled )
            AlpcpEnterStateChangeEventMessageLog(v38, v43, v44, v45);
          AlpcpUnlockBlob(v38);
        }
      }
    }
    v49 = Object;
LABEL_96:
    if ( v49 != (void *)a1 )
      ObfDereferenceObject(v49);
    return v36;
  }
  if ( _InterlockedCompareExchange64(v57 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v57 - 2);
  KeAbPostRelease((ULONG_PTR)(v57 - 2));
  return 3221225527LL;
}
