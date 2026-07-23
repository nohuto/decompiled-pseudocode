/*
 * XREFs of sub_1801010D0 @ 0x1801010D0
 * Callers:
 *     RtlZeroHeap @ 0x1800EEA80 (RtlZeroHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     RtlZeroHeap @ 0x1800EEA80 (RtlZeroHeap.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

__int64 __fastcall sub_1801010D0(PRTL_CRITICAL_SECTION *HeapHandle, int a2)
{
  char v4; // si
  ULONG v6; // ebx
  unsigned __int32 v7; // ebx

  v4 = 0;
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(PRTL_CRITICAL_SECTION *))qword_180156490)(HeapHandle);
  if ( !sub_18001FC58(HeapHandle, "RtlZeroHeap") )
    goto LABEL_7;
  v6 = *((_DWORD *)HeapHandle + 29) | 0x10000000 | a2;
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(HeapHandle[44]);
    v4 = 1;
    v6 |= 1u;
  }
  if ( (unsigned __int8)sub_18010120C((_DWORD)HeapHandle) )
    v7 = RtlZeroHeap(HeapHandle, v6);
  else
LABEL_7:
    v7 = -1073741811;
  if ( v4 )
    RtlLeaveCriticalSection(HeapHandle[44]);
  return v7;
}
