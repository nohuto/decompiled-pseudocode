/*
 * XREFs of Buffer @ 0x1C001BE50
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     PrintBuffData @ 0x1C005C994 (PrintBuffData.c)
 */

__int64 __fastcall Buffer(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 v8; // rax
  int v10; // ecx

  v2 = *(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 120);
  v5 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, (__int64)"I");
  if ( !v5 )
  {
    if ( (gDebugger & 0xD0) != 0 )
      PrintBuffData(*(_QWORD *)(a1 + 120), v2);
    v6 = *(_QWORD *)(a2 + 80);
    v7 = *(_DWORD *)(v6 + 16);
    if ( v7 < v2 )
    {
      v5 = -1073741789;
      LogError(3221225507LL);
      AcpiDiagTraceAmlError(a1, 3221225507LL);
      PrintDebugMessage(19, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), v2, 0, 0LL);
      return v5;
    }
    if ( *(_QWORD *)(v6 + 16) )
    {
      v8 = HeapAlloc(gpheapGlobal, 1179992648, v7);
      *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v8;
      if ( v8 )
      {
        *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 3;
        *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
        memset(*(void **)(*(_QWORD *)(a2 + 88) + 32LL), 0, *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
        memmove(*(void **)(*(_QWORD *)(a2 + 88) + 32LL), *(const void **)(a1 + 120), v2);
        *(_QWORD *)(a1 + 120) = *(_QWORD *)(a2 + 40);
        return v5;
      }
      v5 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      v10 = 17;
    }
    else
    {
      v5 = -1073741306;
      LogError(3221225990LL);
      AcpiDiagTraceAmlError(a1, 3221225990LL);
      v10 = 18;
    }
    PrintDebugMessage(v10, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL), 0, 0, 0LL);
  }
  return v5;
}
