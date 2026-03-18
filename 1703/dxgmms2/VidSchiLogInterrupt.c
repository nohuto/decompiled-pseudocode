/*
 * XREFs of VidSchiLogInterrupt @ 0x1C000B060
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000AC90 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C002A9B0 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 */

void __fastcall VidSchiLogInterrupt(__int64 a1, unsigned int *a2, char a3)
{
  __int64 v5; // rdx
  __int64 v7; // rdi
  __int64 v8; // rbp
  _OWORD *v9; // rsi
  char v10; // dl
  __int64 v11; // rax
  char v12; // al
  int v13; // edx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  unsigned int v16; // r8d
  __int64 v17; // rdi
  __int64 v18; // rsi
  _OWORD *v19; // rbp
  __int64 v20; // rax
  _QWORD *v21; // rdx
  unsigned int v22; // r8d

  v5 = *a2;
  if ( (_DWORD)v5 == 3 )
  {
    if ( (*(_DWORD *)(a1 + 2152) & 0x1000) != 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v5);
      v21[3] = a1;
      v21[4] = a2[2];
      v21[5] = *((_QWORD *)a2 + 2);
      if ( (a2[18] & 1) != 0 )
        v22 = a2[6];
      else
        v22 = 0;
      v21[6] = v22;
      WdLogEvent5_WdEvent(v21);
    }
    return;
  }
  if ( (_DWORD)v5 == 1 )
  {
    v7 = a2[3] + *(unsigned __int8 *)(a2[4] + a1 + 64);
LABEL_6:
    v8 = *(_QWORD *)(a1 + 8 * v7 + 416);
    v9 = (_OWORD *)(*(_QWORD *)(v8 + 200) + 88LL * *(unsigned int *)(v8 + 212));
    memset(v9, 0, 0x58uLL);
    *((_BYTE *)v9 + 83) = 1;
    v10 = 1;
    *(_DWORD *)(v8 + 212) = (*(_DWORD *)(v8 + 212) + 1) & (*(_DWORD *)(v8 + 208) - 1);
    *((_BYTE *)v9 + 80) = a3;
    v11 = *(_QWORD *)(a1 + 408);
    if ( _bittest64(&v11, (unsigned int)v7) )
      v12 = 0;
    else
      v12 = 1;
    *((_BYTE *)v9 + 82) = v12;
    if ( *(_DWORD *)(v8 + 16) != 1 )
      v10 = 0;
    *((_BYTE *)v9 + 81) = v10;
    *v9 = *(_OWORD *)a2;
    v9[1] = *((_OWORD *)a2 + 1);
    v9[2] = *((_OWORD *)a2 + 2);
    v9[3] = *((_OWORD *)a2 + 3);
    v9[4] = *((_OWORD *)a2 + 4);
    return;
  }
  v13 = v5 - 2;
  if ( !v13 )
  {
    v7 = a2[4] + *(unsigned __int8 *)(a2[5] + a1 + 64);
    goto LABEL_6;
  }
  v14 = (unsigned int)(v13 - 5);
  if ( !(_DWORD)v14 )
  {
    if ( (*(_DWORD *)(a1 + 2152) & 0x1000) == 0 )
      return;
    goto LABEL_19;
  }
  v14 = (unsigned int)(v14 - 2);
  if ( !(_DWORD)v14 )
  {
    v17 = a2[12] + *(unsigned __int8 *)(a2[13] + a1 + 64);
    v18 = *(_QWORD *)(a1 + 8 * v17 + 416);
    v19 = (_OWORD *)(*(_QWORD *)(v18 + 200) + 88LL * *(unsigned int *)(v18 + 212));
    memset(v19, 0, 0x58uLL);
    *((_BYTE *)v19 + 83) = 1;
    *(_DWORD *)(v18 + 212) = (*(_DWORD *)(v18 + 212) + 1) & (*(_DWORD *)(v18 + 208) - 1);
    *((_BYTE *)v19 + 80) = a3;
    v20 = *(_QWORD *)(a1 + 408);
    *((_BYTE *)v19 + 82) = !_bittest64(&v20, (unsigned int)v17);
    *((_BYTE *)v19 + 81) = *(_DWORD *)(v18 + 16) == 1;
    *v19 = *(_OWORD *)a2;
    v19[1] = *((_OWORD *)a2 + 1);
    v19[2] = *((_OWORD *)a2 + 2);
    v19[3] = *((_OWORD *)a2 + 3);
    v19[4] = *((_OWORD *)a2 + 4);
    return;
  }
  if ( (_DWORD)v14 == 1 && (*(_DWORD *)(a1 + 2152) & 0x1000) != 0 )
  {
LABEL_19:
    v15 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, v14);
    v15[3] = a1;
    v15[4] = a2[2];
    if ( (a2[18] & 1) != 0 )
      v16 = a2[3];
    else
      v16 = 0;
    v15[5] = v16;
    v15[6] = a2[4];
    v15[7] = *((_QWORD *)a2 + 3);
    WdLogEvent5_WdEvent(v15);
  }
}
