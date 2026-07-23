/*
 * XREFs of sub_1801021F4 @ 0x1801021F4
 * Callers:
 *     RtlZeroHeap @ 0x1800F1D20 (RtlZeroHeap.c)
 * Callees:
 *     sub_18001F9B0 @ 0x18001F9B0 (sub_18001F9B0.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     RtlZeroHeap @ 0x1800F1D20 (RtlZeroHeap.c)
 *     sub_1800F22CC @ 0x1800F22CC (sub_1800F22CC.c)
 */

__int64 __fastcall sub_1801021F4(PRTL_CRITICAL_SECTION *BaseAddress, int a2)
{
  char v4; // si
  ULONG v6; // ebx
  unsigned __int32 v7; // ebx

  v4 = 0;
  if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_1801554A0)(BaseAddress);
  if ( !sub_18001F9B0(BaseAddress, "RtlZeroHeap") )
    goto LABEL_7;
  v6 = *((_DWORD *)BaseAddress + 29) | 0x10000000 | a2;
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(BaseAddress[44]);
    v4 = 1;
    v6 |= 1u;
  }
  if ( sub_180090710((PVOID *)BaseAddress, 0) )
    v7 = RtlZeroHeap(BaseAddress, v6);
  else
LABEL_7:
    v7 = -1073741811;
  if ( v4 )
    RtlLeaveCriticalSection(BaseAddress[44]);
  return v7;
}
