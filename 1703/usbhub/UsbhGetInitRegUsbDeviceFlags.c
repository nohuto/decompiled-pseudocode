/*
 * XREFs of UsbhGetInitRegUsbDeviceFlags @ 0x1C001C850
 * Callers:
 *     UsbhSetupDevice @ 0x1C0021D38 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C00285B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00289C0 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003BD8C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C00454FC (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004D47C (WPP_RECORDER_SF_DDD.c)
 */

void __fastcall UsbhGetInitRegUsbDeviceFlags(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rbx
  _OWORD *PoolWithTag; // rax
  _OWORD *v5; // rdi
  unsigned int v6; // r8d
  unsigned int v7; // edx
  unsigned int v8; // r9d
  __int64 v9; // rcx
  wchar_t **v10; // rbx
  PVOID SystemRoutineAddress; // rax
  int v12; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  __int64 (__fastcall *v14)(int, int, int, int, __int64, __int64); // [rsp+58h] [rbp-29h] BYREF
  int v15; // [rsp+60h] [rbp-21h]
  wchar_t *v16; // [rsp+68h] [rbp-19h]
  wchar_t **v17; // [rsp+70h] [rbp-11h]
  int v18; // [rsp+78h] [rbp-9h]
  __int64 v19; // [rsp+80h] [rbp-1h]
  int v20; // [rsp+88h] [rbp+7h]
  __int64 v21; // [rsp+90h] [rbp+Fh]
  int v22; // [rsp+98h] [rbp+17h]
  __int64 v23; // [rsp+A0h] [rbp+1Fh]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      75,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids);
  v3 = (unsigned __int16 *)PdoExt(a2);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2CuLL, 0x42554855u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x2CuLL);
    *v5 = *(_OWORD *)"u\x00s\x00b\x00f\x00l\x00a\x00g\x00s\x00\\\x00v\x00v\x00v\x00v\x00p\x00p\x00p\x00p\x00r\x00r\x00r\x00r";
    v5[1] = *(_OWORD *)"\\\x00v\x00v\x00v\x00v\x00p\x00p\x00p\x00p\x00r\x00r\x00r\x00r";
    *((_QWORD *)v5 + 4) = *(_QWORD *)"p\x00r\x00r\x00r\x00r";
    *((_DWORD *)v5 + 10) = *(_DWORD *)"r";
    v6 = v3[700];
    v7 = v3[701];
    v8 = v3[702];
    v9 = v3[700] & 0xF;
    *((_WORD *)v5 + 9) = (unsigned __int8)Nibble[(unsigned __int64)v3[700] >> 12];
    *((_WORD *)v5 + 10) = (unsigned __int8)Nibble[(v6 >> 8) & 0xF];
    *((_WORD *)v5 + 11) = (unsigned __int8)Nibble[(unsigned __int8)v6 >> 4];
    *((_WORD *)v5 + 12) = (unsigned __int8)Nibble[v9];
    *((_WORD *)v5 + 13) = (unsigned __int8)Nibble[(unsigned __int64)v7 >> 12];
    *((_WORD *)v5 + 14) = (unsigned __int8)Nibble[(v7 >> 8) & 0xF];
    *((_WORD *)v5 + 15) = (unsigned __int8)Nibble[(unsigned __int8)v7 >> 4];
    *((_WORD *)v5 + 16) = (unsigned __int8)Nibble[v7 & 0xF];
    *((_WORD *)v5 + 17) = (unsigned __int8)Nibble[(unsigned __int64)v8 >> 12];
    *((_WORD *)v5 + 18) = (unsigned __int8)Nibble[(v8 >> 8) & 0xF];
    *((_WORD *)v5 + 19) = (unsigned __int8)Nibble[(unsigned __int8)v8 >> 4];
    *((_WORD *)v5 + 20) = (unsigned __int8)Nibble[v8 & 0xF];
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_DDD(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned __int16)v7,
        (unsigned __int16)v6,
        76,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        v6,
        v7,
        v8);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_S(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v12,
          77,
          (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
          (__int64)v5);
    }
    v10 = &GlobalInitDeviceValues;
    if ( GlobalInitDeviceValues )
    {
      do
      {
        v15 = 0;
        v14 = UsbhQueryGlobalDeviceValue;
        v16 = *v10;
        v18 = *((_DWORD *)v10 + 2);
        v17 = v10;
        v19 = 0LL;
        v20 = 0;
        v21 = 0LL;
        v22 = 0;
        v23 = 0LL;
        RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
        SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
        if ( !SystemRoutineAddress )
          SystemRoutineAddress = RtlQueryRegistryValues;
        ((void (__fastcall *)(__int64, _OWORD *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))SystemRoutineAddress)(
          2LL,
          v5,
          &v14,
          a2,
          0LL);
        v10 += 3;
      }
      while ( *v10 );
    }
    ExFreePoolWithTag(v5, 0);
  }
}
