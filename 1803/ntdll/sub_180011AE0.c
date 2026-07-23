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
  unsigned int v11; // r15d
  __int64 v12; // rbx
  unsigned __int64 v13; // r12
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rsi
  unsigned __int8 v19; // al
  void *v20; // rax
  __int64 v21; // rsi
  size_t v22; // r8
  int v23; // r8d
  BOOL v24; // edx
  unsigned int v25; // edi
  int v26; // eax
  __int64 result; // rax
  char *v28; // rdx
  __int64 v29; // rcx
  unsigned __int8 *v30; // rdx
  __int64 v31; // rax
  char CurrentProcessorNumber; // al
  unsigned int v33; // ecx
  unsigned int v34; // eax
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  char v38; // cl
  BOOL v39; // ebp
  __int64 UserModeGlobalLogger; // rcx

  v8 = sub_180012820(a1, a3);
  if ( !v8 )
    return -1LL;
  v9 = *(_QWORD *)(a4 + 32);
  v10 = (v9 + 4095) >> 12;
  if ( (unsigned int)((_DWORD)v10 << 12) < v9 )
    return 0LL;
  v11 = (unsigned int)(v10 + (1 << *(_BYTE *)(a1 + 9)) - 1) >> *(_BYTE *)(a1 + 9);
  if ( (*(_BYTE *)(v8 + 24) & 0xCu) >= 8 || v11 > *(unsigned __int8 *)(v8 + 31) )
  {
    if ( (a2 & 0x2000000) != 0 )
      return 0LL;
    v12 = *(_QWORD *)(a1 + 112);
    v13 = *(_QWORD *)(a4 + 32);
    v14 = *(_QWORD *)(a4 + 24);
    if ( v13 > (unsigned int)(*(_DWORD *)(v12 + 592) - 16) )
      goto LABEL_35;
    v15 = v12 + 512;
    v16 = (unsigned int)v13;
    if ( (_DWORD)v14 != (_DWORD)v13 )
      v16 = (unsigned int)(v13 + 2);
    v17 = byte_1801190F0[(unsigned __int64)(unsigned int)(v16 + 15) >> 4];
    if ( (*(_QWORD *)(v15 + 8 * v17 + 224) & 1) == 0 || (unsigned int)sub_18005F34C(v12 + 512, v16, 1LL) )
    {
      v18 = *(_QWORD *)(v15 + 8 * v17 + 224);
      if ( (dword_18015A43C & 0x10) != 0 && *(_BYTE *)(v18 + 2) == 1 )
      {
        v19 = 0;
      }
      else
      {
        CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
        v33 = *(unsigned __int8 *)(v12 + 560);
        v34 = CurrentProcessorNumber & 0x3F;
        if ( v34 >= v33 )
        {
          if ( v34 == v33 || (_BYTE)v33 == 1 )
            v34 = 0;
          else
            v34 = *(unsigned __int8 *)(v34 - v33 - 1 + *(_QWORD *)(v12 + 568));
        }
        v19 = *(_BYTE *)(v34 + *(_QWORD *)(v18 + 88));
      }
      v20 = (void *)sub_18001AC70((int)v12 + 512, v18, *(_QWORD *)(*(_QWORD *)(v18 + 96) + 8LL * v19), v14, a2);
      v21 = (__int64)v20;
      if ( v20 && (a2 & 2) != 0 )
        memset(v20, 0, (unsigned int)v14);
    }
    else
    {
      v21 = -1LL;
    }
    if ( v21 == -1 )
    {
LABEL_35:
      if ( v13 > 0x20000 )
      {
        if ( v13 <= *(unsigned int *)(v12 + 128) )
        {
          v21 = sub_180022F0C((int)v12 + 112, v14, v13, v13, a2);
          goto LABEL_16;
        }
        if ( v13 <= *(unsigned int *)(v12 + 248) )
        {
          v21 = sub_180022F0C((int)v12 + 232, v14, v13, v13, a2);
          goto LABEL_16;
        }
        v31 = sub_180081CA0(v12);
      }
      else
      {
        v31 = sub_180020E70((PRTL_SRWLOCK)(v12 + 392));
      }
      v21 = v31;
    }
LABEL_16:
    if ( !v21 )
      return v21;
    v22 = *(_QWORD *)a4;
    if ( *(_QWORD *)a4 >= *(_QWORD *)(a4 + 24) )
      v22 = *(_QWORD *)(a4 + 24);
    memmove((void *)v21, a3, v22);
    if ( *(_DWORD *)(a4 + 16) )
    {
      v28 = &a3[*(_QWORD *)a4];
      if ( (a2 & 0x10000000) != 0 )
        v28 += 16;
      v29 = v21 + *(_QWORD *)(a4 + 24);
      v30 = (unsigned __int8 *)((unsigned __int64)(v28 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (a2 & 0x10000000) != 0 )
        v29 += 16LL;
      memmove((void *)((v29 + 15) & 0xFFFFFFFFFFFFFFF0uLL), v30, 16 * ((unsigned int)v30[3] + 1));
      sub_1800113A0(v12, v21, a2);
    }
    v23 = *(_DWORD *)(v12 + 64);
    v24 = 0;
    if ( v23 )
      v24 = v23 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread);
    v25 = (a2 | *(_DWORD *)(v12 + 20)) & 0x11000000 | 1;
    if ( !v24 )
      v25 = (a2 | *(_DWORD *)(v12 + 20)) & 0x11000001;
    if ( (v25 & 0x1000000) == 0 )
    {
      if ( *(_DWORD *)(v12 + 56) )
      {
        v37 = sub_180063A64(v12, a3, v25, 0LL);
        if ( (unsigned __int64)(v37 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          v38 = *(_BYTE *)(v37 + 2);
          if ( (v38 & 0xF) != 0 && (int)sub_1800EBFF8(v38 & 0xF, v12, (_DWORD)a3, 3, v37 + 16) < 0 )
            return v21;
        }
      }
    }
    if ( (*(_DWORD *)(v12 + 20) & 0x10000000) != 0 && sub_18001BA50(v12, a3, v25) == -1 )
    {
      sub_18009A5F0(9, v12, (_DWORD)a3, 0, 0LL, 0LL);
    }
    else
    {
      if ( (_WORD)a3 )
      {
        v26 = 0;
      }
      else
      {
        v36 = sub_18006316C(&unk_18015D838, 2 * ((unsigned __int64)&a3[-qword_18015D878] >> 20));
        if ( !v36 || (v26 = v36 - 1, v26 == 2) )
        {
          v39 = sub_1800631EC(v12, a3, v25) != 0;
          if ( RtlGetCurrentServiceSessionId() )
            UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
          else
            UserModeGlobalLogger = 2147353472LL;
          if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            if ( v39 )
              sub_1800FE3BC(v12, a3, 3LL);
          }
          return v21;
        }
      }
      sub_180011EF8(120LL * v26 + v12 + 112, a3, v25);
    }
    return v21;
  }
  v35 = ~(*(_DWORD *)(v8 + 28) >> 8);
  if ( (unsigned int)v10 > (unsigned __int16)v35
    && (int)sub_180012070(a1, v8, (unsigned __int16)v35, (unsigned int)v10 - (unsigned __int16)v35) < 0 )
  {
    return 0LL;
  }
  if ( *(_DWORD *)(a4 + 16) )
    sub_180003864((__int64)a3, *(_QWORD *)a4, (__int64)a3, *(_QWORD *)(a4 + 24), a2);
  if ( v11 < *(unsigned __int8 *)(v8 + 31) )
    sub_180023AAC(a1, v8, v11, a2);
  result = (__int64)a3;
  *(_DWORD *)(v8 + 4) = (v11 << *(_BYTE *)(a1 + 8)) - *(_DWORD *)(a4 + 24);
  return result;
}
