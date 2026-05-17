/*
 * XREFs of sub_1800FFE08 @ 0x1800FFE08
 * Callers:
 *     RtlCreateTagHeap @ 0x18007D190 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     RtlCreateTagHeap @ 0x18007D190 (RtlCreateTagHeap.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_18010180C @ 0x18010180C (sub_18010180C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

__int64 __fastcall sub_1800FFE08(_DWORD *Src, int a2, __int64 a3, __int16 *a4)
{
  char v8; // si
  unsigned int TagHeap; // r14d
  int v10; // edi

  v8 = 0;
  TagHeap = 0;
  if ( sub_18001FC58(Src, "RtlCreateTagHeap") )
  {
    v10 = Src[29] | 0x10000000 | a2;
    if ( (v10 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v8 = 1;
      v10 |= 1u;
    }
    if ( (unsigned __int8)sub_18010120C(Src, 0LL) )
      TagHeap = RtlCreateTagHeap(Src, v10, a3, a4);
    sub_18010180C(Src);
  }
  if ( v8 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return TagHeap;
}
