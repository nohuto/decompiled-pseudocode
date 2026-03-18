/*
 * XREFs of InitDitRimIocpSupport @ 0x1C01BADF4
 * Callers:
 *     DitTakeOver @ 0x1C00FDAEC (DitTakeOver.c)
 * Callees:
 *     <none>
 */

__int64 InitDitRimIocpSupport()
{
  int v0; // ebx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v0 = 0;
  if ( (gdwMitConfig & 4) != 0 )
    return (unsigned int)CBaseInput::RegisterDispatcherObject(gpHidInput, gpIOCPDispatcher);
  if ( ghDITIocp )
  {
    aDeviceTemplate[157] = CreateKernelIocpWcp();
    v2 = aDeviceTemplate[157];
    if ( !v2
      || (v0 = AssociateKernelIocpWcp(
                 v2,
                 ghDITIocp,
                 aDeviceTemplate[155],
                 aDeviceTemplate[157],
                 1LL,
                 0,
                 &aDeviceTemplate[158]),
          v0 >= 0) )
    {
      aDeviceTemplate[162] = CreateKernelIocpWcp();
      v3 = aDeviceTemplate[162];
      if ( !v3
        || (v0 = AssociateKernelIocpWcp(
                   v3,
                   ghDITIocp,
                   aDeviceTemplate[160],
                   aDeviceTemplate[162],
                   1LL,
                   0,
                   &aDeviceTemplate[163]),
            v0 >= 0) )
      {
        aDeviceTemplate[167] = CreateKernelIocpWcp();
        v4 = aDeviceTemplate[167];
        if ( !v4
          || (v0 = AssociateKernelIocpWcp(
                     v4,
                     ghDITIocp,
                     aDeviceTemplate[165],
                     aDeviceTemplate[167],
                     1LL,
                     0,
                     &aDeviceTemplate[168]),
              v0 >= 0) )
        {
          aDeviceTemplate[172] = CreateKernelIocpWcp();
          v5 = aDeviceTemplate[172];
          if ( !v5
            || (v0 = AssociateKernelIocpWcp(
                       v5,
                       ghDITIocp,
                       aDeviceTemplate[170],
                       aDeviceTemplate[172],
                       1LL,
                       0,
                       &aDeviceTemplate[173]),
                v0 >= 0) )
          {
            aDeviceTemplate[180] = CreateKernelIocpWcp();
            v6 = aDeviceTemplate[180];
            if ( !v6
              || (v0 = AssociateKernelIocpWcp(
                         v6,
                         ghDITIocp,
                         aDeviceTemplate[178],
                         aDeviceTemplate[180],
                         1LL,
                         0,
                         &aDeviceTemplate[181]),
                  v0 >= 0) )
            {
              aDeviceTemplate[186] = CreateKernelIocpWcp();
              v7 = aDeviceTemplate[186];
              if ( !v7
                || (v0 = AssociateKernelIocpWcp(
                           v7,
                           ghDITIocp,
                           aDeviceTemplate[184],
                           aDeviceTemplate[186],
                           1LL,
                           0,
                           &aDeviceTemplate[187]),
                    v0 >= 0) )
              {
                aDeviceTemplate[192] = CreateKernelIocpWcp();
                v8 = aDeviceTemplate[192];
                if ( v8 )
                  return (unsigned int)AssociateKernelIocpWcp(
                                         v8,
                                         ghDITIocp,
                                         aDeviceTemplate[190],
                                         aDeviceTemplate[192],
                                         1LL,
                                         0,
                                         &aDeviceTemplate[193]);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v0;
}
