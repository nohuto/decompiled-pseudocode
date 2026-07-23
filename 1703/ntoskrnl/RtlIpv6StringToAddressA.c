/*
 * XREFs of RtlIpv6StringToAddressA @ 0x140160D30
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x14023F1B0 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     __isascii @ 0x14016A694 (__isascii.c)
 *     isdigit @ 0x14016A6B0 (isdigit.c)
 *     isxdigit @ 0x14016A7A0 (isxdigit.c)
 *     strtol @ 0x14016C49C (strtol.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressA(PCSTR S, PCSTR *Terminator, struct in6_addr *Addr)
{
  struct in6_addr *v4; // rsi
  int v5; // r15d
  const char *v6; // rax
  unsigned int v7; // ebp
  unsigned int v8; // edi
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  unsigned int v11; // edx
  CHAR v12; // bl
  int v13; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  char *Str; // [rsp+20h] [rbp-58h]
  char v18; // [rsp+80h] [rbp+8h]
  unsigned int v21; // [rsp+98h] [rbp+20h]

  v4 = Addr;
  v5 = 0;
  Str = 0LL;
  v6 = 0LL;
  v18 = 0;
  v7 = 0;
  v21 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  while ( 1 )
  {
    v12 = *S;
    if ( !*S )
      break;
    if ( v5 == 1 )
    {
      if ( _isascii(v12) && isdigit(v12) )
      {
        v4 = Addr;
        ++v9;
        goto LABEL_6;
      }
      if ( _isascii(v12) && isxdigit(v12) )
      {
        v4 = Addr;
        ++v9;
        v11 = v21;
        v6 = Str;
        if ( v8 )
          break;
        v18 = 1;
        goto LABEL_8;
      }
      if ( v12 != 58 )
      {
        if ( v12 != 46 || v18 || v8 > 2 )
        {
LABEL_61:
          v4 = Addr;
LABEL_33:
          v11 = v21;
LABEL_34:
          v6 = Str;
          break;
        }
        v6 = Str;
        if ( v7 > 6 )
        {
          v4 = Addr;
          v11 = v21;
          break;
        }
        ++v8;
        v5 = 0;
        goto LABEL_27;
      }
      if ( v8 || v7 > 6 )
        goto LABEL_61;
      if ( S[1] == 58 )
      {
        if ( v10 )
          goto LABEL_61;
        v13 = 2;
        ++S;
        v5 = 2;
        v10 = v7 + 1;
      }
      else
      {
        v5 = 0;
        v13 = 1;
      }
      v4 = Addr;
      v7 += v13;
      v6 = Str;
    }
    else
    {
      if ( v12 == 58 )
      {
        if ( v8 || v7 || S[1] != 58 )
          goto LABEL_34;
        v7 = 2;
        v10 = 1;
        v5 = 2;
        v21 = v11 + 1;
        ++S;
        *((_WORD *)v4 + v11) = 0;
        v6 = Str;
LABEL_27:
        if ( v6 )
        {
          if ( v8 )
          {
            if ( v9 > 3 )
              return -1073741811;
            v15 = strtol(v6, 0LL, 10);
            if ( v15 > 0xFF )
              return -1073741811;
            v4 = Addr;
            *((_BYTE *)Addr + 2 * v21 + v8 - 1) = v15;
LABEL_6:
            v11 = v21;
          }
          else
          {
            if ( v9 > 4 )
              return -1073741811;
            v4 = Addr;
            *((_WORD *)Addr + v21) = __ROR2__(strtol(v6, 0LL, 16), 8);
            v11 = ++v21;
          }
          v6 = Str;
          goto LABEL_8;
        }
        v4 = Addr;
        goto LABEL_16;
      }
      if ( v7 > 7 )
        goto LABEL_34;
      if ( _isascii(v12) && isdigit(v12) )
      {
        v6 = S;
        v18 = 0;
        v5 = 1;
        Str = (char *)S;
        v9 = 1;
LABEL_16:
        v11 = v21;
        goto LABEL_8;
      }
      if ( !_isascii(v12) || !isxdigit(v12) || v8 )
        goto LABEL_33;
      v6 = S;
      v18 = 1;
      v5 = 1;
      Str = (char *)S;
      v9 = 1;
    }
    v11 = v21;
    if ( v5 != 1 )
      goto LABEL_27;
LABEL_8:
    ++S;
  }
  *Terminator = S;
  if ( v8 )
  {
    if ( v8 == 3 )
    {
      ++v7;
      goto LABEL_36;
    }
    return -1073741811;
  }
LABEL_36:
  if ( !v10 && v7 != 7 )
    return -1073741811;
  if ( v5 == 1 )
  {
    if ( v8 )
    {
      if ( v9 <= 3 )
      {
        v16 = strtol(v6, 0LL, 10);
        if ( v16 <= 0xFF )
        {
          *((_BYTE *)v4 + 2 * v21 + v8) = v16;
          goto LABEL_40;
        }
      }
    }
    else if ( v9 <= 4 )
    {
      *((_WORD *)v4 + v21) = __ROR2__(strtol(v6, 0LL, 16), 8);
      goto LABEL_40;
    }
    return -1073741811;
  }
  if ( v5 != 2 )
    return -1073741811;
  *((_WORD *)v4 + v11) = 0;
LABEL_40:
  if ( v10 )
  {
    memmove((char *)v4 + 2 * (v10 - v7) + 16, (char *)v4 + 2 * v10, 2LL * (v7 - v10));
    memset((char *)v4 + 2 * v10, 0, 2LL * (8 - v7));
  }
  return 0;
}
