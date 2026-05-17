/*
 * XREFs of RtlSwitchedVVI @ 0x18000F670
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F994 @ 0x18000F994 (sub_18000F994.c)
 *     sub_18000FA98 @ 0x18000FA98 (sub_18000FA98.c)
 *     sub_18000FAB4 @ 0x18000FAB4 (sub_18000FAB4.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall RtlSwitchedVVI(__int64 a1, int a2, __int64 a3)
{
  char v4; // si
  char v6; // di
  __int64 result; // rax
  char v8; // al
  int v9; // edi
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned __int16 v14; // ax
  unsigned int v15; // r10d
  int v16; // r11d
  int v17; // r9d
  int v18; // eax
  int v19; // eax
  _BYTE v20[16]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v21[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a2;
  v6 = 0;
  if ( !a2 )
    return 3221225485LL;
  memset(v21, 0, 0x11CuLL);
  v21[0] = 284;
  result = sub_18000FAB4(v21);
  if ( !(_DWORD)result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      v14 = *(_WORD *)(a1 + 280);
      if ( v14 )
      {
        v15 = 0;
        v16 = v14;
        do
        {
          v17 = 1 << v15;
          if ( (v16 & (1 << v15)) != 0 )
          {
            if ( a3 >= 0 )
              v18 = 0;
            else
              v18 = sub_18000FA98(a3, 64LL);
            v19 = v18 - 6;
            if ( v19 )
            {
              if ( v19 != 1 )
                return 3221225485LL;
              if ( (v21[70] & (unsigned __int16)v17) != 0 )
                v6 = 1;
            }
            else if ( (v21[70] & (unsigned __int16)v17) == 0 )
            {
              return 3221225561LL;
            }
          }
          ++v15;
        }
        while ( v15 < 0x10 );
        if ( (unsigned int)sub_18000FA98(a3, 64LL) == 7 && !v6 )
          return 3221225561LL;
      }
    }
    v8 = 1;
    v20[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( a3 >= 0 )
        v9 = (unsigned __int8)((unsigned __int64)a3 >> 4);
      else
        v9 = sub_18000FA98(a3, 2LL);
      v10 = (unsigned __int8)sub_18000F994(v9, *(_DWORD *)(a1 + 4), v21[1], (unsigned int)v20, 0) == 0;
      v8 = v20[0];
      if ( v10 )
      {
        if ( !v20[0] )
          return 3221225561LL;
      }
      else if ( !v20[0] )
      {
        goto LABEL_14;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_10;
    if ( v9 == 1 )
    {
      if ( a3 >= 0 )
        v9 = (unsigned __int8)((unsigned __int64)a3 >> 2);
      else
        v9 = sub_18000FA98(a3, 1LL);
    }
    v10 = (unsigned __int8)sub_18000F994(v9, *(_DWORD *)(a1 + 8), v21[2], (unsigned int)v20, 1) == 0;
    v8 = v20[0];
    if ( v10 )
    {
      if ( !v20[0] )
        return 3221225561LL;
    }
    else
    {
LABEL_10:
      if ( !v8 )
        goto LABEL_14;
    }
    if ( (v4 & 0x20) == 0 )
      goto LABEL_12;
    if ( v9 == 1 )
    {
      if ( a3 < 0 )
        v9 = sub_18000FA98(a3, 32LL);
      else
        v9 = 0;
    }
    if ( (unsigned __int8)sub_18000F994(v9, *(unsigned __int16 *)(a1 + 276), LOWORD(v21[69]), (unsigned int)v20, 0) )
    {
      v8 = v20[0];
LABEL_12:
      if ( v8 )
      {
LABEL_13:
        if ( (v4 & 0x10) != 0 )
        {
          if ( v9 == 1 )
          {
            if ( a3 < 0 )
              v9 = sub_18000FA98(a3, 16LL);
            else
              v9 = 0;
          }
          if ( !(unsigned __int8)sub_18000F994(
                                   v9,
                                   *(unsigned __int16 *)(a1 + 278),
                                   HIWORD(v21[69]),
                                   (unsigned int)v20,
                                   1) )
            return 3221225561LL;
        }
      }
LABEL_14:
      if ( (v4 & 4) != 0 )
      {
        v12 = a3 >= 0 ? BYTE2(a3) : sub_18000FA98(a3, 4LL);
        if ( !(unsigned __int8)sub_18000F994(v12, *(_DWORD *)(a1 + 12), v21[3], (unsigned int)v20, 0) )
          return 3221225561LL;
      }
      if ( (v4 & 8) != 0 )
      {
        v13 = a3 >= 0 ? 0 : sub_18000FA98(a3, 8LL);
        if ( !(unsigned __int8)sub_18000F994(v13, *(_DWORD *)(a1 + 16), v21[4], (unsigned int)v20, 0) )
          return 3221225561LL;
      }
      if ( v4 < 0 )
      {
        v11 = a3 >= 0 ? 0 : sub_18000FA98(a3, 128LL);
        if ( !(unsigned __int8)sub_18000F994(v11, *(unsigned __int8 *)(a1 + 282), BYTE2(v21[70]), (unsigned int)v20, 0) )
          return 3221225561LL;
      }
      return 0LL;
    }
    if ( v20[0] )
      goto LABEL_13;
    return 3221225561LL;
  }
  return result;
}
