/*
 * XREFs of RtlFindSetBitsAndClear @ 0x1800E9990
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x18001C050 (RtlClearBits.c)
 */

__int64 __fastcall RtlFindSetBitsAndClear(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r15d
  __int64 v5; // r13
  int v6; // ebx
  int v7; // r9d
  unsigned int v8; // ebx
  __int64 v9; // r10
  int v10; // r12d
  unsigned int v11; // r11d
  __int64 v12; // r14
  unsigned int v13; // edx
  unsigned int v14; // ebp
  unsigned __int64 v15; // rax
  _QWORD *v16; // r9
  signed __int64 v17; // r10
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r11
  int v20; // ecx
  bool v21; // zf
  __int64 v22; // rax
  __int64 v23; // rdx
  char v24; // r8
  _QWORD *v25; // rcx
  unsigned int v26; // r8d
  __int64 v27; // rcx
  unsigned int v28; // r9d
  int v29; // r8d
  int v30; // ecx
  _QWORD *v31; // r11
  __int64 v32; // rax
  unsigned int v33; // r8d
  unsigned __int64 v34; // rdx
  bool v35; // sf
  __int64 v36; // rax
  unsigned int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rax
  bool v40; // cc
  unsigned __int64 v41; // rax
  unsigned int v44; // [rsp+70h] [rbp+18h]
  __int64 v45; // [rsp+78h] [rbp+20h]

  v44 = a3;
  v3 = *(_DWORD *)a1;
  v5 = a1;
  v6 = a3 < *(_DWORD *)a1 ? a3 : 0;
  v7 = *(_DWORD *)a1 - 1;
  if ( !a2 )
  {
    v8 = v6 & 0xFFFFFFF8;
    goto LABEL_78;
  }
  v9 = *(_QWORD *)(a1 + 8);
  v45 = v9;
  v10 = (v9 & 4) != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v7;
    v12 = v9 - ((v45 & 4) != 0 ? 4 : 0);
    if ( v7 - v6 + 1 < a2 )
    {
      v13 = -1;
      goto LABEL_29;
    }
    v14 = v11 - a2 + 1;
    v15 = (unsigned __int64)v14 >> 6;
    v16 = (_QWORD *)(v12 + 8 * ((unsigned __int64)(unsigned int)(v10 + v6) >> 6));
    v17 = ((1LL << ((v10 + v6) & 0x3F)) - 1) | ~*v16;
    v18 = v12 + 8 * v15;
    if ( a2 <= 0x7F )
    {
      v29 = 64;
      if ( a2 >= 0x40 )
      {
        do
        {
LABEL_49:
          v35 = v17 < 0;
          do
          {
            if ( v35 )
            {
              if ( (unsigned __int64)++v16 > v18 )
                goto LABEL_71;
              v17 = ~*v16;
              goto LABEL_49;
            }
            v21 = !_BitScanReverse64((unsigned __int64 *)&v36, v17);
            if ( !v21 )
              v29 = 63 - v36;
            v13 = (((unsigned int)(((__int64)v16 - v12) >> 3) + 1) << 6) - v29;
            if ( v13 > v14 )
              goto LABEL_71;
            v37 = a2 - v29;
            if ( a2 == v29 )
              goto LABEL_27;
            ++v16;
            v29 = 64;
            v17 = ~*v16;
            if ( v37 < 0x40 )
              goto LABEL_59;
            v35 = v17 < 0;
          }
          while ( *v16 != -1LL );
          v37 -= 64;
          if ( !v37 )
            break;
          v17 = ~*++v16;
LABEL_59:
          v21 = !_BitScanForward64((unsigned __int64 *)&v38, v17);
          if ( v21 )
            LODWORD(v38) = 64;
        }
        while ( (unsigned int)v38 < v37 );
LABEL_27:
        if ( v13 != -1 )
          break;
        goto LABEL_28;
      }
      if ( a2 <= 1 )
      {
        while ( v17 == -1 )
        {
          if ( (unsigned __int64)++v16 > v18 )
            goto LABEL_71;
          v17 = ~*v16;
        }
        _BitScanForward64(&v41, ~v17);
        v13 = v41 + ((unsigned int)(((__int64)v16 - v12) >> 3) << 6);
        v40 = v13 <= v14;
LABEL_70:
        if ( v40 )
          goto LABEL_27;
      }
      else
      {
        v30 = 0;
        v31 = (_QWORD *)(v12 + 8 * ((unsigned __int64)v11 >> 6));
        while ( v17 != -1 )
        {
LABEL_40:
          v21 = !_BitScanForward64((unsigned __int64 *)&v32, v17);
          if ( v21 )
            LODWORD(v32) = 64;
          if ( v30 + (int)v32 >= a2 )
          {
            LODWORD(v34) = -v30;
LABEL_69:
            v13 = ((unsigned int)(((__int64)v16 - v12) >> 3) << 6) + v34;
            v40 = v13 <= v14;
            goto LABEL_70;
          }
          v33 = a2;
          v34 = ~v17;
          while ( 1 )
          {
            v34 &= v34 >> (v33 >> 1);
            if ( !v34 )
              break;
            v33 -= v33 >> 1;
            if ( v33 <= 1 )
            {
              _BitScanForward64(&v34, v34);
              goto LABEL_69;
            }
          }
          if ( v16 == v31 )
            goto LABEL_71;
          v21 = !_BitScanReverse64((unsigned __int64 *)&v39, v17);
          if ( v21 )
            v30 = 64;
          else
            v30 = 63 - v39;
          v17 = ~*++v16;
        }
        while ( (unsigned __int64)++v16 <= v18 )
        {
          v17 = ~*v16;
          if ( *v16 )
          {
            v30 = 0;
            goto LABEL_40;
          }
        }
      }
    }
    else
    {
      v19 = v18 + 8;
      if ( (v14 & 0x3F) == 0 )
        v19 = v12 + 8 * v15;
      if ( v17 )
      {
        if ( *++v16 != -1LL )
          goto LABEL_15;
        v21 = !_BitScanReverse64((unsigned __int64 *)&v22, v17);
        if ( v21 )
LABEL_13:
          v20 = 64;
        else
          v20 = 63 - v22;
      }
      else
      {
        v20 = 0;
      }
LABEL_19:
      v13 = ((unsigned int)(((__int64)v16 - v12) >> 3) << 6) - v20;
      if ( v13 <= v14 )
      {
        v24 = a2 - v20;
        v25 = &v16[(unsigned __int64)(a2 - v20) >> 6];
        while ( ++v16 != v25 )
        {
          if ( *v16 != -1LL )
            goto LABEL_15;
        }
        v26 = v24 & 0x3F;
        if ( !v26 )
          goto LABEL_27;
        v21 = !_BitScanForward64((unsigned __int64 *)&v27, ~*v16);
        if ( v21 )
          LODWORD(v27) = 64;
        if ( (unsigned int)v27 >= v26 )
          goto LABEL_27;
LABEL_15:
        while ( (unsigned __int64)v16 <= v19 )
        {
          if ( *++v16 == -1LL )
          {
            v21 = !_BitScanReverse64((unsigned __int64 *)&v23, ~*(v16 - 1));
            if ( v21 )
              goto LABEL_13;
            v20 = 63 - v23;
            goto LABEL_19;
          }
        }
      }
    }
LABEL_71:
    v13 = -1;
LABEL_28:
    v9 = v45;
    a3 = v44;
LABEL_29:
    if ( !v6 )
      break;
    v28 = a2 + a3;
    if ( a2 + a3 > v3 )
      v28 = v3;
    v7 = v28 - 1;
    v6 = 0;
  }
  v5 = a1;
  v8 = v13 - v10;
  if ( v13 == -1 )
    v8 = -1;
LABEL_78:
  if ( v8 != -1 )
    RtlClearBits(v5, v8, a2);
  return v8;
}
