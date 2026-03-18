/*
 * XREFs of VidSchiSubmitPresentHistoryToken @ 0x1C0013330
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0009720 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C000BC60 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiFlushQueuePacket @ 0x1C002B154 (VidSchiFlushQueuePacket.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C002BCF0 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C002FCF8 (-VidSchiCompleteHwQueuePacket@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0013570 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C00149D4 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C001539C (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0027CE4 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_I.c)
 */

void __fastcall VidSchiSubmitPresentHistoryToken(_QWORD *a1, _QWORD *a2, union _ULARGE_INTEGER a3, __int64 a4)
{
  unsigned int v6; // edx
  struct _VIDSCH_CONTEXT *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  bool v12; // r13
  char v13; // r8
  int v15; // ecx
  unsigned int v16; // r12d
  __int64 v17; // rdx
  __int64 v18; // r14
  int v19; // eax
  bool v20; // r9
  unsigned int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rcx

  v6 = 0;
  v8 = 0LL;
  if ( a1 )
  {
    v9 = a1[11];
    a2 = a1 + 34;
    a3 = (union _ULARGE_INTEGER)a1[14];
    if ( v9 )
    {
      v8 = (struct _VIDSCH_CONTEXT *)a1[11];
      v10 = *(_QWORD *)(v9 + 104);
    }
    else
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a1[12] + 24LL) + 8LL);
    }
    a4 = *(_QWORD *)(v10 + 32);
  }
  v11 = *((unsigned int *)a2 + 29);
  v12 = 0;
  if ( (*(_DWORD *)a2 & 0x1000000) == 0 )
  {
    if ( a2[19] )
    {
      if ( (_DWORD)v11 != -1 )
      {
        if ( *(_QWORD *)(a4 + 8 * v11 + 3032) )
        {
          v21 = *(_DWORD *)(a4 + 132);
          if ( v21 )
          {
            while ( 1 )
            {
              v22 = *(int *)(216LL * v6 + *(_QWORD *)(a4 + 8 * v11 + 3032) + 140);
              if ( (int)v22 > -1 )
              {
                v23 = *(_QWORD *)(a4 + 3160) + 136 * v22;
                if ( v23 )
                {
                  if ( *((_DWORD *)a2 + 38) == *(_DWORD *)v23
                    && *((_DWORD *)a2 + 39) == *(_DWORD *)(v23 + 4)
                    && a2[20] == *(_QWORD *)(v23 + 8)
                    && *(_DWORD *)(v23 + 112) == 3 )
                  {
                    break;
                  }
                }
              }
              if ( ++v6 >= v21 )
                goto LABEL_38;
            }
            v12 = 1;
          }
        }
      }
    }
    goto LABEL_38;
  }
  v13 = -1;
  if ( _BitScanForward((unsigned int *)&v15, a2[62] & 0x3FF) )
    v13 = v15;
  if ( v13 != -1 )
    LOBYTE(v6) = v13;
  v16 = (char)v6;
  v17 = *(int *)(*(_QWORD *)(a4 + 8 * v11 + 3032) + 216LL * (unsigned int)(char)v6 + 140);
  if ( (int)v17 <= -1 )
    goto LABEL_38;
  v18 = *(_QWORD *)(a4 + 3160) + 136 * v17;
  if ( !v18 )
    goto LABEL_38;
  if ( *(_QWORD *)(v18 + 120) != v18 + 120 )
  {
LABEL_24:
    VidSchiPostponePresentHistoryToken(v8, (struct VIDSCH_SUBMIT_DATA2 *)a2, a3, (struct _VIDSCH_GLOBAL *)a4);
    return;
  }
  v19 = *(_DWORD *)(v18 + 112);
  if ( v19 == 3 )
  {
    if ( *((_DWORD *)a2 + 38) == *(_DWORD *)v18 && *((_DWORD *)a2 + 39) == *(_DWORD *)(v18 + 4) )
    {
      v20 = 0;
      if ( a2[20] == *(_QWORD *)(v18 + 8) )
        v12 = 1;
      goto LABEL_39;
    }
    goto LABEL_38;
  }
  if ( v19 != 1
    || !VidSchiCheckTokenIndependentFlipCondition((struct _VIDSCH_GLOBAL *)a4, (const struct VIDSCH_SUBMIT_DATA2 *)a2) )
  {
LABEL_38:
    v20 = 0;
    goto LABEL_39;
  }
  if ( *(_BYTE *)(v18 + 97) )
  {
    if ( !VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)a4, v11, v16) )
      goto LABEL_24;
    goto LABEL_38;
  }
  *(_BYTE *)(v18 + 97) = 1;
  v20 = 1;
LABEL_39:
  VidSchiProcessPresentHistoryToken(v8, (struct VIDSCH_SUBMIT_DATA2 *)a2, a3, v20, v12);
}
