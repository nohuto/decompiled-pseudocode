/*
 * XREFs of sub_180090710 @ 0x180090710
 * Callers:
 *     RtlValidateHeap @ 0x180077E50 (RtlValidateHeap.c)
 *     sub_180090C78 @ 0x180090C78 (sub_180090C78.c)
 *     sub_18009100C @ 0x18009100C (sub_18009100C.c)
 *     sub_180100E1C @ 0x180100E1C (sub_180100E1C.c)
 *     sub_180101254 @ 0x180101254 (sub_180101254.c)
 *     sub_180101390 @ 0x180101390 (sub_180101390.c)
 *     sub_18010144C @ 0x18010144C (sub_18010144C.c)
 *     sub_1801015EC @ 0x1801015EC (sub_1801015EC.c)
 *     sub_180101730 @ 0x180101730 (sub_180101730.c)
 *     sub_180101C9C @ 0x180101C9C (sub_180101C9C.c)
 *     sub_180101E60 @ 0x180101E60 (sub_180101E60.c)
 *     sub_180101FF0 @ 0x180101FF0 (sub_180101FF0.c)
 *     sub_18010216C @ 0x18010216C (sub_18010216C.c)
 *     sub_1801021F4 @ 0x1801021F4 (sub_1801021F4.c)
 * Callees:
 *     sub_18001E5E0 @ 0x18001E5E0 (sub_18001E5E0.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800610C8 @ 0x1800610C8 (sub_1800610C8.c)
 *     sub_18006128C @ 0x18006128C (sub_18006128C.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_180102310 @ 0x180102310 (sub_180102310.c)
 *     sub_180102330 @ 0x180102330 (sub_180102330.c)
 */

char __fastcall sub_180090710(PVOID *BaseAddress, char a2)
{
  unsigned __int16 v3; // r15
  char *v4; // r12
  int v6; // r13d
  PVOID *v7; // rsi
  __int64 v8; // rdx
  PVOID *v9; // rdi
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // ax
  __int64 v12; // rdi
  __int64 v13; // rcx
  PVOID *v15; // rdi
  __int64 v16; // rcx
  unsigned __int16 v17; // di
  _QWORD *v18; // rsi
  unsigned __int16 v19; // di
  _QWORD *v20; // rsi
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h] BYREF
  PVOID BaseAddressa; // [rsp+A0h] [rbp+50h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+58h] BYREF

  v22 = (__int64)BaseAddress;
  v3 = 0;
  v4 = 0LL;
  BaseAddressa = 0LL;
  if ( !sub_1800610C8(BaseAddress, 0) )
    goto LABEL_30;
  if ( a2 || ((_DWORD)BaseAddress[14] & 0x20000000) != 0 )
  {
    v6 = 0;
    v7 = (PVOID *)BaseAddress[42];
    while ( BaseAddress + 42 != v7 )
    {
      v12 = (__int64)(v7 - 2);
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_DWORD *)(v12 + 8) ^= *((_DWORD *)BaseAddress + 34);
        if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
          sub_1800FDA30(BaseAddress, v7 - 2);
      }
      v7 = (PVOID *)*v7;
      RegionSize = *(unsigned __int16 *)(v12 + 8);
      v22 = v12;
      if ( (*(_BYTE *)(v12 + 10) & 1) != 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("dedicated (%04Ix) free list element %p is marked busy\n", RegionSize, (const void *)v12);
        goto LABEL_26;
      }
      if ( *(_WORD *)(v12 + 8) < v3 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Non-Dedicated free list element %p is out of order\n", (const void *)v12);
LABEL_26:
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *(_BYTE *)(v12 + 11) = *(_BYTE *)(v12 + 8) ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
          *(_DWORD *)(v12 + 8) ^= *((_DWORD *)BaseAddress + 34);
        }
        goto LABEL_30;
      }
      v3 = *(_WORD *)(v12 + 8);
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_BYTE *)(v12 + 11) = v3 ^ *(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10);
        *(_DWORD *)(v12 + 8) ^= *((_DWORD *)BaseAddress + 34);
      }
      ++v6;
    }
    RegionSize = 8LL * *((unsigned __int16 *)BaseAddress + 112) + 1040;
    if ( byte_180159650
      && BaseAddress[41]
      && ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
    {
      v4 = (char *)BaseAddressa + 1032;
    }
    v8 = 129LL;
    v9 = (PVOID *)BaseAddress[34];
    if ( BaseAddress + 34 != v9 )
    {
      while ( 1 )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *((_DWORD *)v9 + 14) ^= *((_DWORD *)BaseAddress + 34);
          if ( *((_BYTE *)v9 + 59) != (*((_BYTE *)v9 + 56) ^ (unsigned __int8)(*((_BYTE *)v9 + 57) ^ *((_BYTE *)v9 + 58))) )
          {
            sub_1800FDA30(BaseAddress, v9 + 6);
            v8 = 129LL;
          }
        }
        if ( v4 )
        {
          v10 = *((_WORD *)v9 + 9);
          if ( v10 )
          {
            if ( (v10 & 0x8000u) == 0 )
            {
              if ( (v10 & 0x800) == 0 && v10 < *((_WORD *)BaseAddress + 112) )
                *(_QWORD *)&v4[8 * v10] += (unsigned __int64)v9[4] >> 4;
            }
            else
            {
              v11 = v10 & 0x7FFF;
              if ( v11 < 0x81u )
              {
                v8 = v11;
                *((_QWORD *)BaseAddressa + v11) += (unsigned __int64)v9[4] >> 4;
              }
            }
          }
        }
        if ( (*((_BYTE *)v9 + 58) & 4) != 0 && !sub_18006128C((__int64)BaseAddress, (unsigned __int64)(v9 + 6)) )
          break;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *((_BYTE *)v9 + 59) = *((_BYTE *)v9 + 56) ^ *((_BYTE *)v9 + 57) ^ *((_BYTE *)v9 + 58);
          *((_DWORD *)v9 + 14) ^= *((_DWORD *)BaseAddress + 34);
        }
        v9 = (PVOID *)*v9;
        if ( BaseAddress + 34 == v9 )
          goto LABEL_37;
        v8 = 129LL;
      }
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *((_BYTE *)v9 + 59) = *((_BYTE *)v9 + 56) ^ *((_BYTE *)v9 + 57) ^ *((_BYTE *)v9 + 58);
        *((_DWORD *)v9 + 14) ^= *((_DWORD *)BaseAddress + 34);
      }
      return 0;
    }
