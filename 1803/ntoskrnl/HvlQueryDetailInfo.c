/*
 * XREFs of HvlQueryDetailInfo @ 0x140717888
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x1401722C0 (HviGetHypervisorFeatures.c)
 *     HviGetHypervisorInterface @ 0x140172340 (HviGetHypervisorInterface.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     HviGetEnlightenmentInformation @ 0x1402C0B60 (HviGetEnlightenmentInformation.c)
 *     HviGetHardwareFeatures @ 0x1402C0BB0 (HviGetHardwareFeatures.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1402C0C20 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HviGetHypervisorVersion @ 0x1402C0C70 (HviGetHypervisorVersion.c)
 *     HviGetImplementationLimits @ 0x1402C0CC0 (HviGetImplementationLimits.c)
 */

__int64 __fastcall HvlQueryDetailInfo(_OWORD *a1, int a2, __int64 a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _OWORD v10[7]; // [rsp+30h] [rbp-88h] BYREF

  if ( a2 == 112 )
  {
    memset(v10, 0, sizeof(v10));
    HviGetHypervisorVendorAndMaxFunction(v10);
    HviGetHypervisorInterface(&v10[1]);
    HviGetHypervisorVersion(&v10[2]);
    HviGetHypervisorFeatures(&v10[3]);
    HviGetHardwareFeatures((__int64)&v10[4], v7, v8, v9);
    HviGetEnlightenmentInformation(&v10[5]);
    HviGetImplementationLimits(&v10[6]);
    result = 0LL;
    *a1 = v10[0];
    a1[1] = v10[1];
    a1[2] = v10[2];
    a1[3] = v10[3];
    a1[4] = v10[4];
    a1[5] = v10[5];
    a1[6] = v10[6];
    *a4 = 112;
  }
  else
  {
    result = 3221225712LL;
    *a4 = 0;
  }
  return result;
}
