/*
 * XREFs of RtlFindClearBitsAndSet @ 0x18001CF80
 * Callers:
 *     LdrpAcquireTlsIndex @ 0x18001CC28 (LdrpAcquireTlsIndex.c)
 *     RtlFlsAlloc @ 0x18001CDA0 (RtlFlsAlloc.c)
 * Callees:
 *     RtlSetBits @ 0x18001D2C0 (RtlSetBits.c)
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
  unsigned __int64 *v14; // r9
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  bool v20; // cc
  unsigned int v21; // ebx
  int v23; // ecx
  unsigned __int64 *v24; // rdi
  bool v25; // zf
  __int64 v26; // rax
  unsigned int v27; // r10d
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // r9d
  bool v31; // sf
  __int64 v32; // rax
  int v33; // r8d
  unsigned int v34; // ecx
  __int64 v35; // rax
  unsigned __int64 v36; // r10
  __int64 v37; // rax
  int v38; // ecx
  unsigned __int64 v39; // rax
  char v40; // cl
  unsigned __int64 *v41; // r8
  unsigned int v42; // ecx
  __int64 v43; // rax
  unsigned int v45; // [rsp+70h] [rbp+18h]
  __int64 v46; // [rsp+78h] [rbp+20h]

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
  v46 = v8;
  v9 = (v8 & 4) != 0 ? 0x20 : 0;
  while ( 1 )
  {
    v10 = v9 + v7;
    v11 = v9 + v6;
    v12 = v8 - ((v46 & 4) != 0 ? 4 : 0);
    if ( v7 - v6 + 1 >= a2 )
    {
      v13 = v10 - a2 + 1;
      v14 = (unsigned __int64 *)(v12 + 8 * ((unsigned __int64)v11 >> 6));
      v15 = (unsigned __int64)v13 >> 6;
      v16 = ((1LL << (v11 & 0x3F)) - 1) | *v14;
      v17 = v12 + 8 * v15;
      if ( a2 > 0x7F )
      {
        v36 = v17 + 8;
        if ( (v13 & 0x3F) == 0 )
          v36 = v12 + 8 * v15;
        if ( v16 )
        {
          if ( *++v14 )
            goto LABEL_78;
          v25 = !_BitScanReverse64((unsigned __int64 *)&v37, v16);
          if ( v25 )
            v38 = 64;
          else
LABEL_60:
            v38 = 63 - v37;
        }
        else
        {
          v38 = 0;
        }
LABEL_61:
        v19 = ((unsigned int)(((__int64)v14 - v12) >> 3) << 6) - v38;
        if ( v19 > v13 )
          goto LABEL_35;
        v39 = a2 - v38;
        v40 = a2 - v38;
        v41 = &v14[v39 >> 6];
        while ( ++v14 != v41 )
        {
          if ( *v14 )
            goto LABEL_78;
        }
        v42 = v40 & 0x3F;
        if ( v42 )
        {
          v25 = !_BitScanForward64((unsigned __int64 *)&v43, *v14);
          if ( v25 )
            LODWORD(v43) = 64;
          if ( (unsigned int)v43 < v42 )
          {
LABEL_78:
            while ( (unsigned __int64)v14 <= v36 )
            {
              if ( !*++v14 )
              {
                v25 = !_BitScanReverse64((unsigned __int64 *)&v37, *(v14 - 1));
                if ( !v25 )
                  goto LABEL_60;
                v38 = 64;
                goto LABEL_61;
              }
            }
            goto LABEL_35;
          }
        }
      }
      else
      {
        if ( a2 < 0x40 )
        {
          if ( a2 > 1 )
          {
            v23 = 0;
            v24 = (unsigned __int64 *)(v12 + 8 * ((unsigned __int64)v10 >> 6));
            while ( v16 != -1 )
            {
LABEL_23:
              v25 = !_BitScanForward64((unsigned __int64 *)&v26, v16);
              if ( v25 )
                LODWORD(v26) = 64;
              if ( v23 + (int)v26 >= a2 )
              {
                LODWORD(v28) = -v23;
LABEL_34:
                v19 = ((unsigned int)(((__int64)v14 - v12) >> 3) << 6) + v28;
                v20 = v19 <= v13;
                goto LABEL_11;
              }
              v27 = a2;
              v28 = ~v16;
              while ( 1 )
              {
                v28 &= v28 >> (v27 >> 1);
                if ( !v28 )
                  break;
                v27 -= v27 >> 1;
                if ( v27 <= 1 )
                {
                  _BitScanForward64(&v28, v28);
                  goto LABEL_34;
                }
              }
              if ( v14 == v24 )
                goto LABEL_35;
              v25 = !_BitScanReverse64((unsigned __int64 *)&v29, v16);
              if ( v25 )
                v23 = 64;
              else
                v23 = 63 - v29;
              v16 = *++v14;
            }
            while ( (unsigned __int64)++v14 <= v17 )
            {
              v16 = *v14;
              if ( *v14 != -1LL )
              {
                v23 = 0;
                goto LABEL_23;
              }
            }
          }
          else
          {
            while ( v16 == -1 )
            {
              if ( (unsigned __int64)++v14 > v17 )
                goto LABEL_35;
              v16 = *v14;
            }
            _BitScanForward64(&v18, ~v16);
            v19 = v18 + ((unsigned int)(((__int64)v14 - v12) >> 3) << 6);
            v20 = v19 <= v13;
LABEL_11:
            if ( v20 )
              goto LABEL_12;
          }
LABEL_35:
          v19 = -1;
LABEL_36:
          a3 = v45;
          goto LABEL_37;
        }
        do
        {
LABEL_45:
          v31 = v16 < 0;
          do
          {
            if ( v31 )
            {
              if ( (unsigned __int64)++v14 > v17 )
                goto LABEL_35;
              v16 = *v14;
              goto LABEL_45;
            }
            v25 = !_BitScanReverse64((unsigned __int64 *)&v32, v16);
            if ( v25 )
              v33 = 64;
            else
              v33 = 63 - v32;
            v19 = (((unsigned int)(((__int64)v14 - v12) >> 3) + 1) << 6) - v33;
            if ( v19 > v13 )
              goto LABEL_35;
            v34 = a2 - v33;
            if ( a2 == v33 )
              goto LABEL_12;
            v16 = *++v14;
            if ( v34 < 0x40 )
              goto LABEL_51;
            v31 = v16 < 0;
          }
          while ( v16 );
          v34 -= 64;
          if ( !v34 )
            break;
          v16 = *++v14;
LABEL_51:
          v25 = !_BitScanForward64((unsigned __int64 *)&v35, v16);
          if ( v25 )
            LODWORD(v35) = 64;
        }
        while ( (unsigned int)v35 < v34 );
      }
LABEL_12:
      if ( v19 != -1 )
        break;
      goto LABEL_36;
    }
    v19 = -1;
LABEL_37:
    if ( !v6 )
      break;
    v8 = v46;
    v30 = a2 + a3;
    if ( a2 + a3 > v3 )
      v30 = v3;
    v7 = v30 - 1;
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
