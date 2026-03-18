/*
 * XREFs of PushScope @ 0x1C001BFE8
 * Callers:
 *     Device @ 0x1C0012740 (Device.c)
 *     While @ 0x1C001BF50 (While.c)
 *     Scope @ 0x1C001C2B0 (Scope.c)
 *     ParseLoad @ 0x1C001D4D0 (ParseLoad.c)
 *     Processor @ 0x1C001DA30 (Processor.c)
 *     ThermalZone @ 0x1C002A7F0 (ThermalZone.c)
 *     PowerRes @ 0x1C005E5F0 (PowerRes.c)
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 */

__int64 __fastcall PushScope(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v11; // edi
  __int64 v13; // rax
  _QWORD *v14; // rcx
  char v15; // al

  v11 = 0;
  v13 = HeapAlloc((__int64)(a1 + 55), 1297237576, 0x50u);
  v14 = (_QWORD *)v13;
  if ( v13 )
  {
    *(_QWORD *)(v13 + 8) = a1[52];
    a1[52] = v13;
    *(_QWORD *)(v13 + 24) = ParseScope;
    *(_DWORD *)v13 = 1347371859;
    a1[15] = a2;
    *(_QWORD *)(v13 + 32) = a3;
    *(_QWORD *)(v13 + 40) = a4;
    *(_QWORD *)(v13 + 48) = a1[10];
    v15 = gdwfAMLI;
    a1[10] = a5;
    if ( (v15 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a5 + 112));
    v14[7] = a1[11];
    a1[11] = a6;
    v14[8] = a1[40];
    a1[40] = a7;
    v14[9] = a8;
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v11;
}
