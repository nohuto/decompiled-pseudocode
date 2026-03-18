/*
 * XREFs of SleepStall @ 0x1C004FAF0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     SleepQueueRequest @ 0x1C004BF0C (SleepQueueRequest.c)
 */

__int64 __fastcall SleepStall(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rcx
  int v6; // ecx

  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "I");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 56) + 8LL) != 8795 )
    {
      if ( v5 <= 0xFF )
      {
        KeStallExecutionProcessor(v5);
        return v4;
      }
      v4 = -1072431089;
      LogError(-1072431089);
      AcpiDiagTraceAmlError(a1, -1072431089);
      v6 = 178;
      goto LABEL_10;
    }
    if ( v5 > 0xFFFF )
    {
      v4 = -1072431089;
      LogError(-1072431089);
      AcpiDiagTraceAmlError(a1, -1072431089);
      v6 = 177;
LABEL_10:
      PrintDebugMessage(v6, *(const void **)(*(_QWORD *)(a2 + 80) + 16LL), 0LL, 0LL, 0LL);
      return v4;
    }
    if ( v5 )
    {
      v4 = SleepQueueRequest(a1, v5);
      if ( !v4 )
        return 32772;
    }
  }
  return v4;
}
