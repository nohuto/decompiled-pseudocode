/*
 * XREFs of UsbhGetBillboardInfo @ 0x1C004313C
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 *     UsbhValidateStringDescriptor @ 0x1C00549E4 (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C0055678 (UsbhGetStringFromDevice.c)
 */

__int64 __fastcall UsbhGetBillboardInfo(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r12d
  _DWORD *v6; // r13
  PVOID PoolWithTag; // rax
  void *v8; // rbx
  __int64 v9; // rdi
  int StringFromDevice; // eax
  __int64 v11; // rcx
  int v12; // r8d
  int v14; // r14d
  unsigned __int8 i; // r14
  int v16; // eax
  char v17; // [rsp+30h] [rbp-30h]
  char v18; // [rsp+30h] [rbp-30h]
  int v19; // [rsp+48h] [rbp-18h]
  int v20[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v21; // [rsp+A8h] [rbp+48h] BYREF

  v5 = a2;
  v6 = PdoExt(a2);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xFFuLL, 0x42554855u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xFFuLL);
    LODWORD(v9) = 0;
    if ( *(_BYTE *)(a3 + 3) )
    {
      v17 = *(_BYTE *)(a3 + 3);
      v21 = 255;
      StringFromDevice = UsbhGetStringFromDevice(a1, v5, (unsigned int)v20, (_DWORD)v8, (__int64)&v21, 1033, v17);
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
          7598,
          v19);
        v12 = 4678194;
        goto LABEL_5;
      }
      v14 = v21;
      if ( !(unsigned __int8)UsbhValidateStringDescriptor(v11, v8, v21, v20) )
      {
        LOBYTE(v19) = 0;
        UsbhException(a1, *((unsigned __int16 *)v6 + 710), 38, (int)v8, v14, v9, v20[0], usbfile_bus_c, 7610, v19);
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
        v16 = UsbhGetStringFromDevice(a1, v5, (unsigned int)v20, (_DWORD)v8, (__int64)&v21, 1033, v18);
        v9 = v16;
        if ( (v16 & 0xC0000000) == 0xC0000000 )
        {
          LOBYTE(v19) = 0;
          UsbhException(a1, *((unsigned __int16 *)v6 + 710), 141, (int)v8, v21, v16, v20[0], usbfile_bus_c, 7635, v19);
          v12 = 4678196;
LABEL_5:
          Log(a1, 4, v12, 0LL, v9);
          break;
        }
        if ( !(unsigned __int8)UsbhValidateStringDescriptor(3221225472LL, v8, v21, v20) )
        {
          LOBYTE(v19) = 0;
          UsbhException(a1, *((unsigned __int16 *)v6 + 710), 38, (int)v8, v21, v9, v20[0], usbfile_bus_c, 7647, v19);
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
