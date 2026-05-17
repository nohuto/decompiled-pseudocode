/*
 * XREFs of sub_180011AE0 @ 0x180011AE0
 * Callers:
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 * Callees:
 *     sub_180003864 @ 0x180003864 (sub_180003864.c)
 *     sub_1800113A0 @ 0x1800113A0 (sub_1800113A0.c)
 *     sub_180011EF8 @ 0x180011EF8 (sub_180011EF8.c)
 *     sub_180012070 @ 0x180012070 (sub_180012070.c)
 *     sub_180012820 @ 0x180012820 (sub_180012820.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 *     sub_18001BA50 @ 0x18001BA50 (sub_18001BA50.c)
 *     sub_180020E70 @ 0x180020E70 (sub_180020E70.c)
 *     sub_180022F0C @ 0x180022F0C (sub_180022F0C.c)
 *     sub_180023AAC @ 0x180023AAC (sub_180023AAC.c)
 *     sub_18005F34C @ 0x18005F34C (sub_18005F34C.c)
 *     sub_18006316C @ 0x18006316C (sub_18006316C.c)
 *     sub_1800631EC @ 0x1800631EC (sub_1800631EC.c)
 *     sub_180063A64 @ 0x180063A64 (sub_180063A64.c)
 *     sub_180081CA0 @ 0x180081CA0 (sub_180081CA0.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     RtlGetCurrentProcessorNumber @ 0x18009F270 (RtlGetCurrentProcessorNumber.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800EBFF8 @ 0x1800EBFF8 (sub_1800EBFF8.c)
 *     sub_1800FE3BC @ 0x1800FE3BC (sub_1800FE3BC.c)
 */

