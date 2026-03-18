/*
 * XREFs of itrp_FDEF @ 0x1C02CB6D0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_SkipPushData @ 0x1C02D4510 (itrp_SkipPushData.c)
 */

unsigned __int64 __fastcall itrp_FDEF(unsigned __int64 a1)
{
  __int64 v1; // r9
  __int64 v3; // rcx
  __int64 v4; // r10
  unsigned __int8 v5; // al
  __int64 v6; // rbx
  __int16 v7; // di
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  unsigned __int64 v16; // rcx
  unsigned __int64 result; // rax
  char v18; // r9
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  _BYTE *v21; // rdx

  v1 = qword_1C0327C90;
  if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
    || (v3 = qword_1C0327C78, !((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2)) )
  {
    dword_1C0327CE0 = 4368;
    return qword_1C0327CE8;
  }
  qword_1C0327C78 -= 4LL;
  v4 = *(int *)(v3 - 4);
  if ( (int)v4 >= *(unsigned __int16 *)(*(_QWORD *)(qword_1C0327C90 + 344) + 20LL) || (int)v4 < 0 )
  {
    dword_1C0327CE0 = 4372;
    return qword_1C0327CE8;
  }
  v5 = *(_BYTE *)(qword_1C0327C90 + 333);
  if ( v5 < 2u )
  {
    v6 = *(_QWORD *)(qword_1C0327C90 + 160);
    v7 = a1;
    *(_WORD *)(v6 + 8 * v4 + 6) = v5;
    *(_DWORD *)(v6 + 8 * v4) = a1 - *(_DWORD *)(v1 + 16LL * v5 + 200);
    if ( (unsigned int)(v4 - 64) <= 2
      && a1 >= qword_1C0327CF0
      && a1 + 4 <= qword_1C0327CE8
      && a1 + 4 >= a1
      && *(_DWORD *)a1 == 1480791728 )
    {
      *(_WORD *)(qword_1C0327C90 + 454) |= 0x100u;
    }
    if ( ((unsigned int)v4 <= 2 || (_DWORD)v4 == 4 || (unsigned int)(v4 - 7) <= 1) && a1 >= qword_1C0327CF0 )
    {
      if ( a1 + 5 <= qword_1C0327CE8 && a1 + 5 >= a1 )
      {
        v8 = *(_DWORD *)a1 - 1125691393;
        if ( *(_DWORD *)a1 == 1125691393 )
          v8 = *(unsigned __int8 *)(a1 + 4) - 88;
        if ( !v8 )
          goto LABEL_27;
      }
      if ( a1 + 6 <= qword_1C0327CE8 && a1 + 6 >= a1 )
      {
        v9 = *(_DWORD *)a1 - 414193665;
        if ( *(_DWORD *)a1 == 414193665 )
          v9 = *(unsigned __int16 *)(a1 + 4) - 22595;
        if ( !v9 )
LABEL_27:
          *(_WORD *)(qword_1C0327C90 + 454) |= 0x200u;
      }
    }
    if ( !(_DWORD)v4 )
    {
      if ( a1 < qword_1C0327CF0 )
        goto LABEL_78;
      if ( a1 + 7 > qword_1C0327CE8 || a1 + 7 < a1 )
        goto LABEL_45;
      v10 = *(_DWORD *)a1 - 1615209285;
      if ( *(_DWORD *)a1 == 1615209285 )
      {
        v10 = *(unsigned __int16 *)(a1 + 4) - 45088;
        if ( *(unsigned __int16 *)(a1 + 4) == 45088 )
          v10 = *(unsigned __int8 *)(a1 + 6) - 38;
      }
      if ( v10 )
      {
LABEL_45:
        if ( a1 >= qword_1C0327CF0 )
        {
          v12 = a1 + 1;
          if ( a1 + 1 <= qword_1C0327CE8 && v12 >= a1 && *(_BYTE *)a1 == 75 )
          {
            if ( a1 + 9 <= qword_1C0327CE8 && a1 + 9 >= a1 )
            {
              v13 = *(_QWORD *)a1 - 0x5921211B3858544BLL;
              if ( *(_QWORD *)a1 == 0x5921211B3858544BLL )
                v13 = *(unsigned __int8 *)(a1 + 8) - 45LL;
              if ( !v13 )
                goto LABEL_60;
            }
            if ( a1 + 13 <= qword_1C0327CE8 && a1 + 13 >= a1 )
            {
              v14 = *(_QWORD *)a1 - 0x38585A514B23534BLL;
              if ( *(_QWORD *)a1 == 0x38585A514B23534BLL )
              {
                v14 = *(unsigned int *)(a1 + 8) - 1495343387LL;
                if ( *(_DWORD *)(a1 + 8) == 1495343387LL )
                  v14 = *(unsigned __int8 *)(a1 + 12) - 45LL;
              }
              if ( !v14 )
              {
LABEL_60:
                v15 = *(_WORD *)(qword_1C0327C90 + 456);
                if ( v15 < 4u )
                {
                  *(_WORD *)(qword_1C0327C90 + 2LL * v15 + 458) = v4;
                  ++*(_WORD *)(qword_1C0327C90 + 456);
                }
              }
            }
          }
          v16 = qword_1C0327CF0;
          if ( a1 >= qword_1C0327CF0 )
          {
            result = qword_1C0327CE8;
            if ( v12 <= qword_1C0327CE8 && v12 >= a1 )
            {
              v18 = 45;
              while ( *(_BYTE *)a1 != v18 )
              {
                v19 = v12;
                if ( v12 >= result )
                  goto LABEL_72;
                v20 = itrp_SkipPushData(v12, v12, v12);
                v16 = qword_1C0327CF0;
                a1 = v20;
                if ( v20 >= qword_1C0327CF0 )
                {
                  v12 = v20 + 1;
                  result = qword_1C0327CE8;
                  if ( v12 <= qword_1C0327CE8 && v12 >= a1 )
                    continue;
                }
                goto LABEL_78;
              }
              v19 = a1 + 1;
LABEL_72:
              if ( v19 == result )
              {
                v21 = (_BYTE *)(v19 - 1);
                if ( v19 - 1 < v16 || v19 < (unsigned __int64)v21 )
                {
                  dword_1C0327CE0 = 4381;
                  return result;
                }
                if ( *v21 != v18 )
                  dword_1C0327CE0 = 4356;
              }
              *(_WORD *)(v6 + 8 * v4 + 4) = v19 - v7 - 1;
              return v19;
            }
          }
        }
        goto LABEL_78;
      }
      *(_WORD *)(qword_1C0327C90 + 454) |= 0x400u;
    }
    if ( (_DWORD)v4 != 58 )
      goto LABEL_45;
    if ( a1 >= qword_1C0327CF0 )
    {
      if ( a1 + 10 <= qword_1C0327CE8 && a1 + 10 >= a1 )
      {
        v11 = *(_QWORD *)a1 - 0x40B0466001B02020LL;
        if ( *(_QWORD *)a1 == 0x40B0466001B02020LL )
          v11 = *(unsigned __int16 *)(a1 + 8) - 16931LL;
        if ( !v11 )
          *(_WORD *)(qword_1C0327C90 + 454) |= 0x800u;
      }
      goto LABEL_45;
    }
LABEL_78:
    dword_1C0327CE0 = 4381;
    return qword_1C0327CE8;
  }
  dword_1C0327CE0 = 4360;
  return qword_1C0327CE8;
}
