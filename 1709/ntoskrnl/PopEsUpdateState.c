/*
 * XREFs of PopEsUpdateState @ 0x1405E2E84
 * Callers:
 *     PopEsWorker @ 0x1405E2D50 (PopEsWorker.c)
 * Callees:
 *     PopDiagTraceEsState @ 0x140245A30 (PopDiagTraceEsState.c)
 *     PopCurrentPowerState @ 0x1404EA194 (PopCurrentPowerState.c)
 *     PopEsPublishState @ 0x1405E2FB8 (PopEsPublishState.c)
 *     PopEsSnapTelemetry @ 0x140708450 (PopEsSnapTelemetry.c)
 */

__int64 __fastcall PopEsUpdateState(char a1)
{
  __int64 result; // rax
  int v3; // ebx
  int v4; // edi
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  PopCurrentPowerState(v5);
  result = (unsigned int)PopEsMode;
  v3 = 0;
  v4 = 0;
  if ( PopEsMode == 1 )
  {
    v4 = 1;
LABEL_19:
    v3 = 1;
    goto LABEL_6;
  }
  if ( PopEsMode == 2 )
  {
    if ( dword_1403661F0 )
    {
      if ( BYTE1(v5[0]) )
      {
        if ( DWORD2(v5[0]) )
        {
          result = (unsigned int)(DWORD2(v5[0]) + 100 * HIDWORD(v5[0]) - 1) / DWORD2(v5[0]);
          if ( (unsigned int)result <= dword_1403661F0 )
          {
            v4 = 2;
            goto LABEL_19;
          }
        }
      }
    }
  }
  if ( byte_1403661F4 && dword_1403661F0 && PopEsBgActivityLimited )
  {
    v4 = 8;
    goto LABEL_19;
  }
  if ( PopEsEnabledOnHost )
  {
    v4 = 16;
    goto LABEL_19;
  }
LABEL_6:
  if ( a1 || v3 != PopEsState || v4 != PopEsReason )
  {
    PopDiagTraceEsState();
    result = PopEsSnapTelemetry(v5);
    if ( v3 != PopEsState )
    {
      PopEsState = v3;
      result = PopEsPublishState();
    }
    PopEsReason = v4;
  }
  return result;
}
