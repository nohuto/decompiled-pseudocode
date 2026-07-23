/*
 * XREFs of sub_180060204 @ 0x180060204
 * Callers:
 *     RtlFlushHeaps @ 0x18005FC40 (RtlFlushHeaps.c)
 *     sub_180060124 @ 0x180060124 (sub_180060124.c)
 *     sub_1800601D0 @ 0x1800601D0 (sub_1800601D0.c)
 *     RtlSetHeapInformation @ 0x18007B300 (RtlSetHeapInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D27B0 (RtlQueryProcessHeapInformation.c)
 *     RtlEnumProcessHeaps @ 0x1800EB0A0 (RtlEnumProcessHeaps.c)
 *     RtlGetProcessHeaps @ 0x1800EB0B0 (RtlGetProcessHeaps.c)
 *     sub_1800EB750 @ 0x1800EB750 (sub_1800EB750.c)
 *     sub_1800F6B98 @ 0x1800F6B98 (sub_1800F6B98.c)
 *     sub_1800FD1A4 @ 0x1800FD1A4 (sub_1800FD1A4.c)
 *     sub_1800FD780 @ 0x1800FD780 (sub_1800FD780.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_180060360 @ 0x180060360 (sub_180060360.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180060204(__int64 (__fastcall *a1)(_QWORD, _QWORD), __int64 a2, char a3)
{
  struct _PEB *v6; // rsi
  __int64 i; // rbx
  int v8; // eax
  unsigned int j; // ebx
  __int64 k; // rax
  int v12; // [rsp+20h] [rbp-38h]
  int v13; // [rsp+24h] [rbp-34h]

  v6 = NtCurrentPeb();
  v13 = 0;
  if ( (a3 & 1) == 0 )
    RtlEnterCriticalSection(&stru_18015AAC0);
  for ( i = 0LL; (unsigned int)i < v6->NumberOfHeaps; i = (unsigned int)(i + 1) )
  {
    if ( a1 == sub_180060360 )
      v8 = sub_180060360(v6->ProcessHeaps[i], a2);
    else
      v8 = _guard_dispatch_icall_fptr();
    v13 = v8;
    if ( v8 < 0 )
      goto LABEL_21;
  }
  if ( (a3 & 2) != 0 )
  {
    for ( j = 0; j < (unsigned __int16)word_18015D010; ++j )
    {
      v13 = _guard_dispatch_icall_fptr();
      if ( v13 < 0 )
        goto LABEL_21;
    }
    for ( k = 0LL; ; k = (unsigned int)(v12 + 1) )
    {
      v12 = k;
      if ( (unsigned int)k >= 3 )
        break;
      if ( *((_QWORD *)&unk_1801608C0 + 2 * k) )
      {
        v13 = _guard_dispatch_icall_fptr();
        if ( v13 < 0 )
          break;
      }
    }
  }
LABEL_21:
  if ( (a3 & 1) == 0 )
    RtlLeaveCriticalSection(&stru_18015AAC0);
  return (unsigned int)v13;
}
