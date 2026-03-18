/*
 * XREFs of PpmFireWmiEvent @ 0x14027F988
 * Callers:
 *     PpmEventProcessorPerfStateChange @ 0x14016BE48 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventDomainPerfStateChange @ 0x14016E5E4 (PpmEventDomainPerfStateChange.c)
 *     PopFireThermalWmiEvent @ 0x140278CDC (PopFireThermalWmiEvent.c)
 *     PpmEventThermalCapChange @ 0x1402811E8 (PpmEventThermalCapChange.c)
 * Callees:
 *     IoWMIWriteEvent @ 0x14016B690 (IoWMIWriteEvent.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     PpmAllocWmiEvent @ 0x14027F8E0 (PpmAllocWmiEvent.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
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
