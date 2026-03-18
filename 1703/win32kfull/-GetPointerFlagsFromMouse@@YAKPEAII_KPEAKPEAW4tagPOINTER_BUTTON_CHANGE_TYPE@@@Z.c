/*
 * XREFs of ?GetPointerFlagsFromMouse@@YAKPEAII_KPEAKPEAW4tagPOINTER_BUTTON_CHANGE_TYPE@@@Z @ 0x1C0005E0C
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C0005AC0 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 * Callees:
 *     GetMouseKeyFlags @ 0x1C00CCDF4 (GetMouseKeyFlags.c)
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
  __int64 v11; // rcx
  unsigned __int16 *v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  unsigned __int16 v15; // ax
  unsigned __int8 v16; // cl
  unsigned int v17; // esi
  int v18; // ecx
  int v19; // ecx
  int v20; // r10d
  int v21; // r8d
  unsigned int v22; // r8d
  bool v24; // zf
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // r11d
  unsigned int v29; // r11d
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

  v8 = -__CFSHR__(**(_DWORD **)(gptiCurrent + 1136LL), 4);
  MouseKeyFlags = GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 384LL));
  switch ( v10 )
  {
    case 0xA1u:
      goto LABEL_42;
    case 0xA4u:
      goto LABEL_61;
    case 0xA7u:
LABEL_60:
      MouseKeyFlags &= ~0x10u;
      goto LABEL_8;
    case 0xABu:
      goto LABEL_8;
    case 0x201u:
LABEL_42:
      MouseKeyFlags &= ~1u;
      goto LABEL_8;
  }
  if ( v10 != 516 )
  {
    if ( v10 != 519 )
      goto LABEL_8;
    goto LABEL_60;
  }
LABEL_61:
  MouseKeyFlags &= ~2u;
LABEL_8:
  if ( v10 > 0x200 )
  {
    v24 = v10 == 514;
    v25 = v10 - 514;
LABEL_32:
    if ( !v24 )
    {
      v26 = v25 - 3;
      if ( v26 )
      {
        v27 = v26 - 3;
        if ( v27 )
        {
          if ( v27 != 4 )
            goto LABEL_11;
        }
      }
    }
    goto LABEL_10;
  }
  if ( v10 != 512 && v10 != 160 )
  {
    v25 = v10 - 162;
    v24 = v10 == 162;
    goto LABEL_32;
  }
LABEL_10:
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
LABEL_11:
  v11 = 0LL;
  v12 = (unsigned __int16 *)&unk_1C02E5220;
  do
  {
    if ( *v12 == v10 )
      break;
    v11 = (unsigned int)(v11 + 1);
    v12 += 12;
  }
  while ( (unsigned int)v11 < 0x1C );
  if ( (unsigned int)v11 >= 0x1C )
    return 0LL;
  v13 = 3 * v11;
  v14 = *((_DWORD *)&unk_1C02E5220 + 6 * v11 + 2);
  if ( (v14 & 0x10000) == 0 || (MouseKeyFlags & 0x73) != 0 )
  {
    v14 = *((_DWORD *)&unk_1C02E5220 + 6 * v11 + 3);
    v15 = *((_WORD *)&unk_1C02E5220 + 12 * v11 + 2);
  }
  else
  {
    v15 = *((_WORD *)&unk_1C02E5220 + 12 * v11 + 1);
  }
  *a4 = MouseKeyFlags;
  v16 = *((_BYTE *)&unk_1C02E5220 + 24 * v11 + 16);
  v17 = v15;
  if ( v16 )
  {
    if ( v16 != 5 )
    {
LABEL_19:
      v18 = v16 - 1;
      if ( v18 )
      {
        v35 = v18 - 1;
        if ( v35 )
        {
          v36 = v35 - 2;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              if ( v37 == 1 )
                v19 = 64;
              else
                v19 = 0;
            }
            else
            {
              v19 = 32;
            }
          }
          else
          {
            v19 = 16;
          }
        }
        else
        {
          v19 = 2;
        }
      }
      else
      {
        v19 = 1;
      }
      if ( (*((_DWORD *)&unk_1C02E5220 + 2 * v13 + 2) & 0x10000) != 0 )
        *a4 = v19 | MouseKeyFlags;
      else
        *a4 = MouseKeyFlags & ~v19;
      goto LABEL_23;
    }
    if ( (unsigned int)WORD1(a3) - 1 <= 1 )
    {
      v16 = BYTE2(a3) + 4;
      goto LABEL_19;
    }
    return 0LL;
  }
LABEL_23:
  v20 = *a4;
  if ( (*a4 & 0x73) != 0 )
  {
    v30 = v14 | 4;
    v31 = v30 | 0x10;
    if ( (v20 & 1) == 0 )
      v31 = v30;
    v32 = v31 | 0x20;
    if ( (v20 & 2) == 0 )
      v32 = v31;
    v33 = v32 | 0x40;
    if ( (v20 & 0x10) == 0 )
      v33 = v32;
    v21 = v33 | 0x80;
    if ( (v20 & 0x20) == 0 )
      v21 = v33;
    if ( (v20 & 0x40) != 0 )
      v21 |= 0x100u;
  }
  else
  {
    v17 = *((unsigned __int16 *)&unk_1C02E5220 + 4 * v13 + 1);
    v21 = *((_DWORD *)&unk_1C02E5220 + 2 * v13 + 2) | v14 & ~*((_DWORD *)&unk_1C02E5220 + 2 * v13 + 3);
  }
  *(_DWORD *)a5 = 0;
  if ( v10 <= 0x200 )
  {
    if ( v10 == 512 )
    {
LABEL_27:
      *(_DWORD *)a5 = 0;
      goto LABEL_28;
    }
    if ( v10 <= 0xA6 )
    {
      if ( v10 == 166 )
        goto LABEL_94;
      v38 = v10 - 160;
      if ( !v38 )
        goto LABEL_27;
      v39 = v38 - 1;
      if ( !v39 )
        goto LABEL_59;
      v40 = v39 - 1;
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            if ( v42 != 1 )
              goto LABEL_28;
LABEL_87:
            *(_DWORD *)a5 = 4;
            goto LABEL_28;
          }
          goto LABEL_94;
        }
        goto LABEL_59;
      }
      goto LABEL_41;
    }
    v43 = v10 - 167;
    if ( v43 )
    {
      v45 = v43 - 1;
      v44 = v45 == 0;
      goto LABEL_96;
    }
LABEL_109:
    *(_DWORD *)a5 = 5;
    goto LABEL_28;
  }
  if ( v10 <= 0x207 )
  {
    if ( v10 != 519 )
    {
      v28 = v10 - 513;
      if ( !v28 )
        goto LABEL_59;
      v29 = v28 - 1;
      if ( v29 )
      {
        v46 = v29 - 1;
        if ( v46 )
        {
          v47 = v46 - 1;
          if ( v47 )
          {
            v48 = v47 - 1;
            if ( !v48 )
              goto LABEL_87;
            if ( v48 != 1 )
              goto LABEL_28;
          }
LABEL_94:
          *(_DWORD *)a5 = 3;
          goto LABEL_28;
        }
LABEL_59:
        *(_DWORD *)a5 = 1;
        goto LABEL_28;
      }
LABEL_41:
      *(_DWORD *)a5 = 2;
      goto LABEL_28;
    }
    goto LABEL_109;
  }
  v45 = v10 - 520;
  v44 = v45 == 0;
LABEL_96:
  if ( v44 )
  {
    *(_DWORD *)a5 = 6;
    goto LABEL_28;
  }
  v49 = v45 - 1;
  if ( !v49 )
    goto LABEL_109;
  v50 = v49 - 2;
  if ( !v50 )
    goto LABEL_101;
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
    goto LABEL_28;
  }
  if ( v51 == 1 )
  {
LABEL_101:
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
LABEL_28:
  v22 = v21 | 2;
  **(_DWORD **)(gptiCurrent + 1136LL) ^= (**(_DWORD **)(gptiCurrent + 1136LL) ^ (32
                                                                               * *((_DWORD *)&unk_1C02E5220 + 2 * v13 + 5))) & 0x20;
  if ( a1 )
    *a1 = v17;
  return v22;
}