__int64 __fastcall sub_180011AE0(__int64 a1, unsigned int a2, char *a3, __int64 a4)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r15d
  __int64 v13; // rbx
  unsigned __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rsi
  unsigned __int8 v21; // al
  void *v22; // rax
  __int64 v23; // rsi
  size_t v24; // r8
  int v25; // r8d
  BOOL v26; // edx
  unsigned int v27; // edi
  int v28; // eax
  __int64 result; // rax
  char *v30; // rdx
  __int64 v31; // rcx
  unsigned __int8 *v32; // rdx
  __int64 v33; // rax
  char CurrentProcessorNumber; // al
  unsigned int v35; // ecx
  unsigned int v36; // eax
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  char v40; // cl
  BOOL v41; // ebp
  __int64 v42; // rcx

  v8 = sub_180012820(a1, a3);
  if ( !v8 )
    return -1LL;
  v9 = *(_QWORD *)(a4 + 32);
  v10 = (v9 + 4095) >> 12;
  if ( (unsigned int)((_DWORD)v10 << 12) < v9 )
    return 0LL;
  v11 = 1LL;
  v12 = (unsigned int)(v10 + (1 << *(_BYTE *)(a1 + 9)) - 1) >> *(_BYTE *)(a1 + 9);
  if ( (*(_BYTE *)(v8 + 24) & 0xCu) >= 8 || v12 > *(unsigned __int8 *)(v8 + 31) )
  {
    if ( (a2 & 0x2000000) != 0 )
      return 0LL;
    v13 = *(_QWORD *)(a1 + 112);
    v14 = *(_QWORD *)(a4 + 32);
    v15 = *(_QWORD *)(a4 + 24);
    if ( v14 > (unsigned int)(*(_DWORD *)(v13 + 592) - 16) )
      goto LABEL_35;
    v16 = v13 + 512;
    v17 = (unsigned int)v14;
    if ( (_DWORD)v15 != (_DWORD)v14 )
      v17 = (unsigned int)(v14 + 2);
    v18 = (unsigned __int64)(unsigned int)(v17 + 15) >> 4;
    v19 = byte_1801190F0[v18];
    if ( (*(_QWORD *)(v16 + 8 * v19 + 224) & 1) == 0 || (unsigned int)sub_18005F34C(v13 + 512, v17, 1LL) )
    {
      v20 = *(_QWORD *)(v16 + 8 * v19 + 224);
      if ( (dword_18015A43C & 0x10) != 0 && *(_BYTE *)(v20 + 2) == 1 )
      {
        v21 = 0;
      }
      else
      {
        CurrentProcessorNumber = RtlGetCurrentProcessorNumber(v18, v17, v11);
        v35 = *(unsigned __int8 *)(v13 + 560);
        v36 = CurrentProcessorNumber & 0x3F;
        if ( v36 >= v35 )
        {
          if ( v36 == v35 || (_BYTE)v35 == 1 )
            v36 = 0;
          else
            v36 = *(unsigned __int8 *)(v36 - v35 - 1 + *(_QWORD *)(v13 + 568));
        }
        v21 = *(_BYTE *)(v36 + *(_QWORD *)(v20 + 88));
      }
      v22 = (void *)sub_18001AC70((int)v13 + 512, v20, *(_QWORD *)(*(_QWORD *)(v20 + 96) + 8LL * v21), v15, a2);
      v23 = (__int64)v22;
      if ( v22 && (a2 & 2) != 0 )
        memset(v22, 0, (unsigned int)v15);
    }
    else
    {
      v23 = -1LL;
    }
    if ( v23 == -1 )
    {
LABEL_35:
      if ( v14 > 0x20000 )
      {
        if ( v14 <= *(unsigned int *)(v13 + 128) )
        {
          v23 = sub_180022F0C((int)v13 + 112, v15, v14, v14, a2);
          goto LABEL_16;
        }
        if ( v14 <= *(unsigned int *)(v13 + 248) )
        {
          v23 = sub_180022F0C((int)v13 + 232, v15, v14, v14, a2);
          goto LABEL_16;
        }
        v33 = sub_180081CA0(v13, v15, v14, a2);
      }
      else
      {
        v33 = sub_180020E70(v13 + 392, (unsigned int)v15, (unsigned int)v14, a2);
      }
      v23 = v33;
    }
LABEL_16:
    if ( !v23 )
      return v23;
    v24 = *(_QWORD *)a4;
    if ( *(_QWORD *)a4 >= *(_QWORD *)(a4 + 24) )
      v24 = *(_QWORD *)(a4 + 24);
    memmove((void *)v23, a3, v24);
    if ( *(_DWORD *)(a4 + 16) )
    {
      v30 = &a3[*(_QWORD *)a4];
      if ( (a2 & 0x10000000) != 0 )
        v30 += 16;
      v31 = v23 + *(_QWORD *)(a4 + 24);
      v32 = (unsigned __int8 *)((unsigned __int64)(v30 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (a2 & 0x10000000) != 0 )
        v31 += 16LL;
      memmove((void *)((v31 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v32, 16 * ((unsigned int)v32[3] + 1));
      sub_1800113A0(v13, v23, a2);
    }
    v25 = *(_DWORD *)(v13 + 64);
    v26 = 0;
    if ( v25 )
      v26 = v25 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v27 = (a2 | *(_DWORD *)(v13 + 20)) & 0x11000000 | 1;
    if ( !v26 )
      v27 = (a2 | *(_DWORD *)(v13 + 20)) & 0x11000001;
    if ( (v27 & 0x1000000) == 0 )
    {
      if ( *(_DWORD *)(v13 + 56) )
      {
        v39 = sub_180063A64(v13, a3, v27, 0LL);
        if ( (unsigned __int64)(v39 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          v40 = *(_BYTE *)(v39 + 2);
          if ( (v40 & 0xF) != 0 && (int)sub_1800EBFF8(v40 & 0xF, v13, (_DWORD)a3, 3, v39 + 16) < 0 )
            return v23;
        }
      }
    }
    if ( (*(_DWORD *)(v13 + 20) & 0x10000000) != 0 && sub_18001BA50(v13, a3, v27) == -1 )
    {
      sub_18009A5F0(9, v13, (_DWORD)a3, 0, 0LL, 0LL);
    }
    else
    {
      if ( (_WORD)a3 )
      {
        v28 = 0;
      }
      else
      {
        v38 = sub_18006316C(&unk_18015D838, 2 * ((unsigned __int64)&a3[-qword_18015D878] >> 20));
        if ( !v38 || (v28 = v38 - 1, v28 == 2) )
        {
          v41 = sub_1800631EC(v13, a3, v27) != 0;
          if ( (unsigned int)RtlGetCurrentServiceSessionId() )
            v42 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
          else
            v42 = 2147353472LL;
          if ( *(_BYTE *)v42 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( v41 )
              sub_1800FE3BC(v13, a3, 3LL);
          }
          return v23;
        }
      }
      sub_180011EF8(120LL * v28 + v13 + 112, a3, v27);
    }
    return v23;
  }
  v37 = ~(*(_DWORD *)(v8 + 28) >> 8);
  if ( (unsigned int)v10 > (unsigned __int16)v37
    && (int)sub_180012070(a1, v8, (unsigned __int16)v37, (unsigned int)v10 - (unsigned __int16)v37) < 0 )
  {
    return 0LL;
  }
  if ( *(_DWORD *)(a4 + 16) )
    sub_180003864((__int64)a3, *(_QWORD *)a4, (__int64)a3, *(_QWORD *)(a4 + 24), a2);
  if ( v12 < *(unsigned __int8 *)(v8 + 31) )
    sub_180023AAC(a1, v8, v12, a2);
  result = (__int64)a3;
  *(_DWORD *)(v8 + 4) = (v12 << *(_BYTE *)(a1 + 8)) - *(_DWORD *)(a4 + 24);
  return result;
}
