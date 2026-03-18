/*
 * XREFs of ?GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C000B328
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C000AFC0 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     GetMouseKeyFlags @ 0x1C00CF764 (GetMouseKeyFlags.c)
 */

__int64 __fastcall GetPointerFlagsFromMouse(
        unsigned int *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int *a4,
        enum tagPOINTER_BUTTON_CHANGE_TYPE *a5)
{
  int v8; // ebx
  unsigned int MouseKeyFlags; // edx
  unsigned int v10; // r11d
  bool v11; // zf
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned __int16 *v16; // r8
  __int64 v17; // r9
  int v18; // ebx
  unsigned __int16 v19; // ax
  unsigned __int8 v20; // cl
  unsigned int v21; // esi
  int v22; // ecx
  int v23; // ecx
  int v24; // r10d
  int v25; // r8d
  unsigned int v26; // r11d
  unsigned int v27; // r11d
  unsigned int v28; // r8d
  int v30; // ebx
  int v31; // ecx
  int v32; // edx
  int v33; // ecx
  unsigned int v34; // eax
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  unsigned int v38; // r11d
  unsigned int v39; // r11d
  unsigned int v40; // r11d
  unsigned int v41; // r11d
  unsigned int v42; // r11d
  unsigned int v43; // r11d
  bool v44; // zf
  unsigned int v45; // r11d
  unsigned int v46; // r11d
  unsigned int v47; // r11d
  unsigned int v48; // r11d
  unsigned int v49; // r11d
  unsigned int v50; // r11d
  unsigned int v51; // r11d
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rdi

  v8 = -__CFSHR__(**(_DWORD **)(gptiCurrent + 1224LL), 4);
  MouseKeyFlags = GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 408LL));
  switch ( v10 )
  {
    case 0xA1u:
      goto LABEL_44;
    case 0xA4u:
      goto LABEL_60;
    case 0xA7u:
LABEL_59:
      MouseKeyFlags &= ~0x10u;
      goto LABEL_8;
    case 0xABu:
      goto LABEL_8;
    case 0x201u:
LABEL_44:
      MouseKeyFlags &= ~1u;
      goto LABEL_8;
  }
  if ( v10 != 516 )
  {
    if ( v10 != 519 )
      goto LABEL_8;
    goto LABEL_59;
  }
LABEL_60:
  MouseKeyFlags &= ~2u;
LABEL_8:
  if ( v10 > 0x200 )
  {
    v11 = v10 == 514;
    v12 = v10 - 514;
LABEL_10:
    if ( !v11 )
    {
      v13 = v12 - 3;
      if ( v13 )
      {
        v14 = v13 - 3;
        if ( v14 )
        {
          if ( v14 != 4 )
            goto LABEL_14;
        }
      }
    }
    goto LABEL_35;
  }
  if ( v10 != 512 && v10 != 160 )
  {
    v12 = v10 - 162;
    v11 = v10 == 162;
    goto LABEL_10;
  }
LABEL_35:
  if ( (MouseKeyFlags & 0x73) != 0 )
  {
    if ( v10 - 160 <= 0xD )
    {
      v34 = v10 + 352;
      if ( v8 )
        v34 = v10;
      v10 = v34;
    }
    else if ( v8 )
    {
      v10 -= 352;
    }
  }
LABEL_14:
  v15 = 0LL;
  v16 = (unsigned __int16 *)&unk_1C02E1CD0;
  do
  {
    if ( *v16 == v10 )
      break;
    v15 = (unsigned int)(v15 + 1);
    v16 += 12;
  }
  while ( (unsigned int)v15 < 0x1C );
  if ( (unsigned int)v15 >= 0x1C )
    return 0LL;
  v17 = 3 * v15;
  v18 = *((_DWORD *)&unk_1C02E1CD0 + 6 * v15 + 2);
  if ( (v18 & 0x10000) == 0 || (MouseKeyFlags & 0x73) != 0 )
  {
    v18 = *((_DWORD *)&unk_1C02E1CD0 + 6 * v15 + 3);
    v19 = *((_WORD *)&unk_1C02E1CD0 + 12 * v15 + 2);
  }
  else
  {
    v19 = *((_WORD *)&unk_1C02E1CD0 + 12 * v15 + 1);
  }
  *a4 = MouseKeyFlags;
  v20 = *((_BYTE *)&unk_1C02E1CD0 + 24 * v15 + 16);
  v21 = v19;
  if ( v20 )
  {
    if ( v20 != 5 )
    {
LABEL_22:
      v22 = v20 - 1;
      if ( v22 )
      {
        v35 = v22 - 1;
        if ( v35 )
        {
          v36 = v35 - 2;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              if ( v37 == 1 )
                v23 = 64;
              else
                v23 = 0;
            }
            else
            {
              v23 = 32;
            }
          }
          else
          {
            v23 = 16;
          }
        }
        else
        {
          v23 = 2;
        }
      }
      else
      {
        v23 = 1;
      }
      if ( (*((_DWORD *)&unk_1C02E1CD0 + 2 * v17 + 2) & 0x10000) != 0 )
        *a4 = v23 | MouseKeyFlags;
      else
        *a4 = MouseKeyFlags & ~v23;
      goto LABEL_26;
    }
    if ( (unsigned int)WORD1(a3) - 1 <= 1 )
    {
      v20 = BYTE2(a3) + 4;
      goto LABEL_22;
    }
    return 0LL;
  }
