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

char __fastcall sub_180090710(__int64 a1, char a2)
{
  unsigned __int16 v3; // r15
  __int64 v4; // r12
  int v6; // r8d
  int v7; // r13d
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 *v10; // rdi
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // ax
  _QWORD *v13; // rdi
  __int64 v14; // rcx
  int v16; // eax
  _QWORD *v17; // rdi
  __int64 v18; // rcx
  unsigned __int16 v19; // di
  __int64 v20; // rsi
  unsigned __int16 v21; // di
  __int64 v22; // rsi
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF
  __int64 v24; // [rsp+48h] [rbp-8h] BYREF
  int v25; // [rsp+90h] [rbp+40h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+58h] BYREF

  v24 = a1;
  v3 = 0;
  v4 = 0LL;
  v26 = 0LL;
  if ( !sub_1800610C8((void **)a1, 0) )
    goto LABEL_30;
  if ( a2 || (*(_DWORD *)(a1 + 112) & 0x20000000) != 0 )
  {
    v7 = 0;
    v8 = *(_QWORD **)(a1 + 336);
    while ( (_QWORD *)(a1 + 336) != v8 )
    {
      v13 = v8 - 2;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_DWORD *)v13 + 2) ^= *(_DWORD *)(a1 + 136);
        if ( *((_BYTE *)v13 + 11) != (*((_BYTE *)v13 + 8) ^ (unsigned __int8)(*((_BYTE *)v13 + 9) ^ *((_BYTE *)v13 + 10))) )
          sub_1800FDA30(a1, v8 - 2);
      }
      v8 = (_QWORD *)*v8;
      v27 = *((unsigned __int16 *)v13 + 4);
      v24 = (__int64)v13;
      if ( (*((_BYTE *)v13 + 10) & 1) != 0 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("dedicated (%04Ix) free list element %p is marked busy\n", v27, v13);
        goto LABEL_26;
      }
      if ( *((_WORD *)v13 + 4) < v3 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("Non-Dedicated free list element %p is out of order\n", v13);
LABEL_26:
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v13 + 11) = *((_BYTE *)v13 + 8) ^ *((_BYTE *)v13 + 9) ^ *((_BYTE *)v13 + 10);
          *((_DWORD *)v13 + 2) ^= *(_DWORD *)(a1 + 136);
        }
        goto LABEL_30;
      }
      v3 = *((_WORD *)v13 + 4);
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_BYTE *)v13 + 11) = v3 ^ *((_BYTE *)v13 + 9) ^ *((_BYTE *)v13 + 10);
        *((_DWORD *)v13 + 2) ^= *(_DWORD *)(a1 + 136);
      }
      ++v7;
    }
    v27 = 8LL * *(unsigned __int16 *)(a1 + 224) + 1040;
    if ( byte_180159650 && *(_QWORD *)(a1 + 328) && (int)ZwAllocateVirtualMemory(-1LL, &v26, 0LL, &v27, 4096, 4) >= 0 )
      v4 = v26 + 1032;
    v9 = 129LL;
    v10 = *(__int64 **)(a1 + 272);
    if ( (__int64 *)(a1 + 272) != v10 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_DWORD *)v10 + 14) ^= *(_DWORD *)(a1 + 136);
          if ( *((_BYTE *)v10 + 59) != (*((_BYTE *)v10 + 56) ^ (unsigned __int8)(*((_BYTE *)v10 + 57) ^ *((_BYTE *)v10 + 58))) )
          {
            sub_1800FDA30(a1, v10 + 6);
            v9 = 129LL;
          }
        }
        if ( v4 )
        {
          v11 = *((_WORD *)v10 + 9);
          if ( v11 )
          {
            if ( (v11 & 0x8000u) == 0 )
            {
              if ( (v11 & 0x800) == 0 && v11 < *(_WORD *)(a1 + 224) )
                *(_QWORD *)(v4 + 8LL * v11) += (unsigned __int64)v10[4] >> 4;
            }
            else
            {
              v12 = v11 & 0x7FFF;
              if ( v12 < 0x81u )
              {
                v9 = v12;
                *(_QWORD *)(v26 + 8LL * v12) += (unsigned __int64)v10[4] >> 4;
              }
            }
          }
        }
        if ( (*((_BYTE *)v10 + 58) & 4) != 0 && !sub_18006128C(a1, (unsigned __int64)(v10 + 6)) )
          break;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *((_BYTE *)v10 + 59) = *((_BYTE *)v10 + 56) ^ *((_BYTE *)v10 + 57) ^ *((_BYTE *)v10 + 58);
          *((_DWORD *)v10 + 14) ^= *(_DWORD *)(a1 + 136);
        }
        v10 = (__int64 *)*v10;
        if ( (__int64 *)(a1 + 272) == v10 )
          goto LABEL_37;
        v9 = 129LL;
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *((_BYTE *)v10 + 59) = *((_BYTE *)v10 + 56) ^ *((_BYTE *)v10 + 57) ^ *((_BYTE *)v10 + 58);
        *((_DWORD *)v10 + 14) ^= *(_DWORD *)(a1 + 136);
      }
      return 0;
    }
