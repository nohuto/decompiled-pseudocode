/*
 * XREFs of sub_1800059EC @ 0x1800059EC
 * Callers:
 *     RtlFlushHeaps @ 0x180005720 (RtlFlushHeaps.c)
 *     sub_18000594C @ 0x18000594C (sub_18000594C.c)
 *     RtlSetHeapInformation @ 0x18007EF50 (RtlSetHeapInformation.c)
 *     RtlGetProcessHeaps @ 0x180090580 (RtlGetProcessHeaps.c)
 *     RtlQueryProcessHeapInformation @ 0x180095000 (RtlQueryProcessHeapInformation.c)
 *     RtlEnumProcessHeaps @ 0x1800EF320 (RtlEnumProcessHeaps.c)
 *     sub_1800EF700 @ 0x1800EF700 (sub_1800EF700.c)
 *     sub_1800F9098 @ 0x1800F9098 (sub_1800F9098.c)
 *     sub_1800FE9E4 @ 0x1800FE9E4 (sub_1800FE9E4.c)
 *     sub_1800FEF2C @ 0x1800FEF2C (sub_1800FEF2C.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800059EC(__int64 a1, __int64 a2, char a3)
{
  struct _PEB *v4; // r14
  int v5; // esi
  ULONG i; // ebx
  unsigned int j; // ebx

  v4 = NtCurrentPeb();
  v5 = 0;
  if ( (a3 & 1) == 0 )
    RtlEnterCriticalSection(&stru_180159A80);
  for ( i = 0; i < v4->NumberOfHeaps; ++i )
  {
    v5 = _guard_dispatch_icall_fptr();
    if ( v5 < 0 )
      goto LABEL_12;
  }
  if ( (a3 & 2) != 0 )
  {
    for ( j = 0; j < (unsigned __int16)word_18015BFA0; ++j )
    {
      v5 = _guard_dispatch_icall_fptr();
      if ( v5 < 0 )
        break;
    }
  }
LABEL_12:
  if ( (a3 & 1) == 0 )
    RtlLeaveCriticalSection(&stru_180159A80);
  return (unsigned int)v5;
}
