/*
 * XREFs of sub_18010120C @ 0x18010120C
 * Callers:
 *     RtlValidateHeap @ 0x1800723C0 (RtlValidateHeap.c)
 *     sub_1800FF610 @ 0x1800FF610 (sub_1800FF610.c)
 *     sub_1800FF9D0 @ 0x1800FF9D0 (sub_1800FF9D0.c)
 *     sub_1800FFE08 @ 0x1800FFE08 (sub_1800FFE08.c)
 *     sub_1800FFF44 @ 0x1800FFF44 (sub_1800FFF44.c)
 *     sub_180100000 @ 0x180100000 (sub_180100000.c)
 *     sub_180100300 @ 0x180100300 (sub_180100300.c)
 *     sub_1801004A0 @ 0x1801004A0 (sub_1801004A0.c)
 *     sub_1801005E4 @ 0x1801005E4 (sub_1801005E4.c)
 *     sub_180100B78 @ 0x180100B78 (sub_180100B78.c)
 *     sub_180100D3C @ 0x180100D3C (sub_180100D3C.c)
 *     sub_180100ECC @ 0x180100ECC (sub_180100ECC.c)
 *     sub_180101048 @ 0x180101048 (sub_180101048.c)
 *     sub_1801010D0 @ 0x1801010D0 (sub_1801010D0.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_18005CD8C @ 0x18005CD8C (sub_18005CD8C.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     sub_1800EF014 @ 0x1800EF014 (sub_1800EF014.c)
 *     sub_1800FC010 @ 0x1800FC010 (sub_1800FC010.c)
 *     sub_1801011EC @ 0x1801011EC (sub_1801011EC.c)
 *     sub_18010180C @ 0x18010180C (sub_18010180C.c)
 *     sub_1801019C4 @ 0x1801019C4 (sub_1801019C4.c)
 */

char __fastcall sub_18010120C(__int64 a1, char a2)
{
  unsigned __int16 v3; // r12
  char *v4; // r15
  __int64 v6; // r8
  int v7; // r13d
  _QWORD *v8; // rsi
  __int64 v9; // rdi
  int v10; // edx
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  __int64 *v13; // rdi
  int v14; // edx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rsi
  unsigned __int16 v22; // di
  __int64 v23; // rdi
  unsigned __int16 v24; // si
  __int64 v25; // [rsp+40h] [rbp-10h] BYREF
  __int64 v26; // [rsp+48h] [rbp-8h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+58h] BYREF

  v26 = a1;
  v3 = 0;
  v4 = 0LL;
  BaseAddress = 0LL;
  if ( !(unsigned __int8)sub_18010180C((void *)a1) )
    goto LABEL_38;
  v6 = 1LL;
  if ( !a2 && (*(_DWORD *)(a1 + 112) & 0x20000000) == 0 )
    return v6;
  v7 = 0;
  v8 = *(_QWORD **)(a1 + 336);
  while ( (_QWORD *)(a1 + 336) != v8 )
  {
    v9 = (__int64)(v8 - 2);
    if ( *(_DWORD *)(a1 + 124) )
    {
      v10 = *(_DWORD *)(v9 + 8) ^ *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v9 + 8) = v10;
      if ( HIBYTE(v10) != ((unsigned __int8)v10 ^ (unsigned __int8)(BYTE1(v10) ^ BYTE2(v10))) )
      {
        sub_1800FC010(a1, (unsigned __int64)(v8 - 2));
        v6 = 1LL;
      }
    }
    v8 = (_QWORD *)*v8;
    RegionSize = *(unsigned __int16 *)(v9 + 8);
    v26 = v9;
    if ( (*(_BYTE *)(v9 + 10) & 1) != 0 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("dedicated (%04Ix) free list element %p is marked busy\n", RegionSize, (const void *)v9);
      goto LABEL_36;
    }
    v11 = *(_WORD *)(v9 + 8);
    if ( v11 < v3 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("Non-Dedicated free list element %p is out of order\n", (const void *)v9);
LABEL_36:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 8) ^ *(_BYTE *)(v9 + 9) ^ *(_BYTE *)(v9 + 10);
        *(_DWORD *)(v9 + 8) ^= *(_DWORD *)(a1 + 136);
      }