LABEL_37:
    v15 = (PVOID *)BaseAddress[36];
    v16 = 0LL;
    v21 = 0LL;
    if ( v15 == BaseAddress + 36 )
    {
LABEL_41:
      if ( v6 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v8);
        DbgPrint("Number of free blocks in arena (%ld) does not match number in the free lists (%ld)\n", 0, v6);
      }
      else if ( BaseAddress[24] == (PVOID)v16 )
      {
        if ( !BaseAddressa )
          return 1;
        v18 = BaseAddress[41];
        if ( v18 )
        {
          v19 = 1;
          while ( 1 )
          {
            v18 += 2;
            v16 = v18[1];
            if ( *((_QWORD *)BaseAddressa + v19) != v16 )
              break;
            if ( ++v19 >= 0x81u )
              goto LABEL_57;
          }
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 129LL);
          else
            DbgPrint("HEAP: ", 1LL, 129LL);
          DbgPrint(
            "Pseudo Tag %04x size incorrect (%Ix != %Ix) %p\n",
            v19,
            v18[1],
            *((_QWORD *)BaseAddressa + v19),
            (char *)BaseAddressa + 8 * v19);
        }
        else
        {
LABEL_57:
          v20 = BaseAddress[29];
          if ( !v20 || (v16 = *((unsigned __int16 *)BaseAddress + 112), v17 = 1, (unsigned __int16)v16 <= 1u) )
          {
LABEL_47:
            RegionSize = 0LL;
            sub_18001E5E0(v16, &BaseAddressa, &RegionSize, 0x8000u);
            return 1;
          }
          while ( 1 )
          {
            v20 += 9;
            if ( *(_QWORD *)&v4[8 * v17] != v20[1] )
              break;
            if ( ++v17 >= (unsigned __int16)v16 )
              goto LABEL_47;
          }
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ", 1LL);
          DbgPrint(
            "Tag %04x (%ws) size incorrect (%Ix != %Ix) %p\n",
            v17,
            (char *)v20 + 20,
            v20[1],
            *(_QWORD *)&v4[8 * v17],
            &v4[8 * v17]);
        }
      }
      else
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v8);
        DbgPrint(
          "Total size of free blocks in arena (%Id) does not match number total in heap header (%Id)\n",
          v21,
          (unsigned int)BaseAddress[24]);
      }
    }
    else
    {
      while ( (unsigned __int8)sub_180102330(
                                 BaseAddress,
                                 (__int64)&v21,
                                 (__int64)&v22,
                                 (__int64)v4,
                                 (__int64)BaseAddressa) )
      {
        v15 = (PVOID *)*v15;
        if ( v15 == BaseAddress + 36 )
        {
          v16 = v21;
          goto LABEL_41;
        }
      }
    }
LABEL_30:
    sub_180102310();
    if ( BaseAddressa )
    {
      RegionSize = 0LL;
      sub_18001E5E0(v13, &BaseAddressa, &RegionSize, 0x8000u);
    }
    return 0;
  }
  return 1;
}
