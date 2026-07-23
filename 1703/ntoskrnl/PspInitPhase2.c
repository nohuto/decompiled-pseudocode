/*
 * XREFs of PspInitPhase2 @ 0x14081F848
 * Callers:
 *     PsInitSystem @ 0x140809E88 (PsInitSystem.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     RtlGetSystemTimePrecise @ 0x140110620 (RtlGetSystemTimePrecise.c)
 *     RtlRandomEx @ 0x140459080 (RtlRandomEx.c)
 *     PspInitializeProtectedProcessParameters @ 0x1405CC41C (PspInitializeProtectedProcessParameters.c)
 *     PspInitializeSystemDlls @ 0x14081F998 (PspInitializeSystemDlls.c)
 */

bool PspInitPhase2()
{
  PEPROCESS v0; // rbx
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v2; // rdx
  char v3; // al
  char v4; // al
  void *ServerSiloGlobals; // rax
  ULONG Seed; // [rsp+30h] [rbp+8h] BYREF

  v0 = PsInitialSystemProcess;
  v0[1].ThreadListHead.Flink = (struct _LIST_ENTRY *)RtlGetSystemTimePrecise().QuadPart;
  PsInitialSystemProcess[2].ActiveProcessors.Bitmap[15] = MEMORY[0xFFFFF78000000008];
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  v2 = PsIdleProcess;
  PsInitialSystemProcess[2].ActiveProcessors.Bitmap[16] = UnbiasedInterruptTime;
  v2[97] = PsInitialSystemProcess[1].ThreadListHead.Flink;
  v2[232] = PsInitialSystemProcess[2].ActiveProcessors.Bitmap[15];
  v2[233] = PsInitialSystemProcess[2].ActiveProcessors.Bitmap[16];
  RtlGetSystemTimePrecise();
  PspWorkOnBehalfEncodingKey = (unsigned __int64)RtlRandomEx(&Seed) << 32;
  PspWorkOnBehalfEncodingKey = RtlRandomEx(&Seed) | (unsigned __int64)PspWorkOnBehalfEncodingKey;
  if ( PspSehValidationPolicy )
  {
    if ( PspSehValidationPolicy == 2 )
      v3 = MEMORY[0xFFFFF780000002D5] & 0xF3 | 8;
    else
      v3 = MEMORY[0xFFFFF780000002D5] & 0xF3 | 4;
  }
  else
  {
    v3 = MEMORY[0xFFFFF780000002D5] & 0xF3;
  }
  MEMORY[0xFFFFF780000002D5] = v3;
  switch ( PspCurDirDevicesSkippedForDlls )
  {
    case 1:
      v4 = MEMORY[0xFFFFF780000002D5] & 0xCF | 0x10;
      break;
    case 2:
      v4 = MEMORY[0xFFFFF780000002D5] & 0xCF | 0x20;
      break;
    case -1:
      v4 = MEMORY[0xFFFFF780000002D5] | 0x30;
      break;
    default:
      v4 = MEMORY[0xFFFFF780000002D5] & 0xCF;
      break;
  }
  MEMORY[0xFFFFF780000002D5] = v4;
  PspInitializeSystemDlls();
  ServerSiloGlobals = PsGetServerSiloGlobals(0LL);
  return (int)PspInitializeProtectedProcessParameters((__int64)ServerSiloGlobals) >= 0;
}
