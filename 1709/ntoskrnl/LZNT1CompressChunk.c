/*
 * XREFs of LZNT1CompressChunk @ 0x140424750
 * Callers:
 *     RtlCompressBufferLZNT1 @ 0x140424660 (RtlCompressBufferLZNT1.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall LZNT1CompressChunk(
        __int64 (__fastcall *a1)(char *, __int64),
        char *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  _WORD *v8; // r11
  __int64 *v9; // r10
  char v10; // r9
  __int64 (__fastcall *v12)(char *, __int64); // r8
  __int64 v13; // rcx
  char *v14; // rdx
  _WORD *v15; // r14
  __int64 result; // rax
  char *v17; // r15
  unsigned __int8 v18; // bp
  char *v19; // rbx
  int v20; // edi
  int *v21; // r12
  int v22; // eax
  char v23; // al
  __int64 v24; // rcx
  int v25; // eax
  int v26; // r15d
  char *v27; // rcx
  int v28; // eax
  unsigned int v29; // esi
  __int64 *v30; // [rsp+20h] [rbp-58h]
  char *v31; // [rsp+28h] [rbp-50h]
  char v33; // [rsp+88h] [rbp+10h]
  char *v34; // [rsp+90h] [rbp+18h]

  v8 = a4;
  v9 = &LZNT1Formats;
  v10 = 0;
  v30 = &LZNT1Formats;
  v33 = 0;
  v12 = a1;
  if ( (unsigned __int64)(a2 + 4096) < a3 )
    a3 = (unsigned __int64)(a2 + 4096);
  v13 = a7;
  v14 = (char *)a5;
  v31 = (char *)(v8 + 1);
  v15 = v8 + 2;
  if ( (unsigned __int64)v8 + 4095 < a5 )
    v14 = (char *)v8 + 4095;
  *(_QWORD *)a7 = a2;
  result = 0LL;
  v34 = v14;
  v17 = (char *)v8 + 3;
  *(_QWORD *)(a7 + 8) = a3;
  v18 = 0;
  *(_DWORD *)(a7 + 16) = 4098;
  v19 = a2;
  LOBYTE(v20) = 0;
  if ( (unsigned __int64)a2 >= a3 )
  {
LABEL_16:
    if ( v31 >= v14 )
      LODWORD(v17) = (_DWORD)v17 - 1;
    else
      *v31 = v18;
    v26 = (_DWORD)v17 - (_DWORD)v8;
    *a6 = v26;
    *v8 = (v26 - 3) & 0xFFF | 0xB000;
    if ( !v33 )
      return 279LL;
    return result;
  }
  v21 = &dword_14043B78C;
  while ( 1 )
  {
    if ( &a2[*v21] < v19 )
    {
      do
      {
        v28 = *((_DWORD *)v9 + 7);
        v9 = (__int64 *)((char *)v9 + 20);
        *(_DWORD *)(v13 + 16) = v28;
        v21 = (int *)v9 + 3;
      }
      while ( &a2[*((unsigned int *)v9 + 3)] < v19 );
      v30 = v9;
    }
    if ( (unsigned __int64)(v19 + 3) > a3 )
      goto LABEL_11;
    v22 = v12(v19, v13);
    v14 = v34;
    if ( v22 )
      break;
    v10 = v33;
    v9 = v30;
LABEL_11:
    if ( v17 >= v14 )
      goto LABEL_27;
    v23 = *v19;
    v24 = 1LL;
    *v17 = *v19;
    v10 |= v23;
    ++v17;
    ++v19;
    v33 = v10;
    v25 = v18 & ~(1 << v20);
LABEL_13:
    v15 = (_WORD *)((char *)v15 + v24);
    v18 = v25;
    v20 = ((_BYTE)v20 + 1) & 7;
    if ( !v20 )
    {
      v18 = v25;
      if ( (unsigned __int64)v19 >= a3 )
        goto LABEL_15;
      v27 = v31;
      v18 = 0;
      v31 = v17++;
      v15 = (_WORD *)((char *)v15 + 1);
      *v27 = v25;
    }
    v13 = a7;
    v12 = a1;
    if ( (unsigned __int64)v19 >= a3 )
      goto LABEL_15;
  }
  if ( v15 < (_WORD *)v34 )
  {
    v9 = v30;
    v10 = v33;
    *(_WORD *)v17 = (v22 - 3) | (((_WORD)v19 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v30 + 16));
    v19 += v22;
    v14 = v34;
    v17 += 2;
    v24 = 2LL;
    v25 = v18 | (1 << v20);
    goto LABEL_13;
  }
LABEL_27:
  if ( (unsigned __int64)v19 >= a3 )
  {
LABEL_15:
    v8 = a4;
    result = 0LL;
    goto LABEL_16;
  }
  v29 = a3 - (_DWORD)a2;
  if ( (unsigned __int64)a4 + v29 + 2 > a5 )
    return 3221225507LL;
  memmove(a4 + 1, a2, v29);
  *a6 = v29 + 2;
  *a4 = (v29 - 1) & 0xFFF | 0x3000;
  return 0LL;
}
