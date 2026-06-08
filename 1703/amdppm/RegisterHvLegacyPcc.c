/*
 * XREFs of RegisterHvLegacyPcc @ 0x1C002AE00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     ResetEnumerationContext @ 0x1C0008EC0 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0008EDC (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000C3C0 (memset.c)
 *     GetPerfDomain @ 0x1C0021708 (GetPerfDomain.c)
 */

__int64 __fastcall RegisterHvLegacyPcc(_QWORD *a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  char v4; // r12
  __int64 v5; // r15
  __int64 v6; // r8
  unsigned int PerfDomain; // r11d
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // edi
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-81h]
  _QWORD v16[2]; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v17[4]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v18[4]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v19[10]; // [rsp+88h] [rbp-29h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  memset(v19, 0, 0x48uLL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v18, v16);
  if ( LODWORD(v16[0]) == 253 )
  {
    v8 = 1LL;
  }
  else
  {
    v8 = 0LL;
    if ( LODWORD(v16[0]) == 254 )
      v8 = 2LL;
  }
  v9 = 0LL;
  v10 = -1073741823;
  v16[0] = qword_1C0011850;
  if ( (unsigned __int8)qword_1C0011850 <= 1u )
  {
    v3 = qword_1C0011848;
    v5 = qword_1C0011840;
    if ( (_BYTE)qword_1C0011850 == 1 )
    {
      v11 = v16[0];
      v6 = v16[0] >> 8;
      if ( BYTE1(v16[0]) )
      {
        v16[0] = 0x20000000000000LL;
        LOWORD(v16[0]) = WORD2(v11);
        switch ( BYTE3(v11) )
        {
          case 8:
            WORD1(v16[0]) = 0;
            break;
          case 0x10:
            WORD1(v16[0]) = 1;
            break;
          case 0x20:
            WORD1(v16[0]) = 2;
            break;
        }
        v4 = BYTE2(v11);
        v10 = 0;
        v2 = ((1LL << SBYTE3(v11)) - 1) & ~(((1LL << v6) - 1) << SBYTE2(v11));
        v9 = v16[0];
      }
    }
    else if ( !(_BYTE)qword_1C0011850 )
    {
      v10 = -1073741823;
    }
  }
  if ( v10 >= 0 )
  {
    v12 = dword_1C0011800;
    v19[2] = qword_1C0011830;
    LODWORD(v19[3]) = dword_1C0011838;
    v19[6] = v5 << v4;
    v19[5] = v3 << v4;
    LODWORD(v19[0]) = 0;
    HIDWORD(v19[0]) = dword_1C0011800;
    v19[1] = __PAIR64__(v8, PerfDomain);
    v19[4] = v9;
    v19[7] = v2;
    memset(v17, 0, sizeof(v17));
    LODWORD(v17[0]) = 49;
    ResetEnumerationContext(v18);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v18, v16) )
    {
      do
      {
        v19[8] = **(_QWORD **)(v16[0] + 552LL);
        HIDWORD(v17[0]) = *(_DWORD *)(v16[0] + 48LL);
        v17[3] = v19;
        if ( qword_1C0011648 )
          v13 = qword_1C0011648(v17);
        else
          v13 = -1073741822;
        if ( v13 < 0 )
        {
          v10 = v13;
          LODWORD(v15) = v13;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0xEu,
            (__int64)&WPP_93c8768e51413de8ba4a3bd139efa878_Traceguids,
            v15);
        }
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v18, v16) );
      v12 = dword_1C0011800;
    }
    dword_1C0011800 = v12 + 1;
    if ( v10 < 0 )
    {
      LODWORD(v19[0]) = 1;
      v17[3] = v19;
      ResetEnumerationContext(v18);
      while ( !(unsigned int)EnumerateNextDevice((__int64)v18, v16) )
      {
        HIDWORD(v17[0]) = *(_DWORD *)(v16[0] + 48LL);
        if ( qword_1C0011648 )
          qword_1C0011648(v17);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    qword_1C00113E8,
    v6,
    v8);
  return (unsigned int)v10;
}
