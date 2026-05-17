/*
 * XREFs of RtlFindSetBits @ 0x18008EDC0
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
  unsigned __int64 v17; // rdi
  int v18; // r8d
  unsigned __int64 v19; // rax
  unsigned int v20; // edx
  bool v21; // cc
  unsigned int v22; // eax
  unsigned int v23; // r11d
  int v25; // ecx
  _QWORD *v26; // rbx
  bool v27; // zf
  __int64 v28; // rax
  unsigned int v29; // r8d
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  bool v32; // sf
  __int64 v33; // rax
  unsigned int v34; // ecx
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  int v38; // ecx
  char v39; // r8
  _QWORD *v40; // rcx
  unsigned int v41; // r8d
  __int64 v42; // rcx
  unsigned int v43; // r9d
  __int64 v44; // rdx
  __int64 v45; // [rsp+38h] [rbp+8h]
  __int64 v46; // [rsp+50h] [rbp+20h]

  v3 = *(_DWORD *)a1;
  v6 = a3 < *(_DWORD *)a1 ? a3 : 0;
  v7 = *(_DWORD *)a1 - 1;
  v8 = *(_QWORD *)(a1 + 8);
  v45 = v8;
  if ( !a2 )
    return v6 & 0xFFFFFFF8;
  v9 = v8 & 4;
  v46 = v9;
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
        v36 = v17 + 8;
        if ( (v13 & 0x3F) == 0 )
          v36 = v12 + 8 * v14;
        if ( v16 )
        {
          if ( *++v15 != -1LL )
            goto LABEL_66;
          v27 = !_BitScanReverse64((unsigned __int64 *)&v37, v16);
          if ( v27 )
LABEL_77:
            v38 = 64;
          else
            v38 = 63 - v37;
        }
        else
        {
          v38 = 0;
        }
LABEL_57:
        v20 = ((unsigned int)(((__int64)v15 - v12) >> 3) << 6) - v38;
        if ( v20 > v13 )
          goto LABEL_33;
        v39 = a2 - v38;
        v40 = &v15[(unsigned __int64)(a2 - v38) >> 6];
        while ( ++v15 != v40 )
        {
          if ( *v15 != -1LL )
            goto LABEL_66;
        }
        v41 = v39 & 0x3F;
        if ( v41 )
        {
          v27 = !_BitScanForward64((unsigned __int64 *)&v42, ~*v15);
          if ( v27 )
            LODWORD(v42) = 64;
          if ( (unsigned int)v42 < v41 )
          {
LABEL_66:
            while ( (unsigned __int64)v15 <= v36 )
            {
              if ( *++v15 == -1LL )
              {
                v27 = !_BitScanReverse64((unsigned __int64 *)&v44, ~*(v15 - 1));
                if ( v27 )
                  goto LABEL_77;
                v38 = 63 - v44;
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
            v25 = 0;
            v26 = (_QWORD *)(v12 + 8 * ((unsigned __int64)v11 >> 6));
            while ( v16 != -1 )
            {
LABEL_21:
              v27 = !_BitScanForward64((unsigned __int64 *)&v28, v16);
              if ( v27 )
                LODWORD(v28) = 64;
              if ( v25 + (int)v28 >= a2 )
              {
                LODWORD(v30) = -v25;
LABEL_32:
                v20 = ((unsigned int)(((__int64)v15 - v12) >> 3) << 6) + v30;
                v21 = v20 <= v13;
                goto LABEL_11;
              }
              v29 = a2;
              v30 = ~v16;
              while ( 1 )
              {
                v30 &= v30 >> (v29 >> 1);
                if ( !v30 )
                  break;
                v29 -= v29 >> 1;
                if ( v29 <= 1 )
                {
                  _BitScanForward64(&v30, v30);
                  goto LABEL_32;
                }
              }
              if ( v15 == v26 )
                goto LABEL_33;
              v27 = !_BitScanReverse64((unsigned __int64 *)&v31, v16);
              if ( v27 )
                v25 = 64;
              else
                v25 = 63 - v31;
              v16 = ~*++v15;
            }
            while ( (unsigned __int64)++v15 <= v17 )
            {
              v16 = ~*v15;
              if ( *v15 )
              {
                v25 = 0;
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
          v22 = -1;
LABEL_34:
          v8 = v45;
          goto LABEL_72;
        }
        do
        {
LABEL_35:
          v32 = v16 < 0;
          do
          {
            if ( v32 )
            {
              if ( (unsigned __int64)++v15 > v17 )
                goto LABEL_33;
              v16 = ~*v15;
              goto LABEL_35;
            }
            v27 = !_BitScanReverse64((unsigned __int64 *)&v33, v16);
            if ( !v27 )
              v18 = 63 - v33;
            v20 = (((unsigned int)(((__int64)v15 - v12) >> 3) + 1) << 6) - v18;
            if ( v20 > v13 )
              goto LABEL_33;
            v34 = a2 - v18;
            if ( a2 == v18 )
              goto LABEL_12;
            ++v15;
            v18 = 64;
            v16 = ~*v15;
            if ( v34 < 0x40 )
              goto LABEL_47;
            v32 = v16 < 0;
          }
          while ( *v15 != -1LL );
          v34 -= 64;
          if ( !v34 )
            break;
          v16 = ~*++v15;
LABEL_47:
          v27 = !_BitScanForward64((unsigned __int64 *)&v35, v16);
          if ( v27 )
            LODWORD(v35) = 64;
        }
        while ( (unsigned int)v35 < v34 );
      }
LABEL_12:
      v22 = v20;
      if ( v20 != -1 )
        break;
      goto LABEL_34;
    }
    v20 = -1;
    v22 = -1;
LABEL_72:
    if ( !v6 )
      break;
    v9 = v46;
    v43 = a2 + a3;
    if ( a2 + a3 > v3 )
      v43 = v3;
    v7 = v43 - 1;
    v6 = 0;
  }
  v23 = v20 - v10;
  if ( v20 == -1 )
    return v22;
  return v23;
}
