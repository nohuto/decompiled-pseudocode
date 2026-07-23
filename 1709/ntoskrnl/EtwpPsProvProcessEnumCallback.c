/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x14074E870
 * Callers:
 *     EtwpPsProvCaptureState @ 0x14074E7F0 (EtwpPsProvCaptureState.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PsReferencePrimaryToken @ 0x14049C780 (PsReferencePrimaryToken.c)
 *     EtwpQueryProcessOtherInfo @ 0x1404DC228 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x1404DCA98 (EtwpQueryTokenPackageInfo.c)
 *     EtwpPsProvTraceProcess @ 0x1404DCB5C (EtwpPsProvTraceProcess.c)
 *     PsSetProcessTelemetryAppState @ 0x1404FD040 (PsSetProcessTelemetryAppState.c)
 *     EtwpIsProcessZombie @ 0x14074CFA0 (EtwpIsProcessZombie.c)
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
  $709EDFC2F9E0D4565D6AA3C4377BC643 v12; // [rsp+40h] [rbp-1F8h] BYREF
  unsigned int PackageSize[104]; // [rsp+70h] [rbp-1C8h] BYREF

  v4 = 0;
  if ( !EtwpIsProcessZombie((__int64)Process) )
  {
    if ( v5[9] )
    {
      if ( (*v5 & 1) != 0 && (PVOID)v6 != PsIdleProcess && (*(_DWORD *)(v6 + 1740) & 0x1000) == 0 )
        PsSetProcessTelemetryAppState(v6, 5);
    }
    else
    {
      v7 = Process == PsIdleProcess;
      v5[8] = 0;
      if ( !v7
        && KeGetCurrentThread()->ApcState.Process != Process
        && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 760)) )
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
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
      }
    }
  }
  return 0LL;
}
