/*
 * XREFs of AlpcpProcessConnectionRequest @ 0x1404DA158
 * Callers:
 *     AlpcpConnectPort @ 0x1404DA5F0 (AlpcpConnectPort.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     AlpcpExposeAttributes @ 0x1404CA290 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveSynchronousReply @ 0x1404CBD10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReadMessageData @ 0x1404CBF1C (AlpcpReadMessageData.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpProbeMessageAttributes @ 0x1404DA04C (AlpcpProbeMessageAttributes.c)
 *     AlpcpFormatConnectionRequest @ 0x1404DBA50 (AlpcpFormatConnectionRequest.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1404DDD48 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404DDDF4 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140560B60 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x140748138 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpLogConnectFail @ 0x1407493F4 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x140749454 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1407494B8 (AlpcpLogConnectSuccess.c)
 */

__int64 __fastcall AlpcpProcessConnectionRequest(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        int *a6,
        LARGE_INTEGER *a7,
        char a8,
        KPROCESSOR_MODE a9)
{
  __int64 v12; // rdi
  int v13; // r12d
  char v14; // r13
  __int64 v15; // rdi
  int *v16; // r15
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rsi
  unsigned int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // edi
  unsigned int v25; // eax
  unsigned int v26; // esi
  int v27; // ecx
  __int64 v28; // r8
  ULONG_PTR v29; // rdi
  __int64 v30; // rdx
  int v31; // r9d
  __int64 v32; // r9
  __int64 v33; // r13
  char *v34; // rdx
  __int16 v35; // ax
  __int16 v36; // cx
  unsigned __int64 v37; // r13
  int v38; // [rsp+50h] [rbp-B8h]
  unsigned int v39; // [rsp+54h] [rbp-B4h]
  unsigned __int64 v40; // [rsp+58h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h]
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v44[40]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v45[8]; // [rsp+A0h] [rbp-68h] BYREF

  v12 = a1;
  memset(v45, 0, sizeof(v45));
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v13 = 0;
  v38 = 0;
  v40 = -1LL;
  v42 = -1LL;
  v14 = a8;
  if ( a8 )
  {
    if ( a3 )
    {
      AlpcpProbeForWriteMessageHeader(a3, a2);
      AlpcpProbeAndCaptureMessageHeader(a3, v44, a2);
    }
    else
    {
      memset(v44, 0, sizeof(v44));
    }
    v15 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v17 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v17 = (__int64)a4;
      v42 = *(_QWORD *)v17;
      *(_QWORD *)v17 = *(_QWORD *)v17;
      v13 = 0;
      v40 = v42;
      v14 = a8;
    }
    v16 = a6;
    if ( a6 )
    {
      v13 = AlpcpProbeMessageAttributes(a2, a6, 1);
      v38 = v13;
    }
    if ( a7 )
    {
      if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a7;
      v43 = *(_QWORD *)v15;
      a7 = (LARGE_INTEGER *)&v43;
      v13 = v38;
      v40 = v42;
    }
    v12 = a1;
  }
  else
  {
    if ( a3 )
    {
      *(_OWORD *)v44 = *(_OWORD *)a3;
      *(_OWORD *)&v44[16] = *(_OWORD *)(a3 + 16);
      *(_QWORD *)&v44[32] = *(_QWORD *)(a3 + 32);
    }
    else
    {
      memset(v44, 0, sizeof(v44));
    }
    if ( a4 )
      v40 = *a4;
    v16 = a6;
    if ( a6 )
    {
      v13 = *a6;
      v38 = *a6;
    }
  }
  result = AlpcpFormatConnectionRequest(
             (unsigned int)&BugCheckParameter2,
             a2,
             v12,
             a3,
             (__int64)v44,
             a5,
             0LL,
             0LL,
             0,
             v14,
             v38);
  if ( (int)result >= 0 )
  {
    v19 = BugCheckParameter2;
    v20 = *(_DWORD *)(BugCheckParameter2 + 264);
    if ( AlpcpLogEnabled )
      AlpcpLogConnectRequest(BugCheckParameter2);
    v45[0] = v12;
    v45[1] = v19;
    LODWORD(v45[6]) = a2;
    result = AlpcpDispatchConnectionRequest(v45);
    v24 = result;
    if ( (int)result < 0 )
    {
      if ( AlpcpLogEnabled )
        AlpcpLogConnectFail(v20, (unsigned int)result);
      AlpcpUnlockMessage(v19, v21, v22, v23);
      return v24;
    }
    else if ( (a2 & 0x20000) != 0 )
    {
      BugCheckParameter2 = 0LL;
      v25 = AlpcpReceiveSynchronousReply(v45, a9, &BugCheckParameter2, v13, a7);
      v26 = v25;
      if ( v25 )
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectFail(v20, v25);
        if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
          return (unsigned int)-1073741759;
      }
      else
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectSuccess(v20);
        v27 = a2;
        v28 = a2 & 0xC0000000;
        v29 = BugCheckParameter2;
        v30 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
        v31 = 24;
        if ( (_DWORD)v28 != 0x80000000 )
          v31 = 40;
        v32 = (unsigned int)(v30 + v31);
        v39 = v32;
        if ( a4 )
        {
          v37 = (unsigned int)v32;
          if ( (unsigned int)v32 > v40 )
          {
            AlpcpUnlockMessage(BugCheckParameter2, v30, v28, v32);
            *a4 = v37;
            return 3221225507LL;
          }
        }
        if ( a3 )
        {
          if ( (_DWORD)v28 == 0x80000000 )
          {
            *(_WORD *)a3 = v30;
            *(_WORD *)(a3 + 2) = v30 + 24;
            v35 = *(_WORD *)(v29 + 246);
            if ( v35 )
              *(_WORD *)(a3 + 6) = v35 - 16;
            else
              *(_WORD *)(a3 + 6) = 0;
            v36 = *(_WORD *)(v29 + 244);
            *(_WORD *)(a3 + 4) = v36 | 0x1000;
            *(_DWORD *)(a3 + 8) = *(_DWORD *)(v29 + 248);
            *(_DWORD *)(a3 + 12) = *(_DWORD *)(v29 + 256);
            *(_DWORD *)(a3 + 16) = *(_DWORD *)(v29 + 264);
            *(_DWORD *)(a3 + 20) = *(_DWORD *)(v29 + 272);
            *(_DWORD *)(a3 + 20) = *(_DWORD *)(v29 + 272);
            v33 = a1;
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a3 + 4) = v36 & 0xC00F;
            v34 = (char *)(a3 + 24);
          }
          else
          {
            *(_OWORD *)a3 = *(_OWORD *)(BugCheckParameter2 + 240);
            *(_OWORD *)(a3 + 16) = *(_OWORD *)(v29 + 256);
            *(_QWORD *)(a3 + 32) = *(_QWORD *)(v29 + 272);
            v33 = a1;
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a3 + 4) &= 0xC00Fu;
            v34 = (char *)(a3 + 40);
          }
          if ( *(_QWORD *)(v29 + 176) )
            AlpcpGetDataFromUserVaSafe(v29, v34);
          else
            AlpcpReadMessageData(v29, v34);
          v27 = a2;
          v32 = v39;
        }
        else
        {
          v33 = a1;
        }
        if ( a4 )
          *a4 = (unsigned int)v32;
        if ( v16 )
          AlpcpExposeAttributes(v33, v27, v29, v13, v16);
        AlpcpUnlockMessage(v29, v30, v28, v32);
      }
      return v26;
    }
  }
  return result;
}
