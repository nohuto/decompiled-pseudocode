/*
 * XREFs of LZNT1CompressChunk @ 0x18008D25C
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x18008D170 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     LZNT1FindMatchStandard @ 0x18008D540 (LZNT1FindMatchStandard.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall LZNT1CompressChunk(
        __int64 (__fastcall *a1)(char *, __int64, unsigned __int64, unsigned int *),
        char *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  unsigned __int64 v7; // rdi
  char *v9; // rsi
  unsigned int *v10; // r9
  __int64 (__fastcall *v11)(char *, __int64, unsigned __int64, unsigned int *); // r11
  char *v12; // rcx
  __int64 v14; // rdx
  int v15; // r10d
  char *v16; // r12
  char *v17; // rbx
  unsigned __int8 v18; // r15
  unsigned int *v19; // rax
  _WORD *v20; // r13
  unsigned int MatchStandard; // eax
  char v22; // al
  int v23; // eax
  __int64 v24; // rdx
  int v25; // ebx
  __int16 v27; // dx
  unsigned int v28; // eax
  unsigned int v29; // edi
  unsigned int *v30; // [rsp+20h] [rbp-58h]
  unsigned int *v31; // [rsp+28h] [rbp-50h]
  char v33; // [rsp+88h] [rbp+10h]
  char v34; // [rsp+90h] [rbp+18h]
  char *v35; // [rsp+98h] [rbp+20h]

  v7 = a3;
  LOBYTE(a3) = 0;
  v33 = 0;
  v9 = a2;
  v10 = (unsigned int *)&LZNT1Formats;
  if ( (unsigned __int64)(a2 + 4096) < v7 )
    v7 = (unsigned __int64)(a2 + 4096);
  v30 = (unsigned int *)&LZNT1Formats;
  v11 = a1;
  v12 = (char *)a5;
  v14 = a7;
  if ( (unsigned __int64)a4 + 4095 < a5 )
    v12 = (char *)a4 + 4095;
  v35 = v12;
  LOBYTE(v15) = 0;
  *(_QWORD *)a7 = v9;
  v34 = 0;
  v16 = (char *)(a4 + 1);
  *(_QWORD *)(a7 + 8) = v7;
  *(_DWORD *)(a7 + 16) = 4098;
  v17 = (char *)a4 + 3;
  v18 = 0;
  if ( (unsigned __int64)v9 >= v7 )
  {
LABEL_18:
    if ( v16 >= v12 )
      LODWORD(v17) = (_DWORD)v17 - 1;
    else
      *v16 = v18;
    v25 = (_DWORD)v17 - (_DWORD)a4;
    *a6 = v25;
    *a4 = (v25 - 3) & 0xFFF | 0xB000;
    return v33 != 0 ? 0 : 0x117;
  }
  v19 = (unsigned int *)&unk_18011917C;
  v20 = a4 + 2;
  v31 = (unsigned int *)&unk_18011917C;
  do
  {
    if ( &a2[*v19] < v9 )
    {
      do
      {
        v28 = v10[7];
        v10 += 5;
        *(_DWORD *)(v14 + 16) = v28;
        a3 = (unsigned __int64)(v10 + 3);
        v31 = v10 + 3;
      }
      while ( &a2[v10[3]] < v9 );
      LOBYTE(a3) = v33;
      v30 = v10;
    }
    if ( (unsigned __int64)(v9 + 3) > v7 )
      goto LABEL_13;
    if ( (char *)v11 == (char *)LZNT1FindMatchStandard )
      MatchStandard = LZNT1FindMatchStandard(v9, v14, a3, v10);
    else
      MatchStandard = v11(v9, v14, a3, v10);
    v12 = v35;
    a3 = MatchStandard;
    if ( !MatchStandard )
    {
      LOBYTE(a3) = v33;
      v10 = v30;
      LOBYTE(v15) = v34;
LABEL_13:
      if ( v17 >= v12 )
        break;
      v22 = *v9;
      *v17 = *v9;
      LOBYTE(a3) = v22 | a3;
      ++v17;
      ++v9;
      v33 = a3;
      v23 = v18 & ~(1 << v15);
      v24 = 1LL;
      goto LABEL_15;
    }
    if ( v20 >= (_WORD *)v35 )
      break;
    v10 = v30;
    LOBYTE(v15) = v34;
    v12 = v35;
    v27 = (MatchStandard - 3) | (((_WORD)v9 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v30 + 16));
    LOBYTE(a3) = v33;
    v9 += (int)MatchStandard;
    *(_WORD *)v17 = v27;
    v17 += 2;
    v24 = 2LL;
    v23 = v18 | (1 << v34);
LABEL_15:
    v20 = (_WORD *)((char *)v20 + v24);
    v18 = v23;
    v15 = ((_BYTE)v15 + 1) & 7;
    v34 = v15;
    if ( !v15 )
    {
      v18 = v23;
      if ( (unsigned __int64)v9 >= v7 )
        goto LABEL_18;
      *v16 = v23;
      v18 = 0;
      v16 = v17++;
      v20 = (_WORD *)((char *)v20 + 1);
    }
    v14 = a7;
    v19 = v31;
    v11 = a1;
  }
  while ( (unsigned __int64)v9 < v7 );
  if ( (unsigned __int64)v9 >= v7 )
    goto LABEL_18;
  v29 = v7 - (_DWORD)a2;
  if ( (unsigned __int64)a4 + v29 + 2 > a5 )
    return 3221225507LL;
  memmove(a4 + 1, a2, v29);
  *a6 = v29 + 2;
  *a4 = (v29 - 1) & 0xFFF | 0x3000;
  return 0LL;
}
