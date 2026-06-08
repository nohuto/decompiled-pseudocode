/*
 * XREFs of RegisterHvLegacyPcc @ 0x1C0027D30
 * Callers:
 *     <none>
 * Callees:
 *     ResetEnumerationContext @ 0x1C0001CAC (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0002918 (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     GetPerfDomain @ 0x1C001AC04 (GetPerfDomain.c)
 *     DecodeDoorbellAddressIo @ 0x1C00287F0 (DecodeDoorbellAddressIo.c)
 */

__int64 __fastcall RegisterHvLegacyPcc(_QWORD *a1)
{
  __int64 v1; // r12
  char v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  unsigned int PerfDomain; // edx
  int v7; // esi
  __int64 v8; // rax
  int v9; // ebx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-A1h]
  __int64 v15; // [rsp+38h] [rbp-99h] BYREF
  __int64 v16; // [rsp+40h] [rbp-91h] BYREF
  __int64 v17; // [rsp+48h] [rbp-89h] BYREF
  __int64 v18; // [rsp+50h] [rbp-81h] BYREF
  __int64 v19; // [rsp+58h] [rbp-79h] BYREF
  int v20; // [rsp+60h] [rbp-71h]
  _QWORD v21[4]; // [rsp+68h] [rbp-69h] BYREF
  __int64 v22[4]; // [rsp+88h] [rbp-49h] BYREF
  _QWORD v23[10]; // [rsp+A8h] [rbp-29h] BYREF

  v1 = 0LL;
  v3 = 0;
  v18 = 0LL;
  LODWORD(v17) = 0;
  v4 = 0LL;
  v5 = 0LL;
  memset(v23, 0, 0x48uLL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0015D98,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v22, &v16);
  LODWORD(v15) = PerfDomain;
  if ( (_DWORD)v16 == 253 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    if ( (_DWORD)v16 == 254 )
      v7 = 2;
  }
  v8 = 0LL;
  v9 = -1073741823;
  v19 = qword_1C0016200;
  v20 = dword_1C0016208;
  if ( (unsigned __int8)qword_1C0016200 <= 1u )
  {
    v4 = qword_1C00161F8;
    v5 = qword_1C00161F0;
    v16 = 0LL;
    if ( (_BYTE)qword_1C0016200 == 1 )
    {
      v10 = DecodeDoorbellAddressIo(&v19, &v16, &v18, &v17);
      v1 = v18;
      v9 = v10;
      v8 = v16;
      v3 = v17;
      PerfDomain = v15;
    }
    else if ( !(_BYTE)qword_1C0016200 )
    {
      v9 = -1073741823;
    }
  }
  if ( v9 >= 0 )
  {
    v11 = dword_1C00161B0;
    LODWORD(v23[0]) = 0;
    v23[2] = qword_1C00161E0;
    LODWORD(v23[3]) = dword_1C00161E8;
    v23[1] = __PAIR64__(v7, PerfDomain);
    v23[6] = v5 << v3;
    v23[5] = v4 << v3;
    HIDWORD(v23[0]) = dword_1C00161B0;
    v23[4] = v8;
    v23[7] = v1;
    memset(v21, 0, sizeof(v21));
    LODWORD(v21[0]) = 49;
    ResetEnumerationContext(v22);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v22, &v15) )
    {
      do
      {
        v23[8] = **(_QWORD **)(v15 + 552);
        HIDWORD(v21[0]) = *(_DWORD *)(v15 + 48);
        v21[3] = v23;
        if ( qword_1C0015FF8 )
          v12 = qword_1C0015FF8(v21);
        else
          v12 = -1073741822;
        if ( v12 < 0 )
        {
          v9 = v12;
          LODWORD(v14) = v12;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            3u,
            0xEu,
            (__int64)&WPP_93c8768e51413de8ba4a3bd139efa878_Traceguids,
            v14);
        }
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v22, &v15) );
      v11 = dword_1C00161B0;
    }
    dword_1C00161B0 = v11 + 1;
    if ( v9 < 0 )
    {
      LODWORD(v23[0]) = 1;
      v21[3] = v23;
      ResetEnumerationContext(v22);
      while ( !(unsigned int)EnumerateNextDevice((__int64)v22, &v15) )
      {
        HIDWORD(v21[0]) = *(_DWORD *)(v15 + 48);
        if ( qword_1C0015FF8 )
          qword_1C0015FF8(v21);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C0015D98);
  return (unsigned int)v9;
}
