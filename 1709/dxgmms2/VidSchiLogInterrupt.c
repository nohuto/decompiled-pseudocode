/*
 * XREFs of VidSchiLogInterrupt @ 0x1C000C340
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000BF70 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C002C4B0 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 */

void __fastcall VidSchiLogInterrupt(__int64 a1, unsigned int *a2, char a3)
{
  __int64 v5; // rdx
  __int64 v7; // rdi
  __int64 v8; // rbp
  _OWORD *v9; // rsi
  __int64 v10; // rax
  char v11; // al
  int v12; // edx
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // rsi
  _OWORD *v18; // rbp
  __int64 v19; // rax
  _QWORD *v20; // rdx
  unsigned int v21; // ecx

  v5 = *a2;
  if ( (_DWORD)v5 == 3 )
  {
    if ( (*(_DWORD *)(a1 + 2168) & 0x400) != 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v5);
      v20[3] = a1;
      v20[4] = a2[2];
      v20[5] = *((_QWORD *)a2 + 2);
      if ( (a2[18] & 1) != 0 )
        v21 = a2[6];
      else
        v21 = 0;
      v20[6] = v21;
      WdLogEvent5_WdEvent(v20);
    }
    return;
  }
  if ( (_DWORD)v5 == 1 )
  {
    v7 = a2[3] + *(unsigned __int8 *)(a2[4] + a1 + 64);
LABEL_6:
    v8 = *(_QWORD *)(a1 + 8 * v7 + 424);
    v9 = (_OWORD *)(*(_QWORD *)(v8 + 200) + 88LL * *(unsigned int *)(v8 + 212));
    memset(v9, 0, 0x58uLL);
    *((_BYTE *)v9 + 83) = 1;
    *(_DWORD *)(v8 + 212) = (*(_DWORD *)(v8 + 212) + 1) & (*(_DWORD *)(v8 + 208) - 1);
    *((_BYTE *)v9 + 80) = a3;
    v10 = *(_QWORD *)(a1 + 416);
    if ( _bittest64(&v10, (unsigned int)v7) )
      v11 = 0;
    else
      v11 = 1;
    *((_BYTE *)v9 + 82) = v11;
    *((_BYTE *)v9 + 81) = *(_DWORD *)(v8 + 16) == 1;
    *v9 = *(_OWORD *)a2;
    v9[1] = *((_OWORD *)a2 + 1);
    v9[2] = *((_OWORD *)a2 + 2);
    v9[3] = *((_OWORD *)a2 + 3);
    v9[4] = *((_OWORD *)a2 + 4);
    return;
  }
  v12 = v5 - 2;
  if ( !v12 )
  {
    v7 = a2[4] + *(unsigned __int8 *)(a2[5] + a1 + 64);
    goto LABEL_6;
  }
  v13 = (unsigned int)(v12 - 5);
  if ( !(_DWORD)v13 )
  {
    if ( (*(_DWORD *)(a1 + 2168) & 0x400) == 0 )
      return;
    goto LABEL_17;
  }
  v13 = (unsigned int)(v13 - 2);
  if ( !(_DWORD)v13 )
  {
    v16 = a2[12] + *(unsigned __int8 *)(a2[13] + a1 + 64);
    v17 = *(_QWORD *)(a1 + 8 * v16 + 424);
    v18 = (_OWORD *)(*(_QWORD *)(v17 + 200) + 88LL * *(unsigned int *)(v17 + 212));
    memset(v18, 0, 0x58uLL);
    *((_BYTE *)v18 + 83) = 1;
    *(_DWORD *)(v17 + 212) = (*(_DWORD *)(v17 + 212) + 1) & (*(_DWORD *)(v17 + 208) - 1);
    *((_BYTE *)v18 + 80) = a3;
    v19 = *(_QWORD *)(a1 + 416);
    *((_BYTE *)v18 + 82) = !_bittest64(&v19, (unsigned int)v16);
    *((_BYTE *)v18 + 81) = *(_DWORD *)(v17 + 16) == 1;
    *v18 = *(_OWORD *)a2;
    v18[1] = *((_OWORD *)a2 + 1);
    v18[2] = *((_OWORD *)a2 + 2);
    v18[3] = *((_OWORD *)a2 + 3);
    v18[4] = *((_OWORD *)a2 + 4);
    return;
  }
  if ( (_DWORD)v13 == 1 && (*(_DWORD *)(a1 + 2168) & 0x400) != 0 )
  {
LABEL_17:
    v14 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v13);
    v14[3] = a1;
    v14[4] = a2[2];
    if ( (a2[18] & 1) != 0 )
      v15 = a2[3];
    else
      v15 = 0;
    v14[5] = v15;
    v14[6] = a2[4];
    v14[7] = *((_QWORD *)a2 + 3);
    WdLogEvent5_WdEvent(v14);
  }
}
