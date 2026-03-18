/*
 * XREFs of ACPIReserveDependencies @ 0x1C00450A0
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C0008D68 (ACPIAddInitializationDependencies.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C002A314 (ACPIConvertDependenciesToPnpReservations.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C00226DC (ACPIAmliBuildObjectPathnameUnicode.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0045578 (WPP_RECORDER_SF_sL.c)
 */

__int64 __fastcall ACPIReserveDependencies(__int64 a1, volatile signed __int32 *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  int v6; // edx
  __int64 v8; // [rsp+40h] [rbp-18h] BYREF
  PVOID P; // [rsp+48h] [rbp-10h]

  v8 = 0LL;
  P = 0LL;
  v4 = ACPIAmliBuildObjectPathnameUnicode((__int64)a2, (__int64)&v8, 3);
  AMLIDereferenceHandleEx(a2, v5);
  if ( v4 >= 0 )
    v4 = IoReserveDependency(a1, &v8, 1LL);
  else
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      21,
      20,
      (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
      (__int64)P,
      v4);
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  return (unsigned int)v4;
}