LABEL_26:
  v24 = *a4;
  if ( (*a4 & 0x73) != 0 )
  {
    v30 = v18 | 4;
    v31 = v30 | 0x10;
    if ( (v24 & 1) == 0 )
      v31 = v30;
    v32 = v31 | 0x20;
    if ( (v24 & 2) == 0 )
      v32 = v31;
    v33 = v32 | 0x40;
    if ( (v24 & 0x10) == 0 )
      v33 = v32;
    v25 = v33 | 0x80;
    if ( (v24 & 0x20) == 0 )
      v25 = v33;
    if ( (v24 & 0x40) != 0 )
      v25 |= 0x100u;
  }
  else
  {
    v21 = *((unsigned __int16 *)&unk_1C02E1CD0 + 4 * v17 + 1);
    v25 = *((_DWORD *)&unk_1C02E1CD0 + 2 * v17 + 2) | v18 & ~*((_DWORD *)&unk_1C02E1CD0 + 2 * v17 + 3);
  }
  *(_DWORD *)a5 = 0;
  if ( v10 <= 0x200 )
  {
    if ( v10 != 512 )
    {
      if ( v10 > 0xA6 )
      {
        v43 = v10 - 167;
        if ( !v43 )
          goto LABEL_108;
        v45 = v43 - 1;
        v44 = v45 == 0;
        goto LABEL_95;
      }
      if ( v10 == 166 )
        goto LABEL_93;
      v38 = v10 - 160;
      if ( v38 )
      {
        v39 = v38 - 1;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( !v40 )
            goto LABEL_33;
          v41 = v40 - 1;
          if ( v41 )
          {
            v42 = v41 - 1;
            if ( !v42 )
              goto LABEL_93;
            if ( v42 != 1 )
              goto LABEL_41;
            goto LABEL_86;
          }
        }
LABEL_58:
        *(_DWORD *)a5 = 1;
        goto LABEL_41;
      }
    }
    *(_DWORD *)a5 = 0;
    goto LABEL_41;
  }
  if ( v10 <= 0x207 )
  {
    if ( v10 != 519 )
    {
      v26 = v10 - 513;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( !v27 )
        {
LABEL_33:
          *(_DWORD *)a5 = 2;
          goto LABEL_41;
        }
        v46 = v27 - 1;
        if ( v46 )
        {
          v47 = v46 - 1;
          if ( !v47 )
            goto LABEL_93;
          v48 = v47 - 1;
          if ( v48 )
          {
            if ( v48 != 1 )
              goto LABEL_41;
LABEL_93:
            *(_DWORD *)a5 = 3;
            goto LABEL_41;
          }
LABEL_86:
          *(_DWORD *)a5 = 4;
          goto LABEL_41;
        }
      }
      goto LABEL_58;
    }
LABEL_108:
    *(_DWORD *)a5 = 5;
    goto LABEL_41;
  }
  v45 = v10 - 520;
  v44 = v45 == 0;
LABEL_95:
  if ( v44 )
  {
    *(_DWORD *)a5 = 6;
    goto LABEL_41;
  }
  v49 = v45 - 1;
  if ( !v49 )
    goto LABEL_108;
  v50 = v49 - 2;
  if ( !v50 )
    goto LABEL_100;
  v51 = v50 - 1;
  if ( !v51 )
  {
    v53 = a3 >> 16;
    if ( (_WORD)v53 == 1 )
    {
      *(_DWORD *)a5 = 8;
    }
    else if ( (_WORD)v53 == 2 )
    {
      *(_DWORD *)a5 = 10;
    }
    goto LABEL_41;
  }
  if ( v51 == 1 )
  {
LABEL_100:
    v52 = a3 >> 16;
    if ( (_WORD)v52 == 1 )
    {
      *(_DWORD *)a5 = 7;
    }
    else if ( (_WORD)v52 == 2 )
    {
      *(_DWORD *)a5 = 9;
    }
  }
LABEL_41:
  v28 = v25 | 2;
  **(_DWORD **)(gptiCurrent + 1224LL) ^= (**(_DWORD **)(gptiCurrent + 1224LL) ^ (32
                                                                               * *((_DWORD *)&unk_1C02E1CD0 + 2 * v17 + 5))) & 0x20;
  if ( a1 )
    *a1 = v21;
  return v28;
}
