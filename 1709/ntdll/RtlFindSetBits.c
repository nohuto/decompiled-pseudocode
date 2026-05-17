/*
 * XREFs of RtlFindSetBits @ 0x18008C820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindSetBits(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r15d
  int v6; // r11d
  int v7; // r9d
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // r12d
  unsigned int v11; // ebx
  __int64 v12; // r14
  unsigned int v13; // ebp
  unsigned __int64 v14; // rax
  _QWORD *v15; // r9
  signed __int64 v16; // r10
  unsigned __int64 v17; // rsi
  int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  bool v21; // cc
  unsigned int v22; // r11d
  int v24; // ecx
  _QWORD *v25; // rbx
  bool v26; // zf
  __int64 v27; // rax
  unsigned int v28; // r8d
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  bool v31; // sf
  __int64 v32; // rax
  unsigned int v33; // ecx
  __int64 v34; // rax
  unsigned __int64 v35; // rbx
  __int64 v36; // rax
  int v37; // ecx
  char v38; // r8
  _QWORD *v39; // rcx
  unsigned int v40; // r8d
  __int64 v41; // rcx
  unsigned int v42; // r9d
  __int64 v43; // rdx
  __int64 v44; // [rsp+38h] [rbp+8h]
  __int64 v45; // [rsp+50h] [rbp+20h]

  v3 = *(_DWORD *)a1;
  v6 = a3 < *(_DWORD *)a1 ? a3 : 0;
  v7 = *(_DWORD *)a1 - 1;
  if ( !a2 )
    return v6 & 0xFFFFFFF8;
  v8 = *(_QWORD *)(a1 + 8);
  v44 = v8;
  v9 = v8 & 4;
  v45 = v9;
  v10 = v9 != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v11 = v10 + v7;
    v12 = v8 - (v9 != 0 ? 4 : 0);
    if ( v7 - v6 + 1 >= a2 )
    {
      v13 = v11 - a2 + 1;
      v14 = (unsigned __int64)v13 >> 6;
      v15 = (_QWORD *)(v12 + 8 * ((unsigned __int64)(unsigned int)(v10 + v6) >> 6));
      v16 = ((1LL << ((v10 + v6) & 0x3F)) - 1) | ~*v15;
      v17 = v12 + 8 * v14;
      if ( a2 > 0x7F )
      {
        v35 = v17 + 8;
        if ( (v13 & 0x3F) == 0 )
          v35 = v12 + 8 * v14;
        if ( v16 )
        {
          if ( *++v15 != -1LL )
            goto LABEL_76;
          v26 = !_BitScanReverse64((unsigned __int64 *)&v36, v16);
          if ( v26 )
LABEL_75:
            v37 = 64;
          else
            v37 = 63 - v36;
        }
        else
        {
          v37 = 0;
        }
LABEL_57:
        v20 = ((unsigned int)(((__int64)v15 - v12) >> 3) << 6) - v37;
        if ( v20 > v13 )
          goto LABEL_33;
        v38 = a2 - v37;
        v39 = &v15[(unsigned __int64)(a2 - v37) >> 6];
        while ( ++v15 != v39 )
        {
          if ( *v15 != -1LL )
            goto LABEL_76;
        }
        v40 = v38 & 0x3F;
        if ( v40 )
        {
          v26 = !_BitScanForward64((unsigned __int64 *)&v41, ~*v15);
          if ( v26 )
            LODWORD(v41) = 64;
          if ( (unsigned int)v41 < v40 )
          {
LABEL_76:
            while ( (unsigned __int64)v15 <= v35 )
            {
              if ( *++v15 == -1LL )
              {
                v26 = !_BitScanReverse64((unsigned __int64 *)&v43, ~*(v15 - 1));
                if ( v26 )
                  goto LABEL_75;
                v37 = 63 - v43;
                goto LABEL_57;
              }
            }
            goto LABEL_33;
          }
        }
      }
      else
      {
        v18 = 64;
        if ( a2 < 0x40 )
        {
          if ( a2 > 1 )
          {
            v24 = 0;
            v25 = (_QWORD *)(v12 + 8 * ((unsigned __int64)v11 >> 6));
            while ( v16 != -1 )
            {
LABEL_21:
              v26 = !_BitScanForward64((unsigned __int64 *)&v27, v16);
              if ( v26 )
                LODWORD(v27) = 64;
              if ( v24 + (int)v27 >= a2 )
              {
                LODWORD(v29) = -v24;
LABEL_32:
                v20 = ((unsigned int)(((__int64)v15 - v12) >> 3) << 6) + v29;
                v21 = v20 <= v13;
                goto LABEL_11;
              }
              v28 = a2;
              v29 = ~v16;
              while ( 1 )
              {
                v29 &= v29 >> (v28 >> 1);
                if ( !v29 )
                  break;
                v28 -= v28 >> 1;
                if ( v28 <= 1 )
                {
                  _BitScanForward64(&v29, v29);
                  goto LABEL_32;
                }
              }
              if ( v15 == v25 )
                goto LABEL_33;
              v26 = !_BitScanReverse64((unsigned __int64 *)&v30, v16);
              if ( v26 )
                v24 = 64;
              else
                v24 = 63 - v30;
              v16 = ~*++v15;
            }
            while ( (unsigned __int64)++v15 <= v17 )
            {
              v16 = ~*v15;
              if ( *v15 )
              {
                v24 = 0;
                goto LABEL_21;
              }
            }
          }
          else
          {
            while ( v16 == -1 )
            {
              if ( (unsigned __int64)++v15 > v17 )
                goto LABEL_33;
              v16 = ~*v15;
            }
            _BitScanForward64(&v19, ~v16);
            v20 = v19 + ((unsigned int)(((__int64)v15 - v12) >> 3) << 6);
            v21 = v20 <= v13;
LABEL_11:
            if ( v21 )
              goto LABEL_12;
          }
LABEL_33:
          v20 = -1;
LABEL_34:
          v8 = v44;
          goto LABEL_71;
        }
        do
        {
LABEL_35:
          v31 = v16 < 0;
          do
          {
            if ( v31 )
            {
              if ( (unsigned __int64)++v15 > v17 )
                goto LABEL_33;
              v16 = ~*v15;
              goto LABEL_35;
            }
            v26 = !_BitScanReverse64((unsigned __int64 *)&v32, v16);
            if ( !v26 )
              v18 = 63 - v32;
            v20 = (((unsigned int)(((__int64)v15 - v12) >> 3) + 1) << 6) - v18;
            if ( v20 > v13 )
              goto LABEL_33;
            v33 = a2 - v18;
            if ( a2 == v18 )
              goto LABEL_12;
            ++v15;
            v18 = 64;
            v16 = ~*v15;
            if ( v33 < 0x40 )
              goto LABEL_47;
            v31 = v16 < 0;
          }
          while ( *v15 != -1LL );
          v33 -= 64;
          if ( !v33 )
            break;
          v16 = ~*++v15;
LABEL_47:
          v26 = !_BitScanForward64((unsigned __int64 *)&v34, v16);
          if ( v26 )
            LODWORD(v34) = 64;
        }
        while ( (unsigned int)v34 < v33 );
      }
LABEL_12:
      if ( v20 != -1 )
        break;
      goto LABEL_34;
    }
    v20 = -1;
LABEL_71:
    if ( !v6 )
      break;
    v9 = v45;
    v42 = a2 + a3;
    if ( a2 + a3 > v3 )
      v42 = v3;
    v7 = v42 - 1;
    v6 = 0;
  }
  v22 = v20 - v10;
  if ( v20 == -1 )
    return (unsigned int)-1;
  return v22;
}
