/*
 * XREFs of AlpcpProcessConnectionRequest @ 0x1404730E0
 * Callers:
 *     AlpcpConnectPort @ 0x140474C88 (AlpcpConnectPort.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140470BF0 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpProbeMessageAttributes @ 0x140472940 (AlpcpProbeMessageAttributes.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404748C8 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpFormatConnectionRequest @ 0x140474A80 (AlpcpFormatConnectionRequest.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14047545C (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpReadMessageData @ 0x14047C750 (AlpcpReadMessageData.c)
 *     AlpcpUnlockMessage @ 0x14047CEA8 (AlpcpUnlockMessage.c)
 *     AlpcpExposeAttributes @ 0x140523560 (AlpcpExposeAttributes.c)
 *     AlpcpReceiveSynchronousReply @ 0x140526E80 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x14056AA6C (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpLogConnectFail @ 0x1406B27BC (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1406B281C (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1406B2880 (AlpcpLogConnectSuccess.c)
 */

__int64 __fastcall AlpcpProcessConnectionRequest(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        PLARGE_INTEGER a7,
        char a8,
        char a9)
{
  __int64 v12; // rdi
  int v13; // r13d
  char v14; // r12
  __int64 v15; // rdi
  _DWORD *v16; // r15
  __int64 v17; // rcx
  __int64 result; // rax
  ULONG_PTR v19; // rsi
  unsigned int v20; // r12d
  int v21; // edx
  unsigned int v22; // edi
  unsigned int v23; // esi
  unsigned int v24; // ecx
  ULONG_PTR v25; // rdi
  int v26; // edx
  int v27; // r13d
  unsigned int v28; // r13d
  __int64 v29; // r12
  unsigned __int64 v30; // rdx
  __int16 v31; // ax
  int v32; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v33; // [rsp+58h] [rbp-B0h]
  int v34[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v37[40]; // [rsp+78h] [rbp-90h] BYREF
  int v38[16]; // [rsp+A0h] [rbp-68h] BYREF

  v12 = a1;
  memset(v38, 0, sizeof(v38));
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v13 = 0;
  v32 = 0;
  v33 = -1LL;
  v35 = -1LL;
  v14 = a8;
  if ( a8 )
  {
    if ( a3 )
    {
      AlpcpProbeForWriteMessageHeader(a3, a2);
      AlpcpProbeAndCaptureMessageHeader(a3, v37, a2);
    }
    else
    {
      memset(v37, 0, sizeof(v37));
    }
    v15 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v17 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v17 = (__int64)a4;
      v35 = *(_QWORD *)v17;
      *(_QWORD *)v17 = *(_QWORD *)v17;
      v13 = 0;
      v33 = v35;
      v14 = a8;
    }
    v16 = a6;
    if ( a6 )
    {
      v13 = AlpcpProbeMessageAttributes(a2, (unsigned __int64)a6, 1);
      v32 = v13;
    }
    if ( a7 )
    {
      if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a7;
      v36 = *(_QWORD *)v15;
      a7 = (PLARGE_INTEGER)&v36;
      v13 = v32;
      v33 = v35;
    }
    v12 = a1;
  }
  else
  {
    if ( a3 )
    {
      *(_OWORD *)v37 = *(_OWORD *)a3;
      *(_OWORD *)&v37[16] = *(_OWORD *)(a3 + 16);
      *(_QWORD *)&v37[32] = *(_QWORD *)(a3 + 32);
    }
    else
    {
      memset(v37, 0, sizeof(v37));
    }
    if ( a4 )
      v33 = *a4;
    v16 = a6;
    if ( a6 )
      v13 = *a6;
  }
  result = AlpcpFormatConnectionRequest((unsigned int)v34, a2, v12, a3, (__int64)v37, a5, 0LL, 0LL, 0, v14);
  if ( (int)result >= 0 )
  {
    v19 = *(_QWORD *)v34;
    v20 = *(_DWORD *)(*(_QWORD *)v34 + 264LL);
    if ( AlpcpLogEnabled )
      AlpcpLogConnectRequest(*(_QWORD *)v34);
    *(_QWORD *)v38 = v12;
    *(_QWORD *)&v38[2] = v19;
    v38[12] = a2;
    result = AlpcpDispatchConnectionRequest(v38);
    v22 = result;
    if ( (int)result < 0 )
    {
      if ( AlpcpLogEnabled )
        AlpcpLogConnectFail(v20, (unsigned int)result);
      AlpcpUnlockMessage(v19);
      return v22;
    }
    else if ( (a2 & 0x20000) != 0 )
    {
      *(_QWORD *)v34 = 0LL;
      LOBYTE(v21) = a9;
      v23 = AlpcpReceiveSynchronousReply((int)v38, v21, (int)v34, v13, a7);
      if ( v23 )
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectFail(v20, v23);
        if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
          return (unsigned int)-1073741759;
      }
      else
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectSuccess(v20);
        v24 = a2;
        v25 = *(_QWORD *)v34;
        v26 = *(unsigned __int16 *)(*(_QWORD *)v34 + 240LL);
        v27 = 24;
        if ( (a2 & 0xC0000000) != 0x80000000 )
          v27 = 40;
        v28 = v26 + v27;
        if ( a4 && v28 > v33 )
        {
          AlpcpUnlockMessage(*(ULONG_PTR *)v34);
          *a4 = v28;
          return 3221225507LL;
        }
        if ( a3 )
        {
          if ( (a2 & 0xC0000000) == 0x80000000 )
          {
            *(_WORD *)a3 = v26;
            *(_WORD *)(a3 + 2) = v26 + 24;
            v31 = *(_WORD *)(v25 + 246);
            if ( v31 )
              *(_WORD *)(a3 + 6) = v31 - 16;
            else
              *(_WORD *)(a3 + 6) = 0;
            *(_WORD *)(a3 + 4) = *(_WORD *)(v25 + 244) | 0x1000;
            *(_DWORD *)(a3 + 8) = *(_DWORD *)(v25 + 248);
            *(_DWORD *)(a3 + 12) = *(_DWORD *)(v25 + 256);
            *(_DWORD *)(a3 + 16) = *(_DWORD *)(v25 + 264);
            *(_DWORD *)(a3 + 20) = *(_DWORD *)(v25 + 272);
            *(_DWORD *)(a3 + 20) = *(_DWORD *)(v25 + 272);
            v29 = a1;
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a3 + 4) &= 0xC00Fu;
            v30 = a3 + 24;
          }
          else
          {
            *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)v34 + 240LL);
            *(_OWORD *)(a3 + 16) = *(_OWORD *)(v25 + 256);
            *(_QWORD *)(a3 + 32) = *(_QWORD *)(v25 + 272);
            v29 = a1;
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a3 + 4) &= 0xC00Fu;
            v30 = a3 + 40;
          }
          if ( *(_QWORD *)(v25 + 176) )
            AlpcpGetDataFromUserVaSafe(v25, v30);
          else
            AlpcpReadMessageData(v25, v30);
          v24 = a2;
        }
        else
        {
          v29 = a1;
        }
        if ( a4 )
          *a4 = v28;
        if ( v16 )
          AlpcpExposeAttributes(v29, v24, v25, v16);
        AlpcpUnlockMessage(v25);
      }
      return v23;
    }
  }
  return result;
}
