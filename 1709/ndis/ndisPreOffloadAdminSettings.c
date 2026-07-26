/*
 * XREFs of ndisPreOffloadAdminSettings @ 0x1C00DD230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisUpdateOffloadKeywords @ 0x1C00DE1F0 (ndisUpdateOffloadKeywords.c)
 */

unsigned __int8 __fastcall ndisPreOffloadAdminSettings(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  __int64 v5; // rsi
  char v6; // al
  bool v7; // cf
  __int64 v8; // rax
  int v9; // eax
  int updated; // eax
  unsigned __int8 v11; // cl
  bool v12; // cf
  unsigned __int8 v13; // al
  __int16 v14; // ax
  __int16 v15; // ax
  __int16 v16; // ax

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xEFu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, v3);
  v4 = 1;
  if ( *(_DWORD *)(v3 + 4) != 1 )
    goto LABEL_4;
  if ( !*(_QWORD *)a1 )
    goto LABEL_6;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x14u )
  {
    *(_DWORD *)(v3 + 56) = 20;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_60;
  v5 = *(_QWORD *)(v3 + 40);
  v6 = *(_BYTE *)(v5 + 1);
  switch ( v6 )
  {
    case 1:
      *(_DWORD *)(a1 + 40) = 0;
      if ( *(_BYTE *)v5 == 0x80 && *(_BYTE *)(v5 + 1) )
      {
        v7 = *(_WORD *)(v5 + 2) < 0x14u;
        goto LABEL_35;
      }
LABEL_36:
      *(_DWORD *)(a1 + 40) = -1073676267;
LABEL_37:
      if ( !*(_DWORD *)(a1 + 40) )
      {
        v8 = *(_QWORD *)(v1 + 4120);
        if ( !v8 || *(_BYTE *)(v1 + 32) < 6u )
        {
LABEL_4:
          *(_DWORD *)(a1 + 40) = -1073741637;
          goto LABEL_60;
        }
        if ( *(_BYTE *)(v8 + 5) && *(_BYTE *)(v5 + 1) >= 3u )
          *(_WORD *)(v5 + 22) = 257;
        v9 = *(_DWORD *)(v5 + 16);
        if ( (v9 & 1) != 0 )
        {
          *(_DWORD *)(v5 + 16) = v9 & 0xFFFFFFFE;
LABEL_45:
          v11 = *(_BYTE *)(v1 + 32);
          v12 = v11 < 6u;
          if ( v11 <= 6u )
          {
            if ( v11 != 6 )
              goto LABEL_56;
            v13 = *(_BYTE *)(v1 + 33);
            if ( v13 < 0x32u )
            {
              if ( v13 >= 0x1Eu )
              {
                if ( *(_BYTE *)(v5 + 1) >= 4u )
                {
                  *(_DWORD *)(v3 + 88) |= 0x400000u;
                  *(_BYTE *)(v3 + 233) = *(_BYTE *)(v5 + 1);
                  v15 = *(_WORD *)(v5 + 2);
                  *(_BYTE *)(v5 + 1) = 3;
                  *(_WORD *)(v3 + 234) = v15;
                  *(_WORD *)(v5 + 2) = 26;
                }
                goto LABEL_6;
              }
              if ( v13 )
              {
                if ( *(_BYTE *)(v5 + 1) >= 3u )
                {
                  *(_DWORD *)(v3 + 88) |= 0x400000u;
                  *(_BYTE *)(v3 + 233) = *(_BYTE *)(v5 + 1);
                  v14 = *(_WORD *)(v5 + 2);
                  *(_BYTE *)(v5 + 1) = 2;
                  *(_WORD *)(v3 + 234) = v14;
                  *(_WORD *)(v5 + 2) = 22;
                }
                goto LABEL_6;
              }
              v12 = 0;
LABEL_56:
              if ( !v12 && *(_BYTE *)(v5 + 1) >= 2u )
              {
                *(_DWORD *)(v3 + 88) |= 0x400000u;
                *(_BYTE *)(v3 + 233) = *(_BYTE *)(v5 + 1);
                v16 = *(_WORD *)(v5 + 2);
                *(_BYTE *)(v5 + 1) = 1;
                *(_WORD *)(v3 + 234) = v16;
                *(_WORD *)(v5 + 2) = 20;
              }
            }
          }
LABEL_6:
          v4 = 0;
          goto LABEL_60;
        }
        updated = ndisUpdateOffloadKeywords(v1, v5, 26LL);
        *(_DWORD *)(a1 + 40) = updated;
        if ( !updated )
          goto LABEL_45;
      }
      goto LABEL_60;
    case 2:
      *(_DWORD *)(a1 + 40) = 0;
      if ( *(_DWORD *)(v3 + 48) < 0x16u )
      {
        *(_DWORD *)(v3 + 56) = 22;
        *(_DWORD *)(a1 + 40) = -1073676268;
      }
      if ( *(_DWORD *)(a1 + 40) )
        goto LABEL_60;
      *(_DWORD *)(a1 + 40) = 0;
      if ( *(_BYTE *)v5 != 0x80 || *(_BYTE *)(v5 + 1) < 2u )
        goto LABEL_36;
      v7 = *(_WORD *)(v5 + 2) < 0x16u;
      goto LABEL_35;
    case 3:
      *(_DWORD *)(a1 + 40) = 0;
      if ( *(_DWORD *)(v3 + 48) < 0x1Au )
      {
        *(_DWORD *)(v3 + 56) = 26;
        *(_DWORD *)(a1 + 40) = -1073676268;
      }
      if ( *(_DWORD *)(a1 + 40) )
        goto LABEL_60;
      *(_DWORD *)(a1 + 40) = 0;
      if ( *(_BYTE *)v5 != 0x80 || *(_BYTE *)(v5 + 1) < 3u )
        goto LABEL_36;
      v7 = *(_WORD *)(v5 + 2) < 0x1Au;
      goto LABEL_35;
  }
  if ( v6 != 4 )
  {
    *(_DWORD *)(a1 + 40) = -1073676267;
    goto LABEL_60;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x20u )
  {
    *(_DWORD *)(v3 + 56) = 32;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( !*(_DWORD *)(a1 + 40) )
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_BYTE *)v5 != 0x80 || *(_BYTE *)(v5 + 1) < 4u )
      goto LABEL_36;
    v7 = *(_WORD *)(v5 + 2) < 0x20u;
LABEL_35:
    if ( !v7 )
      goto LABEL_37;
    goto LABEL_36;
  }
LABEL_60:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qdD(0xF0u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v1, *(_DWORD *)(a1 + 40), v4);
  return v4;
}
