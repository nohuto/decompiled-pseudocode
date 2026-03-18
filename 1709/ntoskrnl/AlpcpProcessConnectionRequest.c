/*
 * XREFs of AlpcpProcessConnectionRequest @ 0x14046750C
 * Callers:
 *     AlpcpConnectPort @ 0x14046378C (AlpcpConnectPort.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     AlpcpProbeForWriteMessageHeader @ 0x140464544 (AlpcpProbeForWriteMessageHeader.c)
 *     AlpcpFormatConnectionRequest @ 0x140466208 (AlpcpFormatConnectionRequest.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x1404672A8 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpDispatchConnectionRequest @ 0x140467354 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpProbeMessageAttributes @ 0x140467B0C (AlpcpProbeMessageAttributes.c)
 *     AlpcpUnlockMessage @ 0x14049DAB4 (AlpcpUnlockMessage.c)
 *     AlpcpExposeAttributes @ 0x14049F2C0 (AlpcpExposeAttributes.c)
 *     AlpcpReadMessageData @ 0x1404A25E0 (AlpcpReadMessageData.c)
 *     AlpcpReceiveSynchronousReply @ 0x1404A2C40 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406DD418 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpLogConnectFail @ 0x1406DE504 (AlpcpLogConnectFail.c)
 *     AlpcpLogConnectRequest @ 0x1406DE564 (AlpcpLogConnectRequest.c)
 *     AlpcpLogConnectSuccess @ 0x1406DE5C8 (AlpcpLogConnectSuccess.c)
 */

