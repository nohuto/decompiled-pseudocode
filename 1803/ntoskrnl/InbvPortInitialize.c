/*
 * XREFs of InbvPortInitialize @ 0x1402CAA98
 * Callers:
 *     HdlspEnableTerminal @ 0x140839434 (HdlspEnableTerminal.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14013A010 (MmMapIoSpaceEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

char __fastcall InbvPortInitialize(
        int a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        char a5,
        unsigned __int8 a6,
        char a7,
        char a8)
{
  char v9; // bl
  _DWORD *v10; // r13
  __int64 v11; // r8
  __int64 v14; // rbp
  __int64 *v15; // r14
  unsigned __int8 v16; // al
  char v17; // di
  char v18; // si
  int v19; // eax
  __int64 (__fastcall **v20)(_QWORD, char *, __int64, _DWORD *, char); // rax

  v9 = 1;
  v10 = a4;
  v11 = 1LL;
  if ( a2 )
    v11 = a2;
  if ( (unsigned int)v11 > 4 )
    return 0;
  v14 = (unsigned int)(v11 - 1);
  v15 = (__int64 *)((char *)&Ports + 40 * v14);
  if ( *v15 )
    return 0;
  v16 = a6;
  if ( a6 )
  {
    v9 = a8;
    v18 = a7;
    v17 = a5;
  }
  else
  {
    v17 = 0;
    v18 = 8;
    if ( a3 )
      v16 = 1;
    else
      a3 = (unsigned int)v11;
  }
  if ( !a3 )
    return 0;
  if ( v16 >= 0x13u )
    return 0;
  UartHardwareDriver = (__int64)UartHardwareDrivers[v16];
  if ( !UartHardwareDriver )
    return 0;
  if ( v17 )
  {
    a3 = MmMapIoSpaceEx(a3, 4096LL, 0x204u);
    if ( !a3 )
      return 0;
  }
  *v15 = a3;
  v19 = 19200;
  if ( a1 )
    v19 = a1;
  LOBYTE(a4) = v9;
  dword_1403EFB18[10 * v14] = v19;
  LOBYTE(v11) = v17;
  v20 = (__int64 (__fastcall **)(_QWORD, char *, __int64, _DWORD *, char))UartHardwareDriver;
  *v10 = v14;
  return (*v20)(0LL, (char *)&Ports + 40 * v14, v11, a4, v18);
}
