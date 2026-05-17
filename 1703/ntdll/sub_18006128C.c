/*
 * XREFs of sub_18006128C @ 0x18006128C
 * Callers:
 *     sub_180078084 @ 0x180078084 (sub_180078084.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     sub_180102330 @ 0x180102330 (sub_180102330.c)
 * Callees:
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     RtlCompareMemory @ 0x1800A9760 (RtlCompareMemory.c)
 *     sub_180102310 @ 0x180102310 (sub_180102310.c)
 */

char __fastcall sub_18006128C(__int64 a1, unsigned __int64 a2)
{
  char v4; // cl
  unsigned __int64 v6; // rdi
  SIZE_T v7; // r14
  int v8; // eax
  unsigned __int16 v9; // ax
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int16 v12; // r8
  int v13; // eax
  char v14; // cl
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int16 v17; // ax
  int v18; // eax
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+28h] [rbp-10h]
  int v23; // [rsp+28h] [rbp-10h]
  int v24; // [rsp+28h] [rbp-10h]

  v4 = *(_BYTE *)(a2 + 15);
  if ( v4 == 1 )
    return 1;
  if ( v4 == 4 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      v8 = *(_DWORD *)(a2 + 8);
      LOWORD(v22) = v8;
      if ( (v8 & *(_DWORD *)(a1 + 124)) != 0 )
        v22 = *(_DWORD *)(a1 + 136) ^ v8;
      v9 = v22;
    }
    else
    {
      v9 = *(_WORD *)(a2 + 8);
    }
    v10 = *(_QWORD *)(a2 - 16) - v9;
  }
  else
  {
    if ( v4 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        v13 = *(_DWORD *)(a2 + 8);
        LOWORD(v23) = v13;
        if ( (v13 & *(_DWORD *)(a1 + 124)) != 0 )
          v23 = *(_DWORD *)(a1 + 136) ^ v13;
        v12 = v23;
      }
      else
      {
        v12 = *(_WORD *)(a2 + 8);
      }
    }
    else
    {
      if ( (unsigned __int16)a1 ^ (unsigned __int16)(qword_18015BFE8 ^ *(_WORD *)(a2 + 8) ^ (a2 >> 4)) )
        v11 = 0LL;
      else
        v11 = *(_QWORD *)(a2
                        - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)qword_18015BFE8 ^ *(_DWORD *)(a2 + 8) ^ (unsigned int)(a2 >> 4)) >> 12));
      v12 = *(_WORD *)(v11 + 36);
    }
    v14 = *(_BYTE *)(a2 + 15);
    if ( v14 == 5 )
    {
      v15 = *(unsigned __int16 *)(a2 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140);
    }
    else if ( (v14 & 0x40) != 0 )
    {
      v15 = *(unsigned __int16 *)(16LL * (v14 & 0x3F) + a2 + 12);
    }
    else if ( (v14 & 0x3F) == 0x3F )
    {
      if ( v14 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v18 = *(_DWORD *)(a2 + 8);
          LOWORD(v24) = v18;
          if ( (v18 & *(_DWORD *)(a1 + 124)) != 0 )
            v24 = *(_DWORD *)(a1 + 136) ^ v18;
          v17 = v24;
        }
        else
        {
          v17 = *(_WORD *)(a2 + 8);
        }
      }
      else
      {
        if ( (unsigned __int16)a1 ^ (unsigned __int16)(qword_18015BFE8 ^ *(_WORD *)(a2 + 8) ^ (a2 >> 4)) )
          v16 = 0LL;
        else
          v16 = *(_QWORD *)(a2
                          - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)qword_18015BFE8 ^ *(_DWORD *)(a2 + 8) ^ (unsigned int)(a2 >> 4)) >> 12));
        v17 = *(_WORD *)(v16 + 36);
      }
      v15 = *(_QWORD *)(16LL * v17 + a2);
    }
    else
    {
      v15 = *(_BYTE *)(a2 + 15) & 0x3F;
    }
    v10 = 16LL * v12 - v15;
  }
  v19 = *(_BYTE *)(a2 + 15);
  if ( v19 == 5 )
  {
    v20 = *(unsigned __int8 *)(a2 + 14);
LABEL_46:
    v21 = 16 * v20;
    goto LABEL_3;
  }
  if ( (v19 & 0x40) != 0 )
  {
    v20 = *(_BYTE *)(a2 + 15) & 0x3F;
    goto LABEL_46;
  }
  v21 = 0LL;
LABEL_3:
  v6 = v21 + v10;
  v7 = RtlCompareMemory((const void *)(v6 + a2 + 16), &unk_1801152B0, 0x10uLL);
  if ( v7 == 16 )
    return 1;
  if ( NtCurrentPeb()->Ldr )
    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
  else
    DbgPrint("HEAP: ");
  DbgPrint(
    "Heap block at %p modified at %p past requested size of %Ix\n",
    (const void *)a2,
    (const void *)(v7 + v6 + a2 + 16),
    v6);
  sub_180102310();
  return 0;
}
