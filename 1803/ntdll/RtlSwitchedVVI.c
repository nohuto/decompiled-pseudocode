/*
 * XREFs of RtlSwitchedVVI @ 0x18005A320
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005A65C @ 0x18005A65C (sub_18005A65C.c)
 *     sub_18005A74C @ 0x18005A74C (sub_18005A74C.c)
 *     sub_18005A768 @ 0x18005A768 (sub_18005A768.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall RtlSwitchedVVI(__int64 a1, int a2, __int64 a3)
{
  char v4; // si
  char v6; // bl
  __int64 result; // rax
  char v8; // al
  int v9; // ebx
  bool v10; // zf
  unsigned __int64 v11; // rbx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned __int16 v15; // ax
  unsigned int v16; // r10d
  int v17; // r11d
  int v18; // r9d
  int v19; // eax
  int v20; // eax
  _BYTE v21[16]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v22[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a2;
  v6 = 0;
  if ( !a2 )
    return 3221225485LL;
  memset(v22, 0, 0x11CuLL);
  v22[0] = 284;
  result = sub_18005A768(v22);
  if ( !(_DWORD)result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      v15 = *(_WORD *)(a1 + 280);
      if ( v15 )
      {
        v16 = 0;
        v17 = v15;
        do
        {
          v18 = 1 << v16;
          if ( (v17 & (1 << v16)) != 0 )
          {
            if ( a3 >= 0 )
              v19 = 0;
            else
              v19 = sub_18005A74C(a3, 64LL);
            v20 = v19 - 6;
            if ( v20 )
            {
              if ( v20 != 1 )
                return 3221225485LL;
              if ( (v22[70] & (unsigned __int16)v18) != 0 )
                v6 = 1;
            }
            else if ( (v22[70] & (unsigned __int16)v18) == 0 )
            {
              return 3221225561LL;
            }
          }
          ++v16;
        }
        while ( v16 < 0x10 );
        if ( (unsigned int)sub_18005A74C(a3, 64LL) == 7 && !v6 )
          return 3221225561LL;
      }
    }
    v8 = 1;
    v21[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( a3 >= 0 )
        v9 = (unsigned __int8)((unsigned __int64)a3 >> 4);
      else
        v9 = sub_18005A74C(a3, 2LL);
      v10 = (unsigned __int8)sub_18005A65C(v9, *(_DWORD *)(a1 + 4), v22[1], (unsigned int)v21, 0) == 0;
      v8 = v21[0];
      if ( v10 )
      {
        if ( !v21[0] )
          return 3221225561LL;
      }
      else if ( !v21[0] )
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
        v9 = sub_18005A74C(a3, 1LL);
    }
    v10 = (unsigned __int8)sub_18005A65C(v9, *(_DWORD *)(a1 + 8), v22[2], (unsigned int)v21, 1) == 0;
    v8 = v21[0];
    if ( v10 )
    {
      if ( !v21[0] )
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
        v9 = sub_18005A74C(a3, 32LL);
      else
        v9 = 0;
    }
    if ( (unsigned __int8)sub_18005A65C(v9, *(unsigned __int16 *)(a1 + 276), LOWORD(v22[69]), (unsigned int)v21, 0) )
    {
      v8 = v21[0];
LABEL_12:
      if ( v8 )
      {
LABEL_13:
        if ( (v4 & 0x10) != 0 )
        {
          if ( v9 == 1 )
          {
            if ( a3 < 0 )
              v9 = sub_18005A74C(a3, 16LL);
            else
              v9 = 0;
          }
          if ( !(unsigned __int8)sub_18005A65C(
                                   v9,
                                   *(unsigned __int16 *)(a1 + 278),
                                   HIWORD(v22[69]),
                                   (unsigned int)v21,
                                   1) )
            return 3221225561LL;
        }
      }
LABEL_14:
      v11 = a3 & 0x8000000000000000uLL;
      if ( (v4 & 4) != 0 )
      {
        v14 = v11 ? sub_18005A74C(a3, 4LL) : BYTE2(a3);
        if ( !(unsigned __int8)sub_18005A65C(v14, *(_DWORD *)(a1 + 12), v22[3], (unsigned int)v21, 0) )
          return 3221225561LL;
      }
      if ( (v4 & 8) != 0 )
      {
        v13 = v11 ? sub_18005A74C(a3, 8LL) : 0;
        if ( !(unsigned __int8)sub_18005A65C(v13, *(_DWORD *)(a1 + 16), v22[4], (unsigned int)v21, 0) )
          return 3221225561LL;
      }
      if ( v4 < 0 )
      {
        v12 = v11 ? sub_18005A74C(a3, 128LL) : 0;
        if ( !(unsigned __int8)sub_18005A65C(v12, *(unsigned __int8 *)(a1 + 282), BYTE2(v22[70]), (unsigned int)v21, 0) )
          return 3221225561LL;
      }
      return 0LL;
    }
    if ( v21[0] )
      goto LABEL_13;
    return 3221225561LL;
  }
  return result;
}
