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

__int64 __fastcall sub_1801010D0(unsigned __int64 a1, int a2)
{
  char v4; // si
  int v6; // ebx
  unsigned int v7; // ebx

  v4 = 0;
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return ((__int64 (__fastcall *)(unsigned __int64))qword_180156490)(a1);
  if ( !sub_18001FC58((_DWORD *)a1, "RtlZeroHeap") )
    goto LABEL_7;
  v6 = *(_DWORD *)(a1 + 116) | 0x10000000 | a2;
  if ( (v6 & 1) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v4 = 1;
    v6 |= 1u;
  }
  if ( (unsigned __int8)sub_18010120C(a1, 0LL) )
    v7 = RtlZeroHeap(a1, v6);
  else
LABEL_7:
    v7 = -1073741811;
  if ( v4 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  return v7;
}
