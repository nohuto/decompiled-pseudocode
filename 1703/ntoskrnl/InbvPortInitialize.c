/*
 * XREFs of InbvPortInitialize @ 0x14026AF34
 * Callers:
 *     HdlspEnableTerminal @ 0x14078E910 (HdlspEnableTerminal.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1401243A0 (MmMapIoSpaceEx.c)
 *     CpDoesPortExist @ 0x14026AA78 (CpDoesPortExist.c)
 *     CpInitialize @ 0x14026AC80 (CpInitialize.c)
 */

char __fastcall InbvPortInitialize(
        unsigned int a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        char a5,
        int a6,
        unsigned __int8 a7)
{
  __int64 v8; // rbx
  unsigned __int64 v11; // rax
  char result; // al
  __int64 (__fastcall *v13)(); // rax
  unsigned int v14; // ebp
  unsigned int v15; // edi
  __int64 *v16; // rcx

  v8 = a3;
  if ( a7 )
  {
    v11 = (unsigned __int64)a7 >> 3;
    CpRegisterWidth = v11;
  }
  else
  {
    v11 = CpRegisterWidth;
  }
  if ( a5 )
  {
    v8 = MmMapIoSpaceEx(a3, 6 * v11 + 1, 0x204u);
    if ( !v8 )
      return 0;
    READ_UCHAR[0] = (__int64 (__fastcall *)())MY_READ_REGISTER_UCHAR;
    v13 = (__int64 (__fastcall *)())MY_WRITE_REGISTER_UCHAR;
  }
  else
  {
    READ_UCHAR[0] = (__int64 (__fastcall *)())MY_READ_PORT_UCHAR;
    v13 = (__int64 (__fastcall *)())MY_WRITE_PORT_UCHAR;
  }
  WRITE_UCHAR = v13;
  v14 = 19200;
  if ( a1 )
    v14 = a1;
  if ( a2 )
  {
    if ( !v8 )
    {
      switch ( a2 )
      {
        case 1:
          v8 = 1016LL;
          break;
        case 2:
          v8 = 760LL;
          break;
        case 3:
          v8 = 1000LL;
          break;
        default:
          a2 = 4;
          v8 = 744LL;
          break;
      }
    }
  }
  else
  {
    v8 = 760LL;
    if ( CpDoesPortExist(760LL) )
    {
      a2 = 2;
    }
    else
    {
      v8 = 1016LL;
      if ( !CpDoesPortExist(1016LL) )
        return 0;
      a2 = 1;
    }
  }
  v15 = a2 - 1;
  v16 = (__int64 *)((char *)&Port + 16 * v15);
  if ( *v16 )
    return 0;
  PortInitialize = (__int64)CpInitialize;
  PortGetByte = (__int64)CpGetByte;
  PortPutByte = (__int64)CpPutByte;
  PortEnableFifo = (__int64)CpEnableFifo;
  CpInitialize(v16, v8, v14);
  result = 1;
  *a4 = v15;
  return result;
}
