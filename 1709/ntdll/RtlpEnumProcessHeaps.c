/*
 * XREFs of RtlpEnumProcessHeaps @ 0x180012914
 * Callers:
 *     RtlpHpGCCallback @ 0x1800128E0 (RtlpHpGCCallback.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x180013308 (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlFlushHeaps @ 0x1800154B0 (RtlFlushHeaps.c)
 *     RtlSetHeapInformation @ 0x18007D960 (RtlSetHeapInformation.c)
 *     RtlGetProcessHeaps @ 0x1800906F0 (RtlGetProcessHeaps.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D8640 (RtlQueryProcessHeapInformation.c)
 *     RtlEnumProcessHeaps @ 0x1800EEEC0 (RtlEnumProcessHeaps.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800EF510 (RtlSetHeapDebuggingInformation.c)
 *     RtlpInitializeStackTraceDatabase @ 0x1800FA4C8 (RtlpInitializeStackTraceDatabase.c)
 *     RtlpHpStackTraceDisable @ 0x18010057C (RtlpHpStackTraceDisable.c)
 *     RtlpHpStackTraceSerialize @ 0x180100AE0 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlpHpGCFlushCallback @ 0x180012A20 (RtlpHpGCFlushCallback.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpEnumProcessHeaps(__int64 (__fastcall *a1)(_QWORD, _QWORD), __int64 a2, char a3)
{
  struct _PEB *v6; // r14
  int v7; // edi
  __int64 i; // rbx
  int v9; // eax
  unsigned int j; // ebx

  v6 = NtCurrentPeb();
  v7 = 0;
  if ( (a3 & 1) == 0 )
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  for ( i = 0LL; (unsigned int)i < v6->NumberOfHeaps; i = (unsigned int)(i + 1) )
  {
    if ( a1 == RtlpHpGCFlushCallback )
      v9 = RtlpHpGCFlushCallback(v6->ProcessHeaps[i], a2);
    else
      v9 = _guard_dispatch_icall_fptr();
    v7 = v9;
    if ( v9 < 0 )
      goto LABEL_16;
  }
  if ( (a3 & 2) != 0 )
  {
    for ( j = 0; j < (unsigned __int16)RtlpNumberOfProtectedHeaps; ++j )
    {
      v7 = _guard_dispatch_icall_fptr();
      if ( v7 < 0 )
        break;
    }
  }
LABEL_16:
  if ( (a3 & 1) == 0 )
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  return (unsigned int)v7;
}
