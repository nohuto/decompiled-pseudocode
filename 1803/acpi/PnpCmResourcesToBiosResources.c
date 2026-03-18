/*
 * XREFs of PnpCmResourcesToBiosResources @ 0x1C00862DC
 * Callers:
 *     ACPIInitStartDevice @ 0x1C0028FBC (ACPIInitStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C003803C (WPP_RECORDER_SF_DD.c)
 *     PnpiCmResourceToBiosAddress @ 0x1C008695C (PnpiCmResourceToBiosAddress.c)
 *     PnpiCmResourceToBiosAddressDouble @ 0x1C0086A44 (PnpiCmResourceToBiosAddressDouble.c)
 *     PnpiCmResourceToBiosAddressQuad @ 0x1C0086B14 (PnpiCmResourceToBiosAddressQuad.c)
 *     PnpiCmResourceToBiosDma @ 0x1C0086BB8 (PnpiCmResourceToBiosDma.c)
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1C0086C34 (PnpiCmResourceToBiosExtendedIrq.c)
 *     PnpiCmResourceToBiosGpioInterruptIoDescriptor @ 0x1C0086D24 (PnpiCmResourceToBiosGpioInterruptIoDescriptor.c)
 *     PnpiCmResourceToBiosIoFixedPort @ 0x1C0086D88 (PnpiCmResourceToBiosIoFixedPort.c)
 *     PnpiCmResourceToBiosIoPort @ 0x1C0086DD8 (PnpiCmResourceToBiosIoPort.c)
 *     PnpiCmResourceToBiosIrq @ 0x1C0086E54 (PnpiCmResourceToBiosIrq.c)
 *     PnpiCmResourceToBiosMemory @ 0x1C0086ED4 (PnpiCmResourceToBiosMemory.c)
 *     PnpiCmResourceToBiosMemory32Fixed @ 0x1C0086F40 (PnpiCmResourceToBiosMemory32Fixed.c)
 */

