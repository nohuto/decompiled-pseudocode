/*
 * XREFs of ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C001161C
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000F6B0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C002AE60 (VidSchiExecutePostPresentAtPassiveLevel.c)
 * Callees:
 *     VidSchiExecuteMmIoFlip @ 0x1C000D930 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0010550 (VidSchiCompleteFlipEntry.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002C8AC (VidSchiRestartQueuedFlip.c)
 */

void __fastcall VidSchiExecuteNextFlipQueueEntry(struct _VIDSCH_GLOBAL *a1, bool *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebp
  unsigned int v6; // r12d
  _DWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r13
  __int64 v10; // r11
  unsigned int v11; // r15d
  __int64 v12; // r10
  __int64 v13; // rbx
  __int64 v14; // r9
  unsigned int v15; // r12d
  __int64 v16; // r14
  int v17; // eax
  char v18; // r14
  int v19; // r8d
  int v20; // edx
  int v21; // eax
  unsigned int v22; // esi
  __int64 v23; // rbp
  unsigned int i; // edx
  int v25; // edx
  int v26; // eax
  __int64 v27; // r9
  unsigned int j; // edx
  int v29; // edx
  unsigned int v30; // r10d
  __int64 v31; // r8
  __int64 v32; // r11
  __int64 v33; // rbp
  unsigned int k; // edx
  int v35; // r9d
  int v36; // edx
  int v37; // eax
  __int64 v38; // [rsp+40h] [rbp-58h]
  char v39; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v40; // [rsp+A8h] [rbp+10h]
  unsigned int v41; // [rsp+B0h] [rbp+18h]
  unsigned int v42; // [rsp+B8h] [rbp+20h]

  v42 = a4;
  v41 = a3;
  v40 = (__int64)a2;
  v4 = a3;
  v6 = a4;
  v7 = (_DWORD *)*((_QWORD *)a1 + a3 + 379);
  v8 = a4;
  v38 = a4;
  v9 = *(_QWORD *)&v7[2 * a4 + 6];
  v10 = *(unsigned int *)(v9 + 40);
  v11 = *(_DWORD *)(v9 + 40);
  v12 = v10;
  v13 = 1280 * v10 + v9 + 56;
  if ( v7[575] )
  {
    v14 = ((_BYTE)v10 + 1) & 0x3F;
    if ( (_DWORD)v14 != (_DWORD)v10 )
    {
      do
      {
        v15 = v14;
        v16 = 1280 * v14 + v9 + 56;
        if ( (unsigned int)(*(_DWORD *)(v16 + 1052) - 2) > 1 )
          break;
        if ( !*((_BYTE *)a1 + 136) )
          goto LABEL_33;
        v23 = *(_QWORD *)&v7[2 * (unsigned int)v8 + 6];
        for ( i = *(_DWORD *)(v23 + 48);
              i != (((unsigned __int8)*(_DWORD *)(v23 + 44) - 1) & 0x3F);
              i = ((_BYTE)i - 1) & 0x3F )
        {
          if ( *(_DWORD *)(1280LL * i + v23 + 1108) == 14 )
            goto LABEL_4;
        }
        if ( (*(_DWORD *)(v16 + 1120) & 0x10) != 0 )
          v25 = ((unsigned __int16)**(_DWORD **)(v16 + 1160) | (unsigned __int16)(**(_DWORD **)(v16 + 1160) >> 10)) & 0x3FF;
        else
          v25 = (1 << *((_DWORD *)a1 + 33)) - 1;
        if ( (v25 & v7[579]) != 0 )
          break;
        if ( *((_DWORD *)a1 + 35) <= 1u || v7[1] == 3 || (*(_DWORD *)(v16 + 1120) & 0x180) != 0x80 )
        {
LABEL_33:
          if ( (*(_DWORD *)(v16 + 1120) & 0x10) != 0 )
            v26 = ((unsigned __int16)**(_DWORD **)(v16 + 1160) | (unsigned __int16)(**(_DWORD **)(v16 + 1160) >> 10)) & 0x3FF;
          else
            v26 = (1 << *((_DWORD *)a1 + 33)) - 1;
          if ( (v26 & v7[578]) != 0 )
            break;
        }
        v14 = ((_BYTE)v14 + 1) & 0x3F;
        if ( !*(_BYTE *)(v16 + 1064) )
        {
          v15 = v11;
          v16 = v13;
        }
        v11 = v15;
        v13 = v16;
      }
      while ( (_DWORD)v14 != (_DWORD)v10 );
LABEL_4:
      v6 = v42;
      v12 = *(unsigned int *)(v9 + 40);
      v4 = v41;
      v8 = v38;
    }
    if ( v11 != (_DWORD)v10 )
    {
      VidSchiRestartQueuedFlip(*(_QWORD *)(1280 * v12 + v9 + 1096), v4, v6, v11);
      v17 = 4;
      *(_DWORD *)(v13 + 1052) = 4;
      goto LABEL_19;
    }
    v17 = *(_DWORD *)(v13 + 1052);
    if ( v17 != 2 && v17 != 3 )
      goto LABEL_19;
    *(_QWORD *)(v13 + 1088) = MEMORY[0xFFFFF78000000320];
    v18 = *((_BYTE *)a1 + 136);
    if ( v18 )
    {
      v27 = *(_QWORD *)&v7[2 * v8 + 6];
      for ( j = *(_DWORD *)(v27 + 48); j != (((unsigned __int8)*(_DWORD *)(v27 + 44) - 1) & 0x3F); j = ((_BYTE)j - 1) & 0x3F )
      {
        if ( *(_DWORD *)(1280LL * j + v27 + 1108) == 14 )
          goto LABEL_20;
      }
      v19 = *(_DWORD *)(v13 + 1120);
      if ( (v19 & 0x10) != 0 )
        v29 = ((unsigned __int16)**(_DWORD **)(v13 + 1160) | (unsigned __int16)(**(_DWORD **)(v13 + 1160) >> 10)) & 0x3FF;
      else
        v29 = (1 << *((_DWORD *)a1 + 33)) - 1;
      if ( (v29 & v7[579]) != 0 )
        goto LABEL_20;
      if ( *((_DWORD *)a1 + 35) > 1u && v7[1] != 3 && (*(_DWORD *)(v13 + 1120) & 0x180) == 0x80 )
      {
LABEL_11:
        v21 = *(_DWORD *)(v13 + 1060);
        if ( !v21 )
        {
          if ( (v19 & 0x80u) != 0 )
          {
            v30 = *(_DWORD *)(v9 + 40);
            v31 = ((_BYTE)v30 + 1) & 0x3F;
            if ( (_DWORD)v31 != v30 )
            {
              while ( 1 )
              {
                v32 = v9 + 1280 * v31;
                if ( *(_DWORD *)(v32 + 1108) != 2 )
                  break;
                if ( !v18 )
                  goto LABEL_69;
                v33 = *(_QWORD *)&v7[2 * v38 + 6];
                for ( k = *(_DWORD *)(v33 + 48);
                      k != (((unsigned __int8)*(_DWORD *)(v33 + 44) - 1) & 0x3F);
                      k = ((_BYTE)k - 1) & 0x3F )
                {
                  if ( *(_DWORD *)(1280LL * k + v33 + 1108) == 14 )
                    goto LABEL_75;
                }
                v35 = *(_DWORD *)(v32 + 1176);
                if ( (v35 & 0x10) != 0 )
                  v36 = ((unsigned __int16)**(_DWORD **)(v32 + 1216) | (unsigned __int16)(**(_DWORD **)(v32 + 1216) >> 10)) & 0x3FF;
                else
                  v36 = (1 << *((_DWORD *)a1 + 33)) - 1;
                if ( (v36 & v7[579]) != 0 )
                  break;
                if ( *((_DWORD *)a1 + 35) <= 1u || v7[1] == 3 || (*(_DWORD *)(v32 + 1176) & 0x180) != 0x80 )
                {
LABEL_69:
                  v35 = *(_DWORD *)(v32 + 1176);
                  if ( (v35 & 0x10) != 0 )
                    v37 = ((unsigned __int16)**(_DWORD **)(v32 + 1216) | (unsigned __int16)(**(_DWORD **)(v32 + 1216) >> 10)) & 0x3FF;
                  else
                    v37 = (1 << *((_DWORD *)a1 + 33)) - 1;
                  if ( (v37 & v7[578]) != 0 )
                    break;
                }
                v13 = v32 + 56;
                v11 = v31;
                if ( (v35 & 0x80u) != 0 )
                {
                  v31 = ((_BYTE)v31 + 1) & 0x3F;
                  if ( (_DWORD)v31 != v30 )
                    continue;
                }
                break;
              }
LABEL_75:
              v6 = v42;
            }
            v22 = v41;
            if ( v11 != v30 )
              VidSchiCompleteFlipEntry((__int64)a1, v41, v6, v30, ((_BYTE)v11 - 1) & 0x3F, 6, &v39);
          }
          else
          {
            v22 = v41;
          }
          v17 = 4;
          *(_DWORD *)(v13 + 1052) = 4;
          goto LABEL_15;
        }
        *(_DWORD *)(v13 + 1052) = 3;
        *(_DWORD *)(v13 + 1060) = v21 - 1;
        v17 = 3;
LABEL_19:
        v22 = v41;
LABEL_15:
        if ( v17 == 4 )
          VidSchiExecuteMmIoFlip(a1, v22, v6, v11, (_BYTE *)v40);
        return;
      }
    }
    v19 = *(_DWORD *)(v13 + 1120);
    if ( (v19 & 0x10) != 0 )
      v20 = ((unsigned __int16)**(_DWORD **)(v13 + 1160) | (unsigned __int16)(**(_DWORD **)(v13 + 1160) >> 10)) & 0x3FF;
    else
      v20 = (1 << *((_DWORD *)a1 + 33)) - 1;
    if ( (v20 & v7[578]) == 0 )
      goto LABEL_11;
LABEL_20:
    v17 = *(_DWORD *)(v13 + 1052);
    goto LABEL_19;
  }
}
