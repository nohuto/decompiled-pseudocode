/*
 * XREFs of VidSchiLogInterrupt @ 0x1C000C7F0
 * Callers:
 *     VidSchDdiNotifyInterrupt @ 0x1C000C420 (VidSchDdiNotifyInterrupt.c)
 *     ?VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z @ 0x1C0033C70 (-VidSchiCallNotifyInterruptAtISR@@YAEPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0017DC0 (memset.c)
 */

char __fastcall VidSchiLogInterrupt(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v7; // rdi
  __int64 v8; // rbp
  _OWORD *v9; // rsi
  __int64 v10; // rax
  char v11; // al
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  _OWORD *v16; // rbp
  _QWORD *v17; // rdx
  unsigned int v18; // ecx
  _QWORD *v19; // rax
  unsigned int v20; // ecx

  LODWORD(v3) = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 1 )
  {
    v7 = *(_DWORD *)(a2 + 12) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 16) + a1 + 68);
    v8 = *(_QWORD *)(a1 + 8 * v7 + 440);
    v9 = (_OWORD *)(*(_QWORD *)(v8 + 200) + 88LL * *(unsigned int *)(v8 + 212));
    memset(v9, 0, 0x58uLL);
    *((_BYTE *)v9 + 83) = 1;
    *(_DWORD *)(v8 + 212) = (*(_DWORD *)(v8 + 212) + 1) & (*(_DWORD *)(v8 + 208) - 1);
    *((_BYTE *)v9 + 80) = a3;
    v10 = *(_QWORD *)(a1 + 432);
    if ( _bittest64(&v10, (unsigned int)v7) )
LABEL_12:
      v11 = 0;
    else
      v11 = 1;
LABEL_4:
    *((_BYTE *)v9 + 82) = v11;
    LOBYTE(v3) = *(_DWORD *)(v8 + 16) == 1;
    *((_BYTE *)v9 + 81) = v3;
    *v9 = *(_OWORD *)a2;
    v9[1] = *(_OWORD *)(a2 + 16);
    v9[2] = *(_OWORD *)(a2 + 32);
    v9[3] = *(_OWORD *)(a2 + 48);
    v9[4] = *(_OWORD *)(a2 + 64);
  }
  else if ( (_DWORD)v3 == 3 )
  {
    if ( (*(_DWORD *)(a1 + 2192) & 0x100) != 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
      v19[3] = a1;
      v19[4] = *(unsigned int *)(a2 + 8);
      v19[5] = *(_QWORD *)(a2 + 16);
      if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
        v20 = *(_DWORD *)(a2 + 24);
      else
        v20 = 0;
      v19[6] = v20;
      LOBYTE(v3) = WdLogEvent5_WdEvent(v19);
    }
  }
  else
  {
    LODWORD(v3) = v3 - 2;
    switch ( (int)v3 )
    {
      case 0:
        v12 = *(_DWORD *)(a2 + 16) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 20) + a1 + 68);
        v8 = *(_QWORD *)(a1 + 8 * v12 + 440);
        v9 = (_OWORD *)(*(_QWORD *)(v8 + 200) + 88LL * *(unsigned int *)(v8 + 212));
        memset(v9, 0, 0x58uLL);
        *((_BYTE *)v9 + 83) = 1;
        *(_DWORD *)(v8 + 212) = (*(_DWORD *)(v8 + 212) + 1) & (*(_DWORD *)(v8 + 208) - 1);
        *((_BYTE *)v9 + 80) = a3;
        v13 = *(_QWORD *)(a1 + 432);
        if ( _bittest64(&v13, (unsigned int)v12) )
          goto LABEL_12;
        v11 = 1;
        goto LABEL_4;
      case 5:
      case 8:
        if ( (*(_DWORD *)(a1 + 2192) & 0x100) != 0 )
        {
          v17 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, 0x1C0000000uLL);
          v17[3] = a1;
          v17[4] = *(unsigned int *)(a2 + 8);
          if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
            v18 = *(_DWORD *)(a2 + 12);
          else
            v18 = 0;
          v17[5] = v18;
          v17[6] = *(unsigned int *)(a2 + 16);
          v17[7] = *(_QWORD *)(a2 + 24);
          LOBYTE(v3) = WdLogEvent5_WdEvent(v17);
        }
        return v3;
      case 7:
        v14 = *(_DWORD *)(a2 + 48) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a1 + 68);
        goto LABEL_15;
      case 9:
      case 13:
      case 14:
        v14 = *(_DWORD *)(a2 + 8) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 12) + a1 + 68);
LABEL_15:
        v15 = *(_QWORD *)(a1 + 8 * v14 + 440);
        v16 = (_OWORD *)(*(_QWORD *)(v15 + 200) + 88LL * *(unsigned int *)(v15 + 212));
        memset(v16, 0, 0x58uLL);
        *((_BYTE *)v16 + 83) = 1;
        *(_DWORD *)(v15 + 212) = (*(_DWORD *)(v15 + 212) + 1) & (*(_DWORD *)(v15 + 208) - 1);
        *((_BYTE *)v16 + 80) = a3;
        v3 = *(_QWORD *)(a1 + 432);
        *((_BYTE *)v16 + 82) = !_bittest64(&v3, (unsigned int)v14);
        LOBYTE(v3) = *(_DWORD *)(v15 + 16) == 1;
        *((_BYTE *)v16 + 81) = v3;
        *v16 = *(_OWORD *)a2;
        v16[1] = *(_OWORD *)(a2 + 16);
        v16[2] = *(_OWORD *)(a2 + 32);
        v16[3] = *(_OWORD *)(a2 + 48);
        v16[4] = *(_OWORD *)(a2 + 64);
        break;
      default:
        return v3;
    }
  }
  return v3;
}
