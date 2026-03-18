/*
 * XREFs of ExQueryBootEntropyInformation @ 0x1405A76B4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     Phase1InitializationIoReady @ 0x140809CD4 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x140545670 (RtlRunOnceExecuteOnce.c)
 */

NTSTATUS __fastcall ExQueryBootEntropyInformation(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 Parameter; // [rsp+30h] [rbp+8h] BYREF

  Parameter = a1;
  result = RtlRunOnceExecuteOnce(&ExpBootEntropyInit, ExpInitBootEntropyInformation, &Parameter, 0LL);
  if ( result >= 0 && Parameter != -1 )
    return -1073741823;
  return result;
}
