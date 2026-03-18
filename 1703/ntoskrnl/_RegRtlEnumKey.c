/*
 * XREFs of _RegRtlEnumKey @ 0x1405AA7F4
 * Callers:
 *     _CmGetDeviceContainerIdFromBase @ 0x1404DF81C (_CmGetDeviceContainerIdFromBase.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140559390 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PipHardwareConfigActivateService @ 0x140592A80 (PipHardwareConfigActivateService.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x14059365C (_PnpGetGenericStorePropertyKeys.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x1405AA62C (_RegRtlEnumKeyWithCallback.c)
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140698714 (PiDqDeleteUserObjectFromLoadedHives.c)
 *     PpDevCfgProcessDeviceReset @ 0x14069F1F4 (PpDevCfgProcessDeviceReset.c)
 *     PiCMDeleteDeviceKey @ 0x1406A4B08 (PiCMDeleteDeviceKey.c)
 *     PiCMEnumerateSubKeys @ 0x1406A51A4 (PiCMEnumerateSubKeys.c)
 *     _PnpCtxRegEnumKey @ 0x140739C78 (_PnpCtxRegEnumKey.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x14073C984 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _RegRtlCopyTreeInternal @ 0x140741D70 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwEnumerateKey @ 0x14017E580 (ZwEnumerateKey.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RegRtlEnumKey(void *a1, ULONG a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int *v5; // rbp
  unsigned int v6; // r12d
  unsigned __int64 v7; // rdi
  ULONG Length; // r13d
  unsigned int *p_KeyInformation; // rsi
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  unsigned int *v12; // rdx
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int *v16; // rcx
  unsigned int *v17; // r15
  ULONG v19; // r13d
  unsigned int *PoolWithTag; // rax
  NTSTATUS v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-C8h] BYREF
  ULONG Index; // [rsp+34h] [rbp-C4h]
  unsigned int *v26; // [rsp+38h] [rbp-C0h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-B8h]
  char KeyInformation; // [rsp+48h] [rbp-B0h] BYREF

  v26 = a4;
  Index = a2;
  KeyHandle = a1;
  v5 = 0LL;
  v6 = -1;
  if ( a3 )
  {
    v7 = 2LL * *a4;
    if ( v7 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
  }
  else
  {
    LODWORD(v7) = 0;
  }
  Length = 96;
  if ( (unsigned int)v7 > 0x60 )
  {
    p_KeyInformation = a3;
    Length = v7;
  }
  else
  {
    p_KeyInformation = (unsigned int *)&KeyInformation;
  }
  v10 = ZwEnumerateKey(a1, a2, KeyBasicInformation, p_KeyInformation, Length, &ResultLength);
  v11 = v10;
  if ( !v10 || v10 == -2147483643 )
  {
    v12 = p_KeyInformation + 3;
    v13 = -1;
    v14 = p_KeyInformation[3];
    v15 = v14 + 2;
    if ( v14 + 2 >= v14 )
      v13 = v14 + 2;
    v11 = v15 < v14 ? 0xC0000095 : 0;
    if ( v15 >= v14 )
    {
      v16 = v26;
      *v26 = v13 >> 1;
      if ( v13 > (unsigned int)v7 )
        return (unsigned int)-1073741789;
      if ( ResultLength <= Length )
      {
        v17 = v16;
        goto LABEL_12;
      }
      v19 = -1;
      if ( (unsigned int)v7 < 0xFFFFFFF0 )
        v19 = v7 + 16;
      v11 = (unsigned int)v7 >= 0xFFFFFFF0 ? 0xC0000095 : 0;
      if ( (unsigned int)(v7 + 16) >= 0x10 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v19, 0x4C474552u);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        p_KeyInformation = PoolWithTag;
        v21 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, PoolWithTag, v19, &ResultLength);
        v11 = v21;
        if ( v21 && v21 != -2147483643 )
          goto LABEL_13;
        v12 = v5 + 3;
        v22 = v5[3];
        v23 = v22 + 2;
        if ( v22 + 2 >= v22 )
          v6 = v22 + 2;
        v11 = v23 < v22 ? 0xC0000095 : 0;
        if ( v23 < v22 )
          goto LABEL_13;
        v17 = v26;
        *v26 = v6 >> 1;
        if ( v6 > (unsigned int)v7 )
        {
          v11 = -1073741789;
LABEL_13:
          if ( v5 )
            ExFreePoolWithTag(v5, 0);
          return v11;
        }
LABEL_12:
        memmove(a3, p_KeyInformation + 4, *v12);
        *((_WORD *)a3 + *v17 - 1) = 0;
        goto LABEL_13;
      }
    }
  }
  return v11;
}
