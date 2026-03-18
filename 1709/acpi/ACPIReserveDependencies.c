/*
 * XREFs of ACPIReserveDependencies @ 0x1C0044A64
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C00230C0 (ACPIAddInitializationDependencies.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C0023208 (ACPIConvertDependenciesToPnpReservations.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C002503C (ACPIAmliBuildObjectPathnameUnicode.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0044F3C (WPP_RECORDER_SF_sL.c)
 */

__int64 __fastcall ACPIReserveDependencies(__int64 a1, __int64 *a2)
{
  int v4; // edi
  int v5; // edx
  __int64 v7; // [rsp+40h] [rbp-18h] BYREF
  PVOID P; // [rsp+48h] [rbp-10h]

  v7 = 0LL;
  P = 0LL;
  v4 = ACPIAmliBuildObjectPathnameUnicode(a2, (__int64)&v7, 3);
  AMLIDereferenceHandleEx((__int64)a2);
  if ( v4 >= 0 )
    v4 = IoReserveDependency(a1, &v7, 1LL);
  else
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      21,
      20,
      (__int64)&WPP_cc96da84b6703e4a1deab6145401189a_Traceguids,
      (__int64)P,
      v4);
  if ( P )
    ExFreePoolWithTag(P, 0x53706341u);
  return (unsigned int)v4;
}
