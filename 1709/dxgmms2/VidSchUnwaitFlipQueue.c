/*
 * XREFs of VidSchUnwaitFlipQueue @ 0x1C0003BD0
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008120 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C001437C (-VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C00243A4 (-VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C002A5A0 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 * Callees:
 *     VidSchiExecuteMmIoFlip @ 0x1C00029E0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0006A70 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiCompletePendingFlip @ 0x1C0015E0C (VidSchiCompletePendingFlip.c)
 *     VidSchiRestartQueuedFlip @ 0x1C00299B0 (VidSchiRestartQueuedFlip.c)
 */

__int64 __fastcall VidSchUnwaitFlipQueue(struct _VIDSCH_GLOBAL *a1)
{
  __int64 result; // rax
  unsigned int v3; // r13d
  __int64 v4; // rbp
  bool v5; // zf
  unsigned int v6; // r12d
  unsigned int **v7; // rdx
  unsigned int *v8; // r15
  __int64 v9; // r14
  unsigned int *v10; // rbx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // r11
  __int64 v15; // rdx
  unsigned int v16; // r10d
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  bool v19; // cc
  int v20; // eax
  unsigned int v21; // eax
  int v22; // r8d
  int v23; // edx
  int v24; // edx
  unsigned int *v25; // r9
  unsigned int v26; // r8d
  unsigned int v27; // edx
  int v28; // r8d
  unsigned int v29; // r8d
  int v30; // edx
  int v31; // edx
  unsigned int v32; // eax
  int v33; // r10d
  unsigned int v34; // eax
  unsigned int *v35; // r9
  unsigned int v36; // r8d
  unsigned int v37; // edx
  int v38; // r8d
  unsigned int v39; // r8d
  int v40; // edx
  int v41; // edx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  __int64 v43; // [rsp+70h] [rbp+8h] BYREF
  int v44; // [rsp+78h] [rbp+10h]
  unsigned int **v45; // [rsp+80h] [rbp+18h]

  result = (__int64)&retaddr;
  v3 = 0;
  if ( !*((_DWORD *)a1 + 10) )
    return result;
  do
  {
    result = v3;
    v4 = *((_QWORD *)a1 + v3 + 376);
    if ( !*(_BYTE *)(v4 + 56804) )
      goto LABEL_88;
    v5 = *((_DWORD *)a1 + 32) == 0;
    v6 = 0;
    LOBYTE(v43) = 0;
    if ( v5 )
      goto LABEL_88;
    do
    {
      result = v6;
      v7 = (unsigned int **)(v4 + 8LL * v6 + 24);
      v45 = v7;
      v8 = *v7;
      if ( !*v7 )
        goto LABEL_85;
      v44 = 1;
      while ( 1 )
      {
        v9 = v8[9];
        v10 = &v8[308 * v9];
        v11 = v10[277];
        if ( v11 != 1 )
        {
          result = v11 - 2;
          if ( (result & 0xFFFFFFFD) != 0 )
          {
            if ( v11 != 3 )
              goto LABEL_85;
          }
          else
          {
            v33 = *(_DWORD *)(v4 + 4);
            if ( v33 == 3
              || v33 == 5 && (v10[294] & 0x100) != 0 && (v34 = v8[308 * v8[11] + 277], v34 != 5) && v34 != 15 )
            {
              if ( !*((_BYTE *)a1 + 132) )
                goto LABEL_83;
              v35 = *v7;
              v36 = (*v7)[11];
              v37 = (*v7)[12];
              v38 = ((_BYTE)v36 - 1) & 0x3F;
              if ( v37 == v38 )
              {
LABEL_71:
                v39 = v10[294];
                if ( (v39 & 0x10) != 0 )
                  v40 = ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF;
                else
                  v40 = (1 << *((_DWORD *)a1 + 32)) - 1;
                if ( (v40 & *(_DWORD *)(v4 + 2956)) == 0 )
                {
                  if ( *((_DWORD *)a1 + 34) > 1u && v33 != 3 && (v39 & 0x100) == 0 && (v39 & 0x80u) != 0 )
                    goto LABEL_83;
                  v41 = (v10[294] & 0x10) != 0
                      ? ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF
                      : (1 << *((_DWORD *)a1 + 32)) - 1;
                  if ( (v41 & *(_DWORD *)(v4 + 2952)) == 0 )
                    goto LABEL_83;
                }
              }
              else
              {
                while ( v35[308 * v37 + 277] != 14 )
                {
                  v37 = ((_BYTE)v37 - 1) & 0x3F;
                  if ( v37 == v38 )
                    goto LABEL_71;
                }
              }
            }
          }
          goto LABEL_84;
        }
        v12 = v10[284];
        v13 = *((_QWORD *)v10 + 137);
        v14 = v12 ? *(_QWORD *)&v10[2 * v12 + 12] : 0LL;
        if ( !*(_BYTE *)(v13 + 164) && !_InterlockedCompareExchange((volatile signed __int32 *)(v13 + 160), 0, 0) )
          break;
LABEL_21:
        v20 = *(_DWORD *)(v4 + 4);
        if ( v20 == 3 )
        {
          if ( *((_BYTE *)a1 + 132) )
          {
            v21 = (*v7)[12];
            v22 = ((unsigned __int8)(*v7)[11] - 1) & 0x3F;
            if ( v21 != v22 )
            {
              while ( (*v7)[308 * v21 + 277] != 14 )
              {
                v21 = ((_BYTE)v21 - 1) & 0x3F;
                if ( v21 == v22 )
                  goto LABEL_26;
              }
LABEL_34:
              v10[277] = 2;
              *((_QWORD *)v10 + 143) = MEMORY[0xFFFFF78000000320];
              goto LABEL_84;
            }
LABEL_26:
            if ( (v10[294] & 0x10) != 0 )
              v23 = ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF;
            else
              v23 = (1 << *((_DWORD *)a1 + 32)) - 1;
            if ( (v23 & *(_DWORD *)(v4 + 2956)) != 0 )
              goto LABEL_34;
            v24 = (v10[294] & 0x10) != 0
                ? ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF
                : (1 << *((_DWORD *)a1 + 32)) - 1;
            if ( (v24 & *(_DWORD *)(v4 + 2952)) != 0 )
              goto LABEL_34;
          }
LABEL_83:
          v10[277] = 4;
          VidSchiExecuteMmIoFlip(a1, v3, v6, v9, &v43);
          goto LABEL_84;
        }
        if ( v20 == 5 )
        {
          v5 = v44 == 0;
          v10[277] = 2;
          if ( !v5 )
          {
            v44 = 0;
            if ( (_DWORD)v9 == v8[10] || *((_BYTE *)v10 + 1120) )
            {
              *((_QWORD *)v10 + 143) = MEMORY[0xFFFFF78000000320];
              if ( *((_BYTE *)a1 + 132) )
              {
                v25 = *v7;
                v26 = (*v7)[11];
                v27 = (*v7)[12];
                v28 = ((_BYTE)v26 - 1) & 0x3F;
                if ( v27 != v28 )
                {
                  while ( v25[308 * v27 + 277] != 14 )
                  {
                    v27 = ((_BYTE)v27 - 1) & 0x3F;
                    if ( v27 == v28 )
                      goto LABEL_43;
                  }
                  goto LABEL_84;
                }
LABEL_43:
                v29 = v10[294];
                if ( (v29 & 0x10) != 0 )
                  v30 = ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF;
                else
                  v30 = (1 << *((_DWORD *)a1 + 32)) - 1;
                if ( (v30 & *(_DWORD *)(v4 + 2956)) != 0 )
                  goto LABEL_84;
                if ( *((_DWORD *)a1 + 34) > 1u && *(_DWORD *)(v4 + 4) != 3 && (v29 & 0x100) == 0 && (v29 & 0x80u) != 0 )
                  goto LABEL_55;
              }
              if ( (v10[294] & 0x10) != 0 )
                v31 = ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF;
              else
                v31 = (1 << *((_DWORD *)a1 + 32)) - 1;
              if ( (v31 & *(_DWORD *)(v4 + 2952)) == 0 )
              {
LABEL_55:
                if ( *((_BYTE *)v10 + 1120) )
                  VidSchiRestartQueuedFlip(v13, v3, v6, (unsigned int)v9);
                v32 = v10[279];
                if ( v32 )
                {
                  v10[277] = 3;
                  v10[279] = v32 - 1;
                  goto LABEL_84;
                }
                goto LABEL_83;
              }
            }
          }
        }
LABEL_84:
        v7 = v45;
        v8[9] = ((_BYTE)v9 + 1) & 0x3F;
      }
      v15 = 0LL;
      v16 = v10[284];
      if ( !v16 )
      {
LABEL_18:
        if ( v14 )
        {
          LOBYTE(v15) = 1;
          VidSchiUpdateLastCompletedPresentTimestamp(v14, v15, 0LL);
        }
        v7 = v45;
        goto LABEL_21;
      }
      while ( 1 )
      {
        result = *(_QWORD *)&v10[2 * (unsigned int)v15 + 14];
        v17 = v10[2 * (unsigned int)v15 + 145];
        v18 = *(_DWORD *)(result + 156);
        v19 = v17 <= v18;
        if ( v17 == v18 )
        {
          result = *(unsigned int *)(result + 152);
          if ( v10[2 * (unsigned int)v15 + 144] > (unsigned int)result )
            break;
          v19 = v17 <= v18;
        }
        if ( !v19 )
          break;
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= v16 )
          goto LABEL_18;
      }
LABEL_85:
      ++v6;
    }
    while ( v6 < *((_DWORD *)a1 + 32) );
    if ( (_BYTE)v43 )
      result = VidSchiCompletePendingFlip(a1, v3, 9LL);
LABEL_88:
    ++v3;
  }
  while ( v3 < *((_DWORD *)a1 + 10) );
  return result;
}
