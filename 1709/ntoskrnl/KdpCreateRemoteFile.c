/*
 * XREFs of KdpCreateRemoteFile @ 0x14079A6E8
 * Callers:
 *     KdPullRemoteFile @ 0x14079A314 (KdPullRemoteFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KdEnterDebugger @ 0x140796C6C (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140796D74 (KdExitDebugger.c)
 *     KdpCopyMemoryChunks @ 0x140799698 (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpCreateRemoteFile(_QWORD *a1, __int64 *a2, unsigned __int16 *a3)
{
  char v7; // r14
  _QWORD *v8; // rcx
  unsigned int i; // ebx
  unsigned int v10; // r8d
  char *v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-79h] BYREF
  _WORD v15[4]; // [rsp+38h] [rbp-71h] BYREF
  _BYTE *v16; // [rsp+40h] [rbp-69h]
  int v17; // [rsp+48h] [rbp-61h] BYREF
  __int64 *v18; // [rsp+50h] [rbp-59h]
  __int64 v19; // [rsp+60h] [rbp-49h] BYREF
  int v20; // [rsp+68h] [rbp-41h]
  int v21; // [rsp+6Ch] [rbp-3Dh]
  int v22; // [rsp+70h] [rbp-39h]
  __int64 v23; // [rsp+74h] [rbp-35h]
  __int64 v24; // [rsp+80h] [rbp-29h]
  unsigned __int64 v25; // [rsp+88h] [rbp-21h]

  if ( *a3 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 64 )
    return 3221225485LL;
  if ( (_BYTE)KdDebuggerNotPresent )
    return 3221226324LL;
  v7 = KdEnterDebugger(0LL);
  v8 = KdpRemoteFiles;
  for ( i = 0; i < 0x10; ++i )
  {
    if ( !*v8 )
      break;
    ++v8;
  }
  if ( i < 0x10 )
  {
    while ( 1 )
    {
      v10 = *a3;
      v18 = &v19;
      v11 = (char *)*((_QWORD *)a3 + 1);
      v19 = 13360LL;
      v20 = 1179785;
      v21 = 128;
      v22 = 1;
      v23 = 1LL;
      v17 = 4194368;
      KdpCopyMemoryChunks(v11, KdpMessageBuffer, v10, 0, 4u, &v14);
      v16 = KdpMessageBuffer;
      v15[0] = v14 + 2;
      *(_WORD *)&KdpMessageBuffer[(unsigned __int16)(v14 + 2) - 2] = 0;
      KdSendPacket(11LL, &v17, v15, &KdpContext);
      if ( (_BYTE)KdDebuggerNotPresent )
        break;
      v15[1] = 4096;
      v16 = KdpMessageBuffer;
      if ( !(unsigned int)KdReceivePacket(11LL, &v17, v15, &v14, &KdpContext) )
      {
        v12 = HIDWORD(v19);
        goto LABEL_14;
      }
    }
    v12 = -1073740972;
    HIDWORD(v19) = -1073740972;
LABEL_14:
    if ( v12 >= 0 )
    {
      KdpRemoteFiles[i] = v24;
      *a1 = i + 1;
      if ( a2 )
      {
        v13 = v25;
        if ( v25 >= 0x10000000 )
          v13 = 4096LL;
        *a2 = v13;
      }
    }
  }
  else
  {
    HIDWORD(v19) = -1073741801;
  }
  KdExitDebugger(v7);
  return HIDWORD(v19);
}
