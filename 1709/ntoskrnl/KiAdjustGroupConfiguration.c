/*
 * XREFs of KiAdjustGroupConfiguration @ 0x140204148
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 */

char __fastcall KiAdjustGroupConfiguration(__int64 a1)
{
  unsigned int v2; // eax
  unsigned __int16 v3; // r11
  __int64 v4; // rcx
  int *v5; // rdi
  int v6; // eax
  __int64 *v7; // r8
  __int64 *v8; // rdx
  __int64 v9; // r9
  unsigned __int16 v10; // r9
  unsigned __int16 v11; // dx
  __int64 v12; // rcx
  unsigned __int16 v13; // r10
  unsigned __int8 v14; // si
  unsigned __int16 v15; // r14
  int v16; // edi
  unsigned int v17; // edi
  __int64 v18; // rcx
  int *v19; // rdi
  int v20; // eax
  __int64 *v21; // rdx
  __int64 v22; // rdi
  __int64 v23; // rax
  char v24; // cl
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int16 v29; // cx
  __int64 v30; // rsi
  _QWORD *v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r11
  __int64 *v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  char v37; // r14
  unsigned __int16 v38; // si
  unsigned int v39; // edx
  unsigned int v40; // eax
  unsigned __int16 i; // cx
  __int64 v42; // r8
  __int16 v43; // r10
  unsigned __int16 v44; // dx
  unsigned int v45; // r9d
  __int64 *v46; // r8
  __int64 v47; // rdx
  _DWORD v49[20]; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD Src[20]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v51[64]; // [rsp+C0h] [rbp-40h] BYREF

  memset(v49, 0, sizeof(v49));
  LOBYTE(v2) = *(_BYTE *)(a1 + 173);
  if ( (v2 & 8) == 0 && !*(_QWORD *)(a1 + 136) )
  {
    v3 = *(_WORD *)(a1 + 144);
    if ( v3 >= (unsigned __int16)KiActiveGroups )
    {
      if ( KiMaximumGroups )
      {
        v4 = (unsigned __int16)KiMaximumGroups;
        v5 = v49;
        v6 = KiMaximumGroupSize;
        while ( v4 )
        {
          *v5++ = v6;
          --v4;
        }
      }
      v7 = KeNodeBlock;
      if ( KeNumberNodes )
      {
        v8 = KeNodeBlock;
        v9 = (unsigned __int16)KeNumberNodes;
        do
        {
          if ( (*(_BYTE *)(*v8 + 173) & 2) != 0 )
            v49[*(unsigned __int16 *)(*v8 + 144)] -= *(unsigned __int8 *)(*v8 + 172);
          ++v8;
          --v9;
        }
        while ( v9 );
      }
      v10 = KeNumberNodes;
      v11 = 0;
      if ( KeNumberNodes )
      {
        while ( 1 )
        {
          v12 = KeNodeBlock[v11];
          if ( (*(_BYTE *)(v12 + 173) & 0xA) == 2 && !*(_QWORD *)(v12 + 136) )
          {
            v13 = *(_WORD *)(v12 + 144);
            if ( v13 < (unsigned __int16)KiActiveGroups )
            {
              v14 = *(_BYTE *)(v12 + 172);
              LOBYTE(v2) = *(_BYTE *)(a1 + 172);
              if ( v14 <= (unsigned __int8)v2 )
              {
                v16 = (unsigned __int8)v2;
                v15 = *(_WORD *)(v12 + 144);
                v2 = v14;
              }
              else
              {
                v15 = v3;
                v2 = (unsigned __int8)v2;
                v16 = v14;
              }
              v17 = v16 - v2;
              LOBYTE(v2) = v15;
              if ( v49[v15] >= v17 )
                break;
            }
          }
          if ( ++v11 >= (unsigned __int16)KeNumberNodes )
            goto LABEL_22;
        }
        *(_WORD *)(v12 + 144) = v3;
        *(_BYTE *)(v12 + 173) &= ~4u;
        *(_BYTE *)(a1 + 173) |= 4u;
        *(_WORD *)(a1 + 144) = v13;
      }
      else
      {
LABEL_22:
        if ( KiMaximumGroups )
        {
          v18 = (unsigned __int16)KiMaximumGroups;
          v19 = Src;
          v20 = KiMaximumGroupSize;
          while ( v18 )
          {
            *v19++ = v20;
            --v18;
          }
        }
        if ( v10 )
        {
          v21 = KeNodeBlock;
          v22 = v10;
          do
          {
            v23 = *v21;
            v24 = *(_BYTE *)(*v21 + 173);
            if ( (v24 & 2) != 0 && ((v24 & 8) != 0 || *(_QWORD *)(v23 + 136)) )
              Src[*(unsigned __int16 *)(v23 + 144)] -= *(unsigned __int8 *)(v23 + 172);
            ++v21;
            --v22;
          }
          while ( v22 );
        }
        LOWORD(v25) = 0;
        if ( KeNumberNodes )
        {
          v26 = (unsigned __int16)KeNumberNodes;
          do
          {
            v27 = *v7;
            if ( (*(_BYTE *)(*v7 + 173) & 0xA) == 2 && !*(_QWORD *)(v27 + 136) )
            {
              v28 = (unsigned __int16)v25;
              LOWORD(v25) = v25 + 1;
              v51[v28] = v27;
            }
            ++v7;
            --v26;
          }
          while ( v26 );
        }
        if ( (unsigned __int16)v25 - 1 > 0 )
        {
          v29 = 1;
          do
          {
            if ( v29 < (unsigned __int16)v25 )
            {
              v30 = (unsigned __int16)(v29 - 1);
              v31 = &v51[v29];
              v32 = (unsigned __int16)(v25 - v29);
              do
              {
                v33 = v51[v30];
                if ( *(_BYTE *)(v33 + 172) < *(_BYTE *)(*v31 + 172LL) )
                {
                  v51[v30] = *v31;
                  *v31 = v33;
                }
                ++v31;
                --v32;
              }
              while ( v32 );
            }
            ++v29;
          }
          while ( (unsigned __int16)(v29 - 1) < (unsigned __int16)v25 - 1 );
        }
        if ( (_WORD)v25 )
        {
          v34 = v51;
          v35 = (unsigned __int16)v25;
          do
          {
            v36 = *v34++;
            *(_WORD *)(v36 + 146) = *(_WORD *)(v36 + 144);
            --v35;
          }
          while ( v35 );
        }
        LOBYTE(v2) = KiActiveGroups;
        v37 = 0;
        v38 = 0;
        if ( KiActiveGroups )
        {
          while ( 1 )
          {
            if ( KiMaximumGroups )
              memmove(v49, Src, 4LL * (unsigned __int16)KiMaximumGroups);
            v39 = *(unsigned __int8 *)(a1 + 172);
            v40 = v49[v38];
            if ( v40 >= v39 )
            {
              v2 = v40 - v39;
              *(_WORD *)(a1 + 144) = v38;
              v49[v38] = v2;
              for ( i = 0; i < (unsigned __int16)v25; ++i )
              {
                LOBYTE(v2) = i;
                v42 = v51[i];
                if ( v42 != a1 )
                {
                  v43 = KiMaximumGroups;
                  v44 = 0;
                  if ( KiMaximumGroups )
                  {
                    v2 = *(unsigned __int8 *)(v42 + 172);
                    while ( 1 )
                    {
                      v45 = v49[v44];
                      if ( v45 >= v2 )
                        break;
                      if ( ++v44 >= (unsigned __int16)KiMaximumGroups )
                        goto LABEL_63;
                    }
                    *(_WORD *)(v42 + 144) = v44;
                    v2 = *(unsigned __int8 *)(v42 + 172);
                    v49[v44] = v45 - v2;
                  }
LABEL_63:
                  if ( v44 == v43 )
                    break;
                }
              }
              if ( i == (_WORD)v25 )
                break;
            }
            LOBYTE(v2) = KiActiveGroups;
            if ( ++v38 >= (unsigned __int16)KiActiveGroups )
              goto LABEL_69;
          }
          v37 = 1;
        }
LABEL_69:
        if ( (_WORD)v25 )
        {
          v46 = v51;
          v25 = (unsigned __int16)v25;
          do
          {
            v47 = *v46;
            if ( v37 )
            {
              LOBYTE(v2) = (*(_WORD *)(v47 + 144) < (unsigned __int16)KiActiveGroups ? 4 : 0) | *(_BYTE *)(v47 + 173) & 0xFB;
              *(_BYTE *)(v47 + 173) = v2;
            }
            else
            {
              LOWORD(v2) = *(_WORD *)(v47 + 146);
              *(_WORD *)(v47 + 144) = v2;
            }
            ++v46;
            *(_WORD *)(v47 + 146) = 0;
            --v25;
          }
          while ( v25 );
        }
      }
    }
  }
  return v2;
}
