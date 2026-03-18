/*
 * XREFs of PushAccFieldObj @ 0x1C0013BE8
 * Callers:
 *     WriteFieldObj @ 0x1C0010070 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x1C0010900 (ReadFieldObj.c)
 *     ReadField @ 0x1C0013B20 (ReadField.c)
 *     AccFieldUnit @ 0x1C0017A60 (AccFieldUnit.c)
 *     PreserveWriteObj @ 0x1C005EA10 (PreserveWriteObj.c)
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall PushAccFieldObj(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5, unsigned int a6)
{
  unsigned int v6; // ebx
  unsigned int v11; // r8d
  __int64 v12; // rax
  int v13; // r8d
  int v14; // ecx
  unsigned int v15; // ecx
  __int64 v16; // r10

  v6 = 0;
  v11 = 128;
  if ( a4[5] )
    v11 = a4[7] + 128;
  v12 = HeapAlloc(a1 + 440, 1297237576, v11);
  if ( v12 )
  {
    v13 = 1;
    *(_QWORD *)(v12 + 8) = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v12;
    *(_DWORD *)v12 = 1330004801;
    *(_QWORD *)(v12 + 24) = a2;
    *(_QWORD *)(v12 + 32) = a3;
    *(_QWORD *)(v12 + 40) = a5;
    *(_QWORD *)(v12 + 48) = a5 + a6;
    v14 = a4[3] & 0xF;
    if ( (unsigned int)(v14 - 1) <= 3 )
      v13 = 1 << (v14 - 1);
    *(_DWORD *)(v12 + 56) = v13;
    *(_DWORD *)(v12 + 60) = (8 * v13 + a4[2] + a4[1] - 1) / (unsigned int)(8 * v13);
    v15 = 8 * *(_DWORD *)(v12 + 56);
    if ( v15 >= 0x40 )
      v16 = 0LL;
    else
      v16 = 1LL << v15;
    *(_QWORD *)(v12 + 64) = v16 - 1;
    *(_DWORD *)(v12 + 72) = 8 * *(_DWORD *)(v12 + 56) - a4[1];
    *(_DWORD *)(v12 + 76) = a4[1];
    memmove((void *)(v12 + 96), a4, (unsigned int)(a4[7] + 32));
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v6;
}
