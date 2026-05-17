/*
 * XREFs of RtlVerifyVersionInfo @ 0x180085B10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpVerCompare @ 0x180007970 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x180007A5C (RtlpVerGetConditionMask.c)
 *     RtlGetVersion @ 0x180007C00 (RtlGetVersion.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall RtlVerifyVersionInfo(__int64 a1, int a2, signed __int64 a3)
{
  char v4; // si
  char v6; // di
  __int64 result; // rax
  bool v8; // al
  int v9; // edi
  bool v10; // zf
  unsigned __int16 v11; // ax
  unsigned int v12; // r10d
  int v13; // r11d
  int v14; // r9d
  int ConditionMask; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  bool v20[16]; // [rsp+30h] [rbp-D0h] BYREF
  int v21[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a2;
  v6 = 0;
  if ( !a2 )
    return 3221225485LL;
  memset(v21, 0, 0x11CuLL);
  v21[0] = 284;
  result = RtlGetVersion(v21);
  if ( !(_DWORD)result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      v11 = *(_WORD *)(a1 + 280);
      if ( v11 )
      {
        v12 = 0;
        v13 = v11;
        do
        {
          v14 = 1 << v12;
          if ( (v13 & (1 << v12)) != 0 )
          {
            if ( a3 >= 0 )
              ConditionMask = 0;
            else
              ConditionMask = RtlpVerGetConditionMask(a3, 0x40u);
            v16 = ConditionMask - 6;
            if ( v16 )
            {
              if ( v16 != 1 )
                return 3221225485LL;
              if ( (v21[70] & (unsigned __int16)v14) != 0 )
                v6 = 1;
            }
            else if ( (v21[70] & (unsigned __int16)v14) == 0 )
            {
              return 3221225561LL;
            }
          }
          ++v12;
        }
        while ( v12 < 0x10 );
        if ( (unsigned int)RtlpVerGetConditionMask(a3, 0x40u) == 7 && !v6 )
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
        v9 = RtlpVerGetConditionMask(a3, 2u);
      v10 = !RtlpVerCompare(v9, *(_DWORD *)(a1 + 4), v21[1], v20, 0);
      v8 = v20[0];
      if ( v10 )
      {
        if ( !v20[0] )
          return 3221225561LL;
      }
      else if ( !v20[0] )
      {
        goto LABEL_10;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_6;
    if ( v9 == 1 )
    {
      if ( a3 < 0 )
        v9 = RtlpVerGetConditionMask(a3, 1u);
      else
        v9 = (unsigned __int8)((unsigned __int64)a3 >> 2);
    }
    v10 = !RtlpVerCompare(v9, *(_DWORD *)(a1 + 8), v21[2], v20, 1);
    v8 = v20[0];
    if ( v10 )
    {
      if ( !v20[0] )
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
          v9 = RtlpVerGetConditionMask(a3, 0x20u);
        else
          v9 = 0;
      }
      if ( !RtlpVerCompare(v9, *(unsigned __int16 *)(a1 + 276), LOWORD(v21[69]), v20, 0) )
      {
        if ( !v20[0] )
          return 3221225561LL;
        goto LABEL_9;
      }
      v8 = v20[0];
    }
    if ( v8 )
    {
LABEL_9:
      if ( (v4 & 0x10) != 0 )
      {
        if ( v9 == 1 )
        {
          if ( a3 < 0 )
            v9 = RtlpVerGetConditionMask(a3, 0x10u);
          else
            v9 = 0;
        }
        if ( !RtlpVerCompare(v9, *(unsigned __int16 *)(a1 + 278), HIWORD(v21[69]), v20, 1) )
          return 3221225561LL;
      }
    }
LABEL_10:
    if ( (v4 & 4) != 0 )
    {
      v18 = a3 < 0 ? RtlpVerGetConditionMask(a3, 4u) : BYTE2(a3);
      if ( !RtlpVerCompare(v18, *(_DWORD *)(a1 + 12), v21[3], v20, 0) )
        return 3221225561LL;
    }
    if ( (v4 & 8) != 0 )
    {
      v19 = a3 < 0 ? RtlpVerGetConditionMask(a3, 8u) : 0;
      if ( !RtlpVerCompare(v19, *(_DWORD *)(a1 + 16), v21[4], v20, 0) )
        return 3221225561LL;
    }
    if ( v4 < 0 )
    {
      v17 = a3 >= 0 ? 0 : RtlpVerGetConditionMask(a3, 0x80u);
      if ( !RtlpVerCompare(v17, *(unsigned __int8 *)(a1 + 282), BYTE2(v21[70]), v20, 0) )
        return 3221225561LL;
    }
    return 0LL;
  }
  return result;
}
