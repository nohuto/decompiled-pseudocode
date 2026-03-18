/*
 * XREFs of PnpCmResourcesToBiosResources @ 0x1C008B3C0
 * Callers:
 *     ACPIInitStartDevice @ 0x1C0007104 (ACPIInitStartDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_LL @ 0x1C0007D24 (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     PnpiCmResourceToBiosIoPort @ 0x1C008A8D4 (PnpiCmResourceToBiosIoPort.c)
 *     PnpiCmResourceToBiosIrq @ 0x1C008A94C (PnpiCmResourceToBiosIrq.c)
 *     PnpiCmResourceToBiosAddress @ 0x1C00A3814 (PnpiCmResourceToBiosAddress.c)
 *     PnpiCmResourceToBiosAddressDouble @ 0x1C00A38F8 (PnpiCmResourceToBiosAddressDouble.c)
 *     PnpiCmResourceToBiosAddressQuad @ 0x1C00A39C4 (PnpiCmResourceToBiosAddressQuad.c)
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1C00A3A68 (PnpiCmResourceToBiosExtendedIrq.c)
 *     PnpiCmResourceToBiosGpioInterruptIoDescriptor @ 0x1C00A3B18 (PnpiCmResourceToBiosGpioInterruptIoDescriptor.c)
 *     PnpiCmResourceToBiosIoFixedPort @ 0x1C00A3B7C (PnpiCmResourceToBiosIoFixedPort.c)
 *     PnpiCmResourceToBiosMemory @ 0x1C00A3BCC (PnpiCmResourceToBiosMemory.c)
 *     PnpiCmResourceToBiosMemory32Fixed @ 0x1C00A3C38 (PnpiCmResourceToBiosMemory32Fixed.c)
 */

