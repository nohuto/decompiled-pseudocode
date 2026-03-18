/*
 * XREFs of NVMeControllerInitPart2 @ 0x1C0004640
 * Callers:
 *     NVMeHwInitialize @ 0x1C0001B40 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1C0001B90 (NVMeHwPassiveInitialize.c)
 *     NVMeHwAdapterControl @ 0x1C0001C10 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C0005138 (NVMeControllerReset.c)
 * Callees:
 *     IoSqToIoCqMapping @ 0x1C0002BAC (IoSqToIoCqMapping.c)
 *     IoQueuesInitialize @ 0x1C0002DAC (IoQueuesInitialize.c)
 *     GetInterruptMessageInformation @ 0x1C00038A4 (GetInterruptMessageInformation.c)
 *     InitializePerfOptions @ 0x1C0003AFC (InitializePerfOptions.c)
 *     IoQueuesCreation @ 0x1C0003C34 (IoQueuesCreation.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C000631C (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C0006668 (NVMeInitStreams.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000DC18 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000DED0 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000E054 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000E15C (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000E2C0 (NVMeGetTemperatureThreshold.c)
 *     NVMeConfigAsyncEvent @ 0x1C000E74C (NVMeConfigAsyncEvent.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000EC38 (NVMeIssueAsyncEventCommand.c)
 */

char __fastcall NVMeControllerInitPart2(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  char v4; // bp
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rsi
  __int64 v12; // rdx
  char result; // al

  v3 = a3;
  v4 = a2;
  if ( (_BYTE)a2 && !GetInterruptMessageInformation(a1) )
  {
    *(_DWORD *)(a1 + 24) = 11;
    return 0;
  }
  LOBYTE(a3) = v3;
  LOBYTE(a2) = v4 == 0;
  NVMeSetIoQueueCount(a1, a2, a3);
  if ( !*(_WORD *)(a1 + 234) || !*(_WORD *)(a1 + 232) )
  {
    *(_DWORD *)(a1 + 24) = 12;
    return 0;
  }
  LOWORD(v7) = 4;
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    LOBYTE(v6) = v3;
    NVMeSetInterruptCoalescing(a1, v6);
  }
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    LOBYTE(v6) = v3;
    NVMeSetArbitration(a1, v6);
  }
  if ( v4 )
  {
    if ( !InitializePerfOptions(a1) )
    {
      *(_DWORD *)(a1 + 232) = 0;
      *(_DWORD *)(a1 + 24) = 17;
      return 0;
    }
    if ( !IoQueuesInitialize(a1) )
    {
      *(_DWORD *)(a1 + 24) = 13;
      return 0;
    }
    IoSqToIoCqMapping(a1);
  }
  if ( !IoQueuesCreation(a1, v3) )
  {
    *(_DWORD *)(a1 + 24) = 14;
    return 0;
  }
  LOBYTE(v8) = v3;
  NVMeGetCommandEffectsLog(a1, v8);
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    LOBYTE(v9) = v3;
    NVMeGetTemperatureThreshold(a1, v9);
  }
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    LOBYTE(v9) = v3;
    NVMeConfigAsyncEvent(a1, v9);
  }
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 && !*(_BYTE *)(a1 + 16) )
  {
    v10 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1080) + 259LL);
    if ( (unsigned int)(v10 + 1) < 4 )
      LOWORD(v7) = v10 + 1;
    if ( (_WORD)v7 )
    {
      v11 = a1 + 664;
      v7 = (unsigned __int16)v7;
      do
      {
        NVMeIssueAsyncEventCommand(a1, v11);
        v11 += 104LL;
        --v7;
      }
      while ( v7 );
    }
  }
  NVMeInitHostMemoryBuffer(a1);
  if ( (*(_BYTE *)(a1 + 3240) & 5) == 5 )
  {
    LOBYTE(v12) = -1;
    NVMeInitStreams(a1, v12);
  }
  *(_DWORD *)(a1 + 20) |= 1u;
  result = 1;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
