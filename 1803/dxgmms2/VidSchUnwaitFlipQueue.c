/*
 * XREFs of VidSchUnwaitFlipQueue @ 0x1C000D690
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008A70 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C0013DE0 (-VidSchiSubmitIndependentFlip@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0026E84 (-VidSchiAdvanceContextSubmissionId@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C002D588 (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000C050 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000D930 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C0015864 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002C8AC (VidSchiRestartQueuedFlip.c)
 */

__int64 __fastcall VidSchUnwaitFlipQueue(struct _VIDSCH_GLOBAL *a1)
{
  __int64 result; // rax
  unsigned int i; // esi
  __int64 v4; // rbp
  unsigned int v5; // edi
  __int64 v6; // r12
  _DWORD *v7; // r14
  unsigned int v8; // r13d
  int v9; // edx
  _DWORD *v10; // r15
  int v11; // ecx
  __int64 v12; // r10
  int v13; // eax
  __int64 v14; // r11
  unsigned int v15; // r10d
  int v16; // edx
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  bool v19; // cc
  int v20; // eax
  int v21; // edx
  int v22; // eax
  __int64 v23; // r9
  unsigned int v24; // edx
  int v25; // r8d
  int v26; // ecx
  int v27; // edx
  int v28; // edx
  __int64 v29; // r9
  unsigned int v30; // edx
  int v31; // r8d
  int v32; // edx
  int v33; // r10d
  int v34; // eax
  __int64 v35; // r9
  unsigned int v36; // edx
  int v37; // r8d
  int v38; // r8d
  int v39; // ecx
  int v40; // edx
  int v41; // edx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  __int64 v43; // [rsp+70h] [rbp+8h] BYREF
  int v44; // [rsp+78h] [rbp+10h]
  __int64 v45; // [rsp+80h] [rbp+18h]

  result = (__int64)&retaddr;
  for ( i = 0; i < *((_DWORD *)a1 + 10); ++i )
  {
    result = i;
    v4 = *((_QWORD *)a1 + i + 379);
    if ( !*(_BYTE *)(v4 + 61284) )
      continue;
    v5 = 0;
    if ( !*((_DWORD *)a1 + 33) )
      continue;
    do
    {
      result = v5;
      v6 = v4 + 8LL * v5;
      v7 = *(_DWORD **)(v6 + 24);
      if ( !v7 )
        goto LABEL_5;
      v8 = v7[9];
      v9 = 1;
      v44 = 1;
      LOBYTE(v43) = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = &v7[320 * v8];
          v11 = v10[277];
          if ( v11 == 1 )
            break;
          result = (unsigned int)(v11 - 2);
          if ( (result & 0xFFFFFFFD) != 0 )
          {
            if ( v11 != 3 )
              goto LABEL_12;
          }
          else
          {
            v33 = *(_DWORD *)(v4 + 4);
            if ( v33 == 3
              || v33 == 5 && (v10[294] & 0x100) != 0 && (v34 = v7[320 * v7[11] + 277], v34 != 5) && v34 != 15 )
            {
              if ( v8 == v7[10] )
              {
                if ( !*((_BYTE *)a1 + 136) )
                  goto LABEL_38;
                v35 = *(_QWORD *)(v6 + 24);
                v36 = *(_DWORD *)(v35 + 48);
                v37 = ((unsigned __int8)*(_DWORD *)(v35 + 44) - 1) & 0x3F;
                if ( v36 != v37 )
                {
                  while ( *(_DWORD *)(1280LL * v36 + v35 + 1108) != 14 )
                  {
                    v36 = ((_BYTE)v36 - 1) & 0x3F;
                    if ( v36 == v37 )
                      goto LABEL_84;
                  }
                  goto LABEL_39;
                }
LABEL_84:
                v38 = v10[294];
                v39 = *((_DWORD *)a1 + 33);
                v40 = (v38 & 0x10) != 0
                    ? ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF
                    : (1 << v39) - 1;
                if ( (v40 & *(_DWORD *)(v4 + 2316)) == 0 )
                {
                  if ( *((_DWORD *)a1 + 35) > 1u && v33 != 3 && (v38 & 0x180) == 0x80
                    || ((v10[294] & 0x10) == 0
                      ? (v41 = (1 << v39) - 1)
                      : (v41 = ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF),
                        (v41 & *(_DWORD *)(v4 + 2312)) == 0) )
                  {
LABEL_38:
                    v10[277] = 4;
                    VidSchiExecuteMmIoFlip(a1, (__int64)&v43);
                  }
                }
LABEL_39:
                v9 = v44;
              }
            }
          }
LABEL_40:
          v8 = ((_BYTE)v8 + 1) & 0x3F;
          v7[9] = v8;
        }
        v12 = *((_QWORD *)v10 + 137);
        v13 = v10[284];
        v45 = v12;
        if ( v13 )
          v14 = *(_QWORD *)&v10[2 * (v13 - 1) + 14];
        else
          v14 = 0LL;
        if ( *(_BYTE *)(v12 + 188) || _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 184), 0, 0) )
          goto LABEL_27;
        v15 = v10[284];
        v16 = 0;
        if ( v15 )
          break;
