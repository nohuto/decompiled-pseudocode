/*
 * XREFs of FindNext @ 0x1C02CBF28
 * Callers:
 *     fsc_OverscaleToBold @ 0x1C02CC118 (fsc_OverscaleToBold.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindNext(
        unsigned __int16 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        _BYTE *a4,
        _BYTE *a5,
        unsigned __int8 a6,
        _QWORD *a7,
        unsigned __int8 *a8)
{
  char *v8; // rsi
  __int64 v9; // r14
  char v10; // r15
  unsigned __int8 *v11; // rbx
  unsigned __int8 v12; // r11
  char v13; // bp
  char v14; // dl
  char v16; // r9
  char *v17; // rdx
  char *v18; // rax
  char v19; // r9
  char v20; // r9
  char *v21; // r14
  char v22; // r9
  unsigned __int8 v23; // r8
  char v24; // [rsp+28h] [rbp+8h] BYREF

  v24 = 0;
  if ( a3 >= a1 - 1 )
    return 0LL;
  v8 = &v24;
  v9 = (__int64)&a4[a2 - 1];
  v10 = a6 + 1;
  v11 = &a5[a2];
  v12 = *v11;
  if ( a5 != (_BYTE *)v9 )
    v8 = (char *)(v11 + 1);
  v13 = 7 - a6;
  v14 = ((v12 << v10) | ((unsigned __int8)*v8 >> (7 - a6))) & 0x80;
  if ( (v12 & glyphBits[a6]) != 0 )
  {
    if ( !v14 )
    {
      *a8 = a6;
      *a7 = v11;
      return 1LL;
    }
LABEL_9:
    v16 = StartMask[(unsigned __int8)((v12 << v10) | ((unsigned __int8)*v8 >> (7 - a6))) + 272];
    if ( v16 <= 4 )
    {
      v17 = &v24;
      if ( a5 != (_BYTE *)v9 )
        v17 = a5 + 1;
      if ( ((unsigned __int8)((*a5 << v10) | ((unsigned __int8)*v17 >> v13)) & EndMask[v16 + 1]) == 0 )
      {
        v18 = (char *)a8;
        v19 = a6 + 1 + v16;
        if ( v19 >= 8 )
        {
          v20 = v19 - 8;
LABEL_25:
          *v18 = v20;
          *a7 = v8;
          return 1LL;
        }
        goto LABEL_23;
      }
    }
    return 0LL;
  }
  if ( v14 )
    goto LABEL_9;
  v21 = &v24;
  if ( a5 != a4 )
    v21 = a5 - 1;
  v8 = &v24;
  if ( a5 != a4 )
    v8 = (char *)(v11 - 1);
  v22 = StartMask[((unsigned __int8)(*v8 << v10) | ((unsigned __int64)v12 >> v13)) + 16];
  if ( v22 < 8 && v22 >= 2 )
  {
    v23 = StartMask[v22 + 1];
    if ( (v23 & (unsigned __int8)((*a5 >> v13) | (*v21 << v10))) == v23 )
    {
      v18 = (char *)a8;
      v19 = a6 - 7 + v22;
      if ( v19 < 0 )
      {
        v20 = v19 + 8;
        goto LABEL_25;
      }
LABEL_23:
      *v18 = v19;
      *a7 = v11;
      return 1LL;
    }
  }
  return 0LL;
}
