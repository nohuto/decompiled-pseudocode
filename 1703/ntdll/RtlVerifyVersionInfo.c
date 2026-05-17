/*
 * XREFs of RtlVerifyVersionInfo @ 0x180086330
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F994 @ 0x18000F994 (sub_18000F994.c)
 *     sub_18000FA98 @ 0x18000FA98 (sub_18000FA98.c)
 *     RtlGetVersion @ 0x1800396A0 (RtlGetVersion.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall RtlVerifyVersionInfo(__int64 a1, int a2, signed __int64 a3)
{
  char v4; // si
  char v6; // di
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 result; // rax
  bool v11; // al
  int v12; // edi
  bool v13; // zf
  unsigned __int16 v14; // ax
  unsigned int v15; // r10d
  int v16; // r11d
  int v17; // r9d
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  bool v23[16]; // [rsp+30h] [rbp-D0h] BYREF
  int v24[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a2;
  v6 = 0;
  if ( !a2 )
    return 3221225485LL;
  memset(v24, 0, 0x11CuLL);
  v24[0] = 284;
  result = RtlGetVersion(v24, v7, v8, v9);
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
              v18 = sub_18000FA98(a3, 0x40u);
            v19 = v18 - 6;
            if ( v19 )
            {
              if ( v19 != 1 )
                return 3221225485LL;
              if ( (v24[70] & (unsigned __int16)v17) != 0 )
                v6 = 1;
            }
            else if ( (v24[70] & (unsigned __int16)v17) == 0 )
            {
              return 3221225561LL;
            }
          }
          ++v15;
        }
        while ( v15 < 0x10 );
        if ( (unsigned int)sub_18000FA98(a3, 0x40u) == 7 && !v6 )
          return 3221225561LL;
      }
    }
    v11 = 1;
    v23[0] = 1;
    v12 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( a3 >= 0 )
        v12 = (unsigned __int8)((unsigned __int64)a3 >> 4);
      else
        v12 = sub_18000FA98(a3, 2u);
      v13 = !sub_18000F994(v12, *(_DWORD *)(a1 + 4), v24[1], v23, 0);
      v11 = v23[0];
      if ( v13 )
      {
        if ( !v23[0] )
          return 3221225561LL;
      }
      else if ( !v23[0] )
      {
LABEL_9:
        if ( (v4 & 4) != 0 )
        {
          v21 = a3 < 0 ? sub_18000FA98(a3, 4u) : BYTE2(a3);
          if ( !sub_18000F994(v21, *(_DWORD *)(a1 + 12), v24[3], v23, 0) )
            return 3221225561LL;
        }
        if ( (v4 & 8) != 0 )
        {
          v22 = a3 < 0 ? sub_18000FA98(a3, 8u) : 0;
          if ( !sub_18000F994(v22, *(_DWORD *)(a1 + 16), v24[4], v23, 0) )
            return 3221225561LL;
        }
        if ( v4 < 0 )
        {
          v20 = a3 >= 0 ? 0 : sub_18000FA98(a3, 0x80u);
          if ( !sub_18000F994(v20, *(unsigned __int8 *)(a1 + 282), BYTE2(v24[70]), v23, 0) )
            return 3221225561LL;
        }
        return 0LL;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_15;
    if ( v12 == 1 )
    {
      if ( a3 < 0 )
        v12 = sub_18000FA98(a3, 1u);
      else
        v12 = (unsigned __int8)((unsigned __int64)a3 >> 2);
    }
    v13 = !sub_18000F994(v12, *(_DWORD *)(a1 + 8), v24[2], v23, 1);
    v11 = v23[0];
    if ( v13 )
    {
      if ( !v23[0] )
        return 3221225561LL;
    }
    else
    {
LABEL_15:
      if ( !v11 )
        goto LABEL_9;
    }
    if ( (v4 & 0x20) != 0 )
    {
      if ( v12 == 1 )
      {
        if ( a3 < 0 )
          v12 = sub_18000FA98(a3, 0x20u);
        else
          v12 = 0;
      }
      if ( !sub_18000F994(v12, *(unsigned __int16 *)(a1 + 276), LOWORD(v24[69]), v23, 0) )
      {
        if ( !v23[0] )
          return 3221225561LL;
LABEL_18:
        if ( (v4 & 0x10) != 0 )
        {
          if ( v12 == 1 )
          {
            if ( a3 < 0 )
              v12 = sub_18000FA98(a3, 0x10u);
            else
              v12 = 0;
          }
          if ( !sub_18000F994(v12, *(unsigned __int16 *)(a1 + 278), HIWORD(v24[69]), v23, 1) )
            return 3221225561LL;
        }
        goto LABEL_9;
      }
      v11 = v23[0];
    }
    if ( !v11 )
      goto LABEL_9;
    goto LABEL_18;
  }
  return result;
}
