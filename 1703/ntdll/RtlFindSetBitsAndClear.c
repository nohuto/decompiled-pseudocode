/*
 * XREFs of RtlFindSetBitsAndClear @ 0x1800EA5C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x180059C40 (RtlClearBits.c)
 */

__int64 __fastcall RtlFindSetBitsAndClear(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r15d
  __int64 v5; // r10
  __int64 v6; // r13
  int v7; // ebx
  int v8; // r9d
  unsigned int v9; // ebx
  __int64 v10; // r13
  int v11; // r12d
  unsigned int v12; // r11d
  __int64 v13; // r14
  unsigned int v14; // edx
  int v15; // eax
  unsigned int v16; // ebp
  unsigned __int64 v17; // rax
  _QWORD *v18; // r9
  signed __int64 v19; // r10
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r11
  int v22; // ecx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rdx
  char v26; // r8
  _QWORD *v27; // rcx
  unsigned int v28; // r8d
  __int64 v29; // rcx
  unsigned int v30; // r9d
  int v31; // r8d
  int v32; // ecx
  _QWORD *v33; // r11
  __int64 v34; // rax
  unsigned int v35; // r8d
  unsigned __int64 v36; // rdx
  bool v37; // sf
  __int64 v38; // rax
  unsigned int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rax
  bool v42; // cc
  unsigned __int64 v43; // rax
  unsigned int v46; // [rsp+70h] [rbp+18h]
  __int64 v47; // [rsp+78h] [rbp+20h]

  v46 = a3;
  v3 = *(_DWORD *)a1;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = a1;
  v47 = v5;
  v7 = a3 < *(_DWORD *)a1 ? a3 : 0;
  v8 = *(_DWORD *)a1 - 1;
  if ( !a2 )
  {
    v9 = v7 & 0xFFFFFFF8;
    goto LABEL_78;
  }
  v10 = v5 & 4;
  v11 = v10 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v12 = v11 + v8;
    v13 = v5 - (v10 != 0 ? 4 : 0);
    if ( v8 - v7 + 1 < a2 )
    {
      v14 = -1;
      v15 = -1;
      goto LABEL_29;
    }
    v16 = v12 - a2 + 1;
    v17 = (unsigned __int64)v16 >> 6;
    v18 = (_QWORD *)(v13 + 8 * ((unsigned __int64)(unsigned int)(v11 + v7) >> 6));
    v19 = ((1LL << ((v11 + v7) & 0x3F)) - 1) | ~*v18;
    v20 = v13 + 8 * v17;
    if ( a2 <= 0x7F )
    {
      v31 = 64;
      if ( a2 >= 0x40 )
      {
        do
        {
LABEL_49:
          v37 = v19 < 0;
          do
          {
            if ( v37 )
            {
              if ( (unsigned __int64)++v18 > v20 )
                goto LABEL_71;
              v19 = ~*v18;
              goto LABEL_49;
            }
            v23 = !_BitScanReverse64((unsigned __int64 *)&v38, v19);
            if ( !v23 )
              v31 = 63 - v38;
            v14 = (((unsigned int)(((__int64)v18 - v13) >> 3) + 1) << 6) - v31;
            if ( v14 > v16 )
              goto LABEL_71;
            v39 = a2 - v31;
            if ( a2 == v31 )
              goto LABEL_27;
            ++v18;
            v31 = 64;
            v19 = ~*v18;
            if ( v39 < 0x40 )
              goto LABEL_59;
            v37 = v19 < 0;
          }
          while ( *v18 != -1LL );
          v39 -= 64;
          if ( !v39 )
            break;
          v19 = ~*++v18;
LABEL_59:
          v23 = !_BitScanForward64((unsigned __int64 *)&v40, v19);
          if ( v23 )
            LODWORD(v40) = 64;
        }
        while ( (unsigned int)v40 < v39 );
LABEL_27:
        v15 = v14;
        if ( v14 != -1 )
          break;
        goto LABEL_28;
      }
      if ( a2 <= 1 )
      {
        while ( v19 == -1 )
        {
          if ( (unsigned __int64)++v18 > v20 )
            goto LABEL_71;
          v19 = ~*v18;
        }
        _BitScanForward64(&v43, ~v19);
        v14 = v43 + ((unsigned int)(((__int64)v18 - v13) >> 3) << 6);
        v42 = v14 <= v16;
LABEL_70:
        if ( v42 )
          goto LABEL_27;
      }
      else
      {
        v32 = 0;
        v33 = (_QWORD *)(v13 + 8 * ((unsigned __int64)v12 >> 6));
        while ( v19 != -1 )
        {
LABEL_40:
          v23 = !_BitScanForward64((unsigned __int64 *)&v34, v19);
          if ( v23 )
            LODWORD(v34) = 64;
          if ( v32 + (int)v34 >= a2 )
          {
            LODWORD(v36) = -v32;
LABEL_69:
            v14 = ((unsigned int)(((__int64)v18 - v13) >> 3) << 6) + v36;
            v42 = v14 <= v16;
            goto LABEL_70;
          }
          v35 = a2;
          v36 = ~v19;
          while ( 1 )
          {
            v36 &= v36 >> (v35 >> 1);
            if ( !v36 )
              break;
            v35 -= v35 >> 1;
            if ( v35 <= 1 )
            {
              _BitScanForward64(&v36, v36);
              goto LABEL_69;
            }
          }
          if ( v18 == v33 )
            goto LABEL_71;
          v23 = !_BitScanReverse64((unsigned __int64 *)&v41, v19);
          if ( v23 )
            v32 = 64;
          else
            v32 = 63 - v41;
          v19 = ~*++v18;
        }
        while ( (unsigned __int64)++v18 <= v20 )
        {
          v19 = ~*v18;
          if ( *v18 )
          {
            v32 = 0;
            goto LABEL_40;
          }
        }
      }
    }
    else
    {
      v21 = v20 + 8;
      if ( (v16 & 0x3F) == 0 )
        v21 = v13 + 8 * v17;
      if ( v19 )
      {
        if ( *++v18 != -1LL )
          goto LABEL_15;
        v23 = !_BitScanReverse64((unsigned __int64 *)&v24, v19);
        if ( v23 )
LABEL_13:
          v22 = 64;
        else
          v22 = 63 - v24;
      }
      else
      {
        v22 = 0;
      }
LABEL_19:
      v14 = ((unsigned int)(((__int64)v18 - v13) >> 3) << 6) - v22;
      if ( v14 <= v16 )
      {
        v26 = a2 - v22;
        v27 = &v18[(unsigned __int64)(a2 - v22) >> 6];
        while ( ++v18 != v27 )
        {
          if ( *v18 != -1LL )
            goto LABEL_15;
        }
        v28 = v26 & 0x3F;
        if ( !v28 )
          goto LABEL_27;
        v23 = !_BitScanForward64((unsigned __int64 *)&v29, ~*v18);
        if ( v23 )
          LODWORD(v29) = 64;
        if ( (unsigned int)v29 >= v28 )
          goto LABEL_27;
LABEL_15:
        while ( (unsigned __int64)v18 <= v21 )
        {
          if ( *++v18 == -1LL )
          {
            v23 = !_BitScanReverse64((unsigned __int64 *)&v25, ~*(v18 - 1));
            if ( v23 )
              goto LABEL_13;
            v22 = 63 - v25;
            goto LABEL_19;
          }
        }
      }
    }
LABEL_71:
    v14 = -1;
    v15 = -1;
LABEL_28:
    v5 = v47;
    a3 = v46;
LABEL_29:
    if ( !v7 )
      break;
    v30 = a2 + a3;
    if ( a2 + a3 > v3 )
      v30 = v3;
    v8 = v30 - 1;
    v7 = 0;
  }
  v6 = a1;
  v9 = v14 - v11;
  if ( v14 == -1 )
    v9 = v15;
LABEL_78:
  if ( v9 != -1 )
    RtlClearBits(v6, v9, a2);
  return v9;
}
