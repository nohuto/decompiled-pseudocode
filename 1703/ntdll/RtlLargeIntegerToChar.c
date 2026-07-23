/*
 * XREFs of RtlLargeIntegerToChar @ 0x180003320
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x1800EB170 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS __cdecl RtlLargeIntegerToChar(PLARGE_INTEGER Value, ULONG Base, LONG OutputLength, PSTR String)
{
  PSTR v4; // r15
  int v7; // ecx
  int v8; // r8d
  char *v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 QuadPart; // rdx
  unsigned __int64 v13; // rtt
  int v14; // esp
  __int64 v15; // rsi
  bool v16; // cc
  __int64 v18; // rax
  size_t v19; // rbx
  char v20; // [rsp+61h] [rbp-37h] BYREF

  v4 = String;
  switch ( Base )
  {
    case 0u:
      Base = 10;
      goto LABEL_3;
    case 0xAu:
LABEL_3:
      v7 = 0;
      v8 = 0;
      goto LABEL_4;
    case 2u:
      v7 = 1;
      break;
    case 8u:
      v7 = 3;
      break;
    case 0x10u:
      v7 = 4;
      break;
    default:
      return -1073741811;
  }
  v8 = (1 << v7) - 1;
LABEL_4:
  v9 = &v20;
  if ( v7 )
  {
    QuadPart = Value->QuadPart;
    do
    {
      v18 = v8 & (unsigned int)QuadPart;
      QuadPart >>= v7;
      *--v9 = byte_180119C20[v18];
    }
    while ( QuadPart );
  }
  else
  {
    v10 = Value->QuadPart;
    v11 = Base;
    do
    {
      v13 = v10;
      v10 /= v11;
      QuadPart = v13 % v11;
      *--v9 = byte_180119C20[(unsigned int)(v13 % v11)];
    }
    while ( v10 );
  }
  v15 = (unsigned int)(v14 + 97 - (_DWORD)v9);
  if ( OutputLength >= 0 )
    goto LABEL_8;
  OutputLength = -OutputLength;
  v16 = (int)v15 <= OutputLength;
  if ( (int)v15 < OutputLength )
  {
    v19 = (unsigned int)(OutputLength - v15);
    LOBYTE(QuadPart) = 48;
    memset(String, QuadPart, v19);
    OutputLength = v15;
    v4 += v19;
LABEL_8:
    v16 = (int)v15 <= OutputLength;
  }
  if ( !v16 )
    return -2147483643;
  memmove(v4, v9, (unsigned int)v15);
  if ( (int)v15 < OutputLength )
    v4[v15] = 0;
  return 0;
}
