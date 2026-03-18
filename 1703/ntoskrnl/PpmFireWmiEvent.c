/*
 * XREFs of PpmFireWmiEvent @ 0x1402344AC
 * Callers:
 *     PpmEventProcessorPerfStateChange @ 0x14014717C (PpmEventProcessorPerfStateChange.c)
 *     PpmEventDomainPerfStateChange @ 0x14014B088 (PpmEventDomainPerfStateChange.c)
 *     PopFireThermalWmiEvent @ 0x14022F4D4 (PopFireThermalWmiEvent.c)
 *     PpmEventThermalCapChange @ 0x1402361DC (PpmEventThermalCapChange.c)
 * Callees:
 *     IoWMIWriteEvent @ 0x140148670 (IoWMIWriteEvent.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     PpmAllocWmiEvent @ 0x140234404 (PpmAllocWmiEvent.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmFireWmiEvent(__int64 a1, __int128 *a2, unsigned int a3, const void *a4)
{
  size_t v5; // rsi
  NTSTATUS v6; // ebx
  char *v7; // rax
  char *v8; // rdi

  v5 = a3;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v7 = PpmAllocWmiEvent((PDEVICE_OBJECT)a1, a2, a3);
    v8 = v7;
    if ( v7 )
    {
      if ( a4 )
        memmove(&v7[*((unsigned int *)v7 + 14)], a4, v5);
      v6 = IoWMIWriteEvent(v8);
      if ( v6 >= 0 )
        return 0;
      else
        ExFreePoolWithTag(v8, 0x774D5050u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v6;
}
