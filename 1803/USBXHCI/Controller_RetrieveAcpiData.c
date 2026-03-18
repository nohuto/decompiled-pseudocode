/*
 * XREFs of Controller_RetrieveAcpiData @ 0x1C00553D4
 * Callers:
 *     Controller_Create @ 0x1C0052A48 (Controller_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Controller_PopulateAcpiDeviceInformation @ 0x1C005451C (Controller_PopulateAcpiDeviceInformation.c)
 */

__int64 __fastcall Controller_RetrieveAcpiData(__int64 a1, __int64 a2, char *a3)
{
  __int64 v6; // r12
  unsigned int v7; // eax
  unsigned int v8; // edi
  size_t v9; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v11; // rbx
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-41h]
  __int64 v15; // [rsp+28h] [rbp-41h]
  __int64 v16; // [rsp+50h] [rbp-19h] BYREF
  _WORD *v17; // [rsp+58h] [rbp-11h]
  __int64 v18; // [rsp+60h] [rbp-9h]
  _WORD v19[16]; // [rsp+68h] [rbp-1h] BYREF

  memset(v19, 0, sizeof(v19));
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 336))(WdfDriverGlobals, a1);
  v16 = 1LL;
  v17 = v19;
  v18 = 32LL;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1488))(
         WdfDriverGlobals,
         v6,
         0LL,
         3325992LL,
         0LL,
         &v16,
         0LL,
         0LL);
  v8 = v7;
  if ( v7 == -2147483643 )
  {
    v9 = v19[2];
    PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v19[2], 0x49434858u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v9);
      v16 = 1LL;
      v17 = v11;
      v18 = (unsigned int)v9;
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int64 *, _QWORD, _QWORD))(WdfFunctions_01023 + 1488))(
              WdfDriverGlobals,
              v6,
              0LL,
              3325992LL,
              0LL,
              &v16,
              0LL,
              0LL);
      v8 = v12;
      if ( v12 >= 0 )
      {
        Controller_PopulateAcpiDeviceInformation(v11, a3);
      }
      else
      {
        LODWORD(v15) = v12;
        WPP_RECORDER_SF_d(a2, 2u, 4u, 0x8Bu, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v15);
      }
      if ( v11 != v19 )
        ExFreePoolWithTag(v11, 0x49434858u);
    }
    else
    {
      LODWORD(v14) = v9;
      WPP_RECORDER_SF_d(a2, 2u, 4u, 0x8Au, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v14);
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    LODWORD(v14) = v7;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x89u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v14);
  }
  return v8;
}
