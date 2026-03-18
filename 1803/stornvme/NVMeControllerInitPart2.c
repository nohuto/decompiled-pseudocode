/*
 * XREFs of NVMeControllerInitPart2 @ 0x1C0004908
 * Callers:
 *     NVMeHwInitialize @ 0x1C0001B40 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1C0001B90 (NVMeHwPassiveInitialize.c)
 *     NVMeHwAdapterControl @ 0x1C0001C50 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C000559C (NVMeControllerReset.c)
 * Callees:
 *     IoSqToIoCqMapping @ 0x1C0002E10 (IoSqToIoCqMapping.c)
 *     IoQueuesInitialize @ 0x1C0003010 (IoQueuesInitialize.c)
 *     GetInterruptMessageInformation @ 0x1C0003B64 (GetInterruptMessageInformation.c)
 *     InitializePerfOptions @ 0x1C0003DBC (InitializePerfOptions.c)
 *     IoQueuesCreation @ 0x1C0003F00 (IoQueuesCreation.c)
 *     NVMeInitHostMemoryBuffer @ 0x1C00069A4 (NVMeInitHostMemoryBuffer.c)
 *     NVMeInitStreams @ 0x1C0006CF8 (NVMeInitStreams.c)
 *     NVMeGetCommandEffectsLog @ 0x1C000E864 (NVMeGetCommandEffectsLog.c)
 *     NVMeSetIoQueueCount @ 0x1C000EB30 (NVMeSetIoQueueCount.c)
 *     NVMeSetInterruptCoalescing @ 0x1C000ECB4 (NVMeSetInterruptCoalescing.c)
 *     NVMeSetArbitration @ 0x1C000EDB8 (NVMeSetArbitration.c)
 *     NVMeGetTemperatureThreshold @ 0x1C000EF30 (NVMeGetTemperatureThreshold.c)
 *     NVMeConfigAsyncEvent @ 0x1C000F3D4 (NVMeConfigAsyncEvent.c)
 *     NVMeIssueAsyncEventCommand @ 0x1C000F8D8 (NVMeIssueAsyncEventCommand.c)
 *     NVMeSyncHostTime @ 0x1C00128EC (NVMeSyncHostTime.c)
 */

char __fastcall NVMeControllerInitPart2(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  char v4; // bp
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rsi
  __int64 v15; // rdx
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
  if ( !*(_WORD *)(a1 + 242) || !*(_WORD *)(a1 + 240) )
  {
    *(_DWORD *)(a1 + 24) = 12;
    return 0;
  }
  LOWORD(v7) = 4;
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    LOBYTE(v6) = v3;
    NVMeSetInterruptCoalescing(a1, v6);
    if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
    {
      LOBYTE(v8) = v3;
      NVMeSetArbitration(a1, v8);
    }
  }
  if ( v4 )
  {
    if ( !InitializePerfOptions(a1) )
    {
      *(_DWORD *)(a1 + 240) = 0;
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
  LOBYTE(v9) = v3;
  NVMeGetCommandEffectsLog(a1, v9);
  v11 = *(_DWORD *)(a1 + 52);
  if ( (v11 & 4) == 0 )
  {
    LOBYTE(v10) = v3;
    NVMeGetTemperatureThreshold(a1, v10);
    v11 = *(_DWORD *)(a1 + 52);
    if ( (v11 & 4) == 0 )
    {
      LOBYTE(v12) = v3;
      NVMeConfigAsyncEvent(a1, v12);
      v11 = *(_DWORD *)(a1 + 52);
    }
  }
  if ( (v11 & 4) == 0 && !*(_BYTE *)(a1 + 16) )
  {
    v13 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 1112) + 259LL);
    if ( (unsigned int)(v13 + 1) < 4 )
      LOWORD(v7) = v13 + 1;
    if ( (_WORD)v7 )
    {
      v14 = a1 + 696;
      v7 = (unsigned __int16)v7;
      do
      {
        NVMeIssueAsyncEventCommand(a1, v14);
        v14 += 104LL;
        --v7;
      }
      while ( v7 );
    }
  }
  NVMeInitHostMemoryBuffer(a1);
  if ( (*(_BYTE *)(a1 + 3288) & 5) == 5 )
  {
    LOBYTE(v15) = -1;
    NVMeInitStreams(a1, v15);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1112) + 520LL) & 0x40) != 0 )
    NVMeSyncHostTime(a1);
  *(_DWORD *)(a1 + 20) |= 1u;
  result = 1;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}
