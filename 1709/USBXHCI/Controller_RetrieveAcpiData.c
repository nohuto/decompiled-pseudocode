/*
 * XREFs of Controller_RetrieveAcpiData @ 0x1C0058448
 * Callers:
 *     Controller_Create @ 0x1C0055B84 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Controller_PopulateAcpiDeviceInformation @ 0x1C00575AC (Controller_PopulateAcpiDeviceInformation.c)
 */

__int64 __fastcall Controller_RetrieveAcpiData(__int64 a1, __int64 a2, char *a3)
{
  __int64 v6; // r12
  unsigned int v7; // eax
  unsigned int v8; // edi
  unsigned __int16 v9; // di
  size_t v10; // r14
  _WORD *PoolWithTag; // rax
  _WORD *v12; // rbx
  int v13; // eax
  __int64 v15; // [rsp+28h] [rbp-41h]
  __int64 v16; // [rsp+28h] [rbp-41h]
  __int64 v17; // [rsp+50h] [rbp-19h] BYREF
  _WORD *v18; // [rsp+58h] [rbp-11h]
  __int64 v19; // [rsp+60h] [rbp-9h]
  _WORD v20[16]; // [rsp+68h] [rbp-1h] BYREF

  memset(v20, 0, sizeof(v20));
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, a1);
  v17 = 1LL;
  v18 = v20;
  v19 = 32LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v6,
         0LL,
         3325992LL,
         0LL,
         &v17,
         0LL,
         0LL);
  v8 = v7;
  if ( v7 == -2147483643 )
  {
    v9 = v20[2];
    v10 = v20[2];
    PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v20[2], 0x49434858u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v10);
      v19 = v9;
      v17 = 1LL;
      v18 = v12;
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
              WdfDriverGlobals,
              v6,
              0LL,
              3325992LL,
              0LL,
              &v17,
              0LL,
              0LL);
      v8 = v13;
      if ( v13 >= 0 )
      {
        Controller_PopulateAcpiDeviceInformation(v12, a3);
      }
      else
      {
        LODWORD(v16) = v13;
        WPP_RECORDER_SF_d(a2, 2u, 4u, 0x8Au, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v16);
      }
      if ( v12 != v20 )
        ExFreePoolWithTag(v12, 0x49434858u);
    }
    else
    {
      LODWORD(v15) = v9;
      WPP_RECORDER_SF_d(a2, 2u, 4u, 0x89u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v15);
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    LODWORD(v15) = v7;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x88u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, v15);
  }
  return v8;
}
