/*
 * XREFs of Controller_RetrievePciData @ 0x1C00555F4
 * Callers:
 *     Controller_Create @ 0x1C0052A48 (Controller_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Controller_PopulatePciDeviceInformation @ 0x1C0054FA4 (Controller_PopulatePciDeviceInformation.c)
 */

__int64 __fastcall Controller_RetrievePciData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  unsigned __int16 v11; // r14
  unsigned int v12; // esi
  int v13; // eax
  int v14; // eax
  int v16; // [rsp+20h] [rbp-E0h]
  __int64 v17; // [rsp+28h] [rbp-D8h]
  __int64 v18; // [rsp+28h] [rbp-D8h]
  __int64 v19; // [rsp+28h] [rbp-D8h]
  _BYTE v20[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v23[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v24[128]; // [rsp+90h] [rbp-70h] BYREF

  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, int *, _BYTE *))(WdfFunctions_01023
                                                                                                 + 648))(
         WdfDriverGlobals,
         a1,
         14LL,
         4LL,
         &v22,
         v20);
  if ( v8 < 0 )
  {
    LODWORD(v17) = v8;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x82u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v17);
  }
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, unsigned int *, _BYTE *))(WdfFunctions_01023 + 648))(
         WdfDriverGlobals,
         a1,
         16LL,
         4LL,
         &v21,
         v20);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = v21;
    LOWORD(v18) = 1;
    v12 = HIWORD(v21);
    LOWORD(v16) = 64;
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, _QWORD *, int, _DWORD, _QWORD))(WdfFunctions_01023 + 1048))(
            WdfDriverGlobals,
            a1,
            &GUID_BUS_INTERFACE_STANDARD,
            v23,
            v16,
            v18,
            0LL);
    v10 = v13;
    if ( v13 >= 0 )
    {
      memset(v24, 0, sizeof(v24));
      v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int16 *, _QWORD, int))v23[7])(
              v23[1],
              0LL,
              v24,
              0LL,
              256);
      if ( v14 == 256 )
      {
        Controller_PopulatePciDeviceInformation(a2, v22, v12, v11, v23, v24, a3, a4);
      }
      else
      {
        v10 = -1073741823;
        LODWORD(v19) = v14;
        WPP_RECORDER_SF_d(a2, 2u, 4u, 0x85u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v19);
      }
    }
    else
    {
      LODWORD(v19) = v13;
      WPP_RECORDER_SF_d(a2, 2u, 4u, 0x84u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v19);
    }
  }
  else
  {
    LODWORD(v18) = v9;
    WPP_RECORDER_SF_d(a2, 2u, 4u, 0x83u, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, v18);
  }
  return v10;
}
