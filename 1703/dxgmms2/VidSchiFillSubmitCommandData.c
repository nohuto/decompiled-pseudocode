/*
 * XREFs of VidSchiFillSubmitCommandData @ 0x1C00125AC
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0006B50 (VidSchiSendToExecutionQueue.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 */

__int64 __fastcall VidSchiFillSubmitCommandData(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(_QWORD *)(v5 + 24);
  memset(a2, 0, 0x60uLL);
  if ( (*(_DWORD *)(v2 + 112) & 2) != 0 )
    goto LABEL_13;
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
    LODWORD(v7) = (*(_DWORD *)(v7 + 72) >> 15) & 1;
  if ( (_DWORD)v7 )
LABEL_13:
    v8 = 8;
  else
    v8 = 0;
  v9 = v8 | a2[9] & 0xFFFFFFF7;
  *((_DWORD *)a2 + 18) = v9;
  v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(*(_DWORD *)(a1 + 92) >> 6)) & 0x40;
  *((_DWORD *)a2 + 18) = v10;
  v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(*(_DWORD *)(a1 + 92) >> 7)) & 0x80;
  *((_DWORD *)a2 + 18) = v11;
  if ( *(_DWORD *)(a1 + 88) )
  {
    *((_DWORD *)a2 + 18) = v11 | 1;
    *a2 = *(_QWORD *)(v2 + 64);
  }
  else
  {
    *a2 = *(_QWORD *)(v2 + 64);
    if ( (*(_DWORD *)(a1 + 92) & 0x10) != 0 )
    {
      *((_DWORD *)a2 + 18) |= 0x30u;
      *((_DWORD *)a2 + 17) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 388LL);
      *((_DWORD *)a2 + 16) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
    }
    *((_DWORD *)a2 + 18) ^= (*((_DWORD *)a2 + 18) ^ (*(_DWORD *)(a1 + 92) >> 7)) & 2;
    *((_DWORD *)a2 + 18) ^= (*((_DWORD *)a2 + 18) ^ (*(_DWORD *)(a1 + 92) >> 1)) & 4;
  }
  v12 = *(_QWORD *)(a1 + 64);
  if ( v12 )
  {
    *((_DWORD *)a2 + 6) = *(_DWORD *)(v12 + 40);
    a2[5] = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 128LL);
    *((_DWORD *)a2 + 12) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 136LL) + 88LL);
  }
  *((_DWORD *)a2 + 2) = *(_DWORD *)(a1 + 128);
  a2[2] = *(_QWORD *)(a1 + 136);
  *((_DWORD *)a2 + 7) = *(_DWORD *)(a1 + 144);
  *((_DWORD *)a2 + 8) = *(_DWORD *)(a1 + 148);
  *((_DWORD *)a2 + 15) = *(_DWORD *)(a1 + 104);
  *((_DWORD *)a2 + 13) = *(_DWORD *)(a1 + 152);
  *((_DWORD *)a2 + 14) = *(_DWORD *)(a1 + 156);
  *((_DWORD *)a2 + 19) = *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * *(unsigned __int16 *)(v5 + 4) + 416) + 6LL);
  result = *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * *(unsigned __int16 *)(v5 + 4) + 416) + 8LL);
  *((_DWORD *)a2 + 22) = result;
  return result;
}
