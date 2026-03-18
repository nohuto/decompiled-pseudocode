/*
 * XREFs of EtwpUpdatePerProcessTracing @ 0x140709DA0
 * Callers:
 *     EtwpStartLogger @ 0x1405509F8 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PsLookupProcessByProcessId @ 0x14050F8F0 (PsLookupProcessByProcessId.c)
 *     EtwpGetFlagExtension @ 0x14054F814 (EtwpGetFlagExtension.c)
 *     EtwpUpdateProcessTracingCallback @ 0x140709ED0 (EtwpUpdateProcessTracingCallback.c)
 */

LONG __fastcall EtwpUpdatePerProcessTracing(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v4; // rdi
  unsigned __int16 *FlagExtension; // rax
  unsigned int v9; // edx
  unsigned int *v10; // rbx
  __int64 v11; // rsi
  PEPROCESS Process; // [rsp+30h] [rbp-38h] BYREF
  __int16 v14; // [rsp+80h] [rbp+18h]

  v4 = a4;
  HIBYTE(v14) = 0;
  KeWaitForSingleObject(&EtwpGlobalMutex, Executive, 0, 0, 0LL);
  FlagExtension = EtwpGetFlagExtension(a1, 2);
  if ( FlagExtension )
  {
    v9 = (unsigned __int16)(4 * *FlagExtension - 4) >> 2;
    if ( v9 )
    {
      v10 = (unsigned int *)(FlagExtension + 2);
      v11 = v9;
      do
      {
        if ( PsLookupProcessByProcessId((HANDLE)*v10, &Process) >= 0 )
        {
          EtwpUpdateProcessTracingCallback((ULONG_PTR)Process);
          ObfDereferenceObjectWithTag(Process, 0x746C6644u);
        }
        ++v10;
        --v11;
      }
      while ( v11 );
    }
  }
  LOBYTE(v14) = a3;
  if ( a2 == EtwpHostSiloState )
    *(_WORD *)(2 * v4 - 0x87FFFFFFC80LL) = v14;
  else
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)a2 + 1072LL) + 2 * v4 + 550) = v14;
  return KeReleaseMutex(&EtwpGlobalMutex, 0);
}