__int64 __fastcall AlpcpProcessConnectionRequest(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        int *a6,
        __int64 *a7,
        char a8,
        char a9)
{
  _QWORD *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // rdi
  int *v15; // r12
  __int64 v16; // rcx
  __int64 result; // rax
  ULONG_PTR v18; // rsi
  unsigned int v19; // r13d
  int v20; // edx
  unsigned int v21; // edi
  __int64 v22; // rdx
  unsigned int v23; // esi
  ULONG_PTR v24; // rdi
  int v25; // ecx
  int v26; // edx
  unsigned int v27; // edx
  int v28; // r13d
  unsigned __int64 v29; // rdx
  __int16 v30; // ax
  unsigned __int64 v31; // r13
  int v32; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v33; // [rsp+58h] [rbp-B0h]
  int v34[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v37[40]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v38[8]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v40; // [rsp+118h] [rbp+10h]

  v12 = (_QWORD *)a1;
  memset(v38, 0, sizeof(v38));
  if ( (a2 & 0x10000) != 0 )
    return 3221225485LL;
  v32 = 0;
  v33 = -1LL;
  v35 = -1LL;
  if ( a8 )
  {
    if ( a3 )
    {
      AlpcpProbeForWriteMessageHeader(a3, a2);
      AlpcpProbeAndCaptureMessageHeader(a3, (__int64)v37, a2);
    }
    else
    {
      memset(v37, 0, sizeof(v37));
    }
    v14 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v16 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v16 = (__int64)a4;
      v35 = *(_QWORD *)v16;
      *(_QWORD *)v16 = *(_QWORD *)v16;
      v33 = v35;
    }
    v15 = a6;
    if ( a6 )
    {
      LOBYTE(v13) = 1;
      v32 = AlpcpProbeMessageAttributes((unsigned int)a2, a6, v13);
    }
    if ( a7 )
    {
      if ( (unsigned __int64)a7 < 0x7FFFFFFF0000LL )
        v14 = (__int64)a7;
      v36 = *(_QWORD *)v14;
      a7 = &v36;
      v33 = v35;
    }
    v12 = (_QWORD *)a1;
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
    v15 = a6;
    if ( a6 )
      v32 = *a6;
  }
  result = AlpcpFormatConnectionRequest((ULONG_PTR *)v34, a2, v12, a3, (unsigned __int16 *)v37, a5, 0LL, 0LL, 0, a8);
  if ( (int)result >= 0 )
  {
    v18 = *(_QWORD *)v34;
    v19 = *(_DWORD *)(*(_QWORD *)v34 + 264LL);
    if ( AlpcpLogEnabled )
      AlpcpLogConnectRequest(*(_QWORD *)v34);
    v38[0] = (__int64)v12;
    v38[1] = v18;
    LODWORD(v38[6]) = a2;
    result = AlpcpDispatchConnectionRequest(v38);
    v21 = result;
    if ( (int)result < 0 )
    {
      if ( AlpcpLogEnabled )
        AlpcpLogConnectFail(v19, (unsigned int)result);
      AlpcpUnlockMessage(v18);
      return v21;
    }
    else if ( (a2 & 0x20000) != 0 )
    {
      *(_QWORD *)v34 = 0LL;
      LOBYTE(v20) = a9;
      v23 = AlpcpReceiveSynchronousReply((unsigned int)v38, v20, (unsigned int)v34, v32, (__int64)a7);
      if ( v23 )
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectFail(v19, v23);
        if ( (*(_BYTE *)(a1 + 416) & 0x10) != 0 )
          return (unsigned int)-1073741759;
      }
      else
      {
        if ( AlpcpLogEnabled )
          AlpcpLogConnectSuccess(v19, v22, 0LL);
        v24 = *(_QWORD *)v34;
        v25 = *(unsigned __int16 *)(*(_QWORD *)v34 + 240LL);
        v26 = 24;
        if ( (a2 & 0xC0000000) != 0x80000000 )
          v26 = 40;
        v27 = v25 + v26;
        v40 = v27;
        if ( a4 )
        {
          v31 = v27;
          if ( v27 > v33 )
          {
            AlpcpUnlockMessage(*(ULONG_PTR *)v34);
            *a4 = v31;
            return 3221225507LL;
          }
        }
        if ( a3 )
        {
          if ( a2 >= 0 || (a2 & 0x40000000) != 0 )
          {
            *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)v34 + 240LL);
            *(_OWORD *)(a3 + 16) = *(_OWORD *)(v24 + 256);
            *(_QWORD *)(a3 + 32) = *(_QWORD *)(v24 + 272);
            v28 = a1;
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a3 + 4) &= 0xC00Fu;
            v29 = a3 + 40;
          }
          else
          {
            *(_WORD *)a3 = v25;
            *(_WORD *)(a3 + 2) = v25 + 24;
            v30 = *(_WORD *)(v24 + 246);
            if ( v30 )
              *(_WORD *)(a3 + 6) = v30 - 16;
            else
              *(_WORD *)(a3 + 6) = 0;
            *(_WORD *)(a3 + 4) = *(_WORD *)(v24 + 244) | 0x1000;
            *(_DWORD *)(a3 + 8) = *(_DWORD *)(v24 + 248);
            *(_DWORD *)(a3 + 12) = *(_DWORD *)(v24 + 256);
            *(_DWORD *)(a3 + 16) = *(_DWORD *)(v24 + 264);
            *(_DWORD *)(a3 + 20) = *(_DWORD *)(v24 + 272);
            *(_DWORD *)(a3 + 20) = *(_DWORD *)(v24 + 272);
            v28 = a1;
            if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
              *(_WORD *)(a3 + 4) &= 0xC00Fu;
            v29 = a3 + 24;
          }
          if ( *(_QWORD *)(v24 + 176) )
            AlpcpGetDataFromUserVaSafe(v24, v29);
          else
            AlpcpReadMessageData(v24, v29);
          v27 = v40;
        }
        else
        {
          v28 = a1;
        }
        if ( a4 )
          *a4 = v27;
        if ( v15 )
          AlpcpExposeAttributes(v28, a2, v24, v32, v15);
        AlpcpUnlockMessage(v24);
      }
      return v23;
    }
  }
  return result;
}
