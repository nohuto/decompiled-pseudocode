/*
 * XREFs of RtlIsTextUnicode @ 0x180068890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsTextUnicode(PVOID Buffer, ULONG Size, PULONG Result)
{
  int v3; // r11d
  ULONG v4; // r15d
  ULONG v5; // r13d
  unsigned __int8 *v6; // rbp
  int v7; // r12d
  int v8; // ebx
  unsigned int v9; // edi
  unsigned int v10; // r9d
  unsigned int v11; // edx
  unsigned int v12; // r14d
  unsigned int v13; // esi
  unsigned int v14; // ecx
  _WORD *v15; // r10
  unsigned int v16; // r13d
  __int64 v17; // rbp
  int v18; // r15d
  unsigned int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // edi
  int v25; // r10d
  unsigned int v26; // r9d
  int v27; // r8d
  int v28; // r11d
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // ecx
  int v33; // eax
  ULONG v34; // ecx
  unsigned int v36; // r8d
  unsigned int v37; // r13d
  unsigned __int64 v38; // rax
  unsigned int v39; // ecx
  unsigned int v40; // [rsp+0h] [rbp-88h]
  int v41; // [rsp+4h] [rbp-84h]
  int v42; // [rsp+8h] [rbp-80h]
  int v43; // [rsp+Ch] [rbp-7Ch]
  int v44; // [rsp+10h] [rbp-78h]
  int v45; // [rsp+14h] [rbp-74h]
  int v46; // [rsp+18h] [rbp-70h]
  int v47; // [rsp+1Ch] [rbp-6Ch]
  int v48; // [rsp+20h] [rbp-68h]
  int v49; // [rsp+24h] [rbp-64h]
  int v50; // [rsp+28h] [rbp-60h]
  int v51; // [rsp+2Ch] [rbp-5Ch]
  int v52; // [rsp+30h] [rbp-58h]
  ULONG v53; // [rsp+34h] [rbp-54h]
  unsigned int v57; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v4 = Size;
  v44 = 0;
  v5 = Size >> 1;
  v6 = (unsigned __int8 *)Buffer;
  v43 = 0;
  v7 = 0;
  v42 = 0;
  v8 = 0;
  v41 = 0;
  v9 = 0;
  v52 = 0;
  v10 = 0;
  v51 = 0;
  v11 = 0;
  v48 = 0;
  v12 = 0;
  v47 = 0;
  v13 = 0;
  v45 = 0;
  v46 = 0;
  v49 = 0;
  v50 = 0;
  v40 = 0;
  v57 = 0;
  v53 = v5;
  if ( v5 > 0x100 )
  {
    v14 = 256;
  }
  else
  {
    v14 = v5;
    if ( !v5 )
      goto LABEL_91;
  }
  if ( v4 == 2 )
  {
    if ( !*(_WORD *)v6 || v6[1] )
      goto LABEL_9;
LABEL_91:
    if ( Result )
      *Result = 5;
    return 0;
  }
  if ( v4 > 2 && v5 <= 0x100 && (v4 & 1) == 0 && (*(_WORD *)&v6[2 * v14 - 2] & 0xFF00) == 0 )
    --v14;
LABEL_9:
  if ( v14 )
  {
    v15 = v6;
    v16 = 0;
    v17 = v14;
    v18 = 0;
    do
    {
      v19 = (unsigned __int16)*v15;
      if ( v19 < 0x21 || v19 >= 0x900 )
      {
        if ( v19 > 0xD00 )
        {
          if ( v19 <= 0x3000 )
          {
            if ( v19 == 12288 )
            {
              ++v41;
            }
            else if ( v19 == 0x2000 )
            {
              ++v46;
            }
          }
          else if ( v19 != 65279 )
          {
            if ( v19 == 65534 )
            {
              ++v51;
            }
            else if ( v19 == 0xFFFF )
            {
              ++v52;
            }
          }
        }
        else if ( v19 == 3328 )
        {
          ++v48;
        }
        else if ( v19 > 0x20 )
        {
          switch ( v19 )
          {
            case 0x900u:
              ++v45;
              break;
            case 0xA00u:
              ++v47;
              break;
            case 0xA0Du:
              ++v50;
              break;
          }
        }
        else if ( v19 == 32 )
        {
          ++v7;
        }
        else if ( *v15 )
        {
          switch ( v19 )
          {
            case 9u:
              ++v42;
              break;
            case 0xAu:
              ++v43;
              break;
            case 0xDu:
              ++v18;
              break;
          }
        }
        else
        {
          ++v49;
        }
      }
      v11 = *(unsigned __int8 *)v15;
      v20 = BYTE1(v19);
      if ( v11 == 13 )
      {
        if ( v10 == 10 )
          ++v16;
      }
      else if ( v11 == 10 && v10 == 13 )
      {
        ++v16;
      }
      v8 += (v11 == 0) + (BYTE1(v19) == 0);
      if ( BYTE1(v19) > v10 )
        v21 = BYTE1(v19);
      else
        v21 = v10;
      if ( v10 >= v20 )
        v10 = v20;
      v22 = v9;
      v12 += v21 - v10;
      v10 = v20;
      v23 = *(unsigned __int8 *)v15;
      if ( v11 > v9 )
      {
        v22 = *(unsigned __int8 *)v15;
        v23 = v9;
      }
      ++v15;
      v9 = v11;
      v13 += v22 - v23;
      --v17;
    }
    while ( v17 );
    v6 = (unsigned __int8 *)Buffer;
    v44 = v18;
    v4 = Size;
    v57 = v16;
    v5 = v53;
  }
  if ( v11 != 13 )
  {
    if ( v11 == 10 && v10 == 13 )
      goto LABEL_108;
LABEL_25:
    v24 = v57;
    goto LABEL_26;
  }
  if ( v10 != 10 )
    goto LABEL_25;
LABEL_108:
  v24 = v57 + 1;
LABEL_26:
  v25 = v8 - 1;
  if ( v10 )
    v25 = v8;
  if ( v10 == 26 )
    ++v24;
  v26 = 512;
  if ( v4 <= 0x200 )
    v26 = v4;
  if ( NlsMbCodePageTag )
  {
    v36 = 0;
    if ( v26 )
    {
      v37 = 0;
      do
      {
        if ( NlsLeadByteInfoTable[v6[v36]] )
        {
          ++v37;
          ++v36;
        }
        ++v36;
      }
      while ( v36 < v26 );
      v40 = v37;
      v5 = v53;
    }
  }
  if ( v13 < 0x7F )
  {
    if ( !v12 )
    {
      v27 = 1;
      goto LABEL_36;
    }
  }
  else if ( !v12 )
  {
    goto LABEL_35;
  }
  if ( !v13 )
  {
    v27 = 16;
    goto LABEL_36;
  }
LABEL_35:
  v27 = 0;
LABEL_36:
  if ( NlsMbCodePageTag && v40 && Result && (*Result & 0x400) != 0 )
  {
    if ( v5 <= 0x100 )
      v38 = (unsigned __int64)v4 >> 1;
    else
      v38 = 256LL;
    v39 = (v38 >> 1) - 1;
    if ( v40 >= v39 / 3 )
    {
      LOBYTE(v3) = v40 < 2 * v39 / 3;
      v28 = v3 + 1;
    }
    else
    {
      v28 = 3;
    }
    v27 |= 0x400u;
  }
  else
  {
    v28 = 3;
  }
  v29 = v27 | 2;
  if ( v28 * v12 >= v13 )
    v29 = v27;
  if ( v28 * v13 < v12 )
    v29 |= 0x20u;
  v30 = v29 | 4;
  if ( !(v44 + v43 + v42 + v7 + v41) )
    v30 = v29;
  v31 = v30 | 0x40;
  if ( !(v48 + v47 + v46 + v45) )
    v31 = v30;
  if ( v52 + v51 + v50 + v49 || (v32 = v31, v24) && v24 >= v26 / 0x28 )
    v32 = v31 | 0x100;
  v33 = v32 | 0x200;
  if ( (v4 & 1) == 0 )
    v33 = v32;
  v34 = v33 | 0x1000;
  if ( !v25 )
    v34 = v33;
  if ( *(_WORD *)v6 == 0xFEFF )
  {
    v34 |= 8u;
  }
  else if ( *(_WORD *)v6 == 0xFFFE )
  {
    v34 |= 0x80u;
  }
  if ( Result )
  {
    *Result &= v34;
    v34 = *Result;
  }
  return (v34 & 0xB08) == 8 || (v34 & 0xF0) == 0 && (v34 & 0xF00) == 0 && (v34 & 0xF00F) != 0;
}
