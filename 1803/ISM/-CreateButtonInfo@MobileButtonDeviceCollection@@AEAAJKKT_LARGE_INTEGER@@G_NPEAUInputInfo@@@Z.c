/*
 * XREFs of ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800730DC
 * Callers:
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x180072C00 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x180072D90 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MobileButtonDeviceCollection::CreateButtonInfo(
        MobileButtonDeviceCollection *this,
        LONG a2,
        DWORD a3,
        union _LARGE_INTEGER a4,
        unsigned __int16 a5,
        bool a6,
        union _LARGE_INTEGER *a7)
{
  unsigned int v7; // r10d
  int v8; // eax

  v7 = 0;
  if ( a5 > 0x41u )
  {
    switch ( a5 )
    {
      case 'B':
        v8 = 5;
        goto LABEL_26;
      case 'C':
        v8 = 6;
        goto LABEL_26;
      case 'D':
        v8 = 0;
        goto LABEL_26;
      case 'E':
      case 'h':
        v8 = 9;
        goto LABEL_26;
    }
    v8 = 11;
    if ( a5 == 115 )
    {
LABEL_26:
      a7->HighPart = a2;
      a7->LowPart = 128;
      a7[1].LowPart = a3;
      a7[2] = a4;
      a7[65].LowPart = v8;
      BYTE4(a7[65].QuadPart) = a6;
      BYTE1(a7[64].LowPart) = 1;
      return v7;
    }
  }
  else
  {
    switch ( a5 )
    {
      case 'A':
        v8 = 10;
        goto LABEL_26;
      case ')':
      case ':':
        v8 = 2;
        goto LABEL_26;
      case ';':
        v8 = 1;
        goto LABEL_26;
      case '<':
        v8 = 3;
        goto LABEL_26;
      case '?':
        v8 = 8;
        goto LABEL_26;
      case '@':
        v8 = 7;
        goto LABEL_26;
    }
  }
  return (unsigned int)-2147024809;
}
