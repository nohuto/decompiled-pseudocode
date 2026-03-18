/*
 * XREFs of MiCompressTbFlushList @ 0x1400182F0
 * Callers:
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiAgePte @ 0x1400D5440 (MiAgePte.c)
 *     MiWsleFlush @ 0x1400D7070 (MiWsleFlush.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 * Callees:
 *     <none>
 */

void __fastcall MiCompressTbFlushList(__int64 a1)
{
  int v1; // ebp
  __int64 *v2; // r10
  unsigned int v3; // r9d
  __int64 v5; // r11
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx

  v1 = 0;
  v2 = (__int64 *)(a1 + 24);
  v3 = 1;
  if ( *(_DWORD *)(a1 + 12) > 1u )
  {
    while ( 1 )
    {
      v5 = *v2;
      v6 = a1 + 8LL * v3;
      v7 = 4096LL << (9 * ((unsigned __int8)(*(_QWORD *)(v6 + 24) >> 10) & 3u));
      if ( ((*(_QWORD *)(v6 + 24) >> 10) & 3LL) == (((unsigned __int64)*v2 >> 10) & 3) )
      {
        v8 = *v2 & 0x3FF;
        if ( (*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFFF000uLL) - v7 * (v8 + 1) == (v5 & 0xFFFFFFFFFFFFF000uLL)
          && v8 != 1023 )
        {
          v10 = *(_QWORD *)(v6 + 24);
          if ( v8 + (unsigned __int64)(v10 & 0x3FF) + 1 <= 0x3FF )
          {
            v9 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)(v5 + v10 + 1)) & 0x3FF;
            ++v1;
            goto LABEL_6;
          }
          *(_QWORD *)(v6 + 24) = v7 * (1023 - v8)
                               + (*(_QWORD *)(v6 + 24) ^ (*(_DWORD *)(v6 + 24) ^ ((unsigned int)*(_QWORD *)(v6 + 24)
                                                                                - (1023
                                                                                 - (_DWORD)v8))) & 0x3FF);
          *v2 |= 0x3FFuLL;
        }
      }
      v9 = *(_QWORD *)(v6 + 24);
      ++v2;
LABEL_6:
      ++v3;
      *v2 = v9;
      if ( v3 >= *(_DWORD *)(a1 + 12) )
      {
        if ( v1 )
          *(_DWORD *)(a1 + 12) -= v1;
        return;
      }
    }
  }
}
