/*
 * XREFs of UsbhGetProductIdString @ 0x1C0052E10
 * Callers:
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C001B4B0 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhFreeID @ 0x1C0022140 (UsbhFreeID.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     UsbhException @ 0x1C004F144 (UsbhException.c)
 *     UsbhLanguageSupported @ 0x1C0052FD0 (UsbhLanguageSupported.c)
 *     UsbhValidateStringDescriptor @ 0x1C00549E4 (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C0055678 (UsbhGetStringFromDevice.c)
 */

__int64 __fastcall UsbhGetProductIdString(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v8; // rcx
  _DWORD *v9; // r13
  unsigned __int8 *PoolWithTag; // rax
  unsigned __int8 *v12; // rbx
  int StringFromDevice; // edi
  __int64 v14; // rcx
  int v15; // r15d
  void *v16; // rcx
  unsigned int v17; // eax
  _WORD *v18; // rsi
  _WORD *v19; // rdi
  __int64 i; // rcx
  char v21; // [rsp+30h] [rbp-58h]
  int v22[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 v23; // [rsp+A8h] [rbp+20h] BYREF

  v9 = PdoExt(a2);
  if ( *(_QWORD *)(a4 + 8) && *(_WORD *)a4 == a3 )
    return 0LL;
  if ( !(unsigned __int8)UsbhLanguageSupported(v8, a2, a3) )
    return 3221225659LL;
  UsbhFreeID(a4);
  PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xFFuLL, 0x42554855u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xFFuLL);
    v21 = *((_BYTE *)v9 + 1407);
    v23 = 255;
    StringFromDevice = UsbhGetStringFromDevice(a1, a2, (unsigned int)v22, (_DWORD)v12, (__int64)&v23, a3, v21);
    v14 = StringFromDevice & 0xC0000000;
    if ( (_DWORD)v14 == -1073741824 || (v15 = v23, !(unsigned __int8)UsbhValidateStringDescriptor(v14, v12, v23, v22)) )
    {
      UsbhException(a1, *((_WORD *)v9 + 710), 0x26u, v12, v23, StringFromDevice, v22[0], usbfile_idstring_c, 1560, 0);
      v16 = v12;
    }
    else
    {
      v16 = v12;
      v17 = (*v12 >> 1) - 1;
      if ( *v12 >> 1 != 1 )
      {
        v18 = v12 + 2;
        v19 = v12;
        for ( i = v17; i; --i )
          *v19++ = *v18++;
        *(_WORD *)&v12[2 * v17] = 0;
        *(_DWORD *)(a4 + 4) = v15;
        *(_QWORD *)(a4 + 8) = v12;
        *(_WORD *)a4 = a3;
        return 0LL;
      }
    }
    ExFreePoolWithTag(v16, 0);
    return 3221225659LL;
  }
  return 3221225626LL;
}
