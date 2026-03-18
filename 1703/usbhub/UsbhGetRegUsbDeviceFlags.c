/*
 * XREFs of UsbhGetRegUsbDeviceFlags @ 0x1C001C5C0
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C001F8A8 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C001F530 (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C00454FC (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004D47C (WPP_RECORDER_SF_DDD.c)
 */

PVOID __fastcall UsbhGetRegUsbDeviceFlags(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rbx
  __int64 v4; // rcx
  PVOID result; // rax
  __int64 v6; // rdi
  unsigned int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // r9d
  __int64 v10; // rcx
  wchar_t **v11; // rbx
  void (__fastcall *SystemRoutineAddress)(__int64, __int64, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD); // rax
  int v13; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  __int64 (__fastcall *v15)(int, int, int, int, __int64, __int64); // [rsp+50h] [rbp-78h] BYREF
  int v16; // [rsp+58h] [rbp-70h]
  wchar_t *v17; // [rsp+60h] [rbp-68h]
  wchar_t **v18; // [rsp+68h] [rbp-60h]
  int v19; // [rsp+70h] [rbp-58h]
  __int64 v20; // [rsp+78h] [rbp-50h]
  int v21; // [rsp+80h] [rbp-48h]
  __int64 v22; // [rsp+88h] [rbp-40h]
  int v23; // [rsp+90h] [rbp-38h]
  __int64 v24; // [rsp+98h] [rbp-30h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      78,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids);
  v3 = (unsigned __int16 *)PdoExt(a2);
  UsbhRegQueryGlobalLegacyDeviceKeys(v4, a2);
  result = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2CuLL, 0x42554855u);
  v6 = (__int64)result;
  if ( result )
  {
    memset(result, 0, 0x2CuLL);
    *(_OWORD *)v6 = *(_OWORD *)"u\x00s\x00b\x00f\x00l\x00a\x00g\x00s\x00\\\x00v\x00v\x00v\x00v\x00p\x00p\x00p\x00p\x00r\x00r\x00r\x00r";
    *(_OWORD *)(v6 + 16) = *(_OWORD *)"\\\x00v\x00v\x00v\x00v\x00p\x00p\x00p\x00p\x00r\x00r\x00r\x00r";
    *(_QWORD *)(v6 + 32) = *(_QWORD *)"p\x00r\x00r\x00r\x00r";
    *(_DWORD *)(v6 + 40) = *(_DWORD *)"r";
    v7 = v3[700];
    v8 = v3[701];
    v9 = v3[702];
    v10 = v3[700] & 0xF;
    *(_WORD *)(v6 + 18) = (unsigned __int8)Nibble[(unsigned __int64)v3[700] >> 12];
    *(_WORD *)(v6 + 20) = (unsigned __int8)Nibble[(v7 >> 8) & 0xF];
    *(_WORD *)(v6 + 22) = (unsigned __int8)Nibble[(unsigned __int8)v7 >> 4];
    *(_WORD *)(v6 + 24) = (unsigned __int8)Nibble[v10];
    *(_WORD *)(v6 + 26) = (unsigned __int8)Nibble[(unsigned __int64)v8 >> 12];
    *(_WORD *)(v6 + 28) = (unsigned __int8)Nibble[(v8 >> 8) & 0xF];
    *(_WORD *)(v6 + 30) = (unsigned __int8)Nibble[(unsigned __int8)v8 >> 4];
    *(_WORD *)(v6 + 32) = (unsigned __int8)Nibble[v8 & 0xF];
    *(_WORD *)(v6 + 34) = (unsigned __int8)Nibble[(unsigned __int64)v9 >> 12];
    *(_WORD *)(v6 + 36) = (unsigned __int8)Nibble[(v9 >> 8) & 0xF];
    *(_WORD *)(v6 + 38) = (unsigned __int8)Nibble[(unsigned __int8)v9 >> 4];
    *(_WORD *)(v6 + 40) = (unsigned __int8)Nibble[v9 & 0xF];
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_DDD(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned __int16)v8,
        (unsigned __int16)v7,
        79,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        v7,
        v8,
        v9);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v13,
          80,
          (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
          v6);
    }
    v11 = &GlobalDeviceValues;
    if ( GlobalDeviceValues )
    {
      do
      {
        v17 = *v11;
        v19 = *((_DWORD *)v11 + 2);
        v15 = UsbhQueryGlobalDeviceValue;
        v16 = 0;
        v18 = v11;
        v20 = 0LL;
        v21 = 0;
        v22 = 0LL;
        v23 = 0;
        v24 = 0LL;
        RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
        SystemRoutineAddress = (void (__fastcall *)(__int64, __int64, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
        if ( !SystemRoutineAddress )
          SystemRoutineAddress = (void (__fastcall *)(__int64, __int64, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
        SystemRoutineAddress(2LL, v6, &v15, a2, 0LL);
        v11 += 3;
      }
      while ( *v11 );
    }
    return (PVOID)v6;
  }
  return result;
}
