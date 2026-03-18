/*
 * XREFs of _CmGetMatchingDeviceList @ 0x1405AB350
 * Callers:
 *     _PnpDispatchDevice @ 0x140486450 (_PnpDispatchDevice.c)
 *     _CmDeleteDeviceWorker @ 0x14073B0CC (_CmDeleteDeviceWorker.c)
 *     PipMigratePnpState @ 0x140822604 (PipMigratePnpState.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405A9B98 (_CmGetMatchingDeviceListForSubkey.c)
 */

__int64 __fastcall CmGetMatchingDeviceList(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  __int64 (__fastcall *v11)(__int64 *, _QWORD, __int64, __int64, int, __int64 *); // r15
  int v12; // eax
  unsigned int MatchingDeviceListForSubkey; // ebx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v17[12]; // [rsp+40h] [rbp-61h] BYREF

  LODWORD(v17[0]) = 0;
  memset(&v17[1], 0, 0x50uLL);
  v11 = (__int64 (__fastcall *)(__int64 *, _QWORD, __int64, __int64, int, __int64 *))a1[41];
  v17[3] = a3;
  LODWORD(v17[5]) = a5;
  v17[2] = a2;
  v17[4] = a4;
  v17[6] = a6;
  LODWORD(v17[7]) = a7;
  if ( v11 )
  {
    v12 = v11(a1, 0LL, 1LL, 4LL, 1, v17);
    if ( v12 == -1073741822 )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v12 == -1073741536 )
        return LODWORD(v17[0]);
      if ( v12 )
        return (unsigned int)-1073741595;
    }
  }
  if ( LOWORD(v17[7]) )
    MatchingDeviceListForSubkey = -1073741811;
  else
    MatchingDeviceListForSubkey = CmGetMatchingDeviceListForSubkey(
                                    a1,
                                    0LL,
                                    0,
                                    v17[2],
                                    v17[3],
                                    (_WORD *)v17[4],
                                    v17[5],
                                    (unsigned int *)v17[6]);
  if ( !v11 )
    return MatchingDeviceListForSubkey;
  LODWORD(v17[0]) = MatchingDeviceListForSubkey;
  v15 = v11(a1, 0LL, 1LL, 4LL, 2, v17);
  if ( v15 == -1073741822 )
    return MatchingDeviceListForSubkey;
  if ( v15 == -1073741536 )
    return LODWORD(v17[0]);
  v16 = MatchingDeviceListForSubkey;
  if ( v15 )
    return (unsigned int)-1073741595;
  return v16;
}
