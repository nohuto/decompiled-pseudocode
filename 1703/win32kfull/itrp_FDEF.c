/*
 * XREFs of itrp_FDEF @ 0x1C02D18D0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SkipPushData @ 0x1C02DA854 (itrp_SkipPushData.c)
 */

__int64 __fastcall itrp_FDEF(unsigned __int64 a1)
{
  __int64 v1; // r9
  __int64 v3; // rcx
  __int64 v4; // r11
  unsigned __int8 v5; // al
  __int64 v6; // rdi
  __int16 v7; // si
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  int v10; // r9d
  int v11; // r9d
  int v12; // r9d
  __int64 v13; // r9
  _BYTE *v14; // r9
  __int64 v15; // r10
  __int64 v16; // r10
  unsigned __int16 v17; // ax
  char v18; // r10
  unsigned __int64 v19; // r8
  _BYTE *v20; // rax
  _BYTE *v21; // rax

  v1 = qword_1C032CA00;
  if ( (qword_1C032CA00 ^ *(_QWORD *)qword_1C032CA00 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C032CA00 + 424)) != *(_QWORD *)(qword_1C032CA00 + 432)
    || (v3 = qword_1C032C9E8, !((qword_1C032C9E8 - *(_QWORD *)qword_1C032CA00) >> 2)) )
  {
    dword_1C032CA50 = 4368;
    return qword_1C032CA58;
  }
  qword_1C032C9E8 -= 4LL;
  v4 = *(int *)(v3 - 4);
  if ( (int)v4 >= *(unsigned __int16 *)(*(_QWORD *)(qword_1C032CA00 + 344) + 20LL) || (int)v4 < 0 )
  {
    dword_1C032CA50 = 4372;
    return qword_1C032CA58;
  }
  v5 = *(_BYTE *)(qword_1C032CA00 + 333);
  if ( v5 < 2u )
  {
    v6 = *(_QWORD *)(qword_1C032CA00 + 160);
    v7 = a1;
    *(_WORD *)(v6 + 8 * v4 + 6) = v5;
    *(_DWORD *)(v6 + 8 * v4) = a1 - *(_DWORD *)(v1 + 16LL * v5 + 200);
    v8 = qword_1C032CA60;
    if ( (unsigned int)(v4 - 64) <= 2 )
    {
      v9 = qword_1C032CA58;
      if ( a1 < qword_1C032CA60 || a1 + 4 > qword_1C032CA58 || a1 + 4 < a1 || *(_DWORD *)a1 != 1480791728 )
      {
LABEL_14:
        if ( ((unsigned int)v4 <= 2 || (_DWORD)v4 == 4 || (unsigned int)(v4 - 7) <= 1) && a1 >= v8 )
        {
          if ( a1 + 5 <= v9 && a1 + 5 >= a1 )
          {
            v10 = *(_DWORD *)a1 - 1125691393;
            if ( *(_DWORD *)a1 == 1125691393 )
              v10 = *(unsigned __int8 *)(a1 + 4) - 88;
            if ( !v10 )
              goto LABEL_28;
          }
          if ( a1 + 6 <= v9 && a1 + 6 >= a1 )
          {
            v11 = *(_DWORD *)a1 - 414193665;
            if ( *(_DWORD *)a1 == 414193665 )
              v11 = *(unsigned __int16 *)(a1 + 4) - 22595;
            if ( !v11 )
            {
LABEL_28:
              *(_WORD *)(qword_1C032CA00 + 454) |= 0x200u;
              v8 = qword_1C032CA60;
              v9 = qword_1C032CA58;
            }
          }
        }
        if ( !(_DWORD)v4 )
        {
          if ( a1 < v8 )
            goto LABEL_79;
          if ( a1 + 7 > v9 || a1 + 7 < a1 )
            goto LABEL_46;
          v12 = *(_DWORD *)a1 - 1615209285;
          if ( *(_DWORD *)a1 == 1615209285 )
          {
            v12 = *(unsigned __int16 *)(a1 + 4) - 45088;
            if ( *(unsigned __int16 *)(a1 + 4) == 45088 )
              v12 = *(unsigned __int8 *)(a1 + 6) - 38;
          }
          if ( v12 )
          {
LABEL_46:
            if ( a1 >= v8 )
            {
              v14 = (_BYTE *)(a1 + 1);
              if ( a1 + 1 <= v9 && (unsigned __int64)v14 >= a1 && *(_BYTE *)a1 == 75 )
              {
                if ( a1 + 9 <= v9 && a1 + 9 >= a1 )
                {
                  v15 = *(_QWORD *)a1 - 0x5921211B3858544BLL;
                  if ( *(_QWORD *)a1 == 0x5921211B3858544BLL )
                    v15 = *(unsigned __int8 *)(a1 + 8) - 45LL;
                  if ( !v15 )
                    goto LABEL_61;
                }
                if ( a1 + 13 <= v9 && a1 + 13 >= a1 )
                {
                  v16 = *(_QWORD *)a1 - 0x38585A514B23534BLL;
                  if ( *(_QWORD *)a1 == 0x38585A514B23534BLL )
                  {
                    v16 = *(unsigned int *)(a1 + 8) - 1495343387LL;
                    if ( *(_DWORD *)(a1 + 8) == 1495343387LL )
                      v16 = *(unsigned __int8 *)(a1 + 12) - 45LL;
                  }
                  if ( !v16 )
                  {
LABEL_61:
                    v17 = *(_WORD *)(qword_1C032CA00 + 456);
                    if ( v17 < 4u )
                    {
                      *(_WORD *)(qword_1C032CA00 + 2LL * v17 + 458) = v4;
                      ++*(_WORD *)(qword_1C032CA00 + 456);
                      v8 = qword_1C032CA60;
                      v9 = qword_1C032CA58;
                    }
                  }
                }
              }
              if ( a1 >= v8 && (unsigned __int64)v14 <= v9 && (unsigned __int64)v14 >= a1 )
              {
                v18 = 45;
                if ( *(_BYTE *)a1 == 45 )
                {
LABEL_72:
                  v19 = a1 + 1;
                }
                else
                {
                  while ( 1 )
                  {
                    v19 = (unsigned __int64)v14;
                    if ( (unsigned __int64)v14 >= v9 )
                      break;
                    v20 = (_BYTE *)itrp_SkipPushData(v14, v8, v14, v14);
                    v8 = qword_1C032CA60;
                    a1 = (unsigned __int64)v20;
                    v9 = qword_1C032CA58;
                    if ( (unsigned __int64)v20 < qword_1C032CA60 )
                      goto LABEL_79;
                    v14 = v20 + 1;
                    if ( (unsigned __int64)(v20 + 1) > qword_1C032CA58 || v14 < v20 )
                      goto LABEL_79;
                    if ( *v20 == v18 )
                      goto LABEL_72;
                  }
                }
                if ( v19 != v9 )
                  goto LABEL_78;
                v21 = (_BYTE *)(v19 - 1);
                if ( v19 - 1 >= v8 && v19 >= (unsigned __int64)v21 )
                {
                  if ( *v21 != v18 )
                    dword_1C032CA50 = 4356;
LABEL_78:
                  *(_WORD *)(v6 + 8 * v4 + 4) = v19 - v7 - 1;
                  return v19;
                }
              }
            }
LABEL_79:
            dword_1C032CA50 = 4381;
            return v9;
          }
          *(_WORD *)(qword_1C032CA00 + 454) |= 0x400u;
          v8 = qword_1C032CA60;
          v9 = qword_1C032CA58;
        }
        if ( (_DWORD)v4 == 58 )
        {
          if ( a1 < v8 )
            goto LABEL_79;
          if ( a1 + 10 <= v9 && a1 + 10 >= a1 )
          {
            v13 = *(_QWORD *)a1 - 0x40B0466001B02020LL;
            if ( *(_QWORD *)a1 == 0x40B0466001B02020LL )
              v13 = *(unsigned __int16 *)(a1 + 8) - 16931LL;
            if ( !v13 )
            {
              *(_WORD *)(qword_1C032CA00 + 454) |= 0x800u;
              v8 = qword_1C032CA60;
              v9 = qword_1C032CA58;
            }
          }
        }
        goto LABEL_46;
      }
      *(_WORD *)(qword_1C032CA00 + 454) |= 0x100u;
      v8 = qword_1C032CA60;
    }
    v9 = qword_1C032CA58;
    goto LABEL_14;
  }
  dword_1C032CA50 = 4360;
  return qword_1C032CA58;
}
