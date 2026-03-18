/*
 * XREFs of UsbhGetBillboardInfo @ 0x1C0043F7C
 * Callers:
 *     UsbhSetupDevice @ 0x1C0022C90 (UsbhSetupDevice.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhValidateStringDescriptor @ 0x1C002894C (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C0028988 (UsbhGetStringFromDevice.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     UsbhException @ 0x1C004FE34 (UsbhException.c)
 */

__int64 __fastcall UsbhGetBillboardInfo(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // r13
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v8; // rbx
  __int64 v9; // rdi
  int StringFromDevice; // eax
  __int64 v11; // rcx
  int v12; // r8d
  int v14; // r14d
  unsigned __int8 i; // r14
  int v16; // eax
  unsigned __int8 v17; // [rsp+30h] [rbp-30h]
  unsigned __int8 v18; // [rsp+30h] [rbp-30h]
  int v19; // [rsp+48h] [rbp-18h]
  int v20[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v21; // [rsp+A8h] [rbp+48h] BYREF

  v6 = PdoExt(a2);
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xFFuLL, 0x42554855u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xFFuLL);
    LODWORD(v9) = 0;
    if ( *(_BYTE *)(a3 + 3) )
    {
      v17 = *(_BYTE *)(a3 + 3);
      v21 = 255;
      StringFromDevice = UsbhGetStringFromDevice(a1, a2, (__int64)v20, (__int64)v8, &v21, 0x409u, v17);
      v9 = StringFromDevice;
      v11 = StringFromDevice & 0xC0000000;
      if ( (_DWORD)v11 == -1073741824 )
      {
        LOBYTE(v19) = 0;
        UsbhException(
          a1,
          *((unsigned __int16 *)v6 + 710),
          140,
          (int)v8,
          v21,
          StringFromDevice,
          v20[0],
          usbfile_bus_c,
          7608,
          v19);
        v12 = 4678194;
        goto LABEL_5;
      }
      v14 = v21;
      if ( !UsbhValidateStringDescriptor(v11, v8, v21, v20) )
      {
        LOBYTE(v19) = 0;
        UsbhException(a1, *((unsigned __int16 *)v6 + 710), 38, (int)v8, v14, v9, v20[0], usbfile_bus_c, 7620, v19);
        v12 = 4678195;
        goto LABEL_5;
      }
    }
    for ( i = 0; i < *(_BYTE *)(a3 + 4); ++i )
    {
      if ( *(_BYTE *)(a3 + 4LL * i + 47) )
      {
        v18 = *(_BYTE *)(a3 + 4LL * i + 47);
        v21 = 255;
        v16 = UsbhGetStringFromDevice(a1, a2, (__int64)v20, (__int64)v8, &v21, 0x409u, v18);
        v9 = v16;
        if ( (v16 & 0xC0000000) == 0xC0000000 )
        {
          LOBYTE(v19) = 0;
          UsbhException(a1, *((unsigned __int16 *)v6 + 710), 141, (int)v8, v21, v16, v20[0], usbfile_bus_c, 7645, v19);
          v12 = 4678196;
LABEL_5:
          Log(a1, 4, v12, 0LL, v9);
          break;
        }
        if ( !UsbhValidateStringDescriptor(3221225472LL, v8, v21, v20) )
        {
          LOBYTE(v19) = 0;
          UsbhException(a1, *((unsigned __int16 *)v6 + 710), 38, (int)v8, v21, v9, v20[0], usbfile_bus_c, 7657, v19);
          v12 = 4678197;
          goto LABEL_5;
        }
      }
    }
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)v9;
  }
  else
  {
    Log(a1, 4, 4678193, 0LL, 0LL);
    return 3221225626LL;
  }
}
