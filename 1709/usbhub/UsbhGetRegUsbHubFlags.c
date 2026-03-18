/*
 * XREFs of UsbhGetRegUsbHubFlags @ 0x1C0021E70
 * Callers:
 *     UsbhCheckHubErrata @ 0x1C002067C (UsbhCheckHubErrata.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00294E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029840 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D10C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C0050FFC (WPP_RECORDER_SF_DDD.c)
 */

void __fastcall UsbhGetRegUsbHubFlags(unsigned __int16 *a1)
{
  _OWORD *PoolWithTag; // rax
  _OWORD *v3; // rdi
  unsigned int v4; // r8d
  unsigned int v5; // edx
  unsigned int v6; // r9d
  __int64 v7; // rcx
  wchar_t **v8; // rbx
  PVOID SystemRoutineAddress; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  __int64 (__fastcall *v11)(__int64, int, __int64, unsigned int, __int64, __int64); // [rsp+50h] [rbp-78h] BYREF
  int v12; // [rsp+58h] [rbp-70h]
  wchar_t *v13; // [rsp+60h] [rbp-68h]
  wchar_t **v14; // [rsp+68h] [rbp-60h]
  int v15; // [rsp+70h] [rbp-58h]
  __int64 v16; // [rsp+78h] [rbp-50h]
  int v17; // [rsp+80h] [rbp-48h]
  __int64 v18; // [rsp+88h] [rbp-40h]
  int v19; // [rsp+90h] [rbp-38h]
  __int64 v20; // [rsp+98h] [rbp-30h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      81,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x2CuLL, 0x42554855u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x2CuLL);
    *v3 = *(_OWORD *)"u\x00s\x00b\x00f\x00l\x00a\x00g\x00s\x00\\\x00v\x00v\x00v\x00v\x00p\x00p\x00p\x00p\x00r\x00r\x00r\x00r";
    v3[1] = *(_OWORD *)"\\\x00v\x00v\x00v\x00v\x00p\x00p\x00p\x00p\x00r\x00r\x00r\x00r";
    *((_QWORD *)v3 + 4) = *(_QWORD *)"p\x00r\x00r\x00r\x00r";
    *((_DWORD *)v3 + 10) = *(_DWORD *)"r";
    v4 = a1[1274];
    v5 = a1[1275];
    v6 = a1[1276];
    v7 = a1[1274] & 0xF;
    *((_WORD *)v3 + 9) = (unsigned __int8)Nibble[(unsigned __int64)a1[1274] >> 12];
    *((_WORD *)v3 + 10) = (unsigned __int8)Nibble[(v4 >> 8) & 0xF];
    *((_WORD *)v3 + 11) = (unsigned __int8)Nibble[(unsigned __int8)v4 >> 4];
    *((_WORD *)v3 + 12) = (unsigned __int8)Nibble[v7];
    *((_WORD *)v3 + 13) = (unsigned __int8)Nibble[(unsigned __int64)v5 >> 12];
    *((_WORD *)v3 + 14) = (unsigned __int8)Nibble[(v5 >> 8) & 0xF];
    *((_WORD *)v3 + 15) = (unsigned __int8)Nibble[(unsigned __int8)v5 >> 4];
    *((_WORD *)v3 + 16) = (unsigned __int8)Nibble[v5 & 0xF];
    *((_WORD *)v3 + 17) = (unsigned __int8)Nibble[(unsigned __int64)v6 >> 12];
    *((_WORD *)v3 + 18) = (unsigned __int8)Nibble[(v6 >> 8) & 0xF];
    *((_WORD *)v3 + 19) = (unsigned __int8)Nibble[(unsigned __int8)v6 >> 4];
    *((_WORD *)v3 + 20) = (unsigned __int8)Nibble[v6 & 0xF];
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_DDD(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned __int16)v5,
        (unsigned __int16)v4,
        82,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        v4,
        v5,
        v6);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v4,
        83,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        (__int64)v3);
    v8 = &GlobalHubValues;
    if ( GlobalHubValues )
    {
      do
      {
        v13 = *v8;
        v15 = *((_DWORD *)v8 + 2);
        v11 = UsbhQueryGlobalDeviceValue;
        v12 = 0;
        v14 = v8;
        v16 = 0LL;
        v17 = 0;
        v18 = 0LL;
        v19 = 0;
        v20 = 0LL;
        RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
        SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
        if ( !SystemRoutineAddress )
          SystemRoutineAddress = RtlQueryRegistryValues;
        ((void (__fastcall *)(__int64, _OWORD *, __int64 (__fastcall **)(__int64, int, __int64, unsigned int, __int64, __int64), unsigned __int16 *, _QWORD))SystemRoutineAddress)(
          2LL,
          v3,
          &v11,
          a1,
          0LL);
        v8 += 3;
      }
      while ( *v8 );
    }
    ExFreePoolWithTag(v3, 0);
  }
}
