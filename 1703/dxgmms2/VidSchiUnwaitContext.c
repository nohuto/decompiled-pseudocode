/*
 * XREFs of VidSchiUnwaitContext @ 0x1C000DA38
 * Callers:
 *     VidSchiDelayReadyRoutine @ 0x1C00021D0 (VidSchiDelayReadyRoutine.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0003040 (VidSchiCompleteFlipEntry.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004480 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000D604 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchSuspendResumeDevice @ 0x1C0010450 (VidSchSuspendResumeDevice.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00106A4 (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x1C0023B8C (-VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000A0C0 (VidSchiUpdateContextStatus.c)
 */

bool __fastcall VidSchiUnwaitContext(__int64 a1, unsigned int a2)
{
  char v3; // si
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 176) & 0x100) != 0 )
    return v3;
  if ( (*(_DWORD *)(a1 + 176) & 0x200) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 176) & 2) != 0 )
      return v3;
    v6 = 10LL;
    v7 = 20873LL;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 672) == a1 + 672 )
  {
    v6 = 0LL;
    v7 = 20890LL;
LABEL_17:
    VidSchiUpdateContextStatus(a1, (_QWORD *)v6, v7);
    return v3;
  }
  if ( !*(_DWORD *)(a1 + 788) )
  {
    v6 = 1LL;
    v7 = 20956LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 176) & 0x20) != 0 )
  {
    v7 = a2;
    v6 = 4LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 176) & 0x80u) != 0 )
  {
    v7 = a2;
    v6 = 8LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 176) & 0x10) != 0 )
  {
    v7 = a2;
    v6 = 3LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 176) & 0x40) != 0 )
  {
    v7 = a2;
    v6 = 7LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 176) & 8) != 0 )
  {
    v7 = a2;
    v6 = 2LL;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) == 0 && (*(_DWORD *)(a1 + 176) & 0x100) == 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 448), 0, 0) == 2 )
    {
      v8 = *(_QWORD *)(a1 + 96);
      v9 = 0;
      DpSynchronizeExecution(
        *(_QWORD *)(*(_QWORD *)(v8 + 24) + 24LL),
        VidSchiResetContextQuantumAtISR,
        a1,
        *(unsigned int *)(*(_QWORD *)(v8 + 24) + 32LL),
        &v9);
    }
    return (unsigned int)VidSchiUpdateContextStatus(a1, (_QWORD *)5, a2) != 0;
  }
  return v3;
}
