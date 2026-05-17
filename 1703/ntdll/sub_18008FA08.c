/*
 * XREFs of sub_18008FA08 @ 0x18008FA08
 * Callers:
 *     sub_18008F920 @ 0x18008F920 (sub_18008F920.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18008FA08(
        __int64 (__fastcall *a1)(char *, __int64),
        char *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        int *a6,
        __int64 a7)
{
  __int64 v7; // r10
  char *v8; // rax
  char *v11; // rdx
  unsigned int *v12; // r9
  char v14; // r8
  char *v15; // r13
  __int64 (__fastcall *v16)(char *, __int64); // r11
  char *v17; // rsi
  int v18; // ecx
  char *v19; // rbx
  int v20; // r15d
  unsigned int *v21; // rax
  _WORD *v22; // r12
  int v23; // eax
  int v24; // ebx
  unsigned int v26; // eax
  unsigned int v27; // edi
  unsigned int *v28; // [rsp+20h] [rbp-58h]
  unsigned int *v29; // [rsp+28h] [rbp-50h]
  char v31; // [rsp+88h] [rbp+10h]
  char v32; // [rsp+90h] [rbp+18h]
  char *v33; // [rsp+98h] [rbp+20h]

  v7 = a7;
  v8 = a2 + 4096;
  v11 = (char *)a5;
  v12 = (unsigned int *)&unk_180116340;
  v28 = (unsigned int *)&unk_180116340;
  v14 = 0;
  *(_QWORD *)a7 = a2;
  v31 = 0;
  *(_DWORD *)(a7 + 16) = 4098;
  if ( (unsigned __int64)v8 < a3 )
    a3 = (unsigned __int64)v8;
  v15 = (char *)(a4 + 1);
  *(_QWORD *)(a7 + 8) = a3;
  v16 = a1;
  v17 = a2;
  if ( (unsigned __int64)a4 + 4095 < a5 )
    v11 = (char *)a4 + 4095;
  LOBYTE(v18) = 0;
  v33 = v11;
  v19 = (char *)a4 + 3;
  v32 = 0;
  LOBYTE(v20) = 0;
  if ( (unsigned __int64)a2 >= a3 )
  {
LABEL_16:
    if ( v15 >= v11 )
      LODWORD(v19) = (_DWORD)v19 - 1;
    else
      *v15 = v20;
    v24 = (_DWORD)v19 - (_DWORD)a4;
    *a6 = v24;
    *a4 = (v24 - 3) & 0xFFF | 0xB000;
    return v31 != 0 ? 0 : 0x117;
  }
  v21 = (unsigned int *)&unk_18011634C;
  v29 = (unsigned int *)&unk_18011634C;
  v22 = a4 + 2;
  do
  {
    if ( &a2[*v21] < v17 )
    {
      do
      {
        v26 = v12[7];
        v12 += 5;
        *(_DWORD *)(v7 + 16) = v26;
        v29 = v12 + 3;
      }
      while ( &a2[v12[3]] < v17 );
      v14 = v31;
      v28 = v12;
    }
    if ( (unsigned __int64)(v17 + 3) > a3 )
      goto LABEL_11;
    v23 = v16(v17, v7);
    v11 = v33;
    if ( !v23 )
    {
      LOBYTE(v18) = v32;
      v14 = v31;
      v12 = v28;
      v7 = a7;
LABEL_11:
      if ( v19 >= v11 )
        break;
      v14 |= *v17;
      *v19++ = *v17;
      v31 = v14;
      v22 = (_WORD *)((char *)v22 + 1);
      v20 = (unsigned __int8)v20 & ~(1 << v18);
      ++v17;
      goto LABEL_13;
    }
    if ( v22 >= (_WORD *)v33 )
      break;
    v7 = a7;
    v12 = v28;
    ++v22;
    v20 = (unsigned __int8)v20 | (1 << v32);
    LOBYTE(v18) = v32;
    *(_WORD *)v19 = (v23 - 3) | (((_WORD)v17 - *(_WORD *)(a7 + 24) - 1) << *((_BYTE *)v28 + 16));
    v11 = v33;
    v19 += 2;
    v17 += v23;
    v14 = v31;
LABEL_13:
    v18 = ((_BYTE)v18 + 1) & 7;
    v32 = v18;
    if ( !v18 )
    {
      if ( (unsigned __int64)v17 >= a3 )
        goto LABEL_16;
      *v15 = v20;
      v15 = v19++;
      LOBYTE(v20) = 0;
      v22 = (_WORD *)((char *)v22 + 1);
    }
    v21 = v29;
    v16 = a1;
  }
  while ( (unsigned __int64)v17 < a3 );
  if ( (unsigned __int64)v17 >= a3 )
    goto LABEL_16;
  v27 = a3 - (_DWORD)a2;
  if ( (unsigned __int64)a4 + v27 + 2 > a5 )
    return 3221225507LL;
  memmove(a4 + 1, a2, v27);
  *a6 = v27 + 2;
  *a4 = (v27 - 1) & 0xFFF | 0x3000;
  return 0LL;
}