LABEL_37:
    v16 = 0;
    v17 = *(_QWORD **)(a1 + 288);
    v18 = 0LL;
    v25 = 0;
    v23 = 0LL;
    if ( v17 == (_QWORD *)(a1 + 288) )
    {
LABEL_41:
      if ( v7 == v16 )
      {
        if ( *(_QWORD *)(a1 + 192) == v18 )
        {
          if ( !v26 )
            return 1;
          v20 = *(_QWORD *)(a1 + 328);
          if ( v20 )
          {
            v21 = 1;
            while ( 1 )
            {
              v20 += 16LL;
              v18 = *(_QWORD *)(v20 + 8);
              if ( *(_QWORD *)(v26 + 8LL * v21) != v18 )
                break;
              if ( ++v21 >= 0x81u )
                goto LABEL_57;
            }
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, 129LL);
            else
              DbgPrint("HEAP: ", 1LL, 129LL);
            DbgPrint(
              "Pseudo Tag %04x size incorrect (%Ix != %Ix) %p\n",
              v21,
              *(_QWORD *)(v20 + 8),
              *(_QWORD *)(v26 + 8LL * v21),
              (const void *)(v26 + 8LL * v21));
          }
          else
          {
LABEL_57:
            v22 = *(_QWORD *)(a1 + 232);
            if ( !v22 || (v18 = *(unsigned __int16 *)(a1 + 224), v19 = 1, (unsigned __int16)v18 <= 1u) )
            {
LABEL_47:
              v27 = 0LL;
              sub_18001E5E0(v18, &v26, &v27, 0x8000LL);
              return 1;
            }
            while ( 1 )
            {
              v22 += 72LL;
              if ( *(_QWORD *)(v4 + 8LL * v19) != *(_QWORD *)(v22 + 8) )
                break;
              if ( ++v19 >= (unsigned __int16)v18 )
                goto LABEL_47;
            }
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ", 1LL);
            DbgPrint(
              "Tag %04x (%ws) size incorrect (%Ix != %Ix) %p\n",
              v19,
              v22 + 20,
              *(_QWORD *)(v22 + 8),
              *(_QWORD *)(v4 + 8LL * v19),
              v4 + 8LL * v19);
          }
        }
        else
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ", v9);
          DbgPrint(
            "Total size of free blocks in arena (%Id) does not match number total in heap header (%Id)\n",
            v23,
            *(_QWORD *)(a1 + 192));
        }
      }
      else
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ", v9);
        DbgPrint("Number of free blocks in arena (%ld) does not match number in the free lists (%ld)\n", v25, v7);
      }
    }
    else
    {
      while ( (unsigned __int8)sub_180102330(
                                 a1,
                                 (int)v17 - 24,
                                 v6,
                                 (unsigned int)&v25,
                                 (__int64)&v23,
                                 (__int64)&v24,
                                 v4,
                                 v26) )
      {
        v17 = (_QWORD *)*v17;
        if ( v17 == (_QWORD *)(a1 + 288) )
        {
          v16 = v25;
          v18 = v23;
          goto LABEL_41;
        }
      }
    }
LABEL_30:
    sub_180102310();
    if ( v26 )
    {
      v27 = 0LL;
      sub_18001E5E0(v14, &v26, &v27, 0x8000LL);
    }
    return 0;
  }
  return 1;
}
