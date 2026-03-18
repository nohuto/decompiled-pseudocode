/*
 * XREFs of PiDcUpdateDeviceContainerMembership @ 0x1405D5280
 * Callers:
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x1405D0A18 (PiProcessNewDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140188860 (_wcsicmp.c)
 *     wcscmp @ 0x14018A5F0 (wcscmp.c)
 *     _CmGetDeviceRegProp @ 0x140504CD4 (_CmGetDeviceRegProp.c)
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140509BA8 (PiPnpRtlEndOperation.c)
 *     _CmSetDeviceRegProp @ 0x1405CF5C8 (_CmSetDeviceRegProp.c)
 *     _CmAddDeviceToContainer @ 0x1405D5124 (_CmAddDeviceToContainer.c)
 *     PiDcContainerRequiresConfiguration @ 0x1405D5428 (PiDcContainerRequiresConfiguration.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1405D5544 (_CmGetDeviceContainerIdFromBase.c)
 *     PiDcResetChildDeviceContainers @ 0x140729724 (PiDcResetChildDeviceContainers.c)
 *     _CmRemoveDeviceFromContainer @ 0x1407EA6A4 (_CmRemoveDeviceFromContainer.c)
 */

__int64 __fastcall PiDcUpdateDeviceContainerMembership(const WCHAR *a1, __int64 a2, const wchar_t *a3)
{
  int DeviceRegProp; // ebx
  __int64 v7; // rax
  char v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v12[16]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Str2[40]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v14[80]; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t v15[40]; // [rsp+100h] [rbp+0h] BYREF

  P = 0LL;
  DeviceRegProp = PiPnpRtlBeginOperation((__int64 **)&P);
  if ( DeviceRegProp >= 0 )
  {
    v10 = 78;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)a1,
                      a2,
                      37,
                      (__int64)v12,
                      (__int64)Str2,
                      (__int64)&v10,
                      0);
    if ( DeviceRegProp >= 0 && wcsicmp(a3, Str2) )
    {
      DeviceRegProp = CmGetDeviceContainerIdFromBase(*(_QWORD *)&PiPnpRtlCtx, a1, Str2, v14);
      if ( DeviceRegProp < 0 )
        goto LABEL_15;
      DeviceRegProp = CmRemoveDeviceFromContainer(*(_QWORD *)&PiPnpRtlCtx, v14, Str2, a1);
      if ( DeviceRegProp < 0 )
        goto LABEL_15;
      PiDcResetChildDeviceContainers(a1, v14);
    }
    else if ( DeviceRegProp == -1073741275 )
    {
      DeviceRegProp = 0;
    }
    if ( DeviceRegProp >= 0 )
    {
      DeviceRegProp = CmGetDeviceContainerIdFromBase(*(_QWORD *)&PiPnpRtlCtx, a1, a3, v15);
      if ( DeviceRegProp >= 0 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( a3[v7] );
        DeviceRegProp = CmSetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          (__int64)a1,
                          a2,
                          0x25u,
                          1u,
                          (__int64)a3,
                          2 * (int)v7 + 2,
                          0);
        if ( DeviceRegProp >= 0 )
        {
          if ( wcscmp(L"{00000000-0000-0000-0000-000000000000}", a3) )
          {
            DeviceRegProp = CmAddDeviceToContainer(*(__int64 *)&PiPnpRtlCtx, (__int64)v15, a3, a1, &v9);
            if ( DeviceRegProp >= 0 && !v9 )
              PiDcContainerRequiresConfiguration(v15);
          }
        }
      }
    }
  }
LABEL_15:
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)DeviceRegProp;
}
