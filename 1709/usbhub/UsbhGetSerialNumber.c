/*
 * XREFs of UsbhGetSerialNumber @ 0x1C00234F4
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0006C34 (UsbhSyncResetDeviceInternal.c)
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhValidateStringDescriptor @ 0x1C002894C (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C0028988 (UsbhGetStringFromDevice.c)
 *     UsbhFreeID @ 0x1C0028A88 (UsbhFreeID.c)
 *     UsbhValidateSerialNumberString @ 0x1C0028B2C (UsbhValidateSerialNumberString.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhGetSerialNumber(int a1, __int64 a2, __int64 a3)
{
  int v4; // r12d
  _DWORD *v5; // rax
  _DWORD *v6; // r15
  unsigned int v7; // ebx
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v10; // r14
  int v11; // edi
  __int64 v12; // rcx
  int v13; // r12d
  unsigned int v14; // eax
  _WORD *v15; // rsi
  _WORD *v16; // rdi
  __int64 i; // rcx
  int v18; // edi
  int v19; // r8d
  char v20; // [rsp+30h] [rbp-30h]
  int v21; // [rsp+30h] [rbp-30h]
  int v22; // [rsp+40h] [rbp-20h]
  int v23; // [rsp+48h] [rbp-18h]
  unsigned __int16 v24[2]; // [rsp+50h] [rbp-10h] BYREF
  int v25; // [rsp+54h] [rbp-Ch] BYREF
  int StringFromDevice; // [rsp+58h] [rbp-8h]
  char v28; // [rsp+B8h] [rbp+58h] BYREF

  v4 = a2;
  v5 = PdoExt(a2);
  v6 = v5;
  if ( (v5[356] & 0x800) != 0 )
    return 0LL;
  v7 = 0;
  if ( !*((_BYTE *)v5 + 1408) )
    return 0LL;
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xFFuLL, 0x42554855u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0xFFuLL);
  v28 = 0;
  if ( v10 )
  {
    v20 = *((_BYTE *)v6 + 1408);
    v24[0] = 255;
    StringFromDevice = UsbhGetStringFromDevice(a1, v4, (unsigned int)&v25, (_DWORD)v10, (__int64)v24, 1033, v20);
    v11 = StringFromDevice;
    v12 = StringFromDevice & 0xC0000000;
    if ( (_DWORD)v12 == -1073741824 )
    {
      LOBYTE(v23) = 0;
      UsbhException(
        a1,
        *((unsigned __int16 *)v6 + 710),
        89,
        (int)v10,
        v24[0],
        StringFromDevice,
        v25,
        usbfile_idstring_c,
        1337,
        v23);
    }
    else
    {
      v13 = v24[0];
      if ( (unsigned __int8)UsbhValidateStringDescriptor(v12, v10, v24[0], &v25) )
      {
        v14 = (*v10 >> 1) - 1;
        if ( *v10 >> 1 != 1 )
        {
          v15 = v10 + 2;
          v16 = v10;
          for ( i = v14; i; --i )
            *v16++ = *v15++;
          v18 = StringFromDevice;
          *(_WORD *)&v10[2 * v14] = 0;
          *(_DWORD *)(a3 + 4) = v13;
          *(_QWORD *)(a3 + 8) = v10;
          if ( !(unsigned __int8)UsbhValidateSerialNumberString(a1, (__int64)&v28) )
          {
            LOBYTE(v23) = 0;
            UsbhException(
              a1,
              *((unsigned __int16 *)v6 + 710),
              37,
              (int)v10,
              v13,
              v18,
              v25,
              usbfile_idstring_c,
              1402,
              v23);
            UsbhFreeID(a3);
            if ( v28 )
            {
              v6[703] = 1073807369;
              return (unsigned int)-1073741811;
            }
          }
          return v7;
        }
        LOBYTE(v23) = 0;
        v22 = 1423;
        v19 = 59;
        v21 = v25;
      }
      else
      {
        LOBYTE(v23) = 0;
        v19 = 38;
        v22 = 1350;
        v21 = v25;
      }
      UsbhException(a1, *((unsigned __int16 *)v6 + 710), v19, (int)v10, v13, v11, v21, usbfile_idstring_c, v22, v23);
    }
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
