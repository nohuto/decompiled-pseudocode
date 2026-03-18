/*
 * XREFs of VidSchiFillSubmitCommandDataVirtual @ 0x1C0005E40
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0006B50 (VidSchiSendToExecutionQueue.c)
 * Callees:
 *     memset @ 0x1C0015FC0 (memset.c)
 */

__int64 __fastcall VidSchiFillSubmitCommandDataVirtual(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rsi
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 48);
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(_QWORD *)(v5 + 24);
  memset(a2, 0, 0x60uLL);
  if ( (*(_DWORD *)(v2 + 112) & 2) != 0 || (v7 = *(_QWORD *)(a1 + 56)) != 0 && ((*(_DWORD *)(v7 + 72) >> 15) & 1) != 0 )
    v8 = 8;
  else
    v8 = 0;
  v9 = v8 | *((_DWORD *)a2 + 13) & 0xFFFFFFF7;
  *((_DWORD *)a2 + 13) = v9;
  v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(*(_DWORD *)(a1 + 92) >> 6)) & 0x40;
  *((_DWORD *)a2 + 13) = v10;
  v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(*(_DWORD *)(a1 + 92) >> 7)) & 0x80;
  *((_DWORD *)a2 + 13) = v11;
  v12 = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(*(unsigned __int8 *)(v2 + 909) << 8)) & 0x100;
  *((_DWORD *)a2 + 13) = v12;
  if ( *(_DWORD *)(a1 + 88) )
  {
    *((_DWORD *)a2 + 13) = v12 | 1;
    *a2 = *(_QWORD *)(v2 + 64);
  }
  else
  {
    *a2 = *(_QWORD *)(v2 + 64);
    if ( (*(_DWORD *)(a1 + 92) & 0x10) != 0 )
    {
      *((_DWORD *)a2 + 13) |= 0x30u;
      *((_DWORD *)a2 + 12) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 388LL);
      *((_DWORD *)a2 + 11) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
    }
    *((_DWORD *)a2 + 13) ^= (*((_DWORD *)a2 + 13) ^ (*(_DWORD *)(a1 + 92) >> 7)) & 2;
    *((_DWORD *)a2 + 13) ^= (*((_DWORD *)a2 + 13) ^ (*(_DWORD *)(a1 + 92) >> 1)) & 4;
  }
  a2[1] = *(_QWORD *)(a1 + 176);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(a1 + 148);
  a2[3] = *(_QWORD *)(a1 + 192) + *(unsigned int *)(a1 + 152);
  *((_DWORD *)a2 + 8) = *(_DWORD *)(a1 + 156) - *(_DWORD *)(a1 + 152);
  *((_DWORD *)a2 + 9) = *(_DWORD *)(a1 + 184);
  *((_DWORD *)a2 + 10) = *(_DWORD *)(a1 + 104);
  *((_DWORD *)a2 + 14) = *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * *(unsigned __int16 *)(v5 + 4) + 416) + 6LL);
  result = *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * *(unsigned __int16 *)(v5 + 4) + 416) + 8LL);
  *((_DWORD *)a2 + 15) = result;
  return result;
}
