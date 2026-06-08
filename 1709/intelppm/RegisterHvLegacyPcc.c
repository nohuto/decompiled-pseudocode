/*
 * XREFs of RegisterHvLegacyPcc @ 0x1C002B590
 * Callers:
 *     <none>
 * Callees:
 *     ResetEnumerationContext @ 0x1C0001864 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00024C8 (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005000 (memset.c)
 *     GetPerfDomain @ 0x1C001D43C (GetPerfDomain.c)
 *     DecodeDoorbellAddressIo @ 0x1C002C028 (DecodeDoorbellAddressIo.c)
 */

__int64 __fastcall RegisterHvLegacyPcc(__int64 a1)
{
  __int64 v1; // r15
  char v3; // r12
  __int64 v4; // rsi
  __int64 v5; // r14
  unsigned int PerfDomain; // r13d
  int v7; // edi
  __int64 v8; // rax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-A1h]
  __int64 v14; // [rsp+38h] [rbp-99h] BYREF
  __int64 v15; // [rsp+40h] [rbp-91h] BYREF
  __int64 v16; // [rsp+48h] [rbp-89h] BYREF
  __int64 v17; // [rsp+50h] [rbp-81h] BYREF
  int v18; // [rsp+58h] [rbp-79h]
  _QWORD v19[4]; // [rsp+60h] [rbp-71h] BYREF
  __int64 v20[5]; // [rsp+80h] [rbp-51h] BYREF
  _QWORD v21[10]; // [rsp+A8h] [rbp-29h] BYREF

  v1 = 0LL;
  v3 = 0;
  v16 = 0LL;
  LODWORD(v14) = 0;
  v4 = 0LL;
  v5 = 0LL;
  memset(v21, 0, 0x48uLL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00195D8,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v20, &v15);
  if ( (_DWORD)v15 == 253 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    if ( (_DWORD)v15 == 254 )
      v7 = 2;
  }
  v8 = 0LL;
  v9 = -1073741823;
  v17 = qword_1C0019A40;
  v18 = dword_1C0019A48;
  if ( (unsigned __int8)qword_1C0019A40 <= 1u )
  {
    v4 = qword_1C0019A38;
    v5 = qword_1C0019A30;
    v15 = 0LL;
    if ( (_BYTE)qword_1C0019A40 == 1 )
    {
      v10 = DecodeDoorbellAddressIo(&v17, &v15, &v16, &v14);
      v1 = v16;
      v9 = v10;
      v8 = v15;
      v3 = v14;
    }
    else if ( !(_BYTE)qword_1C0019A40 )
    {
      v9 = -1073741823;
    }
  }
  if ( v9 >= 0 )
  {
    LODWORD(v21[0]) = 0;
    HIDWORD(v21[0]) = dword_1C00199F0;
    v21[2] = qword_1C0019A20;
    LODWORD(v21[3]) = dword_1C0019A28;
    v21[6] = v5 << v3;
    v21[5] = v4 << v3;
    v21[1] = __PAIR64__(v7, PerfDomain);
    v21[4] = v8;
    v21[7] = v1;
    memset(v19, 0, sizeof(v19));
    LODWORD(v19[0]) = 52;
    ResetEnumerationContext(v20);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v20, &v14) )
    {
      v21[8] = **(_QWORD **)(v14 + 552);
      HIDWORD(v19[0]) = *(_DWORD *)(v14 + 48);
      v19[3] = v21;
      if ( qword_1C0019838 )
        v11 = qword_1C0019838(v19);
      else
        v11 = -1073741822;
      if ( v11 < 0 )
      {
        v9 = v11;
        LODWORD(v13) = v11;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xEu,
          (__int64)&WPP_93c8768e51413de8ba4a3bd139efa878_Traceguids,
          v13);
      }
    }
    ++dword_1C00199F0;
    if ( v9 < 0 )
    {
      LODWORD(v21[0]) = 1;
      v19[3] = v21;
      ResetEnumerationContext(v20);
      while ( !(unsigned int)EnumerateNextDevice((__int64)v20, &v14) )
      {
        HIDWORD(v19[0]) = *(_DWORD *)(v14 + 48);
        if ( qword_1C0019838 )
          qword_1C0019838(v19);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00195D8);
  return (unsigned int)v9;
}
