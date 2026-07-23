/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x1407111B0
 * Callers:
 *     EtwpPsProvCaptureState @ 0x140711128 (EtwpPsProvCaptureState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PsSetProcessTelemetryAppState @ 0x140498E00 (PsSetProcessTelemetryAppState.c)
 *     EtwpIsProcessZombie @ 0x1404B0690 (EtwpIsProcessZombie.c)
 *     EtwpQueryTokenPackageInfo @ 0x1404ED4D0 (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x1404ED594 (EtwpQueryProcessOtherInfo.c)
 *     PsReferencePrimaryToken @ 0x140510F80 (PsReferencePrimaryToken.c)
 *     EtwpPsProvTraceProcess @ 0x140595350 (EtwpPsProvTraceProcess.c)
 */

__int64 __fastcall EtwpPsProvProcessEnumCallback(PEPROCESS Process, _BYTE *a2)
{
  char v4; // si
  _BYTE *v5; // rdx
  ULONG_PTR v6; // rcx
  bool v7; // zf
  PACCESS_TOKEN v8; // rbp
  unsigned int v10; // [rsp+30h] [rbp-208h] BYREF
  __int64 v11; // [rsp+38h] [rbp-200h] BYREF
  $5BC46E0569261879018906DEC3127961 v12; // [rsp+40h] [rbp-1F8h] BYREF
  unsigned int PackageSize[104]; // [rsp+70h] [rbp-1C8h] BYREF

  v4 = 0;
  if ( !EtwpIsProcessZombie((__int64)Process) )
  {
    if ( v5[9] )
    {
      if ( (*v5 & 1) != 0 && (PVOID)v6 != PsIdleProcess && (PEPROCESS)v6 != PsInitialSystemProcess )
        PsSetProcessTelemetryAppState(v6, 5);
    }
    else
    {
      v7 = Process == PsIdleProcess;
      v5[8] = 0;
      if ( !v7
        && KeGetCurrentThread()->ApcState.Process != Process
        && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v6 + 760)) )
      {
        KiStackAttachProcess(Process, 0, (__int64)&v12);
        v4 = 1;
        a2[8] = 1;
      }
      if ( (*a2 & 0x10) != 0 )
      {
        v10 = 0;
        v8 = PsReferencePrimaryToken(Process);
        EtwpQueryTokenPackageInfo(v8, (WCHAR *)PackageSize, &v10);
        if ( a2[8] )
          EtwpQueryProcessOtherInfo((__int64)Process, (__int64)&v11);
        else
          v11 = 0LL;
        ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v8);
        EtwpPsProvTraceProcess(Process, v10, PackageSize, (__int64)&v11, 771);
      }
      if ( v4 )
      {
        KiUnstackDetachProcess(&v12, 0LL);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
      }
    }
  }
  return 0LL;
}
