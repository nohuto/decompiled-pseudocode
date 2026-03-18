/*
 * XREFs of InbvPortInitialize @ 0x1402953A8
 * Callers:
 *     HdlspEnableTerminal @ 0x1407CC430 (HdlspEnableTerminal.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1401199B0 (MmMapIoSpaceEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CpDoesPortExist @ 0x140294EE0 (CpDoesPortExist.c)
 */

char __fastcall InbvPortInitialize(
        unsigned int a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        char a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        char a8)
{
  unsigned __int8 v12; // r8
  char v13; // cl
  __int64 (__fastcall *v14)(); // rax
  char result; // al
  unsigned int v16; // esi
  unsigned int v17; // edi
  _QWORD *v18; // rcx

  v12 = 8;
  if ( a6 > 1u && a6 != 18 )
    return 0;
  PortInitialize = (__int64)CpInitialize;
  v13 = 0;
  PortGetByte = (__int64)CpGetByte;
  PortPutByte = (__int64)CpPutByte;
  PortEnableFifo = (__int64)CpEnableFifo;
  if ( a6 == 18 )
    v13 = a8;
  if ( !a5 )
  {
    if ( (unsigned __int8)v13 <= 1u )
    {
      READ_UCHAR = (__int64 (__fastcall *)())MY_READ_PORT_UCHAR;
      v14 = (__int64 (__fastcall *)())MY_WRITE_PORT_UCHAR;
      goto LABEL_23;
    }
    if ( v13 != 2 )
    {
      if ( v13 != 3 )
        return 0;
      READ_UCHAR = (__int64 (__fastcall *)())MY_READ_PORT_ULONG;
      v14 = (__int64 (__fastcall *)())MY_WRITE_PORT_ULONG;
      goto LABEL_13;
    }
    READ_UCHAR = (__int64 (__fastcall *)())MY_READ_PORT_USHORT;
    v14 = (__int64 (__fastcall *)())MY_WRITE_PORT_USHORT;
LABEL_15:
    v12 = 16;
    goto LABEL_23;
  }
  if ( (unsigned __int8)v13 <= 1u )
  {
    READ_UCHAR = (__int64 (__fastcall *)())MY_READ_REGISTER_UCHAR;
    v14 = (__int64 (__fastcall *)())MY_WRITE_REGISTER_UCHAR;
    goto LABEL_23;
  }
  if ( v13 == 2 )
  {
    READ_UCHAR = (__int64 (__fastcall *)())MY_READ_REGISTER_USHORT;
    v14 = (__int64 (__fastcall *)())MY_WRITE_REGISTER_USHORT;
    goto LABEL_15;
  }
  if ( v13 == 3 )
  {
    READ_UCHAR = (__int64 (__fastcall *)())MY_READ_REGISTER_ULONG;
    v14 = (__int64 (__fastcall *)())MY_WRITE_REGISTER_ULONG;
LABEL_13:
    v12 = 32;
    goto LABEL_23;
  }
  if ( v13 != 4 )
    return 0;
  v12 = 64;
  READ_UCHAR = (__int64 (__fastcall *)())MiGetPfnLink;
  v14 = (__int64 (__fastcall *)())MY_WRITE_REGISTER_ULONG64;
LABEL_23:
  WRITE_UCHAR[0] = v14;
  if ( a7 )
  {
    if ( ((unsigned __int8)(a7 - 1) & a7) != 0 || a7 < v12 || a7 > 0x40u )
      return 0;
    CpRegisterWidth = (unsigned __int64)a7 >> 3;
  }
  if ( a5 )
  {
    a3 = MmMapIoSpaceEx(a3, 8 * CpRegisterWidth, 0x204u);
    if ( !a3 )
      return 0;
  }
  v16 = 19200;
  if ( a1 )
    v16 = a1;
  if ( !a2 )
  {
    a3 = 760LL;
    if ( CpDoesPortExist(760LL) )
    {
      a2 = 2;
      goto LABEL_45;
    }
    a3 = 1016LL;
    if ( CpDoesPortExist(1016LL) )
    {
      a2 = 1;
      goto LABEL_45;
    }
    return 0;
  }
  if ( !a3 )
  {
    switch ( a2 )
    {
      case 1:
        a3 = 1016LL;
        break;
      case 2:
        a3 = 760LL;
        break;
      case 3:
        a3 = 1000LL;
        break;
      default:
        a2 = 4;
        a3 = 744LL;
        break;
    }
  }
LABEL_45:
  v17 = a2 - 1;
  v18 = (_QWORD *)((char *)&Port + 16 * v17);
  if ( *v18 )
    return 0;
  ((void (__fastcall *)(_QWORD *, __int64, _QWORD))PortInitialize)(v18, a3, v16);
  result = 1;
  *a4 = v17;
  return result;
}
