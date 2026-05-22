/*
 * XREFs of ?CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x18009AD38
 * Callers:
 *     ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x18009A770 (-OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009A950 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::CreateButtonInfo(
        ConsumerControlDeviceCollection *this,
        LONG a2,
        DWORD a3,
        union _LARGE_INTEGER a4,
        unsigned __int16 a5,
        bool a6,
        union _LARGE_INTEGER *a7)
{
  unsigned int v7; // ebp
  int v11; // esi
  __int64 v12; // rcx

  v7 = 0;
  if ( a5 > 0xE9u )
  {
    if ( a5 > 0x223u )
    {
      switch ( a5 )
      {
        case 0x224u:
          v11 = 2;
          goto LABEL_53;
        case 0x225u:
          v11 = 35;
          goto LABEL_53;
        case 0x226u:
          v11 = 36;
          goto LABEL_53;
      }
      v12 = (unsigned int)a5 - 551;
      if ( a5 == 551 )
      {
        v11 = 37;
        goto LABEL_53;
      }
      if ( a5 == 554 )
      {
        v11 = 38;
        goto LABEL_53;
      }
    }
    else
    {
      switch ( a5 )
      {
        case 0x223u:
          v11 = 34;
          goto LABEL_53;
        case 0xEAu:
          v11 = 6;
          goto LABEL_53;
        case 0x183u:
          v11 = 30;
          goto LABEL_53;
        case 0x18Au:
          v11 = 31;
          goto LABEL_53;
      }
      v12 = (unsigned int)a5 - 402;
      if ( a5 == 402 )
      {
        v11 = 32;
        goto LABEL_53;
      }
      if ( a5 == 404 )
      {
        v11 = 33;
        goto LABEL_53;
      }
    }
  }
  else
  {
    if ( a5 == 233 )
    {
      v11 = 5;
      goto LABEL_53;
    }
    if ( a5 > 0xB4u )
    {
      switch ( a5 )
      {
        case 0xB5u:
          v11 = 22;
          goto LABEL_53;
        case 0xB6u:
          v11 = 23;
          goto LABEL_53;
        case 0xB7u:
          v11 = 24;
          goto LABEL_53;
      }
      v12 = (unsigned int)a5 - 205;
      if ( a5 == 205 )
      {
        v11 = 25;
        goto LABEL_53;
      }
      if ( a5 == 226 )
      {
        v11 = 26;
        goto LABEL_53;
      }
    }
    else
    {
      switch ( a5 )
      {
        case 0xB4u:
          v11 = 21;
          goto LABEL_53;
        case 0x9Cu:
          v11 = 15;
          goto LABEL_53;
        case 0x9Du:
          v11 = 16;
          goto LABEL_53;
      }
      v11 = 19;
      if ( a5 == 176 )
      {
        v11 = 17;
        goto LABEL_53;
      }
      if ( a5 == 177 )
      {
        v11 = 18;
        goto LABEL_53;
      }
      v12 = (unsigned int)a5 - 178;
      if ( a5 == 178 )
      {
LABEL_53:
        memset(a7, 0, 0xB20uLL);
        BYTE4(a7[87].QuadPart) = a6;
        a7->HighPart = a2;
        a7->LowPart = 128;
        a7[1].LowPart = a3;
        a7[2] = a4;
        a7[5].LowPart = 2848;
        a7[87].LowPart = v11;
        BYTE3(a7[86].QuadPart) = 1;
        return v7;
      }
      if ( a5 == 179 )
      {
        v11 = 20;
        goto LABEL_53;
      }
    }
  }
  v7 = -2147467263;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, 372, 1);
  return v7;
}