__int64 __fastcall PnpCmResourcesToBiosResources(__int64 a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  unsigned __int8 v4; // bp
  unsigned int v5; // esi
  __int64 v7; // r13
  unsigned __int64 v8; // rdi
  signed int v10; // ebx
  int v11; // r9d
  __int16 v12; // ax
  int v13; // edx
  signed int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  __int64 v17; // rdx
  unsigned int v18; // edx
  unsigned int v19; // eax
  _BYTE *v20; // rcx
  char v22; // al
  __int16 v23; // ax
  unsigned int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // r8d
  char v29; // cl
  unsigned int v30; // edx
  _BYTE *v31; // rax
  unsigned __int16 v33; // [rsp+90h] [rbp+18h]

  v4 = *a3;
  v5 = 0;
  v7 = a4;
  v8 = (unsigned __int64)a3;
  v10 = 0;
  while ( 1 )
  {
    if ( (v4 & 0x80u) != 0 )
    {
      if ( v8 >= (unsigned __int64)&a3[v7 - 2] )
        goto LABEL_27;
      v11 = 11;
      v12 = *(_WORD *)(v8 + 1) + 3;
    }
    else
    {
      v11 = 10;
      v12 = (v4 & 7) + 1;
      v4 &= 0x78u;
    }
    v33 = v12;
    WPP_RECORDER_SF_LL(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      14,
      v11,
      (__int64)&WPP_d509848ff6b2374d1feb007f5f688283_Traceguids,
      v4,
      v12);
    if ( v4 == 120 )
      break;
    if ( v4 > 0x85u )
    {
      switch ( v4 )
      {
        case 0x86u:
          if ( (unsigned __int64)&a3[v7 - v8] < 0xC )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosMemory32Fixed(v8, a2);
          goto LABEL_14;
        case 0x87u:
          if ( (unsigned __int64)&a3[v7 - v8] < 0x1A )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosAddressDouble(v8, a2);
          goto LABEL_14;
        case 0x88u:
          if ( (unsigned __int64)&a3[v7 - v8] < 0x10 )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosAddress(v8, a2);
          goto LABEL_14;
        case 0x89u:
          if ( (unsigned __int64)&a3[v7 - v8] < 9 )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosExtendedIrq(a1, v8, a2);
          goto LABEL_14;
        case 0x8Au:
          if ( (unsigned __int64)&a3[v7 - v8] < 0x2E )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosAddressQuad(v8, a2);
          goto LABEL_14;
        case 0x8Cu:
          if ( (unsigned __int64)&a3[v7 - v8] < 0x17 )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosGpioInterruptIoDescriptor(v8, a2);
          goto LABEL_14;
        case 0x8Eu:
          if ( (unsigned __int64)&a3[v7 - v8] < 0xC )
            return (unsigned int)-1072431089;
          v28 = *(_DWORD *)(a2 + 16);
          v29 = 0;
          v30 = 0;
          if ( v28 )
          {
            v31 = (_BYTE *)(a2 + 20);
            while ( *v31 != 0x84 )
            {
              ++v30;
              v31 += 20;
              if ( v30 >= v28 )
                goto LABEL_74;
            }
            v29 = 1;
            *v31 = 0;
          }
LABEL_74:
          v10 = v29 == 0 ? 0xC0000001 : 0;
          goto LABEL_15;
      }
LABEL_72:
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        14,
        13,
        (__int64)&WPP_d509848ff6b2374d1feb007f5f688283_Traceguids,
        v4);
      goto LABEL_15;
    }
    switch ( v4 )
    {
      case 0x85u:
        if ( (unsigned __int64)&a3[v7 - v8] < 0x14 )
          return (unsigned int)-1072431089;
        *(_BYTE *)(v8 + 3) = 0;
        v24 = 0;
        *(_QWORD *)(v8 + 4) = 0LL;
        *(_QWORD *)(v8 + 12) = 0LL;
        v25 = *(_DWORD *)(a2 + 16);
        if ( v25 )
        {
          v26 = a2 + 20;
          while ( *(_BYTE *)v26 != 3 )
          {
            ++v24;
            v26 += 20LL;
            if ( v24 >= v25 )
              goto LABEL_23;
          }
          *(_DWORD *)(v8 + 16) = *(_DWORD *)(v26 + 12);
          v27 = *(_DWORD *)(v26 + 4);
          *(_DWORD *)(v8 + 8) = v27;
          *(_DWORD *)(v8 + 4) = v27;
          *(_BYTE *)(v8 + 3) = (*(_BYTE *)(v26 + 2) & 1) == 0;
          *(_BYTE *)v26 = 0;
        }
        goto LABEL_23;
      case 0x20u:
        if ( (unsigned __int64)&a3[v7 - v8] < 4 )
          return (unsigned int)-1072431089;
        v14 = PnpiCmResourceToBiosIrq(v8, a2);
        goto LABEL_14;
      case 0x28u:
        if ( (unsigned __int64)&a3[v7 - v8] < 3 )
          return (unsigned int)-1072431089;
        *(_BYTE *)(v8 + 1) = 0;
        v15 = 0;
        v16 = *(_DWORD *)(a2 + 16);
        if ( v16 )
        {
          v17 = a2 + 20;
          while ( *(_BYTE *)v17 != 4 )
          {
            ++v15;
            v17 += 20LL;
            if ( v15 >= v16 )
              goto LABEL_23;
          }
          *(_BYTE *)(v8 + 1) = 1 << *(_DWORD *)(v17 + 4);
          *(_BYTE *)(v8 + 2) = 0;
          v22 = 0;
          if ( (*(_BYTE *)(v17 + 2) & 8) != 0 )
            v22 = 4;
          *(_BYTE *)(v8 + 2) = v22;
          v23 = *(_WORD *)(v17 + 2);
          if ( (v23 & 0x10) != 0 )
          {
            *(_BYTE *)(v8 + 2) |= 0x20u;
          }
          else if ( (v23 & 0x20) != 0 )
          {
            *(_BYTE *)(v8 + 2) |= 0x40u;
          }
          else if ( (v23 & 0x40) != 0 )
          {
            *(_BYTE *)(v8 + 2) |= 0x60u;
          }
          *(_BYTE *)v17 = 0;
        }
LABEL_23:
        v10 = 0;
        goto LABEL_16;
    }
    if ( v4 != 48 && v4 != 56 )
    {
      if ( v4 == 64 )
      {
        if ( (unsigned __int64)&a3[v7 - v8] < 8 )
          return (unsigned int)-1072431089;
        v14 = PnpiCmResourceToBiosIoPort(v8, a2);
LABEL_14:
        v10 = v14;
        goto LABEL_15;
      }
      if ( v4 == 72 )
      {
        if ( (unsigned __int64)&a3[v7 - v8] < 4 )
          return (unsigned int)-1072431089;
        v14 = PnpiCmResourceToBiosIoFixedPort(v8, a2);
        goto LABEL_14;
      }
      if ( v4 != 112 )
      {
        if ( v4 == 129 )
        {
          if ( (unsigned __int64)&a3[v7 - v8] < 0xC )
            return (unsigned int)-1072431089;
          v14 = PnpiCmResourceToBiosMemory(v8, a2);
          goto LABEL_14;
        }
        goto LABEL_72;
      }
    }
LABEL_15:
    if ( v10 < 0 )
      return (unsigned int)v10;
LABEL_16:
    v8 += v33;
    if ( v8 >= (unsigned __int64)&a3[v7] )
      goto LABEL_27;
    v4 = *(_BYTE *)v8;
  }
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    14,
    12,
    (__int64)&WPP_d509848ff6b2374d1feb007f5f688283_Traceguids);
LABEL_27:
  v18 = *(_DWORD *)(a2 + 16);
  v19 = 0;
  if ( v18 )
  {
    v20 = (_BYTE *)(a2 + 20);
    do
    {
      if ( !*v20 )
        break;
      ++v19;
      v20 += 20;
    }
    while ( v19 < v18 );
  }
  if ( v19 == v18 )
    return (unsigned int)-1073741823;
  return v5;
}
