/*
 * XREFs of ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C0012A30
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004B50 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C0028030 (VidSchiExecutePostPresentAtPassiveLevel.c)
 * Callees:
 *     VidSchiExecuteMmIoFlip @ 0x1C00029E0 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiCompleteFlipEntry @ 0x1C0005730 (VidSchiCompleteFlipEntry.c)
 *     VidSchiRestartQueuedFlip @ 0x1C00299B0 (VidSchiRestartQueuedFlip.c)
 */

void __fastcall VidSchiExecuteNextFlipQueueEntry(struct _VIDSCH_GLOBAL *a1, bool *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r12d
  __int64 v6; // r13
  _DWORD *v7; // rbp
  __int64 v8; // rcx
  unsigned int *v9; // r15
  __int64 v10; // r10
  unsigned int v11; // r14d
  __int64 v12; // rbx
  unsigned int v13; // r9d
  __int64 v14; // r11
  unsigned int i; // edx
  int v16; // edx
  int v17; // eax
  int v18; // edx
  char v19; // al
  char v20; // r12
  __int64 v21; // r9
  unsigned int j; // edx
  int v23; // r8d
  int v24; // edx
  int v25; // edx
  int v26; // eax
  unsigned int v27; // r10d
  unsigned int v28; // r8d
  unsigned int *v29; // r11
  __int64 v30; // rsi
  unsigned int k; // edx
  unsigned int v32; // r9d
  int v33; // eax
  int v34; // edx
  __int64 v35; // [rsp+40h] [rbp-58h]
  char v36; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v37; // [rsp+A8h] [rbp+10h]
  unsigned int v38; // [rsp+B0h] [rbp+18h]
  unsigned int v39; // [rsp+B8h] [rbp+20h]

  v39 = a4;
  v38 = a3;
  v37 = (__int64)a2;
  v4 = a3;
  v6 = a4;
  v7 = (_DWORD *)*((_QWORD *)a1 + a3 + 376);
  v8 = a4;
  v35 = a4;
  v9 = *(unsigned int **)&v7[2 * a4 + 6];
  v10 = v9[10];
  v11 = v9[10];
  v12 = (__int64)&v9[308 * v10 + 14];
  if ( v7[735] )
  {
    v13 = ((_BYTE)v10 + 1) & 0x3F;
    if ( v13 != (_DWORD)v10 )
    {
      do
      {
        v14 = (__int64)&v9[308 * v13 + 14];
        if ( (unsigned int)(*(_DWORD *)(v14 + 1052) - 2) > 1 )
          break;
        if ( !*((_BYTE *)a1 + 132) )
          goto LABEL_17;
        for ( i = v9[12]; i != (((unsigned __int8)v9[11] - 1) & 0x3F); i = ((_BYTE)i - 1) & 0x3F )
        {
          if ( v9[308 * i + 277] == 14 )
            goto LABEL_26;
        }
        v16 = *(_DWORD *)(v14 + 1120);
        if ( (v16 & 0x10) != 0 )
          v17 = ((unsigned __int16)**(_DWORD **)(v14 + 1160) | (unsigned __int16)(**(_DWORD **)(v14 + 1160) >> 10)) & 0x3FF;
        else
          v17 = (1 << *((_DWORD *)a1 + 32)) - 1;
        if ( (v17 & v7[739]) != 0 )
          break;
        if ( *((_DWORD *)a1 + 34) <= 1u || v7[1] == 3 || (v16 & 0x100) != 0 || (v16 & 0x80u) == 0 )
        {
LABEL_17:
          if ( (*(_DWORD *)(v14 + 1120) & 0x10) != 0 )
            v18 = ((unsigned __int16)**(_DWORD **)(v14 + 1160) | (unsigned __int16)(**(_DWORD **)(v14 + 1160) >> 10)) & 0x3FF;
          else
            v18 = (1 << *((_DWORD *)a1 + 32)) - 1;
          if ( (v18 & v7[738]) != 0 )
            break;
        }
        v19 = *(_BYTE *)(v14 + 1064);
        if ( v19 )
          v11 = v13;
        v13 = ((_BYTE)v13 + 1) & 0x3F;
        if ( !v19 )
          v14 = v12;
        v12 = v14;
      }
      while ( v13 != (_DWORD)v10 );
LABEL_26:
      v8 = v6;
    }
    if ( v11 != (_DWORD)v10 )
    {
      VidSchiRestartQueuedFlip(*(_QWORD *)&v9[308 * v9[10] + 274], a3, (unsigned int)v6, v11);
LABEL_74:
      *(_DWORD *)(v12 + 1052) = 4;
      goto LABEL_77;
    }
    if ( (unsigned int)(*(_DWORD *)(v12 + 1052) - 2) > 1 )
      goto LABEL_77;
    *(_QWORD *)(v12 + 1088) = MEMORY[0xFFFFF78000000320];
    v20 = *((_BYTE *)a1 + 132);
    if ( v20 )
    {
      v21 = *(_QWORD *)&v7[2 * v8 + 6];
      for ( j = *(_DWORD *)(v21 + 48); j != (((unsigned __int8)*(_DWORD *)(v21 + 44) - 1) & 0x3F); j = ((_BYTE)j - 1) & 0x3F )
      {
        if ( *(_DWORD *)(1232LL * j + v21 + 1108) == 14 )
          goto LABEL_76;
      }
      v23 = *(_DWORD *)(v12 + 1120);
      if ( (v23 & 0x10) != 0 )
        v24 = ((unsigned __int16)**(_DWORD **)(v12 + 1160) | (unsigned __int16)(**(_DWORD **)(v12 + 1160) >> 10)) & 0x3FF;
      else
        v24 = (1 << *((_DWORD *)a1 + 32)) - 1;
      if ( (v24 & v7[739]) != 0 )
        goto LABEL_76;
      if ( *((_DWORD *)a1 + 34) > 1u && v7[1] != 3 && (v23 & 0x100) == 0 && (v23 & 0x80u) != 0 )
        goto LABEL_47;
    }
    v23 = *(_DWORD *)(v12 + 1120);
    v25 = (v23 & 0x10) != 0
        ? ((unsigned __int16)**(_DWORD **)(v12 + 1160) | (unsigned __int16)(**(_DWORD **)(v12 + 1160) >> 10)) & 0x3FF
        : (1 << *((_DWORD *)a1 + 32)) - 1;
    if ( (v25 & v7[738]) == 0 )
    {
LABEL_47:
      v26 = *(_DWORD *)(v12 + 1060);
      if ( !v26 )
      {
        if ( (v23 & 0x80u) == 0 )
        {
          v4 = v38;
        }
        else
        {
          v27 = v9[10];
          v28 = ((_BYTE)v27 + 1) & 0x3F;
          if ( v28 != v27 )
          {
            while ( 1 )
            {
              v29 = &v9[308 * v28];
              if ( v29[277] != 2 )
                break;
              if ( !v20 )
                goto LABEL_64;
              v30 = *(_QWORD *)&v7[2 * v35 + 6];
              for ( k = *(_DWORD *)(v30 + 48);
                    k != (((unsigned __int8)*(_DWORD *)(v30 + 44) - 1) & 0x3F);
                    k = ((_BYTE)k - 1) & 0x3F )
              {
                if ( *(_DWORD *)(1232LL * k + v30 + 1108) == 14 )
                  goto LABEL_70;
              }
              v32 = v29[294];
              if ( (v32 & 0x10) != 0 )
                v33 = ((unsigned __int16)**((_DWORD **)v29 + 152) | (unsigned __int16)(**((_DWORD **)v29 + 152) >> 10)) & 0x3FF;
              else
                v33 = (1 << *((_DWORD *)a1 + 32)) - 1;
              if ( (v33 & v7[739]) != 0 )
                break;
              if ( *((_DWORD *)a1 + 34) <= 1u || v7[1] == 3 || (v32 & 0x100) != 0 || (v32 & 0x80u) == 0 )
              {
LABEL_64:
                v32 = v29[294];
                if ( (v32 & 0x10) != 0 )
                  v34 = ((unsigned __int16)**((_DWORD **)v29 + 152) | (unsigned __int16)(**((_DWORD **)v29 + 152) >> 10)) & 0x3FF;
                else
                  v34 = (1 << *((_DWORD *)a1 + 32)) - 1;
                if ( (v34 & v7[738]) != 0 )
                  break;
              }
              v12 = (__int64)(v29 + 14);
              v11 = v28;
              if ( (v32 & 0x80u) != 0 )
              {
                v28 = ((_BYTE)v28 + 1) & 0x3F;
                if ( v28 != v27 )
                  continue;
              }
              break;
            }
LABEL_70:
            LODWORD(v6) = v39;
          }
          v4 = v38;
          if ( v11 != v27 )
            VidSchiCompleteFlipEntry((__int64)a1, v38, v6, v27, ((_BYTE)v11 - 1) & 0x3F, 6, &v36);
        }
        goto LABEL_74;
      }
      *(_DWORD *)(v12 + 1052) = 3;
      *(_DWORD *)(v12 + 1060) = v26 - 1;
    }
LABEL_76:
    v4 = v38;
LABEL_77:
    if ( *(_DWORD *)(v12 + 1052) == 4 )
      VidSchiExecuteMmIoFlip(a1, v4, v6, v11, (_BYTE *)v37);
  }
}