__int64 __fastcall PnpCmResourcesToBiosResources(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 v4; // r15
  unsigned int v5; // esi
  __int64 v6; // r13
  signed int v9; // ebx
  unsigned __int64 i; // rdi
  int v11; // edx
  __int16 v12; // r8
  int v13; // r9d
  int v14; // edx
  signed int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // r8d
  char v21; // cl
  unsigned int v22; // edx
  _BYTE *v23; // rax
  unsigned int v25; // edx
  unsigned int v26; // eax
  _BYTE *v27; // rcx
  unsigned __int16 v29; // [rsp+90h] [rbp+18h]

  v4 = *a3;
  v5 = 0;
  v6 = a4;
  v9 = 0;
  for ( i = (unsigned __int64)a3; ; v4 = *(_BYTE *)i )
  {
    if ( (v4 & 0x80u) != 0 )
    {
      if ( i >= (unsigned __int64)&a3[v6 - 2] )
        goto LABEL_71;
      v11 = 11;
      v12 = *(_WORD *)(i + 1) + 3;
    }
    else
    {
      v11 = 10;
      v12 = (v4 & 7) + 1;
      v4 &= 0x78u;
    }
    v29 = v12;
    v13 = (unsigned __int16)v11;
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_DD(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      14,
      v13,
      (__int64)&WPP_037c60bd098b351051f2aa0410f4e431_Traceguids,
      v4,
      v12);
    if ( v4 == 120 )
      break;
    if ( v4 > 0x85u )
    {
      switch ( v4 )
      {
        case 0x86u:
          if ( (unsigned __int64)&a3[v6 - i] < 0xC )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosMemory32Fixed(i, a2);
          goto LABEL_63;
        case 0x87u:
          if ( (unsigned __int64)&a3[v6 - i] < 0x1A )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosAddressDouble(i, a2);
          goto LABEL_63;
        case 0x88u:
          if ( (unsigned __int64)&a3[v6 - i] < 0x10 )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosAddress(i, a2);
          goto LABEL_63;
        case 0x89u:
          if ( (unsigned __int64)&a3[v6 - i] < 9 )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosExtendedIrq(a1, i, a2);
          goto LABEL_63;
        case 0x8Au:
          if ( (unsigned __int64)&a3[v6 - i] < 0x2E )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosAddressQuad(i, a2);
          goto LABEL_63;
        case 0x8Cu:
          if ( (unsigned __int64)&a3[v6 - i] < 0x17 )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosGpioInterruptIoDescriptor(i, a2);
          goto LABEL_63;
      }
      if ( v4 != 142 )
        goto LABEL_42;
      if ( (unsigned __int64)&a3[v6 - i] < 0xC )
        return (unsigned int)-1072431089;
      v20 = *(_DWORD *)(a2 + 16);
      v21 = 0;
      v22 = 0;
      if ( v20 )
      {
        v23 = (_BYTE *)(a2 + 20);
        while ( *v23 != 0x84 )
        {
          ++v22;
          v23 += 20;
          if ( v22 >= v20 )
            goto LABEL_50;
        }
        v21 = 1;
        *v23 = 0;
      }
LABEL_50:
      v9 = v21 == 0 ? 0xC0000001 : 0;
    }
    else
    {
      switch ( v4 )
      {
        case 0x85u:
          if ( (unsigned __int64)&a3[v6 - i] < 0x14 )
            return (unsigned int)-1072431089;
          *(_BYTE *)(i + 3) = 0;
          v16 = 0;
          *(_QWORD *)(i + 4) = 0LL;
          *(_QWORD *)(i + 12) = 0LL;
          v17 = *(_DWORD *)(a2 + 16);
          if ( v17 )
          {
            v18 = a2 + 20;
            while ( *(_BYTE *)v18 != 3 )
            {
              ++v16;
              v18 += 20LL;
              if ( v16 >= v17 )
                goto LABEL_34;
            }
            *(_DWORD *)(i + 16) = *(_DWORD *)(v18 + 12);
            v19 = *(_DWORD *)(v18 + 4);
            *(_DWORD *)(i + 8) = v19;
            *(_DWORD *)(i + 4) = v19;
            *(_BYTE *)(i + 3) = (*(_BYTE *)(v18 + 2) & 1) == 0;
            *(_BYTE *)v18 = 0;
          }
LABEL_34:
          v9 = 0;
          goto LABEL_65;
        case 0x20u:
          if ( (unsigned __int64)&a3[v6 - i] < 4 )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosIrq(i, a2);
          goto LABEL_63;
        case 0x28u:
          if ( (unsigned __int64)&a3[v6 - i] < 3 )
            return (unsigned int)-1072431089;
          v15 = PnpiCmResourceToBiosDma(i, a2);
LABEL_63:
          v9 = v15;
          goto LABEL_64;
      }
      if ( v4 != 48 && v4 != 56 )
      {
        switch ( v4 )
        {
          case 0x40u:
            if ( (unsigned __int64)&a3[v6 - i] < 8 )
              return (unsigned int)-1072431089;
            v15 = PnpiCmResourceToBiosIoPort(i, a2);
            break;
          case 0x48u:
            if ( (unsigned __int64)&a3[v6 - i] < 4 )
              return (unsigned int)-1072431089;
            v15 = PnpiCmResourceToBiosIoFixedPort(i, a2);
            break;
          case 0x70u:
            goto LABEL_64;
          case 0x81u:
            if ( (unsigned __int64)&a3[v6 - i] < 0xC )
              return (unsigned int)-1072431089;
            v15 = PnpiCmResourceToBiosMemory(i, a2);
            break;
          default:
LABEL_42:
            LOBYTE(v14) = 2;
            WPP_RECORDER_SF_D(
              WPP_GLOBAL_Control->DeviceExtension,
              v14,
              14,
              13,
              (__int64)&WPP_037c60bd098b351051f2aa0410f4e431_Traceguids,
              v4);
            goto LABEL_64;
        }
        goto LABEL_63;
      }
    }
LABEL_64:
    if ( v9 < 0 )
      return (unsigned int)v9;
LABEL_65:
    i += v29;
    if ( i >= (unsigned __int64)&a3[v6] )
      goto LABEL_71;
  }
  LOBYTE(v14) = 4;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v14,
    14,
    12,
    (__int64)&WPP_037c60bd098b351051f2aa0410f4e431_Traceguids);
LABEL_71:
  v25 = *(_DWORD *)(a2 + 16);
  v26 = 0;
  if ( v25 )
  {
    v27 = (_BYTE *)(a2 + 20);
    do
    {
      if ( !*v27 )
        break;
      ++v26;
      v27 += 20;
    }
    while ( v26 < v25 );
  }
  if ( v26 == v25 )
    return (unsigned int)-1073741823;
  return v5;
}
