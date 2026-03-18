/*
 * XREFs of ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C000FCE8
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0004480 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C0025F40 (VidSchiExecutePostPresentAtPassiveLevel.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0003040 (VidSchiCompleteFlipEntry.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000C430 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiRestartQueuedFlip @ 0x1C002763C (VidSchiRestartQueuedFlip.c)
 */

void __fastcall VidSchiExecuteNextFlipQueueEntry(struct _VIDSCH_GLOBAL *a1, bool *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r13d
  unsigned int v6; // ebp
  bool *v7; // r12
  _DWORD *v8; // r14
  __int64 v9; // rcx
  unsigned int *v10; // r15
  __int64 v11; // r10
  unsigned int v12; // esi
  __int64 v13; // rbx
  unsigned int v14; // r8d
  __int64 v15; // r11
  char v16; // r12
  int v17; // r8d
  int v18; // edx
  int v19; // eax
  unsigned int i; // edx
  int v21; // edx
  char v22; // al
  __int64 v23; // r9
  unsigned int j; // edx
  unsigned int v25; // r9d
  unsigned int v26; // edx
  unsigned int *v27; // r11
  __int64 v28; // rbp
  unsigned int k; // r8d
  unsigned int v30; // r10d
  int v31; // r8d
  __int64 v32; // [rsp+40h] [rbp-58h]
  char v33; // [rsp+A0h] [rbp+8h] BYREF
  bool *v34; // [rsp+A8h] [rbp+10h]
  unsigned int v35; // [rsp+B0h] [rbp+18h]
  unsigned int v36; // [rsp+B8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v4 = a4;
  v6 = a3;
  v7 = a2;
  v8 = (_DWORD *)*((_QWORD *)a1 + a3 + 374);
  v9 = a4;
  v32 = a4;
  v10 = *(unsigned int **)&v8[2 * a4 + 6];
  v11 = v10[10];
  v12 = v10[10];
  v13 = (__int64)&v10[306 * v11 + 14];
  if ( v8[575] )
  {
    v14 = ((_BYTE)v11 + 1) & 0x3F;
    if ( v14 != (_DWORD)v11 )
    {
      do
      {
        v15 = (__int64)&v10[306 * v14 + 14];
        if ( (unsigned int)(*(_DWORD *)(v15 + 1044) - 2) > 1 )
          break;
        if ( !*((_BYTE *)a1 + 132) )
          goto LABEL_29;
        for ( i = v10[12]; i != (((unsigned __int8)v10[11] - 1) & 0x3F); i = ((_BYTE)i - 1) & 0x3F )
        {
          if ( v10[306 * i + 275] == 14 )
            goto LABEL_4;
        }
        if ( *((_DWORD *)a1 + 34) <= 1u || v8[1] == 3 || (*(_DWORD *)(v15 + 1112) & 0x180) != 0x80 )
        {
LABEL_29:
          v21 = (*(_DWORD *)(v15 + 1112) & 0x10) != 0
              ? (unsigned __int8)**(_DWORD **)(v15 + 1152) | *(unsigned __int8 *)(*(_QWORD *)(v15 + 1152) + 1LL)
              : (1 << *((_DWORD *)a1 + 32)) - 1;
          if ( (v21 & v8[579]) != 0 )
            break;
        }
        v22 = *(_BYTE *)(v15 + 1056);
        if ( v22 )
          v12 = v14;
        v14 = ((_BYTE)v14 + 1) & 0x3F;
        if ( !v22 )
          v15 = v13;
        v13 = v15;
      }
      while ( v14 != (_DWORD)v11 );
LABEL_4:
      v9 = a4;
    }
    if ( v12 == (_DWORD)v11 )
    {
      if ( (unsigned int)(*(_DWORD *)(v13 + 1044) - 2) <= 1 )
      {
        *(_QWORD *)(v13 + 1080) = MEMORY[0xFFFFF78000000320];
        v16 = *((_BYTE *)a1 + 132);
        if ( v16 )
        {
          v23 = *(_QWORD *)&v8[2 * v9 + 6];
          for ( j = *(_DWORD *)(v23 + 48);
                j != (((unsigned __int8)*(_DWORD *)(v23 + 44) - 1) & 0x3F);
                j = ((_BYTE)j - 1) & 0x3F )
          {
            if ( *(_DWORD *)(1224LL * j + v23 + 1100) == 14 )
              goto LABEL_14;
          }
          if ( *((_DWORD *)a1 + 34) > 1u && v8[1] != 3 )
          {
            v17 = *(_DWORD *)(v13 + 1112);
            if ( (v17 & 0x180) == 0x80 )
              goto LABEL_11;
          }
        }
        v17 = *(_DWORD *)(v13 + 1112);
        v18 = (v17 & 0x10) != 0
            ? (unsigned __int8)**(_DWORD **)(v13 + 1152) | *(unsigned __int8 *)(*(_QWORD *)(v13 + 1152) + 1LL)
            : (1 << *((_DWORD *)a1 + 32)) - 1;
        if ( (v18 & v8[579]) == 0 )
        {
LABEL_11:
          v19 = *(_DWORD *)(v13 + 1052);
          if ( v19 )
          {
            *(_DWORD *)(v13 + 1044) = 3;
            *(_DWORD *)(v13 + 1052) = v19 - 1;
          }
          else
          {
            if ( (v17 & 0x80u) != 0 )
            {
              v25 = v10[10];
              v26 = ((_BYTE)v25 + 1) & 0x3F;
              if ( v26 != v25 )
              {
                do
                {
                  v27 = &v10[306 * v26];
                  if ( v27[275] != 2 )
                    break;
                  if ( !v16 )
                    goto LABEL_59;
                  v28 = *(_QWORD *)&v8[2 * v32 + 6];
                  for ( k = *(_DWORD *)(v28 + 48);
                        k != (((unsigned __int8)*(_DWORD *)(v28 + 44) - 1) & 0x3F);
                        k = ((_BYTE)k - 1) & 0x3F )
                  {
                    if ( *(_DWORD *)(1224LL * k + v28 + 1100) == 14 )
                      goto LABEL_62;
                  }
                  if ( *((_DWORD *)a1 + 34) <= 1u || v8[1] == 3 || (v30 = v27[292], (v30 & 0x180) != 0x80) )
                  {
LABEL_59:
                    v30 = v27[292];
                    v31 = (v30 & 0x10) != 0
                        ? (unsigned __int8)**((_DWORD **)v27 + 151) | *(unsigned __int8 *)(*((_QWORD *)v27 + 151) + 1LL)
                        : (1 << *((_DWORD *)a1 + 32)) - 1;
                    if ( (v31 & v8[579]) != 0 )
                      break;
                  }
                  v13 = (__int64)(v27 + 14);
                  v12 = v26;
                  if ( (v30 & 0x80u) == 0 )
                    break;
                  v26 = ((_BYTE)v26 + 1) & 0x3F;
                }
                while ( v26 != v25 );
LABEL_62:
                v4 = v36;
                v6 = v35;
              }
              if ( v12 != v25 )
                VidSchiCompleteFlipEntry((__int64)a1, v6, v4, v25, ((_BYTE)v12 - 1) & 0x3F, 6, &v33);
            }
            *(_DWORD *)(v13 + 1044) = 4;
          }
        }
LABEL_14:
        v7 = v34;
      }
    }
    else
    {
      VidSchiRestartQueuedFlip(*(_QWORD *)(*(_QWORD *)&v10[306 * v11 + 14] + 104LL), v6, a4, v12);
      *(_DWORD *)(v13 + 1044) = 4;
    }
    if ( *(_DWORD *)(v13 + 1044) == 4 )
      VidSchiExecuteMmIoFlip(a1, v6, v4, v12, v7);
  }
}
