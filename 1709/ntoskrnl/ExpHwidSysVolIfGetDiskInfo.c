/*
 * XREFs of ExpHwidSysVolIfGetDiskInfo @ 0x14055F790
 * Callers:
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x14055F650 (ExpHwidSysVolIfDeviceInfoProvider.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1400DF084 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x14054EDB4 (ExpHwidAppendDeviceInfoBlock.c)
 *     ExpHwidGetDeviceProperties @ 0x14054F0F0 (ExpHwidGetDeviceProperties.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x14055FE74 (ExpHwidSendSynchronousIrpToDevice.c)
 *     sub_140560ECC @ 0x140560ECC (sub_140560ECC.c)
 *     sub_140560F40 @ 0x140560F40 (sub_140560F40.c)
 */

__int64 __fastcall ExpHwidSysVolIfGetDiskInfo(__int64 a1, unsigned int a2)
{
  int DeviceProperties; // ebx
  PVOID PoolWithTag; // rsi
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v8[4]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int NumberOfBytes[5]; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v10; // [rsp+60h] [rbp-A0h] BYREF
  int v11; // [rsp+68h] [rbp-98h]
  _DWORD v12[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v13[32]; // [rsp+90h] [rbp-70h] BYREF
  __int16 v14; // [rsp+B0h] [rbp-50h]
  char v15; // [rsp+B2h] [rbp-4Eh]
  int v16; // [rsp+B4h] [rbp-4Ch]
  wchar_t pszDest[264]; // [rsp+F0h] [rbp-10h] BYREF

  Object = 0LL;
  sub_140560F40(v13);
  DeviceProperties = RtlStringCchPrintfW(pszDest, 0x104uLL, L"\\??\\PhysicalDrive%u", a2);
  if ( DeviceProperties >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&NumberOfBytes[1], pszDest);
    v10 = 0LL;
    v11 = 0;
    DeviceProperties = ExpHwidSendSynchronousIrpToDevice(&NumberOfBytes[1], 2954240LL, &v10, 12LL, v8, 8, 0LL, 0LL);
    if ( DeviceProperties >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20534C53u);
      if ( !PoolWithTag )
      {
        DeviceProperties = -1073741670;
        goto LABEL_13;
      }
      DeviceProperties = ExpHwidSendSynchronousIrpToDevice(
                           &NumberOfBytes[1],
                           2954240LL,
                           &v10,
                           12LL,
                           PoolWithTag,
                           NumberOfBytes[0],
                           0LL,
                           &Object);
      if ( DeviceProperties < 0 )
        goto LABEL_10;
      if ( !Object )
      {
LABEL_12:
        ExFreePoolWithTag(PoolWithTag, 0);
        goto LABEL_13;
      }
      if ( !*(_BYTE *)(a1 + 12) )
      {
        memset(v12, 0, sizeof(v12));
        LOBYTE(v12[1]) = 2;
        *(_OWORD *)&v12[3] = SL_HWID_IF_GUID_SYSTEM_VOLUME;
        DeviceProperties = ExpHwidGetDeviceProperties((PDEVICE_OBJECT)Object, (__int64)v13);
        if ( DeviceProperties < 0 )
          goto LABEL_10;
        HIWORD(v12[1]) = v14;
        BYTE1(v12[1]) = v15;
        v12[2] = v16;
      }
      DeviceProperties = ExpHwidAppendDeviceInfoBlock(a1, (__int64)v12, PoolWithTag, NumberOfBytes[0]);
LABEL_10:
      if ( Object )
        ObfDereferenceObject(Object);
      goto LABEL_12;
    }
  }
LABEL_13:
  sub_140560ECC(v13);
  return (unsigned int)DeviceProperties;
}
