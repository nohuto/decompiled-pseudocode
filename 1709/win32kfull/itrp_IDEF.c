/*
 * XREFs of itrp_IDEF @ 0x1C02CC4E0
 * Callers:
 *     <none>
 * Callees:
 *     itrp_FindIDef @ 0x1C02CC1AC (itrp_FindIDef.c)
 *     itrp_SkipPushData @ 0x1C02D4510 (itrp_SkipPushData.c)
 */

unsigned __int64 __fastcall itrp_IDEF(__int16 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  int *v4; // rcx
  int v5; // edi
  __int64 v6; // r8
  _BYTE *v7; // r9
  __int64 v8; // r10
  __int64 IDef; // r11
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rcx
  _BYTE *v14; // r9
  unsigned __int64 v15; // rax
  _BYTE *v16; // rcx

  v1 = *(unsigned __int8 *)(qword_1C0327C90 + 333);
  if ( *(unsigned __int8 *)(qword_1C0327C90 + 333) < 2u )
  {
    v3 = *(_QWORD *)(qword_1C0327C90 + 16 * v1 + 200);
    if ( (qword_1C0327C90 ^ *(_QWORD *)qword_1C0327C90 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327C90 + 424)) != *(_QWORD *)(qword_1C0327C90 + 432)
      || !((qword_1C0327C78 - *(_QWORD *)qword_1C0327C90) >> 2) )
    {
      dword_1C0327CE0 = 4368;
      return qword_1C0327CE8;
    }
    v4 = (int *)(qword_1C0327C78 - 4);
    qword_1C0327C78 = (__int64)v4;
    v5 = *v4;
    if ( (*v4 & 0xFFFFFF00) != 0 )
    {
      dword_1C0327CE0 = 4375;
    }
    else
    {
      IDef = itrp_FindIDef(*v4);
      if ( !IDef )
      {
        v10 = *(int *)(v8 + 336);
        if ( (int)v10 >= *(unsigned __int16 *)(*(_QWORD *)(v8 + 344) + 22LL) )
        {
          dword_1C0327CE0 = 4376;
          return qword_1C0327CE8;
        }
        IDef = *(_QWORD *)(v8 + 168) + 8 * v10;
        *(_DWORD *)(v8 + 336) = v10 + 1;
      }
      *(_BYTE *)(IDef + 6) = v1;
      *(_BYTE *)(IDef + 7) = v5;
      *(_DWORD *)IDef = (_DWORD)v7 - v3;
      v11 = qword_1C0327CF0;
      if ( (unsigned __int64)v7 >= qword_1C0327CF0 )
      {
        result = qword_1C0327CE8;
        v13 = (unsigned __int64)(v7 + 1);
        if ( (unsigned __int64)(v7 + 1) <= qword_1C0327CE8 && v13 >= (unsigned __int64)v7 )
        {
          LOBYTE(v6) = 45;
          while ( *v7 != (_BYTE)v6 )
          {
            v14 = (_BYTE *)v13;
            if ( v13 >= result )
              goto LABEL_21;
            v15 = itrp_SkipPushData(v13, v11, v6);
            v11 = qword_1C0327CF0;
            v7 = (_BYTE *)v15;
            if ( v15 >= qword_1C0327CF0 )
            {
              v13 = v15 + 1;
              result = qword_1C0327CE8;
              if ( v13 <= qword_1C0327CE8 && v13 >= (unsigned __int64)v7 )
                continue;
            }
            goto LABEL_27;
          }
          v14 = v7 + 1;
LABEL_21:
          if ( v14 == (_BYTE *)result )
          {
            v16 = v14 - 1;
            if ( (unsigned __int64)(v14 - 1) < v11 || v14 < v16 )
            {
              dword_1C0327CE0 = 4381;
              return result;
            }
            if ( *v16 != (_BYTE)v6 )
              dword_1C0327CE0 = 4356;
          }
          *(_WORD *)(IDef + 4) = (_WORD)v14 - a1 - 1;
          return (unsigned __int64)v14;
        }
      }
LABEL_27:
      dword_1C0327CE0 = 4381;
    }
  }
  else
  {
    dword_1C0327CE0 = 4361;
  }
  return qword_1C0327CE8;
}
