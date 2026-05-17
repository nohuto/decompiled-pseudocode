/*
 * XREFs of RtlVerifyVersionInfo @ 0x180081850
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x18002DAB0 (RtlGetVersion.c)
 *     sub_18005A65C @ 0x18005A65C (sub_18005A65C.c)
 *     sub_18005A74C @ 0x18005A74C (sub_18005A74C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall RtlVerifyVersionInfo(__int64 a1, int a2, signed __int64 a3)
{
  char v4; // si
  char v6; // bl
  __int64 result; // rax
  bool v8; // al
  int v9; // ebx
  unsigned __int64 v10; // rbx
  int v11; // eax
  bool v12; // zf
  unsigned __int16 v13; // ax
  unsigned int v14; // r10d
  int v15; // r11d
  int v16; // r9d
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  bool v21[16]; // [rsp+30h] [rbp-D0h] BYREF
  int v22[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a2;
  v6 = 0;
  if ( !a2 )
    return 3221225485LL;
  memset(v22, 0, 0x11CuLL);
  v22[0] = 284;
  result = RtlGetVersion(v22);
  if ( !(_DWORD)result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      v13 = *(_WORD *)(a1 + 280);
      if ( v13 )
      {
        v14 = 0;
        v15 = v13;
        do
        {
          v16 = 1 << v14;
          if ( (v15 & (1 << v14)) != 0 )
          {
            if ( a3 >= 0 )
              v17 = 0;
            else
              v17 = sub_18005A74C(a3, 0x40u);
            v18 = v17 - 6;
            if ( v18 )
            {
              if ( v18 != 1 )
                return 3221225485LL;
              if ( (v22[70] & (unsigned __int16)v16) != 0 )
                v6 = 1;
            }
            else if ( (v22[70] & (unsigned __int16)v16) == 0 )
            {
              return 3221225561LL;
            }
          }
          ++v14;
        }
        while ( v14 < 0x10 );
        if ( (unsigned int)sub_18005A74C(a3, 0x40u) == 7 && !v6 )
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
        v9 = sub_18005A74C(a3, 2u);
      v12 = !sub_18005A65C(v9, *(_DWORD *)(a1 + 4), v22[1], v21, 0);
      v8 = v21[0];
      if ( v12 )
      {
        if ( !v21[0] )
          return 3221225561LL;
      }
      else if ( !v21[0] )
      {
        goto LABEL_10;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_6;
    if ( v9 == 1 )
    {
      if ( a3 < 0 )
        v9 = sub_18005A74C(a3, 1u);
      else
        v9 = (unsigned __int8)((unsigned __int64)a3 >> 2);
    }
    v12 = !sub_18005A65C(v9, *(_DWORD *)(a1 + 8), v22[2], v21, 1);
    v8 = v21[0];
    if ( v12 )
    {
      if ( !v21[0] )
        return 3221225561LL;
    }
    else
    {
LABEL_6:
      if ( !v8 )
        goto LABEL_10;
    }
    if ( (v4 & 0x20) != 0 )
    {
      if ( v9 == 1 )
      {
        if ( a3 < 0 )
          v9 = sub_18005A74C(a3, 0x20u);
        else
          v9 = 0;
      }
      if ( !sub_18005A65C(v9, *(unsigned __int16 *)(a1 + 276), LOWORD(v22[69]), v21, 0) )
      {
        if ( !v21[0] )
          return 3221225561LL;
        goto LABEL_9;
      }
      v8 = v21[0];
    }
    if ( v8 )
    {
LABEL_9:
      if ( (v4 & 0x10) != 0 )
      {
        if ( v9 == 1 )
        {
          if ( a3 < 0 )
            v9 = sub_18005A74C(a3, 0x10u);
          else
            v9 = 0;
        }
        if ( !sub_18005A65C(v9, *(unsigned __int16 *)(a1 + 278), HIWORD(v22[69]), v21, 1) )
          return 3221225561LL;
      }
    }
LABEL_10:
    v10 = a3 & 0x8000000000000000uLL;
    if ( (v4 & 4) != 0 )
    {
      v19 = v10 ? sub_18005A74C(a3, 4u) : BYTE2(a3);
      if ( !sub_18005A65C(v19, *(_DWORD *)(a1 + 12), v22[3], v21, 0) )
        return 3221225561LL;
    }
    if ( (v4 & 8) != 0 )
    {
      v20 = v10 ? sub_18005A74C(a3, 8u) : 0;
      if ( !sub_18005A65C(v20, *(_DWORD *)(a1 + 16), v22[4], v21, 0) )
        return 3221225561LL;
    }
    if ( v4 < 0 )
    {
      v11 = v10 ? sub_18005A74C(a3, 0x80u) : 0;
      if ( !sub_18005A65C(v11, *(unsigned __int8 *)(a1 + 282), BYTE2(v22[70]), v21, 0) )
        return 3221225561LL;
    }
    return 0LL;
  }
  return result;
}
