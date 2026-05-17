/*
 * XREFs of RtlQuerySecurityObject @ 0x1800D22A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800E1A34 @ 0x1800E1A34 (sub_1800E1A34.c)
 */

__int64 __fastcall RtlQuerySecurityObject(__int64 a1, __int16 a2, __int64 a3, unsigned int a4, unsigned int *a5)
{
  int v6; // ecx
  char v7; // si
  unsigned int v9; // r15d
  unsigned int v10; // r13d
  unsigned int v11; // r10d
  unsigned __int16 *v12; // rbp
  __int64 v13; // rbx
  unsigned __int8 *v14; // r12
  unsigned int v15; // r8d
  unsigned __int8 *v16; // rsi
  unsigned int v17; // ecx
  char *v18; // rsi
  __int16 v19; // dx
  __int16 v20; // ax
  __int16 v21; // ax
  int v22; // eax
  __int16 v23; // ax
  __int64 v24; // rbx
  int v25; // eax
  unsigned int v27; // [rsp+20h] [rbp-68h]
  int v28; // [rsp+24h] [rbp-64h]
  int v29; // [rsp+28h] [rbp-60h]
  unsigned __int8 *Src; // [rsp+30h] [rbp-58h]
  unsigned int v31; // [rsp+90h] [rbp+8h] BYREF
  int v32; // [rsp+98h] [rbp+10h]
  size_t Size; // [rsp+A0h] [rbp+18h]
  unsigned int v34; // [rsp+A8h] [rbp+20h]

  v34 = a4;
  v31 = 0;
  v6 = 0;
  v27 = 0;
  LODWORD(Size) = 0;
  v7 = a2;
  v29 = a2 & 2;
  Src = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( (a2 & 2) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v14 = *(unsigned __int8 **)(a1 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 8) )
        goto LABEL_8;
      v14 = (unsigned __int8 *)(a1 + *(unsigned int *)(a1 + 8));
    }
    if ( v14 )
    {
      v9 = (4 * v14[1] + 11) & 0xFFFFFFFC;
      v27 = v9;
    }
  }
LABEL_8:
  v28 = a2 & 4;
  if ( (a2 & 4) != 0 && (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v12 = *(unsigned __int16 **)(a1 + 32);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 16) )
        goto LABEL_16;
      v12 = (unsigned __int16 *)(a1 + *(unsigned int *)(a1 + 16));
    }
    if ( v12 )
      v10 = (v12[1] + 3) & 0xFFFFFFFC;
  }
LABEL_16:
  v15 = a2 & 0x1F8;
  v32 = v15;
  if ( (a2 & 0x1F8) != 0 && (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v13 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 12) )
        goto LABEL_24;
      v13 = a1 + *(unsigned int *)(a1 + 12);
    }
    if ( v13 )
    {
      sub_1800E1A34(v13, 0LL, &v31, a2 & 0x1F8);
      v11 = v31;
      v15 = v32;
      v6 = Size;
      a4 = v34;
    }
  }
LABEL_24:
  v32 = v7 & 1;
  if ( (v7 & 1) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v16 = *(unsigned __int8 **)(a1 + 8);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 4) )
      {
        Src = 0LL;
        goto LABEL_32;
      }
      v16 = (unsigned __int8 *)(a1 + *(unsigned int *)(a1 + 4));
    }
    Src = v16;
    if ( v16 )
    {
      v6 = (4 * v16[1] + 11) & 0xFFFFFFFC;
      LODWORD(Size) = v6;
    }
  }
LABEL_32:
  v17 = v9 + v10 + v11 + v6 + 20;
  *a5 = v17;
  if ( v17 > a4 || !a3 )
    return 3221225507LL;
  v18 = (char *)(a3 + 20);
  *(_QWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)(a3 + 16) = 0;
  *(_BYTE *)a3 = 1;
  v19 = *(_WORD *)(a3 + 2) | 0x8000;
  *(_WORD *)(a3 + 2) = v19;
  if ( v15 )
  {
    v20 = v19;
    if ( v11 )
    {
      sub_1800E1A34(v13, a3 + 20, &v31, v15);
      *(_DWORD *)(a3 + 12) = 20;
      v18 += v31;
      v20 = *(_WORD *)(a3 + 2);
    }
    v19 = v20 | *(_WORD *)(a1 + 2) & 0x2830;
    *(_WORD *)(a3 + 2) = v19;
  }
  if ( v28 )
  {
    v21 = v19;
    if ( v10 )
    {
      memmove(v18, v12, v10);
      v22 = (int)v18;
      v18 += v10;
      *(_DWORD *)(a3 + 16) = v22 - a3;
      v21 = *(_WORD *)(a3 + 2);
    }
    v19 = v21 | *(_WORD *)(a1 + 2) & 0x140C;
    *(_WORD *)(a3 + 2) = v19;
  }
  if ( v32 )
  {
    v23 = v19;
    if ( (_DWORD)Size )
    {
      v24 = (unsigned int)Size;
      memmove(v18, Src, (unsigned int)Size);
      v25 = (int)v18;
      v18 += v24;
      *(_DWORD *)(a3 + 4) = v25 - a3;
      v23 = *(_WORD *)(a3 + 2);
    }
    v19 = v23 | *(_WORD *)(a1 + 2) & 1;
    *(_WORD *)(a3 + 2) = v19;
  }
  if ( v29 )
  {
    if ( v27 )
    {
      memmove(v18, v14, v27);
      v19 = *(_WORD *)(a3 + 2);
      *(_DWORD *)(a3 + 8) = (_DWORD)v18 - a3;
    }
    *(_WORD *)(a3 + 2) = v19 | *(_WORD *)(a1 + 2) & 2;
  }
  return 0LL;
}
