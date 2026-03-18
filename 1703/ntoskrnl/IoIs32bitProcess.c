/*
 * XREFs of IoIs32bitProcess @ 0x14004D440
 * Callers:
 *     IoIsInitiator32bitProcess @ 0x14003B5A0 (IoIsInitiator32bitProcess.c)
 *     FsRtlGetMarkHandleInfo @ 0x1401E3718 (FsRtlGetMarkHandleInfo.c)
 *     EtwpGetScsiPassThroughCdb @ 0x14025410C (EtwpGetScsiPassThroughCdb.c)
 *     PiCMFastIoDeviceDispatch @ 0x14048A310 (PiCMFastIoDeviceDispatch.c)
 *     PiDqDispatch @ 0x1404B9020 (PiDqDispatch.c)
 *     WmipIoControl @ 0x140554B70 (WmipIoControl.c)
 *     WmipProbeWmiOpenGuidBlock @ 0x14055729C (WmipProbeWmiOpenGuidBlock.c)
 *     WmipProbeAndCaptureGuidObjectAttributes @ 0x140557354 (WmipProbeAndCaptureGuidObjectAttributes.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x14004D4E0 (IoGetRequestorProcess.c)
 */

BOOLEAN __stdcall IoIs32bitProcess(PIRP Irp)
{
  unsigned __int64 v1; // rax
  PEPROCESS RequestorProcess; // rax
  unsigned __int64 v4; // rcx
  __int16 v5; // dx
  __int16 v6; // cx

  if ( Irp )
  {
    if ( Irp->RequestorMode != 1 )
      return 0;
    RequestorProcess = IoGetRequestorProcess(Irp);
    if ( !RequestorProcess )
      return 0;
    v4 = RequestorProcess[1].ActiveProcessors.Bitmap[7];
    if ( !v4 )
      return 0;
    v5 = *(_WORD *)(v4 + 8);
    return v5 == 332 || v5 == 452;
  }
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return 0;
  v1 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( !v1 )
    return 0;
  v6 = *(_WORD *)(v1 + 8);
  if ( v6 == 332 )
    return 1;
  return v6 == 452;
}
