/*
 * XREFs of sub_180012F50 @ 0x180012F50
 * Callers:
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 *     sub_18002A508 @ 0x18002A508 (sub_18002A508.c)
 *     sub_18005BDB4 @ 0x18005BDB4 (sub_18005BDB4.c)
 *     sub_18005C4D8 @ 0x18005C4D8 (sub_18005C4D8.c)
 *     sub_1800EC04C @ 0x1800EC04C (sub_1800EC04C.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     sub_180013330 @ 0x180013330 (sub_180013330.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800FC3E4 @ 0x1800FC3E4 (sub_1800FC3E4.c)
 */

void __fastcall sub_180012F50(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rbx
  __int16 v6; // di
  unsigned __int8 v7; // al
  unsigned __int64 v8; // rbp
  char v9; // al
  unsigned __int64 *v10; // r14
  unsigned __int16 v11; // r11
  char v12; // cl
  __int64 v13; // rdx
  char v14; // di
  unsigned __int64 v15; // r10
  __int64 *v16; // rdi
  __int64 *v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  int v20; // ecx
  int v21; // eax
  unsigned __int16 v22; // ax
  __int64 *v23; // rax
  unsigned __int64 *v24; // r13
  __int64 *v25; // rdi
  unsigned __int64 v26; // r12
  __int64 *v27; // rax
  int v28; // ecx
  unsigned int v29; // r15d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r14
  bool v33; // zf
  _DWORD *v34; // rdx
  unsigned __int64 v35; // rdx
  unsigned __int16 v36; // [rsp+30h] [rbp-78h]
  unsigned __int64 v37; // [rsp+38h] [rbp-70h]
  __int64 v38; // [rsp+40h] [rbp-68h]
  int v39; // [rsp+50h] [rbp-58h]
  int v40; // [rsp+60h] [rbp-48h]
  unsigned __int64 v41; // [rsp+C0h] [rbp+18h]
  char v42; // [rsp+C8h] [rbp+20h]

  if ( a3 )
  {
    v41 = a3;
    v3 = a3;
    v4 = a2;
    v6 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 12);
    if ( !v6 && dword_18015D450 >= 1 && (*(_BYTE *)(a2 + 10) & 8) == 0 && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, a3, a3);
      else
        DbgPrint("HEAP: ", a2, a3, a3);
      DbgPrint(
        "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))");
      sub_1800FC3E4(1LL);
      v3 = v41;
    }
    v7 = *(_BYTE *)(v4 + 14);
    if ( v7 )
      v8 = (v4 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v7 << 16) + 0x10000;
    else
      v8 = a1;
    v9 = *(_BYTE *)(v4 + 10);
    v10 = (unsigned __int64 *)(a1 + 336);
    v42 = v9;
    while ( 1 )
    {
      if ( v3 > 0xFF00 )
      {
        v11 = -272;
        if ( v3 != 65281 )
          v11 = -256;
      }
      else
      {
        v11 = v3;
      }
      v12 = 0;
      v36 = v11;
      if ( v3 <= 0xFF00 )
        v12 = v9;
      *(_BYTE *)(v4 + 10) = v12;
      *(_WORD *)(v4 + 12) = v6 ^ *(_WORD *)(a1 + 140);
      v13 = *(_QWORD *)(v8 + 40);
      if ( v13 == v8 )
      {
        v14 = 0;
      }
      else
      {
        v14 = ((unsigned int)(v4 - v8) >> 16) + 1;
        if ( ((v4 - v8) >> 16) + 1 >= 0xFE )
        {
          sub_18009A5F0(3, v13, v4, v8, 0LL, 0LL);
          v3 = v41;
          v11 = v36;
        }
      }
      *(_BYTE *)(v4 + 10) &= 0xF0u;
      *(_BYTE *)(v4 + 14) = v14;
      *(_WORD *)(v4 + 8) = v11;
      *(_BYTE *)(v4 + 11) = 0;
      v15 = v11;
      *(_BYTE *)(v4 + 15) = 0;
      v37 = v11;
      if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
      {
        a3 = v4 + 32;
        v35 = (16 * (unsigned __int64)v11 - 32) >> 2;
        if ( v35 )
        {
          if ( (a3 & 4) != 0 )
          {
            --v35;
            *(_DWORD *)a3 = -17891602;
            a3 = v4 + 36;
          }
          memset64((void *)a3, 0xFEEEFEEEFEEEFEEEuLL, v35 >> 1);
          if ( (v35 & 1) != 0 )
            *(_DWORD *)(a3 + 4 * v35 - 4) = -17891602;
        }
        *(_BYTE *)(v4 + 10) |= 4u;
      }
      v16 = *(__int64 **)(a1 + 312);
      if ( v16 )
      {
        if ( v11 < (unsigned __int64)*((unsigned int *)v16 + 2) )
        {
LABEL_18:
          v18 = v11;
        }
        else
        {
          while ( 1 )
          {
            v17 = (__int64 *)*v16;
            if ( !*v16 )
              break;
            v16 = (__int64 *)*v16;
            if ( v11 < (unsigned __int64)*((unsigned int *)v17 + 2) )
              goto LABEL_18;
          }
          v18 = *((_DWORD *)v16 + 2) - 1;
        }
        while ( 1 )
        {
          LOBYTE(a3) = 1;
          v19 = sub_180013330(a1, (_DWORD)v16, a3, v18, v15);
          v15 = v37;
          a3 = v19;
          if ( v19 )
            break;
          v16 = (__int64 *)*v16;
          v18 = *((_DWORD *)v16 + 6);
        }
        v3 = v41;
        v11 = v36;
      }
      else
      {
        a3 = *v10;
      }
      if ( v10 != (unsigned __int64 *)a3 )
      {
        v20 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v20 )
          {
            v21 = *(_DWORD *)(a3 - 8);
            v20 = *(_DWORD *)(a1 + 124);
            LOWORD(v39) = v21;
            if ( (v20 & v21) != 0 )
              v39 = *(_DWORD *)(a1 + 136) ^ v21;
            v22 = v39;
          }
          else
          {
            v22 = *(_WORD *)(a3 - 8);
          }
          if ( v15 <= v22 )
            break;
          a3 = *(_QWORD *)a3;
        }
        while ( v10 != (unsigned __int64 *)a3 );
      }
      v23 = *(__int64 **)(a3 + 8);
      v24 = (unsigned __int64 *)(v4 + 16);
      if ( *v23 == a3 )
      {
        *v24 = a3;
        *(_QWORD *)(v4 + 24) = v23;
        *v23 = (__int64)v24;
        *(_QWORD *)(a3 + 8) = v24;
      }
      else
      {
        sub_18009A5F0(13, 0, a3, 0, *v23, 0LL);
        v3 = v41;
        v15 = v37;
        v11 = v36;
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v4 + 8);
      v25 = *(__int64 **)(a1 + 312);
      if ( v25 )
      {
        v26 = *(unsigned __int16 *)(v4 + 8);
        if ( v26 < *((unsigned int *)v25 + 2) )
        {
LABEL_35:
          v28 = *(unsigned __int16 *)(v4 + 8);
        }
        else
        {
          while ( 1 )
          {
            v27 = (__int64 *)*v25;
            if ( !*v25 )
              break;
            v25 = (__int64 *)*v25;
            if ( v26 < *((unsigned int *)v27 + 2) )
              goto LABEL_35;
          }
          v28 = *((_DWORD *)v25 + 2) - 1;
        }
        v29 = v28 - *((_DWORD *)v25 + 6);
        if ( *((_DWORD *)v25 + 3) )
          v30 = 2 * v29;
        else
          v30 = v29;
        ++*((_DWORD *)v25 + 4);
        v31 = 8 * v30;
        v38 = 8 * v30;
        v32 = *(_QWORD *)(8 * v30 + v25[6]);
        if ( v28 == *((_DWORD *)v25 + 2) - 1 )
          ++*((_DWORD *)v25 + 5);
        if ( !v32 )
          goto LABEL_55;
        LODWORD(a3) = v32 - 16;
        v40 = *(_DWORD *)(v32 - 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v40 = *(_DWORD *)(v32 - 8) ^ *(_DWORD *)(a1 + 136);
          if ( HIBYTE(v40) != ((unsigned __int8)v40 ^ (unsigned __int8)(BYTE1(v40) ^ BYTE2(v40))) )
          {
            sub_18009A5F0(3, a1, a3, 0, 0LL, 0LL);
            v3 = v41;
            v15 = v37;
            v11 = v36;
          }
          v31 = v38;
        }
        if ( (int)(v26 - (unsigned __int16)v40) <= 0 )
LABEL_55:
          *(_QWORD *)(v31 + v25[6]) = v24;
        v33 = v32 == 0;
        v10 = (unsigned __int64 *)(a1 + 336);
        if ( v33 )
        {
          v34 = (_DWORD *)(v25[5] + 4 * ((unsigned __int64)v29 >> 5));
          *v34 |= 1 << (v29 & 0x1F);
        }
      }
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v4 + 11) = *(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10);
        *(_DWORD *)(v4 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      v3 -= v15;
      v6 = v11;
      v4 += 16 * v15;
      v41 = v3;
      if ( v4 >= *(_QWORD *)(v8 + 72) )
        break;
      v9 = v42;
      if ( !v3 )
      {
        *(_WORD *)(v4 + 12) = v11 ^ *(_WORD *)(a1 + 140);
        if ( !v11 && dword_18015D450 >= 1 && ((v4 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v4 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ", 65280LL);
          DbgPrint("ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock");
          sub_1800FC3E4(1LL);
        }
        return;
      }
    }
  }
}
