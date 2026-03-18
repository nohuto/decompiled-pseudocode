/*
 * XREFs of VidSchUnwaitFlipQueue @ 0x1C000C020
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00072F0 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0021EF0 (-VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@@Z @ 0x1C0023478 (-VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C00283F4 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000A670 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000C430 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompletePendingFlip @ 0x1C0013B4C (VidSchiCompletePendingFlip.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002763C (VidSchiRestartQueuedFlip.c)
 */

void __fastcall VidSchUnwaitFlipQueue(struct _VIDSCH_GLOBAL *a1)
{
  unsigned int v2; // esi
  __int64 v3; // r15
  unsigned int v4; // edi
  unsigned int *v5; // rbp
  __int64 v6; // r12
  int v7; // r9d
  __int64 v8; // r13
  unsigned int *v9; // r14
  unsigned int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 v14; // rdx
  int v15; // edx
  unsigned int v16; // r11d
  __int64 v17; // rax
  unsigned int v18; // r9d
  unsigned int v19; // r10d
  bool v20; // cc
  int v21; // eax
  int v22; // edx
  unsigned int v23; // eax
  int v24; // edx
  unsigned int v25; // eax
  bool v26; // zf
  __int64 v27; // r9
  unsigned int v28; // edx
  int v29; // r8d
  int v30; // edx
  __int64 v31; // r9
  unsigned int v32; // edx
  int v33; // r8d
  __int64 v34; // [rsp+80h] [rbp+8h] BYREF
  int v35; // [rsp+88h] [rbp+10h]
  __int64 v36; // [rsp+90h] [rbp+18h]
  __int64 v37; // [rsp+98h] [rbp+20h]

  v2 = 0;
  if ( !*((_DWORD *)a1 + 10) )
    return;
  do
  {
    v3 = *((_QWORD *)a1 + v2 + 374);
    if ( !*(_BYTE *)(v3 + 46932) )
      goto LABEL_35;
    v26 = *((_DWORD *)a1 + 32) == 0;
    v4 = 0;
    LOBYTE(v34) = 0;
    if ( v26 )
      goto LABEL_35;
    do
    {
      v5 = *(unsigned int **)(v3 + 8LL * v4 + 24);
      v6 = v3 + 8LL * v4;
      if ( !v5 )
        goto LABEL_32;
      v7 = 1;
      v35 = 1;
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = v5[9];
          v9 = &v5[306 * v8];
          v10 = v9[275];
          if ( v10 == 1 )
            break;
          if ( ((v10 - 2) & 0xFFFFFFFD) != 0 )
          {
            if ( v10 != 3 )
              goto LABEL_32;
            v26 = *(_DWORD *)(v3 + 4) == 5;
            goto LABEL_47;
          }
          v24 = *(_DWORD *)(v3 + 4);
          if ( v24 == 3 )
            goto LABEL_39;
          if ( v24 == 5 )
          {
            if ( (v9[292] & 0x100) != 0 )
            {
              v25 = v5[306 * v5[11] + 275];
              if ( v25 != 5 && v25 != 15 && v25 != 13 )
                goto LABEL_39;
            }
            v26 = 1;
LABEL_47:
            if ( v26 )
              v5[9] = ((_BYTE)v8 + 1) & 0x3F;
          }
        }
        v26 = v9[282] == 0;
        v11 = 0;
        v12 = *((_QWORD *)v9 + 7);
        v36 = 0LL;
        v13 = *(_QWORD *)(v12 + 104);
        v37 = v13;
        if ( !v26 )
        {
          do
          {
            v36 = *(_QWORD *)&v9[2 * v11 + 14];
            v14 = *(_QWORD *)(v36 + 104);
            if ( *(_BYTE *)(v14 + 164) || _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 160), 0, 0) )
              goto LABEL_18;
          }
          while ( ++v11 < v9[282] );
        }
        v15 = 0;
        v16 = v9[282];
        if ( v16 )
          break;
LABEL_17:
        VidSchiUpdateLastCompletedPresentTimestamp(v36, 1, 0);
        v7 = v35;
        v13 = v37;
