/*
 * XREFs of RtlIpv6StringToAddressA @ 0x180077290
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x1800771E0 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     __isascii @ 0x1800912C0 (__isascii.c)
 *     isdigit @ 0x180091400 (isdigit.c)
 *     isxdigit @ 0x180091550 (isxdigit.c)
 *     strtol @ 0x180096020 (strtol.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

LONG __stdcall RtlIpv6StringToAddressA(PCSTR S, PCSTR *Terminator, struct in6_addr *Addr)
{
  struct in6_addr *v4; // rsi
  int v5; // r15d
  const char *v6; // rax
  unsigned int v7; // ebp
  unsigned int v8; // edi
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  unsigned int v11; // edx
  int v12; // eax
  CHAR v13; // bl
  unsigned int v15; // eax
  unsigned int v16; // eax
  char *String; // [rsp+20h] [rbp-58h]
  char v18; // [rsp+80h] [rbp+8h]
  unsigned int v21; // [rsp+98h] [rbp+20h]

  v4 = Addr;
  v5 = 0;
  String = 0LL;
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
    v13 = *S;
    if ( !*S )
      break;
    if ( v5 != 1 )
    {
      if ( v13 == 58 )
      {
        if ( v8 || v7 || S[1] != 58 )
          goto LABEL_36;
        v7 = 2;
        v10 = 1;
        v5 = 2;
        v21 = v11 + 1;
        ++S;
        *((_WORD *)v4 + v11) = 0;
        v6 = String;
        goto LABEL_9;
      }
      if ( v7 > 7 )
        goto LABEL_36;
      if ( !_isascii(v13) || !isdigit(v13) )
      {
        if ( !_isascii(v13) || !isxdigit(v13) || v8 )
          goto LABEL_35;
        v6 = S;
        v18 = 1;
        v5 = 1;
        String = (char *)S;
        v9 = 1;
        goto LABEL_8;
      }
      v6 = S;
      v18 = 0;
      v5 = 1;
      String = (char *)S;
      v9 = 1;
LABEL_28:
      v11 = v21;
      goto LABEL_14;
    }
    if ( _isascii(v13) && isdigit(v13) )
    {
      v4 = Addr;
      ++v9;
      goto LABEL_47;
    }
    if ( !_isascii(v13) || !isxdigit(v13) )
    {
      if ( v13 == 58 )
      {
        if ( v8 || v7 > 6 )
          goto LABEL_34;
        if ( S[1] == 58 )
        {
          if ( v10 )
            goto LABEL_34;
          v12 = 2;
          v10 = v7 + 1;
          v5 = 2;
          ++S;
        }
        else
        {
          v5 = 0;
          v12 = 1;
        }
        v4 = Addr;
        v7 += v12;
        v6 = String;
LABEL_8:
        v11 = v21;
        if ( v5 == 1 )
          goto LABEL_14;
      }
      else
      {
        if ( v13 != 46 || v18 || v8 > 2 )
        {
LABEL_34:
          v4 = Addr;
LABEL_35:
          v11 = v21;
LABEL_36:
          v6 = String;
          break;
        }
        v6 = String;
        if ( v7 > 6 )
        {
          v4 = Addr;
          v11 = v21;
          break;
        }
        ++v8;
        v5 = 0;
      }
LABEL_9:
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
LABEL_47:
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
        v6 = String;
        goto LABEL_14;
      }
      v4 = Addr;
      goto LABEL_28;
    }
    v4 = Addr;
    ++v9;
    v11 = v21;
    v6 = String;
    if ( v8 )
      break;
    v18 = 1;
LABEL_14:
    ++S;
  }
  *Terminator = S;
  if ( v8 )
  {
    if ( v8 == 3 )
    {
      ++v7;
      goto LABEL_38;
    }
    return -1073741811;
  }
LABEL_38:
  if ( !v10 && v7 != 7 )
    return -1073741811;
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      *((_WORD *)v4 + v11) = 0;
      goto LABEL_43;
    }
    return -1073741811;
  }
  if ( v8 )
  {
    if ( v9 <= 3 )
    {
      v16 = strtol(v6, 0LL, 10);
      if ( v16 <= 0xFF )
      {
        *((_BYTE *)v4 + 2 * v21 + v8) = v16;
        goto LABEL_43;
      }
    }
    return -1073741811;
  }
  if ( v9 > 4 )
    return -1073741811;
  *((_WORD *)v4 + v21) = __ROR2__(strtol(v6, 0LL, 16), 8);
LABEL_43:
  if ( v10 )
  {
    memmove((char *)v4 + 2 * (v10 - v7) + 16, (char *)v4 + 2 * v10, 2LL * (v7 - v10));
    memset((char *)v4 + 2 * v10, 0, 2LL * (8 - v7));
  }
  return 0;
}
