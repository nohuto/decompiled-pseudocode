/*
 * XREFs of sub_18000DDA0 @ 0x18000DDA0
 * Callers:
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 * Callees:
 *     sub_18000E224 @ 0x18000E224 (sub_18000E224.c)
 *     sub_18000E9D4 @ 0x18000E9D4 (sub_18000E9D4.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_180021DA4 @ 0x180021DA4 (sub_180021DA4.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     RtlCompareMemoryUlong @ 0x1800A97E0 (RtlCompareMemoryUlong.c)
 *     sub_1800F0F1C @ 0x1800F0F1C (sub_1800F0F1C.c)
 *     sub_1800FDA30 @ 0x1800FDA30 (sub_1800FDA30.c)
 *     sub_180102310 @ 0x180102310 (sub_180102310.c)
 */

char __fastcall sub_18000DDA0(
        _DWORD *BaseAddress,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // r12
  unsigned int v8; // r13d
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // r8
  __int64 v13; // r11
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 *v16; // r14
  unsigned __int64 v17; // r13
  unsigned __int64 i; // rax
  unsigned int v19; // ecx
  unsigned int v20; // r15d
  unsigned int v21; // eax
  __int64 v22; // rdi
  unsigned int v23; // edx
  __int64 v24; // r9
  _QWORD *v25; // r10
  __int64 v26; // rdi
  char v27; // al
  unsigned __int16 v28; // dx
  char v29; // cl
  char v30; // r14
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  char result; // al
  __int64 *v36; // rax
  __int64 v37; // r12
  unsigned __int64 v38; // rax
  SIZE_T v39; // rdi
  SIZE_T v40; // r14
  __int64 v41; // rdx
  int v42; // eax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // [rsp+40h] [rbp-78h]
  __int64 *v47; // [rsp+48h] [rbp-70h]
  int v48; // [rsp+50h] [rbp-68h]
  int v49; // [rsp+60h] [rbp-58h]
  __int64 v50; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v52; // [rsp+D0h] [rbp+18h]
  __int64 v53; // [rsp+D0h] [rbp+18h]
  char v55; // [rsp+E0h] [rbp+28h]

  v5 = a4;
  v6 = a5;
  v8 = a2;
  if ( a5 > (unsigned int)BaseAddress[37] )
    return 0;
  v55 = *(_BYTE *)(a3 + 10);
  v10 = a3 + 16LL * *(unsigned __int16 *)(a3 + 8);
  if ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)((BaseAddress[31] >> 20) & *((_BYTE *)BaseAddress + 138))) & 1) != 0 )
    return 0;
  if ( BaseAddress[31] )
  {
    *(_DWORD *)(v10 + 8) ^= BaseAddress[34];
    if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
      sub_1800FDA30(BaseAddress, v10);
  }
  v11 = *(unsigned __int16 *)(v10 + 8);
  v52 = (unsigned int)v11 + *(unsigned __int16 *)(a3 + 8);
  if ( v52 < v6 )
  {
    if ( BaseAddress[31] )
    {
      *(_BYTE *)(v10 + 11) = *(_BYTE *)(v10 + 8) ^ *(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10);
      *(_DWORD *)(v10 + 8) ^= BaseAddress[34];
    }
    return 0;
  }
  v12 = (_QWORD *)(v10 + 16);
  v13 = *(_QWORD *)(v10 + 16);
  v47 = *(__int64 **)(v10 + 24);
  v46 = v13;
  v14 = *v47;
  v15 = *(_QWORD *)(v13 + 8);
  if ( *v47 != v15 || (_QWORD *)v14 != v12 )
  {
    sub_1800A4DFC(12, (_DWORD)BaseAddress, (_DWORD)v12, v15, v14, 0LL);
    return 0;
  }
  *((_QWORD *)BaseAddress + 24) -= v11;
  v16 = (__int64 *)*((_QWORD *)BaseAddress + 39);
  if ( v16 )
  {
    v17 = *(unsigned __int16 *)(v10 + 8);
    for ( i = *((unsigned int *)v16 + 2); ; i = *((unsigned int *)v36 + 2) )
    {
      if ( v17 < i )
      {
        v19 = *(unsigned __int16 *)(v10 + 8);
        goto LABEL_13;
      }
      v36 = (__int64 *)*v16;
      if ( !*v16 )
        break;
      v16 = (__int64 *)*v16;
    }
    v19 = *((_DWORD *)v16 + 2) - 1;
LABEL_13:
    v20 = v19 - *((_DWORD *)v16 + 6);
    v21 = 2 * v20;
    if ( !*((_DWORD *)v16 + 3) )
      v21 = v19 - *((_DWORD *)v16 + 6);
    v22 = v16[6];
    v23 = *((_DWORD *)v16 + 2);
    v24 = v21;
    v50 = v21;
    v25 = *(_QWORD **)(v22 + 8LL * v21);
    --*((_DWORD *)v16 + 4);
    if ( v19 == v23 - 1 )
      --*((_DWORD *)v16 + 5);
    if ( v25 == v12 )
    {
      if ( !*v16 )
        --v23;
      if ( v19 >= v23 )
      {
        v8 = a2;
        if ( *v12 == v16[4] )
        {
          *(_QWORD *)(v22 + 8LL * v21) = 0LL;
          *(_DWORD *)(v16[5] + 4 * ((unsigned __int64)v20 >> 5)) &= ~(1 << (v20 & 0x1F));
        }
        else
        {
          *(_QWORD *)(v22 + 8LL * v21) = *v12;
        }
        goto LABEL_28;
      }
      v26 = *v12;
      if ( *v12 == v16[4] )
        goto LABEL_26;
      v49 = *(_DWORD *)(v26 - 16 + 8);
      if ( BaseAddress[31] )
      {
        v49 = BaseAddress[34] ^ *(_DWORD *)(v26 - 16 + 8);
        if ( HIBYTE(v49) != ((unsigned __int8)v49 ^ (unsigned __int8)(BYTE1(v49) ^ BYTE2(v49))) )
        {
          sub_1800A4DFC(3, (_DWORD)BaseAddress, v26 - 16, 0, 0LL, 0LL);
          v24 = v50;
          v13 = v46;
        }
      }
      if ( (_DWORD)v17 == (unsigned __int16)v49 )
      {
        *(_QWORD *)(v16[6] + 8 * v24) = v26;
      }
      else
      {
LABEL_26:
        *(_QWORD *)(v16[6] + 8 * v24) = 0LL;
        *(_DWORD *)(v16[5] + 4 * ((unsigned __int64)v20 >> 5)) &= ~(1 << (v20 & 0x1F));
      }
    }
    v8 = a2;
LABEL_28:
    v5 = a4;
  }
  *v47 = v13;
  *(_QWORD *)(v13 + 8) = v47;
  if ( (*(_BYTE *)(v10 + 10) & 8) != 0 && !(unsigned __int8)sub_180021DA4(BaseAddress) )
  {
    sub_18001C798(BaseAddress);
    return 0;
  }
  v27 = *(_BYTE *)(v10 + 10);
  if ( (v27 & 4) != 0 )
  {
    v39 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
    if ( (v27 & 2) != 0 && v39 > 4 )
      v39 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
    v40 = RtlCompareMemoryUlong((PVOID)(v10 + 32), v39, 0xFEEEFEEE);
    if ( v40 != v39 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v10,
        (const void *)(v40 + v10 + 32));
      sub_180102310();
    }
  }
  v28 = *(_WORD *)(a3 + 8);
  v29 = *(_BYTE *)(a3 + 15);
  v30 = *(_BYTE *)(v10 + 10);
  if ( v29 == 5 )
  {
    v31 = *(unsigned __int16 *)(a3 + 12) ^ (unsigned __int64)*((unsigned __int16 *)BaseAddress + 70);
  }
  else if ( (v29 & 0x40) != 0 )
  {
    v31 = *(unsigned __int16 *)(a3 + 16LL * (v29 & 0x3F) + 12);
  }
  else if ( (v29 & 0x3F) == 0x3F )
  {
    if ( v29 >= 0 )
    {
      if ( BaseAddress[31] )
      {
        v42 = *(_DWORD *)(a3 + 8);
        LOWORD(v48) = v42;
        if ( (v42 & BaseAddress[31]) != 0 )
          v48 = BaseAddress[34] ^ v42;
        v28 = v48;
      }
    }
    else
    {
      if ( *(_WORD *)(a3 + 8) ^ (unsigned __int16)(qword_18015BFE8 ^ (unsigned __int16)BaseAddress ^ (a3 >> 4)) )
        v41 = 0LL;
      else
        v41 = *(_QWORD *)(a3
                        - ((unsigned __int64)(*(_DWORD *)(a3 + 8) ^ (unsigned int)qword_18015BFE8 ^ (unsigned int)BaseAddress ^ (unsigned int)(a3 >> 4)) >> 12));
      v28 = *(_WORD *)(v41 + 36);
    }
    v31 = *(_QWORD *)(a3 + 16LL * v28);
  }
  else
  {
    v31 = *(_BYTE *)(a3 + 15) & 0x3F;
  }
  v32 = 16LL * *(unsigned __int16 *)(a3 + 8) - v31;
  v33 = v52 - v6;
  v53 = v33;
  if ( v33 <= 2 )
  {
    v6 += v33;
    v53 = 0LL;
  }
  if ( (v55 & 2) != 0 )
  {
    *(_OWORD *)(a3 + 16 * v6 - 16) = *(_OWORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) - 16);
    if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
      *(_WORD *)(a3 + 16 * v6 - 14) = sub_1800F0F1C(
                                        (_DWORD)BaseAddress,
                                        *(unsigned __int16 *)(a3 + 16 * v6 - 14),
                                        *(unsigned __int16 *)(a3 + 8),
                                        v6,
                                        4);
  }
  else if ( (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
  {
    *(_BYTE *)(a3 + 11) = sub_1800F0F1C(
                            (_DWORD)BaseAddress,
                            *(unsigned __int8 *)(a3 + 11),
                            *(unsigned __int16 *)(a3 + 8),
                            v6,
                            4);
  }
  *(_WORD *)(a3 + 8) = v6;
  if ( v53 )
  {
    v34 = 16 * v6 - v5;
    if ( v34 >= 0x3F )
    {
      *(_QWORD *)(16 * v6 + a3) = v34;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v34;
    }
    sub_18000E224(BaseAddress, (BaseAddress[28] & 0x40) != 0, v6, v53);
  }
  else
  {
    *(_BYTE *)(a3 + 10) |= v30;
    v37 = 16 * v6;
    v38 = v37 - v5;
    if ( v37 - v5 >= 0x3F )
    {
      *(_QWORD *)(v37 + a3) = v38;
      *(_BYTE *)(a3 + 15) = 63;
    }
    else
    {
      *(_BYTE *)(a3 + 15) = v38;
    }
    *(_WORD *)(a3 + 16LL * *(unsigned __int16 *)(a3 + 8) + 12) = *(_WORD *)(a3 + 8) ^ *((_WORD *)BaseAddress + 70);
  }
  if ( (v8 & 8) != 0 )
  {
    if ( v5 < v32 )
      v32 = v5;
    sub_18000E9D4(BaseAddress, a3 + 16, v32);
    goto LABEL_48;
  }
  if ( (BaseAddress[28] & 0x40) == 0 )
    goto LABEL_48;
  v43 = 4 - (v32 & 3);
  if ( (v32 & 3) == 0 )
    v43 = v32 & 3;
  if ( v5 <= v43 + v32 )
    goto LABEL_48;
  if ( ((v5 - v43 - v32) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
    goto LABEL_48;
  v44 = ((v5 - v43 - v32) & 0xFFFFFFFFFFFFFFFCuLL) >> 2;
  v45 = v43 + v32 + a3 + 16;
  if ( !v44 )
    goto LABEL_48;
  if ( (v45 & 4) == 0 )
  {
LABEL_100:
    memset64((void *)v45, 0xBAADF00DBAADF00DuLL, v44 >> 1);
    if ( (v44 & 1) != 0 )
      *(_DWORD *)(v45 + 4 * v44 - 4) = -1163005939;
    goto LABEL_48;
  }
  *(_DWORD *)v45 = -1163005939;
  if ( --v44 )
  {
    v45 += 4LL;
    goto LABEL_100;
  }
LABEL_48:
  if ( (BaseAddress[28] & 0x20) != 0 )
  {
    *(_QWORD *)(a3 + v5 + 16) = 0xABABABABABABABABuLL;
    *(_QWORD *)(a3 + v5 + 24) = 0xABABABABABABABABuLL;
  }
  *(_BYTE *)(a3 + 10) &= 0x1Fu;
  result = 1;
  *(_BYTE *)(a3 + 10) |= (v8 >> 4) & 0xE0;
  return result;
}
