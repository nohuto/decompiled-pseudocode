/*
 * XREFs of FindNext @ 0x1C02C5D34
 * Callers:
 *     fsc_OverscaleToBold @ 0x1C02C5F4C (fsc_OverscaleToBold.c)
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
        _BYTE *a8)
{
  char *v9; // r10
  __int64 v10; // r14
  char v11; // r15
  unsigned __int8 *v12; // rdi
  unsigned __int8 v13; // r9
  char v14; // r12
  char v15; // dl
  char v17; // r9
  char *v18; // rdx
  char v19; // r9
  char *v20; // r14
  char v21; // r10
  unsigned __int8 v22; // r9
  char *v23; // rdx
  char v24; // r10
  char v25; // [rsp+28h] [rbp+8h] BYREF

  v25 = 0;
  if ( a3 >= a1 - 1 )
    return 0LL;
  v9 = &v25;
  v10 = (__int64)&a4[a2 - 1];
  v11 = a6 + 1;
  v12 = &a5[a2];
  v13 = *v12;
  if ( a5 != (_BYTE *)v10 )
    v9 = (char *)(v12 + 1);
  v14 = 7 - a6;
  v15 = ((v13 << v11) | ((unsigned __int8)*v9 >> (7 - a6))) & 0x80;
  if ( (v13 & *((_BYTE *)&glyphBits + a6)) != 0 )
  {
    if ( !v15 )
    {
      *a8 = a6;
      *a7 = v12;
      return 1LL;
    }
LABEL_9:
    v17 = byte_1C02F1430[(unsigned __int8)((v13 << v11) | ((unsigned __int8)*v9 >> (7 - a6))) + 256];
    if ( v17 <= 4 )
    {
      v18 = &v25;
      if ( a5 != (_BYTE *)v10 )
        v18 = a5 + 1;
      if ( ((unsigned __int8)((*a5 << v11) | ((unsigned __int8)*v18 >> v14)) & EndMask[v17 + 1]) == 0 )
      {
        v19 = a6 + 1 + v17;
        if ( v19 >= 8 )
        {
          *a8 = v19 - 8;
          *a7 = v9;
          return 1LL;
        }
        *a8 = v19;
LABEL_25:
        *a7 = v12;
        return 1LL;
      }
    }
    return 0LL;
  }
  if ( v15 )
    goto LABEL_9;
  v20 = &v25;
  if ( a5 != a4 )
    v20 = (char *)(v12 - 1);
  v21 = byte_1C02F1430[(unsigned __int8)(*v20 << v11) | ((unsigned __int64)v13 >> v14)];
  if ( v21 < 8 && v21 >= 2 )
  {
    v23 = &v25;
    if ( a5 != a4 )
      v23 = a5 - 1;
    v22 = StartMask[v21 + 1];
    if ( (v22 & (unsigned __int8)((*a5 >> v14) | (*v23 << v11))) == v22 )
    {
      v24 = a6 - 7 + v21;
      if ( v24 < 0 )
      {
        *a8 = v24 + 8;
        *a7 = v20;
        return 1LL;
      }
      *a8 = v24;
      goto LABEL_25;
    }
  }
  return 0LL;
}