LABEL_38:
      sub_1801011EC();
      if ( BaseAddress )
      {
        RegionSize = 0LL;
        sub_18005CD8C(v17, &BaseAddress, &RegionSize, 0x8000u);
      }
      return 0;
    }
    v3 = *(_WORD *)(v9 + 8);
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v9 + 11) = *(_BYTE *)(v9 + 10) ^ v11 ^ HIBYTE(v11);
      *(_DWORD *)(v9 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    ++v7;
  }
  RegionSize = 8LL * ((unsigned int)*(unsigned __int16 *)(a1 + 224) + 130);
  if ( byte_18015A7A0
    && *(_QWORD *)(a1 + 328)
    && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
  {
    v4 = (char *)BaseAddress + 1032;
  }
  v12 = 129LL;
  v13 = *(__int64 **)(a1 + 272);
  if ( (__int64 *)(a1 + 272) == v13 )
  {
LABEL_52:
    v19 = *(_QWORD **)(a1 + 288);
    v20 = 0LL;
    v25 = 0LL;
    if ( v19 == (_QWORD *)(a1 + 288) )
    {
LABEL_56:
      if ( v7 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v6);
        else
          DbgPrint("HEAP: ", v12, v6);
        DbgPrint("Number of free blocks in arena (%ld) does not match number in the free lists (%ld)\n", 0, v7);
        goto LABEL_38;
      }
      if ( *(_QWORD *)(a1 + 192) != v20 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v6);
        else
          DbgPrint("HEAP: ", v12, v6);
        DbgPrint(
          "Total size of free blocks in arena (%Id) does not match number total in heap header (%Id)\n",
          v25,
          *(_QWORD *)(a1 + 192));
        goto LABEL_38;
      }
      if ( BaseAddress )
      {
        v21 = *(_QWORD *)(a1 + 328);
        if ( v21 )
        {
          v22 = 1;
          v6 = 129LL;
          while ( 1 )
          {
            v21 += 16LL;
            v20 = *(_QWORD *)(v21 + 8);
            if ( *((_QWORD *)BaseAddress + v22) != v20 )
              break;
            if ( ++v22 >= 0x81u )
              goto LABEL_71;
          }
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 129LL);
          else
            DbgPrint("HEAP: ", 1LL, 129LL);
          DbgPrint(
            "Pseudo Tag %04x size incorrect (%Ix != %Ix) %p\n",
            v22,
            *(_QWORD *)(v21 + 8),
            *((_QWORD *)BaseAddress + v22),
            (char *)BaseAddress + 8 * v22);
          goto LABEL_38;
        }
LABEL_71:
        v23 = *(_QWORD *)(a1 + 232);
        if ( v23 )
        {
          v20 = *(unsigned __int16 *)(a1 + 224);
          v24 = 1;
          if ( (unsigned __int16)v20 > 1u )
          {
            while ( 1 )
            {
              v23 += 72LL;
              if ( *(_QWORD *)&v4[8 * v24] != *(_QWORD *)(v23 + 8) )
                break;
              if ( ++v24 >= (unsigned __int16)v20 )
                goto LABEL_75;
            }
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v6);
            else
              DbgPrint("HEAP: ", 1LL, v6);
            DbgPrint(
              "Tag %04x (%ws) size incorrect (%Ix != %Ix) %p\n",
              v24,
              v23 + 20,
              *(_QWORD *)(v23 + 8),
              *(_QWORD *)&v4[8 * v24],
              &v4[8 * v24]);
            goto LABEL_38;
          }
        }
LABEL_75:
        RegionSize = 0LL;
        sub_18005CD8C(v20, &BaseAddress, &RegionSize, 0x8000u);
      }
      LOBYTE(v6) = 1;
      return v6;
    }
    while ( (unsigned __int8)sub_1801019C4(a1, (__int64)&v25, (__int64)&v26, (__int64)v4, (__int64)BaseAddress) )
    {
      v19 = (_QWORD *)*v19;
      if ( v19 == (_QWORD *)(a1 + 288) )
      {
        v20 = v25;
        goto LABEL_56;
      }
    }
    goto LABEL_38;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v14 = *((_DWORD *)v13 + 14) ^ *(_DWORD *)(a1 + 136);
      *((_DWORD *)v13 + 14) = v14;
      if ( HIBYTE(v14) != ((unsigned __int8)v14 ^ (unsigned __int8)(BYTE1(v14) ^ BYTE2(v14))) )
        sub_1800FC010(a1, (unsigned __int64)(v13 + 6));
      v12 = 129LL;
    }
    if ( v4 )
    {
      v15 = *((_WORD *)v13 + 9);
      if ( v15 )
      {
        if ( (v15 & 0x8000u) == 0 )
        {
          if ( (v15 & 0x800) == 0 && v15 < *(_WORD *)(a1 + 224) )
            *(_QWORD *)&v4[8 * v15] += (unsigned __int64)v13[4] >> 4;
        }
        else
        {
          v16 = v15 & 0x7FFF;
          if ( v16 < 0x81u )
          {
            v12 = v16;
            *((_QWORD *)BaseAddress + v16) += (unsigned __int64)v13[4] >> 4;
          }
        }
      }
    }
    if ( (*((_BYTE *)v13 + 58) & 4) != 0 && !sub_1800EF014(a1, (unsigned __int64)(v13 + 6)) )
      break;
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_BYTE *)v13 + 59) = *((_BYTE *)v13 + 56) ^ *((_BYTE *)v13 + 57) ^ *((_BYTE *)v13 + 58);
      *((_DWORD *)v13 + 14) ^= *(_DWORD *)(a1 + 136);
    }
    v13 = (__int64 *)*v13;
    if ( (__int64 *)(a1 + 272) == v13 )
      goto LABEL_52;
    v12 = 129LL;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *((_BYTE *)v13 + 59) = *((_BYTE *)v13 + 56) ^ *((_BYTE *)v13 + 57) ^ *((_BYTE *)v13 + 58);
    *((_DWORD *)v13 + 14) ^= *(_DWORD *)(a1 + 136);
  }
  return 0;
}
