/*
 * XREFs of IoIs32bitProcess @ 0x14006E540
 * Callers:
 *     IoIsInitiator32bitProcess @ 0x140144B10 (IoIsInitiator32bitProcess.c)
 *     FsRtlGetMarkHandleInfo @ 0x1402252F8 (FsRtlGetMarkHandleInfo.c)
 *     EtwpGetScsiPassThroughCdb @ 0x1402AFA4C (EtwpGetScsiPassThroughCdb.c)
 *     PiCMFastIoDeviceDispatch @ 0x14050A510 (PiCMFastIoDeviceDispatch.c)
 *     PiDqDispatch @ 0x14050B510 (PiDqDispatch.c)
 *     WmipIoControl @ 0x14051ACC0 (WmipIoControl.c)
 *     WmipProbeWmiOpenGuidBlock @ 0x14051BE28 (WmipProbeWmiOpenGuidBlock.c)
 *     WmipProbeAndCaptureGuidObjectAttributes @ 0x14051BEE0 (WmipProbeAndCaptureGuidObjectAttributes.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIs32bitProcess(PIRP Irp)
{
  PETHREAD Thread; // rdx
  unsigned __int64 Process; // rax
  __int64 v3; // rcx
  unsigned __int64 v5; // rax
  __int16 v6; // cx
  CCHAR ApcEnvironment; // al
  __int16 v8; // dx

  if ( Irp )
  {
    if ( Irp->RequestorMode == 1 )
    {
      Thread = Irp->Tail.Overlay.Thread;
      if ( (Irp->Flags & 0x2000) != 0 )
      {
        Process = Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
      }
      else
      {
        if ( !Thread )
          return 0;
        ApcEnvironment = Irp->ApcEnvironment;
        if ( ApcEnvironment )
        {
          if ( ApcEnvironment != 1 )
            return 0;
          Process = (unsigned __int64)Thread->ApcState.Process;
        }
        else
        {
          Process = (unsigned __int64)Thread->Process;
        }
      }
      if ( Process )
      {
        v3 = *(_QWORD *)(Process + 1064);
        if ( v3 )
        {
          v8 = *(_WORD *)(v3 + 8);
          if ( v8 == 332 || v8 == 452 )
            return 1;
        }
      }
    }
    return 0;
  }
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return 0;
  v5 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
  if ( !v5 )
    return 0;
  v6 = *(_WORD *)(v5 + 8);
  if ( v6 == 332 )
    return 1;
  return v6 == 452;
}