LABEL_24:
        if ( v14 )
          VidSchiUpdateLastCompletedPresentTimestamp(v14, 1, 0);
        v9 = v44;
        v12 = v45;
LABEL_27:
        v20 = *(_DWORD *)(v4 + 4);
        if ( v20 == 3 )
        {
          if ( v8 == v7[10] )
          {
            if ( !*((_BYTE *)a1 + 136) )
              goto LABEL_38;
            v23 = *(_QWORD *)(v6 + 24);
            v24 = *(_DWORD *)(v23 + 48);
            v25 = ((unsigned __int8)*(_DWORD *)(v23 + 44) - 1) & 0x3F;
            if ( v24 == v25 )
            {
LABEL_49:
              v26 = *((_DWORD *)a1 + 33);
              if ( (v10[294] & 0x10) != 0 )
                v27 = ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF;
              else
                v27 = (1 << v26) - 1;
              if ( (v27 & *(_DWORD *)(v4 + 2316)) == 0 )
              {
                v28 = (v10[294] & 0x10) != 0
                    ? ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF
                    : (1 << v26) - 1;
                if ( (v28 & *(_DWORD *)(v4 + 2312)) == 0 )
                  goto LABEL_38;
              }
            }
            else
            {
              while ( *(_DWORD *)(1280LL * v24 + v23 + 1108) != 14 )
              {
                v24 = ((_BYTE)v24 - 1) & 0x3F;
                if ( v24 == v25 )
                  goto LABEL_49;
              }
            }
            v9 = v44;
          }
          v10[277] = 2;
          *((_QWORD *)v10 + 143) = MEMORY[0xFFFFF78000000320];
          goto LABEL_40;
        }
        if ( v20 != 5 )
          goto LABEL_40;
        v10[277] = 2;
        if ( !v9 )
          goto LABEL_40;
        v9 = 0;
        v44 = 0;
        if ( v8 != v7[10] && !*((_BYTE *)v10 + 1120) )
          goto LABEL_40;
        *((_QWORD *)v10 + 143) = MEMORY[0xFFFFF78000000320];
        if ( *((_BYTE *)a1 + 136) )
        {
          v29 = *(_QWORD *)(v6 + 24);
          v30 = *(_DWORD *)(v29 + 48);
          v31 = ((unsigned __int8)*(_DWORD *)(v29 + 44) - 1) & 0x3F;
          if ( v30 != v31 )
          {
            while ( *(_DWORD *)(1280LL * v30 + v29 + 1108) != 14 )
            {
              v30 = ((_BYTE)v30 - 1) & 0x3F;
              if ( v30 == v31 )
                goto LABEL_64;
            }
            goto LABEL_39;
          }
LABEL_64:
          if ( (v10[294] & 0x10) != 0 )
            v32 = ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF;
          else
            v32 = (1 << *((_DWORD *)a1 + 33)) - 1;
          if ( (v32 & *(_DWORD *)(v4 + 2316)) != 0 )
            goto LABEL_39;
          if ( *((_DWORD *)a1 + 35) > 1u && *(_DWORD *)(v4 + 4) != 3 && (v10[294] & 0x180) == 0x80 )
            goto LABEL_98;
        }
        v21 = (v10[294] & 0x10) != 0
            ? ((unsigned __int16)**((_DWORD **)v10 + 152) | (unsigned __int16)(**((_DWORD **)v10 + 152) >> 10)) & 0x3FF
            : (1 << *((_DWORD *)a1 + 33)) - 1;
        if ( (v21 & *(_DWORD *)(v4 + 2312)) == 0 )
        {
LABEL_98:
          if ( *((_BYTE *)v10 + 1120) )
            VidSchiRestartQueuedFlip(v12, i, v5, v8);
          v22 = v10[279];
          if ( !v22 )
            goto LABEL_38;
          v10[277] = 3;
          v10[279] = v22 - 1;
        }
        v9 = v44;
        v8 = ((_BYTE)v8 + 1) & 0x3F;
        v7[9] = v8;
      }
      while ( 1 )
      {
        result = *(_QWORD *)&v10[2 * v16 + 14];
        v17 = v10[2 * v16 + 145];
        v18 = *(_DWORD *)(result + 164);
        v19 = v17 <= v18;
        if ( v17 == v18 )
        {
          result = *(unsigned int *)(result + 160);
          if ( v10[2 * v16 + 144] > (unsigned int)result )
            break;
          v19 = v17 <= v18;
        }
        if ( !v19 )
          break;
        if ( ++v16 >= v15 )
          goto LABEL_24;
      }
LABEL_12:
      if ( (_BYTE)v43 )
        result = VidSchiCompletePendingFlipOnPlane(a1, i, 9LL, v5);
LABEL_5:
      ++v5;
    }
    while ( v5 < *((_DWORD *)a1 + 33) );
  }
  return result;
}
