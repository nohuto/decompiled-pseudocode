/*
 * XREFs of RtlIpv4StringToAddressExA @ 0x18007E4B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv4StringToAddressA @ 0x18007E5D0 (RtlIpv4StringToAddressA.c)
 *     __isascii @ 0x1800964C0 (__isascii.c)
 *     isdigit @ 0x180096600 (isdigit.c)
 *     islower @ 0x180096660 (islower.c)
 *     isxdigit @ 0x180096750 (isxdigit.c)
 */

LONG __stdcall RtlIpv4StringToAddressExA(PCSTR AddressString, BOOLEAN Strict, struct in_addr *Address, PUSHORT Port)
{
  PCSTR v6; // rbx
  unsigned __int16 v7; // di
  unsigned __int16 v8; // r14
  CHAR v9; // r12
  CHAR v10; // bp
  int v11; // eax
  int v12; // ecx
  __int16 v13; // di
  int v14; // eax
  __int16 v15; // cx
  PCSTR v16; // [rsp+50h] [rbp+8h] BYREF

  if ( !AddressString || !Address || !Port || RtlIpv4StringToAddressA(AddressString, Strict, &v16, Address) < 0 )
    return -1073741811;
  if ( *v16 == 58 )
  {
    v6 = v16 + 1;
    v7 = 0;
    v8 = 10;
    if ( v16[1] == 48 )
    {
      v6 = v16 + 2;
      v8 = 8;
      if ( ((v16[2] - 88) & 0xDF) == 0 )
      {
        v8 = 16;
        v6 = v16 + 3;
      }
    }
    v9 = *v6;
    v10 = *v6;
    if ( !*v6 )
      return -1073741811;
    do
    {
      ++v6;
      if ( _isascii(v10) && isdigit(v10) && (unsigned __int16)(v10 - 48) < v8 )
      {
        if ( v7 * (unsigned int)v8 + v10 - 48 > 0xFFFF )
          return -1073741811;
        v7 = v10 + v7 * v8 - 48;
      }
      else
      {
        if ( v8 != 16 || !_isascii(v10) || !isxdigit(v10) )
          return -1073741811;
        if ( !_isascii(v10) || (v11 = islower(v10), v12 = 97, !v11) )
          v12 = 65;
        if ( v10 + 16 * (unsigned int)v7 - v12 + 10 > 0xFFFF )
          return -1073741811;
        v13 = 16 * v7;
        if ( !_isascii(v10) || (v14 = islower(v10), v15 = 97, !v14) )
          v15 = 65;
        v7 = v10 - v15 + 10 + v13;
      }
      v10 = *v6;
    }
    while ( *v6 );
    if ( !v9 )
      return -1073741811;
  }
  else
  {
    if ( *v16 )
      return -1073741811;
    v7 = 0;
  }
  *Port = __ROR2__(v7, 8);
  return 0;
}
