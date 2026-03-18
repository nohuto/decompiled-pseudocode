/*
 * XREFs of KiAdjustGroupConfiguration @ 0x1401FDF70
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406AC0A4 (KiStartDynamicProcessor.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 */

char __fastcall KiAdjustGroupConfiguration(__int64 a1)
{
  __int64 v2; // rax
  unsigned __int16 v3; // r11
  unsigned __int16 v4; // r12
  unsigned __int16 v5; // r14
  int v6; // r15d
  __int64 v7; // rcx
  int *v8; // rdi
  unsigned __int16 v9; // dx
  __int64 *v10; // r9
  __int64 *v11; // rdi
  __int64 v12; // r10
  __int64 v13; // r8
  unsigned __int16 v14; // r8
  __int64 v15; // rcx
  unsigned __int16 v16; // r10
  unsigned __int8 v17; // bl
  int v18; // edi
  unsigned int v19; // edi
  __int64 v20; // rcx
  int *v21; // rdi
  __int64 *v22; // rdi
  __int64 v23; // r8
  char v24; // cl
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // r8
  __int64 v28; // rcx
  unsigned __int16 v29; // cx
  __int64 v30; // rbx
  _QWORD *v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r11
  __int64 *v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  char v37; // r15
  unsigned __int16 i; // bx
  unsigned int v39; // edx
  unsigned int v40; // eax
  unsigned __int16 v41; // dx
  __int64 v42; // r8
  unsigned __int16 v43; // cx
  unsigned int v44; // r9d
  __int64 *v45; // rdx
  __int64 v46; // rcx
  _DWORD v48[20]; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD Src[20]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v50[64]; // [rsp+C8h] [rbp-40h] BYREF

  LOBYTE(v2) = (unsigned __int8)memset(v48, 0, sizeof(v48));
  if ( (*(_BYTE *)(a1 + 173) & 8) == 0 && !*(_QWORD *)(a1 + 136) )
  {
    v3 = *(_WORD *)(a1 + 144);
    v4 = KiActiveGroups;
    if ( v3 >= (unsigned __int16)KiActiveGroups )
    {
      v5 = KiMaximumGroups;
      v6 = KiMaximumGroupSize;
      if ( KiMaximumGroups )
      {
        v7 = (unsigned __int16)KiMaximumGroups;
        v8 = v48;
        LOBYTE(v2) = KiMaximumGroupSize;
        while ( v7 )
        {
          *v8++ = v6;
          --v7;
        }
      }
      v9 = KeNumberNodes;
      v10 = KeNodeBlock;
      if ( KeNumberNodes )
      {
        v11 = KeNodeBlock;
        v12 = (unsigned __int16)KeNumberNodes;
        do
        {
          v13 = *v11;
          if ( (*(_BYTE *)(*v11 + 173) & 2) != 0 )
          {
            LODWORD(v2) = *(unsigned __int8 *)(v13 + 172);
            v48[*(unsigned __int16 *)(v13 + 144)] -= v2;
          }
          ++v11;
          --v12;
        }
        while ( v12 );
      }
      v14 = 0;
      if ( v9 )
      {
        while ( 1 )
        {
          v15 = KeNodeBlock[v14];
          LOBYTE(v2) = *(_BYTE *)(v15 + 173) & 0xA;
          if ( (_BYTE)v2 == 2 && !*(_QWORD *)(v15 + 136) )
          {
            v16 = *(_WORD *)(v15 + 144);
            if ( v16 < v4 )
            {
              v17 = *(_BYTE *)(v15 + 172);
              LOBYTE(v2) = *(_BYTE *)(a1 + 172);
              if ( v17 <= (unsigned __int8)v2 )
              {
                v18 = (unsigned __int8)v2;
                LODWORD(v2) = v17;
              }
              else
              {
                v16 = v3;
                LODWORD(v2) = (unsigned __int8)v2;
                v18 = v17;
              }
              v19 = v18 - v2;
              LOBYTE(v2) = v16;
              if ( v48[v16] >= v19 )
                break;
            }
          }
          if ( ++v14 >= v9 )
            goto LABEL_22;
        }
        LOWORD(v2) = *(_WORD *)(v15 + 144);
        *(_WORD *)(v15 + 144) = v3;
        *(_BYTE *)(v15 + 173) &= ~4u;
        *(_BYTE *)(a1 + 173) |= 4u;
        *(_WORD *)(a1 + 144) = v2;
      }
      else
      {
LABEL_22:
        if ( v5 )
        {
          v20 = v5;
          v21 = Src;
          LOBYTE(v2) = v6;
          while ( v20 )
          {
            *v21++ = v6;
            --v20;
          }
        }
        if ( v9 )
        {
          v22 = KeNodeBlock;
          v23 = v9;
          do
          {
            v2 = *v22;
            v24 = *(_BYTE *)(*v22 + 173);
            if ( (v24 & 2) != 0 && ((v24 & 8) != 0 || *(_QWORD *)(v2 + 136)) )
            {
              v25 = *(unsigned __int16 *)(v2 + 144);
              LODWORD(v2) = *(unsigned __int8 *)(v2 + 172);
              Src[v25] -= v2;
            }
            ++v22;
            --v23;
          }
          while ( v23 );
        }
        LOWORD(v26) = 0;
        if ( v9 )
        {
          v27 = v9;
          do
          {
            v28 = *v10;
            LOBYTE(v2) = *(_BYTE *)(*v10 + 173) & 0xA;
            if ( (_BYTE)v2 == 2 && !*(_QWORD *)(v28 + 136) )
            {
              v2 = (unsigned __int16)v26;
              LOWORD(v26) = v26 + 1;
              v50[v2] = v28;
            }
            ++v10;
            --v27;
          }
          while ( v27 );
        }
        if ( (unsigned __int16)v26 - 1 > 0 )
        {
          v29 = 1;
          do
          {
            if ( v29 < (unsigned __int16)v26 )
            {
              v30 = (unsigned __int16)(v29 - 1);
              v31 = &v50[v29];
              v32 = (unsigned __int16)(v26 - v29);
              do
              {
                v33 = v50[v30];
                if ( *(_BYTE *)(v33 + 172) < *(_BYTE *)(*v31 + 172LL) )
                {
                  v50[v30] = *v31;
                  *v31 = v33;
                }
                ++v31;
                --v32;
              }
              while ( v32 );
            }
            LODWORD(v2) = v29++;
          }
          while ( (int)v2 < (unsigned __int16)v26 - 1 );
        }
        if ( (_WORD)v26 )
        {
          v34 = v50;
          v35 = (unsigned __int16)v26;
          do
          {
            v36 = *v34++;
            LOWORD(v2) = *(_WORD *)(v36 + 144);
            *(_WORD *)(v36 + 146) = v2;
            --v35;
          }
          while ( v35 );
        }
        v37 = 0;
        for ( i = 0; i < v4; ++i )
        {
          if ( v5 )
            memmove(v48, Src, 4LL * v5);
          v39 = *(unsigned __int8 *)(a1 + 172);
          v40 = v48[i];
          if ( v40 < v39 )
          {
            LOBYTE(v2) = 1;
          }
          else
          {
            *(_WORD *)(a1 + 144) = i;
            v48[i] = v40 - v39;
            v41 = 0;
            if ( (_WORD)v26 )
            {
              while ( 1 )
              {
                v42 = v50[v41];
                if ( v42 == a1 )
                {
                  LOBYTE(v2) = 1;
                }
                else
                {
                  v43 = 0;
                  if ( v5 )
                  {
                    while ( 1 )
                    {
                      v44 = v48[v43];
                      if ( v44 >= *(unsigned __int8 *)(v42 + 172) )
                        break;
                      LOBYTE(v2) = 1;
                      if ( ++v43 >= v5 )
                        goto LABEL_63;
                    }
                    *(_WORD *)(v42 + 144) = v43;
                    v48[v43] = v44 - *(unsigned __int8 *)(v42 + 172);
                  }
                  LOBYTE(v2) = 1;
LABEL_63:
                  if ( v43 == v5 )
                    goto LABEL_69;
                }
                if ( ++v41 >= (unsigned __int16)v26 )
                  goto LABEL_69;
              }
            }
            LOBYTE(v2) = 1;
LABEL_69:
            if ( v41 == (_WORD)v26 )
            {
              v37 = 1;
              break;
            }
          }
        }
        if ( (_WORD)v26 )
        {
          v45 = v50;
          v26 = (unsigned __int16)v26;
          do
          {
            v46 = *v45;
            if ( v37 )
            {
              LOBYTE(v2) = (*(_BYTE *)(v46 + 173) ^ (4 * (*(_WORD *)(v46 + 144) < v4))) & 4;
              *(_BYTE *)(v46 + 173) ^= v2;
            }
            else
            {
              LOWORD(v2) = *(_WORD *)(v46 + 146);
              *(_WORD *)(v46 + 144) = v2;
            }
            ++v45;
            *(_WORD *)(v46 + 146) = 0;
            --v26;
          }
          while ( v26 );
        }
      }
    }
  }
  return v2;
}
