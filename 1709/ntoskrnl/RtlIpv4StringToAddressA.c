/*
 * XREFs of RtlIpv4StringToAddressA @ 0x140148930
 * Callers:
 *     RtlIpv4StringToAddressExA @ 0x140254D80 (RtlIpv4StringToAddressExA.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     __isascii @ 0x14015F0D4 (__isascii.c)
 *     isdigit @ 0x14015F0F0 (isdigit.c)
 *     islower @ 0x14015F120 (islower.c)
 *     isxdigit @ 0x14015F1E0 (isxdigit.c)
 */

NTSTATUS __stdcall RtlIpv4StringToAddressA(PCSTR S, BOOLEAN Strict, PCSTR *Terminator, struct in_addr *Addr)
{
  unsigned int *v4; // rdi
  BOOLEAN v6; // r14
  unsigned int v8; // r13d
  char v9; // r12
  int v10; // r15d
  CHAR v11; // al
  int v12; // r14d
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v17; // rdi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // ecx
  int v24; // eax
  int v25; // ecx
  unsigned int v28; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-1Ch]
  unsigned int v30; // [rsp+38h] [rbp-18h]
  unsigned int v31; // [rsp+3Ch] [rbp-14h] BYREF

  v4 = &v28;
  v6 = Strict;
  while ( 1 )
  {
    v8 = 0;
    v9 = 0;
    v10 = 10;
    if ( *S == 48 )
    {
      if ( _isascii(*++S) && isdigit(*S) )
      {
        v10 = 8;
      }
      else if ( ((*S - 88) & 0xDF) != 0 )
      {
        v9 = 1;
      }
      else
      {
        v10 = 16;
        ++S;
      }
    }
    if ( v6 && v10 != 10 )
      goto LABEL_18;
    v11 = *S;
    if ( *S )
    {
      do
      {
        v12 = v11;
        if ( _isascii(v11) && isdigit(v12) && v12 - 48 < v10 )
        {
          v13 = v12 - 48;
          v14 = v8 * v10;
        }
        else
        {
          if ( v10 != 16 || !_isascii(v12) || !isxdigit(v12) )
            break;
          if ( !_isascii(v12) || (v24 = islower(v12), v25 = 97, !v24) )
            v25 = 65;
          v14 = 16 * v8 - v25;
          v13 = v12 + 10;
        }
        v15 = v14 + v13;
        if ( v15 < v8 )
          goto LABEL_18;
        ++S;
        v9 = 1;
        v8 = v15;
        v11 = *S;
      }
      while ( *S );
      v6 = Strict;
    }
    if ( *S != 46 )
      break;
    if ( v4 < &v31 )
    {
      *v4 = v8;
      ++S;
      ++v4;
      if ( v9 )
        continue;
    }
    goto LABEL_18;
  }
  if ( !v9 )
    goto LABEL_18;
  *v4 = v8;
  v17 = ((char *)v4 - (char *)&v28 + 4) >> 2;
  if ( v6 )
  {
    if ( (_DWORD)v17 != 4 )
      goto LABEL_18;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v23 = v28;
    goto LABEL_32;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    if ( v28 <= 0xFF && v29 <= 0xFFFFFF )
    {
      v22 = v28 << 24;
      v21 = v29 & 0xFFFFFF;
      goto LABEL_31;
    }
    goto LABEL_18;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    if ( v28 <= 0xFF && v29 <= 0xFF && v30 <= 0xFFFF )
    {
      v21 = (unsigned __int16)v30;
      v22 = ((v28 << 8) | (unsigned __int8)v29) << 16;
      goto LABEL_31;
    }
LABEL_18:
    *Terminator = S;
    return -1073741811;
  }
  if ( v20 != 1 || v28 > 0xFF || v29 > 0xFF || v30 > 0xFF || v31 > 0xFF )
    goto LABEL_18;
  v21 = (unsigned __int8)v31;
  v22 = ((unsigned __int8)v30 | (((v28 << 8) | (unsigned __int8)v29) << 8)) << 8;
LABEL_31:
  v23 = v21 | v22;
LABEL_32:
  *Terminator = S;
  *(_DWORD *)Addr = _byteswap_ulong(v23);
  return 0;
}
