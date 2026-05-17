/*
 * XREFs of RtlFindClearBitsAndSet @ 0x180050D90
 * Callers:
 *     RtlFlsAlloc @ 0x180050130 (RtlFlsAlloc.c)
 *     sub_180050C1C @ 0x180050C1C (sub_180050C1C.c)
 * Callees:
 *     RtlSetBits @ 0x1800510C0 (RtlSetBits.c)
 */

__int64 __fastcall RtlFindClearBitsAndSet(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r15d
  __int64 v5; // r13
  int v6; // ebx
  int v7; // r9d
  __int64 v8; // rdi
  int v9; // r12d
  unsigned int v10; // r10d
  unsigned int v11; // edx
  __int64 v12; // r14
  unsigned int v13; // ebp
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
  unsigned __int64 *v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  bool v20; // cc
  unsigned int v21; // ebx
  int v23; // ecx
  unsigned __int64 *v24; // rdi
  bool v25; // zf
  __int64 v26; // rax
  unsigned int v27; // r10d
  unsigned __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // r9d
  __int64 v32; // rax
  int v33; // r8d
  unsigned int v34; // r9d
  __int64 v35; // rax
  unsigned __int64 v36; // r10
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  char v39; // r8
  unsigned __int64 *v40; // r9
  unsigned int v41; // r8d
  __int64 v42; // rax
  __int64 v43; // [rsp+28h] [rbp-50h]
  unsigned int v45; // [rsp+90h] [rbp+18h]

  v45 = a3;
  v3 = *(_DWORD *)a1;
  v5 = a1;
  v6 = a3 < *(_DWORD *)a1 ? a3 : 0;
  v7 = *(_DWORD *)a1 - 1;
  if ( !a2 )
  {
    v21 = v6 & 0xFFFFFFF8;
    goto LABEL_15;
  }
  v8 = *(_QWORD *)(a1 + 8);
  v43 = v8;
  v9 = (v8 & 4) != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v10 = v9 + v7;
    v11 = v9 + v6;
    v12 = v8 - ((v43 & 4) != 0 ? 4 : 0);
    if ( v7 - v6 + 1 >= a2 )
    {
      v13 = v10 - a2 + 1;
      v14 = (1LL << (v11 & 0x3F)) - 1;
      v15 = v12 + 8 * ((unsigned __int64)v13 >> 6);
      v16 = (unsigned __int64 *)(v12 + 8 * ((unsigned __int64)v11 >> 6));
      v17 = *v16 | v14;
      if ( a2 > 0x7F )
      {
        v36 = v15 + 8;
        if ( (v13 & 0x3F) == 0 )
          v36 = v12 + 8 * ((unsigned __int64)v13 >> 6);
        if ( v17 )
        {
          if ( *++v16 )
            goto LABEL_76;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v37, v17);
          if ( v25 )
          {
            LODWORD(v17) = 64;
            goto LABEL_62;
          }
LABEL_61:
          LODWORD(v17) = 63 - v37;
        }
LABEL_62:
        while ( 1 )
        {
          v19 = ((unsigned int)(((__int64)v16 - v12) >> 3) << 6) - v17;
          if ( v19 > v13 )
            goto LABEL_35;
          v38 = a2 - (unsigned int)v17;
          v39 = a2 - v17;
          v40 = &v16[v38 >> 6];
          while ( ++v16 != v40 )
          {
            if ( *v16 )
              goto LABEL_76;
          }
          v41 = v39 & 0x3F;
          if ( !v41 )
            goto LABEL_12;
          v25 = !_BitScanForward64((unsigned __int64 *)&v42, *v16);
          if ( v25 )
            LODWORD(v42) = 64;
          if ( (unsigned int)v42 >= v41 )
            goto LABEL_12;
          do
          {
LABEL_76:
            if ( (unsigned __int64)v16 > v36 )
              goto LABEL_35;
            ++v16;
          }
          while ( *v16 );
          v25 = !_BitScanReverse64((unsigned __int64 *)&v37, *(v16 - 1));
          if ( !v25 )
            goto LABEL_61;
          LODWORD(v17) = 64;
        }
      }
      if ( a2 < 0x40 )
      {
        if ( a2 > 1 )
        {
          v23 = 0;
          v24 = (unsigned __int64 *)(v12 + 8 * ((unsigned __int64)v10 >> 6));
          while ( v17 != -1 )
          {
LABEL_23:
            v25 = !_BitScanForward64((unsigned __int64 *)&v26, v17);
            if ( v25 )
              LODWORD(v26) = 64;
            if ( v23 + (int)v26 >= a2 )
            {
              LODWORD(v30) = -v23;
LABEL_34:
              v19 = ((unsigned int)(((__int64)v16 - v12) >> 3) << 6) + v30;
              v20 = v19 <= v13;
              goto LABEL_11;
            }
            v27 = a2;
            v28 = ~v17;
            while ( 1 )
            {
              v28 &= v28 >> (v27 >> 1);
              if ( !v28 )
                break;
              v27 -= v27 >> 1;
              if ( v27 <= 1 )
              {
                _BitScanForward64((unsigned __int64 *)&v30, v28);
                goto LABEL_34;
              }
            }
            if ( v16 == v24 )
              goto LABEL_35;
            v25 = !_BitScanReverse64((unsigned __int64 *)&v29, v17);
            if ( v25 )
              v23 = 64;
            else
              v23 = 63 - v29;
            v17 = *++v16;
          }
          while ( (unsigned __int64)++v16 <= v15 )
          {
            v17 = *v16;
            if ( *v16 != -1LL )
            {
              v23 = 0;
              goto LABEL_23;
            }
          }
        }
        else
        {
          while ( v17 == -1 )
          {
            if ( (unsigned __int64)++v16 > v15 )
              goto LABEL_35;
            v17 = *v16;
          }
          _BitScanForward64(&v18, ~v17);
          v19 = v18 + ((unsigned int)(((__int64)v16 - v12) >> 3) << 6);
          v20 = v19 <= v13;
LABEL_11:
          if ( v20 )
          {
LABEL_12:
            if ( v19 != -1 )
              break;
            goto LABEL_36;
          }
        }
LABEL_35:
        v19 = -1;
LABEL_36:
        a3 = v45;
        goto LABEL_37;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v17 < 0 )
          {
            if ( (unsigned __int64)++v16 > v15 )
              goto LABEL_35;
            v17 = *v16;
          }
          v25 = !_BitScanReverse64((unsigned __int64 *)&v32, v17);
          if ( v25 )
            v33 = 64;
          else
            v33 = 63 - v32;
          v19 = (((unsigned int)(((__int64)v16 - v12) >> 3) + 1) << 6) - v33;
          if ( v19 > v13 )
            goto LABEL_35;
          v34 = a2 - v33;
          if ( a2 == v33 )
            goto LABEL_12;
          v17 = *++v16;
          if ( v34 >= 0x40 )
            break;
LABEL_50:
          v25 = !_BitScanForward64((unsigned __int64 *)&v35, v17);
          if ( v25 )
            LODWORD(v35) = 64;
          if ( (unsigned int)v35 >= v34 )
            goto LABEL_12;
        }
        if ( !v17 )
        {
          v34 -= 64;
          if ( !v34 )
            goto LABEL_12;
          v17 = *++v16;
          goto LABEL_50;
        }
      }
    }
    v19 = -1;
LABEL_37:
    if ( !v6 )
      break;
    v8 = v43;
    v31 = a2 + a3;
    if ( a2 + a3 > v3 )
      v31 = v3;
    v7 = v31 - 1;
    v6 = 0;
  }
  v5 = a1;
  v21 = v19 - v9;
  if ( v19 == -1 )
    v21 = -1;
LABEL_15:
  if ( v21 != -1 )
    RtlSetBits(v5, v21, a2);
  return v21;
}
