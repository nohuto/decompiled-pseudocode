/*
 * XREFs of AlpcpReceiveLegacyConnectionReply @ 0x1404DFA3C
 * Callers:
 *     NtSecureConnectPort @ 0x1404DF490 (NtSecureConnectPort.c)
 * Callees:
 *     AlpcpReceiveSynchronousReply @ 0x1404CBD10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReadMessageData @ 0x1404CBF1C (AlpcpReadMessageData.c)
 *     AlpcpUnlockMessage @ 0x1404CF164 (AlpcpUnlockMessage.c)
 *     AlpcpQueryRemoteView @ 0x1404DFC7C (AlpcpQueryRemoteView.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x140748138 (AlpcpGetDataFromUserVaSafe.c)
 */

__int64 __fastcall AlpcpReceiveLegacyConnectionReply(
        __int64 *a1,
        char *a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  int RemoteView; // esi
  __int64 v15; // rdx
  ULONG_PTR v16; // rbx
  __int64 v17; // rcx
  __int16 v18; // r14
  unsigned int v19; // eax
  ULONG_PTR v20; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v23[16]; // [rsp+38h] [rbp-30h] BYREF
  __int64 v24; // [rsp+48h] [rbp-20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  BugCheckParameter2 = 0LL;
  v10 = *a1;
  v11 = AlpcpReceiveSynchronousReply(a1, PreviousMode, &BugCheckParameter2, 0, 0LL);
  RemoteView = v11;
  if ( !v11 )
  {
    if ( a4 )
    {
      RemoteView = AlpcpQueryRemoteView(v10, a4, v23);
      if ( RemoteView < 0 )
      {
        v20 = BugCheckParameter2;
LABEL_17:
        AlpcpUnlockMessage(v20, v15, v12, v13);
        return (unsigned int)RemoteView;
      }
      *(_QWORD *)(a5 + 40) = v24;
    }
    v15 = a6;
    v16 = BugCheckParameter2;
    if ( a6 )
    {
      v17 = *(_QWORD *)(BugCheckParameter2 + 144);
      if ( v17 )
      {
        *(_DWORD *)a6 = 24;
        *(_QWORD *)(a6 + 16) = *(_QWORD *)(v17 + 40);
        *(_QWORD *)(a6 + 8) = *(_QWORD *)(*(_QWORD *)(v17 + 16) + 40LL);
      }
    }
    if ( a2 )
    {
      v18 = 0;
      v19 = *(unsigned __int16 *)(v16 + 240);
      if ( *a3 < v19 )
      {
        v18 = *(_WORD *)(v16 + 240);
        *(_WORD *)(v16 + 240) = *a3;
      }
      else
      {
        *a3 = v19;
      }
      if ( *(_QWORD *)(v16 + 176) )
        AlpcpGetDataFromUserVaSafe(v16, a2);
      else
        AlpcpReadMessageData(v16, a2);
      if ( v18 )
        *(_WORD *)(v16 + 240) = v18;
    }
    v20 = v16;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(v10 + 416) & 0x10) != 0 || v11 == -1073740031 )
    return (unsigned int)-1073741759;
  return (unsigned int)RemoteView;
}