LABEL_18:
        --*((_DWORD *)a1 + 242);
        --*(_DWORD *)(v3 + 2304);
        v21 = *(_DWORD *)(v3 + 4);
        if ( v21 == 3 )
        {
          if ( !*((_BYTE *)a1 + 132) )
            goto LABEL_39;
          v27 = *(_QWORD *)(v6 + 24);
          v28 = *(_DWORD *)(v27 + 48);
          v29 = ((unsigned __int8)*(_DWORD *)(v27 + 44) - 1) & 0x3F;
          if ( v28 == v29 )
          {
LABEL_59:
            if ( (v9[292] & 0x10) != 0 )
              v30 = (unsigned __int8)**((_DWORD **)v9 + 151) | *(unsigned __int8 *)(*((_QWORD *)v9 + 151) + 1LL);
            else
              v30 = (1 << *((_DWORD *)a1 + 32)) - 1;
            if ( (v30 & *(_DWORD *)(v3 + 2316)) == 0 )
            {
LABEL_39:
              v9[275] = 4;
              VidSchiExecuteMmIoFlip(a1, (__int64)&v34);
              goto LABEL_40;
            }
          }
          else
          {
            while ( *(_DWORD *)(1224LL * v28 + v27 + 1100) != 14 )
            {
              v28 = ((_BYTE)v28 - 1) & 0x3F;
              if ( v28 == v29 )
                goto LABEL_59;
            }
          }
          v9[275] = 2;
          *((_QWORD *)v9 + 142) = MEMORY[0xFFFFF78000000320];
LABEL_40:
          v7 = v35;
          v5[9] = ((_BYTE)v8 + 1) & 0x3F;
        }
        else if ( v21 == 5 )
        {
          v9[275] = 2;
          v5[9] = ((_BYTE)v8 + 1) & 0x3F;
          if ( v7 )
          {
            v7 = 0;
            v35 = 0;
            if ( (_DWORD)v8 == v5[10] || *((_BYTE *)v9 + 1112) )
            {
              *((_QWORD *)v9 + 142) = MEMORY[0xFFFFF78000000320];
              if ( !*((_BYTE *)a1 + 132) )
                goto LABEL_23;
              v31 = *(_QWORD *)(v6 + 24);
              v32 = *(_DWORD *)(v31 + 48);
              v33 = ((unsigned __int8)*(_DWORD *)(v31 + 44) - 1) & 0x3F;
              if ( v32 == v33 )
              {
LABEL_67:
                v7 = 0;
                if ( *((_DWORD *)a1 + 34) > 1u && *(_DWORD *)(v3 + 4) != 3 && (v9[292] & 0x180) == 0x80 )
                {
LABEL_26:
                  if ( *((_BYTE *)v9 + 1112) )
                  {
                    VidSchiRestartQueuedFlip(v13, v2, v4, (unsigned int)v8);
                    v7 = v35;
                  }
                  v23 = v9[277];
                  if ( v23 )
                  {
                    v9[275] = 3;
                    v9[277] = v23 - 1;
                  }
                  else
                  {
                    v9[275] = 4;
                    VidSchiExecuteMmIoFlip(a1, (__int64)&v34);
                    v7 = v35;
                  }
                }
                else
                {
LABEL_23:
                  if ( (v9[292] & 0x10) != 0 )
                    v22 = (unsigned __int8)**((_DWORD **)v9 + 151) | *(unsigned __int8 *)(*((_QWORD *)v9 + 151) + 1LL);
                  else
                    v22 = (1 << *((_DWORD *)a1 + 32)) - 1;
                  if ( (v22 & *(_DWORD *)(v3 + 2316)) == 0 )
                    goto LABEL_26;
                }
              }
              else
              {
                while ( *(_DWORD *)(1224LL * v32 + v31 + 1100) != 14 )
                {
                  v32 = ((_BYTE)v32 - 1) & 0x3F;
                  if ( v32 == v33 )
                    goto LABEL_67;
                }
                v7 = 0;
              }
            }
          }
        }
      }
      while ( 1 )
      {
        v17 = *(_QWORD *)&v9[2 * v15 + 14];
        v18 = v9[2 * v15 + 145];
        v19 = *(_DWORD *)(v17 + 156);
        v20 = v18 <= v19;
        if ( v18 == v19 )
        {
          if ( v9[2 * v15 + 144] > *(_DWORD *)(v17 + 152) )
            break;
          v20 = v18 <= v19;
        }
        if ( !v20 )
          break;
        if ( ++v15 >= v16 )
          goto LABEL_17;
      }
LABEL_32:
      ++v4;
    }
    while ( v4 < *((_DWORD *)a1 + 32) );
    if ( (_BYTE)v34 )
      VidSchiCompletePendingFlip(a1, v2, 9LL);
LABEL_35:
    ++v2;
  }
  while ( v2 < *((_DWORD *)a1 + 10) );
}
