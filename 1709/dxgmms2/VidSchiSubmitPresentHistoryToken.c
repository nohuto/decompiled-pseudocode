/*
 * XREFs of VidSchiSubmitPresentHistoryToken @ 0x1C0011898
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0008DA0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BBA0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiFlushQueuePacket @ 0x1C002830C (VidSchiFlushQueuePacket.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C0028E08 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0011AB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0014B0C (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0015090 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C00251B0 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_I.c)
 */

void __fastcall VidSchiSubmitPresentHistoryToken(
        union _ULARGE_INTEGER *a1,
        union _ULARGE_INTEGER *a2,
        union _ULARGE_INTEGER a3,
        __int64 a4)
{
  bool v4; // si
  union _ULARGE_INTEGER v8; // r13
  bool v9; // r12
  char v10; // dl
  char v11; // r8
  __int64 v12; // r14
  int v14; // ecx
  __int64 v15; // r15
  int v16; // eax
  __int64 HighPart; // rcx
  __int64 v18; // rcx
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  __int64 v21; // rdx
  unsigned int v22; // [rsp+30h] [rbp-38h]
  unsigned int v23; // [rsp+70h] [rbp+8h]

  v4 = 0;
  v8.QuadPart = 0LL;
  if ( a1 )
  {
    v8 = a1[11];
    a2 = a1 + 36;
    a3 = a1[14];
    a4 = *(_QWORD *)(*(_QWORD *)(v8.QuadPart + 104) + 32LL);
  }
  v9 = 0;
  if ( (a2->LowPart & 0x1000000) == 0 )
  {
    HighPart = a2[14].HighPart;
    if ( !a2[19].QuadPart )
      goto LABEL_15;
    if ( (_DWORD)HighPart == -1 )
      goto LABEL_15;
    v18 = *(_QWORD *)(a4 + 8 * HighPart + 3008);
    if ( !v18 )
      goto LABEL_15;
    v19 = *(_DWORD *)(a4 + 128);
    v20 = 0;
    if ( !v19 )
      goto LABEL_15;
    while ( 1 )
    {
      v21 = 280LL * v20;
      if ( a2[19].LowPart == *(_DWORD *)(v21 + v18 + 148)
        && a2[19].HighPart == *(_DWORD *)(v21 + v18 + 152)
        && a2[20].QuadPart == *(_QWORD *)(v21 + v18 + 160)
        && *(_DWORD *)(v21 + v18 + 180) == 3 )
      {
        break;
      }
      if ( ++v20 >= v19 )
        goto LABEL_15;
    }
LABEL_14:
    v9 = 1;
    goto LABEL_15;
  }
  v10 = -1;
  v22 = a2[14].HighPart;
  v11 = 0;
  v12 = *(_QWORD *)(a4 + 8LL * v22 + 3008);
  if ( _BitScanForward((unsigned int *)&v14, a2[55].LowPart & 0x3FF) )
    v10 = v14;
  if ( v10 != -1 )
    v11 = v10;
  v15 = 280LL * (unsigned int)v11;
  v23 = v11;
  if ( *(_QWORD *)(v12 + v15 + 200) != v12 + v15 + 200 )
    goto LABEL_9;
  v16 = *(_DWORD *)(v15 + v12 + 180);
  if ( v16 == 3 )
  {
    if ( a2[19].LowPart != *(_DWORD *)(v15 + v12 + 148)
      || a2[19].HighPart != *(_DWORD *)(v15 + v12 + 152)
      || a2[20].QuadPart != *(_QWORD *)(v15 + v12 + 160) )
    {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( v16 == 1
    && VidSchiCheckTokenIndependentFlipCondition((struct _VIDSCH_GLOBAL *)a4, (const struct VIDSCH_SUBMIT_DATA2 *)a2) )
  {
    if ( *(_BYTE *)(v15 + v12 + 177) )
    {
      if ( !VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)a4, v22, v23) )
      {
LABEL_9:
        VidSchiPostponePresentHistoryToken(
          (struct _VIDSCH_CONTEXT *)v8.QuadPart,
          (struct VIDSCH_SUBMIT_DATA2 *)a2,
          a3,
          (struct _VIDSCH_GLOBAL *)a4);
        return;
      }
    }
    else
    {
      *(_BYTE *)(v15 + v12 + 177) = 1;
      v4 = 1;
    }
  }
LABEL_15:
  VidSchiProcessPresentHistoryToken((struct _VIDSCH_CONTEXT *)v8.QuadPart, (struct VIDSCH_SUBMIT_DATA2 *)a2, a3, v4, v9);
}
