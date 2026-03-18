/*
 * XREFs of UsbhInstallMsOsExtendedProperties @ 0x1C003FC28
 * Callers:
 *     UsbhPdoPnp_QueryResourceRequirements @ 0x1C001B410 (UsbhPdoPnp_QueryResourceRequirements.c)
 * Callees:
 *     UsbhReleaseFdoPnpLock @ 0x1C00097A8 (UsbhReleaseFdoPnpLock.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     __security_check_cookie @ 0x1C00283F0 (__security_check_cookie.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     UsbhAcquireFdoPnpLock @ 0x1C003E8D4 (UsbhAcquireFdoPnpLock.c)
 *     USBD_InstallExtPropDescSections @ 0x1C003E990 (USBD_InstallExtPropDescSections.c)
 *     USBD_ValidateExtendedPropertyDescriptor @ 0x1C003F0D8 (USBD_ValidateExtendedPropertyDescriptor.c)
 *     UsbhExtPropDescSemaphorePresent @ 0x1C003F1FC (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhGetMsOsFeatureDescriptor @ 0x1C003FA04 (UsbhGetMsOsFeatureDescriptor.c)
 */

LONG __fastcall UsbhInstallMsOsExtendedProperties(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  _DWORD *v4; // rax
  int v5; // ecx
  char v6; // r8
  unsigned int *PoolWithTag; // rax
  unsigned int *v8; // rbx
  char v9; // r8
  unsigned int v10; // r14d
  unsigned int v12; // [rsp+40h] [rbp-20h] BYREF
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp-18h] BYREF
  __int16 v14; // [rsp+50h] [rbp-10h]

  v12 = 0;
  v4 = PdoExt((__int64)a2);
  if ( (v4[356] & 0x400) != 0 )
  {
    v5 = v4[353];
    if ( (v5 & 0x800) == 0 )
    {
      v4[353] = v5 | 0x800;
      UsbhAcquireFdoPnpLock(*(_QWORD *)(a1 + 8), a1, 11, 829387629, 1);
      if ( !UsbhExtPropDescSemaphorePresent(a2) )
      {
        NumberOfBytes = 0LL;
        v14 = 0;
        if ( (int)UsbhGetMsOsFeatureDescriptor((__int64)a2, 1, v6, 5, (__int64)&NumberOfBytes, 10, &v12) >= 0
          && v12 == 10
          && (unsigned int)NumberOfBytes >= 0xA
          && HIDWORD(NumberOfBytes) == 327936 )
        {
          if ( v14 )
          {
            PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                            ExDefaultNonPagedPoolType,
                                            (unsigned int)NumberOfBytes,
                                            0x42554855u);
            v8 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, (unsigned int)NumberOfBytes);
              if ( (int)UsbhGetMsOsFeatureDescriptor((__int64)a2, 1, v9, 5, (__int64)v8, NumberOfBytes, &v12) >= 0 )
              {
                v10 = v12;
                if ( v12 == (_DWORD)NumberOfBytes
                  && RtlCompareMemory(&NumberOfBytes, v8, 0xAuLL) == 10
                  && (int)USBD_ValidateExtendedPropertyDescriptor(v8, v10) >= 0 )
                {
                  USBD_InstallExtPropDescSections(a2, (__int64)v8, *v8);
                }
              }
              ExFreePoolWithTag(v8, 0);
            }
          }
        }
      }
    }
  }
  return UsbhReleaseFdoPnpLock(*(_QWORD *)(a1 + 8), a1);
}
