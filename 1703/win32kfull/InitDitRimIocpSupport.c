/*
 * XREFs of InitDitRimIocpSupport @ 0x1C01A0494
 * Callers:
 *     DitTakeOver @ 0x1C010989C (DitTakeOver.c)
 * Callees:
 *     CleanupDitRimIocpSupport @ 0x1C0109940 (CleanupDitRimIocpSupport.c)
 */

__int64 InitDitRimIocpSupport()
{
  int v0; // ebx
  PRKEVENT v1; // rcx
  PRKEVENT v2; // rcx
  PRKEVENT v3; // rcx
  PRKEVENT v4; // rcx
  PRKEVENT v5; // rcx
  PRKEVENT v6; // rcx
  PRKEVENT v7; // rcx

  v0 = 0;
  if ( (gdwMitConfig & 4) != 0 )
  {
    return (unsigned int)CBaseInput::RegisterDispatcherObject(gpHidInput, gpIOCPDispatcher);
  }
  else if ( ghDITIocp )
  {
    aDeviceTemplate[157] = (PRKEVENT)CreateKernelIocpWcp();
    v1 = aDeviceTemplate[157];
    if ( v1 )
    {
      v0 = AssociateKernelIocpWcp(
             v1,
             ghDITIocp,
             aDeviceTemplate[155],
             aDeviceTemplate[157],
             1LL,
             0,
             &aDeviceTemplate[158]);
      if ( v0 < 0 )
        goto LABEL_18;
    }
    aDeviceTemplate[162] = (PRKEVENT)CreateKernelIocpWcp();
    v2 = aDeviceTemplate[162];
    if ( v2 )
    {
      v0 = AssociateKernelIocpWcp(
             v2,
             ghDITIocp,
             aDeviceTemplate[160],
             aDeviceTemplate[162],
             1LL,
             0,
             &aDeviceTemplate[163]);
      if ( v0 < 0 )
        goto LABEL_18;
    }
    aDeviceTemplate[167] = (PRKEVENT)CreateKernelIocpWcp();
    v3 = aDeviceTemplate[167];
    if ( v3 )
    {
      v0 = AssociateKernelIocpWcp(
             v3,
             ghDITIocp,
             aDeviceTemplate[165],
             aDeviceTemplate[167],
             1LL,
             0,
             &aDeviceTemplate[168]);
      if ( v0 < 0 )
        goto LABEL_18;
    }
    aDeviceTemplate[172] = (PRKEVENT)CreateKernelIocpWcp();
    v4 = aDeviceTemplate[172];
    if ( v4 )
    {
      v0 = AssociateKernelIocpWcp(
             v4,
             ghDITIocp,
             aDeviceTemplate[170],
             aDeviceTemplate[172],
             1LL,
             0,
             &aDeviceTemplate[173]);
      if ( v0 < 0 )
        goto LABEL_18;
    }
    aDeviceTemplate[180] = (PRKEVENT)CreateKernelIocpWcp();
    v5 = aDeviceTemplate[180];
    if ( v5 )
    {
      v0 = AssociateKernelIocpWcp(
             v5,
             ghDITIocp,
             aDeviceTemplate[178],
             aDeviceTemplate[180],
             1LL,
             0,
             &aDeviceTemplate[181]);
      if ( v0 < 0 )
        goto LABEL_18;
    }
    if ( (aDeviceTemplate[186] = (PRKEVENT)CreateKernelIocpWcp(), (v6 = aDeviceTemplate[186]) != 0LL)
      && (v0 = AssociateKernelIocpWcp(
                 v6,
                 ghDITIocp,
                 aDeviceTemplate[184],
                 aDeviceTemplate[186],
                 1LL,
                 0,
                 &aDeviceTemplate[187]),
          v0 < 0)
      || (aDeviceTemplate[192] = (PRKEVENT)CreateKernelIocpWcp(), (v7 = aDeviceTemplate[192]) != 0LL)
      && (v0 = AssociateKernelIocpWcp(
                 v7,
                 ghDITIocp,
                 aDeviceTemplate[190],
                 aDeviceTemplate[192],
                 1LL,
                 0,
                 &aDeviceTemplate[193]),
          v0 < 0) )
    {
LABEL_18:
      CleanupDitRimIocpSupport();
    }
  }
  return (unsigned int)v0;
}
