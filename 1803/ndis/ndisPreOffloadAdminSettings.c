/*
 * XREFs of ndisPreOffloadAdminSettings @ 0x1C00DEF30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 *     ndisUpdateOffloadKeywords @ 0x1C00DFF58 (ndisUpdateOffloadKeywords.c)
 */

unsigned __int8 __fastcall ndisPreOffloadAdminSettings(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rbp
  unsigned __int8 v4; // bl
  __int64 v5; // rdi
  char v6; // al
  int v7; // eax
  bool v8; // cf
  __int64 v9; // rax
  int v10; // eax
  int updated; // eax
  unsigned __int8 v12; // cl
  bool v13; // cf
  unsigned __int8 v14; // al
  __int16 v15; // ax
  __int16 v16; // ax
  __int16 v17; // ax

  v1 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 32);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(0xECu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, v3);
  v4 = 1;
  if ( *(_DWORD *)(v3 + 4) != 1 )
    goto LABEL_4;
  if ( !*(_QWORD *)a1 )
    goto LABEL_6;
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x14u )
  {
    *(_DWORD *)(v3 + 56) = 20;
LABEL_9:
    *(_DWORD *)(a1 + 40) = -1073676268;
    goto LABEL_58;
  }
  v5 = *(_QWORD *)(v3 + 40);
  v6 = *(_BYTE *)(v5 + 1);
  switch ( v6 )
  {
    case 1:
      *(_DWORD *)(a1 + 40) = 0;
      if ( *(_BYTE *)v5 == 0x80 && *(_BYTE *)(v5 + 1) )
      {
        v7 = 0;
        v8 = *(_WORD *)(v5 + 2) < 0x14u;
        goto LABEL_14;
      }
LABEL_34:
      v7 = -1073676267;
      *(_DWORD *)(a1 + 40) = -1073676267;
LABEL_35:
      if ( v7 )
        goto LABEL_58;
      goto LABEL_36;
    case 2:
      *(_DWORD *)(a1 + 40) = 0;
      if ( *(_DWORD *)(v3 + 48) < 0x16u )
      {
        *(_DWORD *)(v3 + 56) = 22;
        goto LABEL_9;
      }
      *(_DWORD *)(a1 + 40) = 0;
      if ( *(_BYTE *)v5 != 0x80 || *(_BYTE *)(v5 + 1) < 2u )
        goto LABEL_34;
      v7 = 0;
      v8 = *(_WORD *)(v5 + 2) < 0x16u;
      goto LABEL_14;
    case 3:
      *(_DWORD *)(a1 + 40) = 0;
      if ( *(_DWORD *)(v3 + 48) < 0x1Au )
      {
        *(_DWORD *)(v3 + 56) = 26;
        goto LABEL_9;
      }
      *(_DWORD *)(a1 + 40) = 0;
      if ( *(_BYTE *)v5 != 0x80 || *(_BYTE *)(v5 + 1) < 3u )
        goto LABEL_34;
      v7 = 0;
      v8 = *(_WORD *)(v5 + 2) < 0x1Au;
LABEL_14:
      if ( !v8 )
        goto LABEL_35;
      goto LABEL_34;
  }
  if ( v6 != 4 )
  {
    *(_DWORD *)(a1 + 40) = -1073676267;
    goto LABEL_58;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v3 + 48) < 0x20u )
  {
    *(_DWORD *)(v3 + 56) = 32;
    goto LABEL_9;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_BYTE *)v5 != 0x80 || *(_BYTE *)(v5 + 1) < 4u || *(_WORD *)(v5 + 2) < 0x20u )
    goto LABEL_34;
LABEL_36:
  v9 = *(_QWORD *)(v1 + 4120);
  if ( !v9 || *(_BYTE *)(v1 + 32) < 6u )
  {
LABEL_4:
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(v9 + 5) && *(_BYTE *)(v5 + 1) >= 3u )
    *(_WORD *)(v5 + 22) = 257;
  v10 = *(_DWORD *)(v5 + 16);
  if ( (v10 & 1) != 0 )
  {
    *(_DWORD *)(v5 + 16) = v10 & 0xFFFFFFFE;
LABEL_43:
    v12 = *(_BYTE *)(v1 + 32);
    v13 = v12 < 6u;
    if ( v12 <= 6u )
    {
      if ( v12 != 6 )
        goto LABEL_54;
      v14 = *(_BYTE *)(v1 + 33);
      if ( v14 < 0x32u )
      {
        if ( v14 >= 0x1Eu )
        {
          if ( *(_BYTE *)(v5 + 1) >= 4u )
          {
            *(_DWORD *)(v3 + 88) |= 0x400000u;
            *(_BYTE *)(v3 + 233) = *(_BYTE *)(v5 + 1);
            v16 = *(_WORD *)(v5 + 2);
            *(_BYTE *)(v5 + 1) = 3;
            *(_WORD *)(v3 + 234) = v16;
            *(_WORD *)(v5 + 2) = 26;
          }
          goto LABEL_6;
        }
        if ( v14 )
        {
          if ( *(_BYTE *)(v5 + 1) >= 3u )
          {
            *(_DWORD *)(v3 + 88) |= 0x400000u;
            *(_BYTE *)(v3 + 233) = *(_BYTE *)(v5 + 1);
            v15 = *(_WORD *)(v5 + 2);
            *(_BYTE *)(v5 + 1) = 2;
            *(_WORD *)(v3 + 234) = v15;
            *(_WORD *)(v5 + 2) = 22;
          }
          goto LABEL_6;
        }
        v13 = 0;
LABEL_54:
        if ( !v13 && *(_BYTE *)(v5 + 1) >= 2u )
        {
          *(_DWORD *)(v3 + 88) |= 0x400000u;
          *(_BYTE *)(v3 + 233) = *(_BYTE *)(v5 + 1);
          v17 = *(_WORD *)(v5 + 2);
          *(_BYTE *)(v5 + 1) = 1;
          *(_WORD *)(v3 + 234) = v17;
          *(_WORD *)(v5 + 2) = 20;
        }
      }
    }
LABEL_6:
    v4 = 0;
    goto LABEL_58;
  }
  updated = ndisUpdateOffloadKeywords(v1, v5, 26LL);
  *(_DWORD *)(a1 + 40) = updated;
  if ( !updated )
    goto LABEL_43;
LABEL_58:
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qdD(0xEDu, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, v1, *(_DWORD *)(a1 + 40), v4);
  return v4;
}
