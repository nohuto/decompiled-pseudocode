/*
 * XREFs of sub_1800FF9D0 @ 0x1800FF9D0
 * Callers:
 *     RtlCompactHeap @ 0x1800EAF00 (RtlCompactHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18001FC58 @ 0x18001FC58 (sub_18001FC58.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     RtlCompactHeap @ 0x1800EAF00 (RtlCompactHeap.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 *     sub_18010180C @ 0x18010180C (sub_18010180C.c)
 *     sub_18010473C @ 0x18010473C (sub_18010473C.c)
 */

__int64 __fastcall sub_1800FF9D0(_DWORD *Src, int a2)
{
  char v4; // si
  __int64 v6; // rbx
  int v7; // ebx

  v4 = 0;
  if ( (Src[29] & 0x1000000) != 0 )
    return (unsigned int)((__int64 (__fastcall *)(_DWORD *))qword_180156488)(Src);
  if ( sub_18001FC58(Src, "RtlCompactHeap") )
  {
    v7 = Src[29] | 0x10000000 | a2;
    if ( (v7 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v4 = 1;
      v7 |= 1u;
    }
    sub_18010120C(Src, 0LL);
    v6 = RtlCompactHeap((char *)Src, v7);
    sub_18010180C(Src);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v4 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44));
  return v6;
}
