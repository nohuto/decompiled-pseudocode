/*
 * XREFs of sub_18006B51C @ 0x18006B51C
 * Callers:
 *     sub_18006B460 @ 0x18006B460 (sub_18006B460.c)
 *     sub_18006B490 @ 0x18006B490 (sub_18006B490.c)
 *     sub_1800C9AFC @ 0x1800C9AFC (sub_1800C9AFC.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_18006B460 @ 0x18006B460 (sub_18006B460.c)
 *     sub_18006B5B8 @ 0x18006B5B8 (sub_18006B5B8.c)
 */

LOGICAL __fastcall sub_18006B51C(_QWORD *BaseAddress)
{
  LOGICAL result; // eax
  void *v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax

  *(_QWORD *)(BaseAddress[7] + 176LL) = 0LL;
  result = sub_18006B5B8(BaseAddress);
  v3 = (void *)BaseAddress[11];
  if ( v3 )
  {
    v4 = 0LL;
    if ( *((_DWORD *)BaseAddress + 24) )
    {
      do
      {
        v5 = *(_QWORD *)(BaseAddress[11] + 8 * v4);
        if ( v5 )
        {
          v6 = *(_QWORD *)(v5 + 176);
          if ( v6 )
          {
            if ( (*(_DWORD *)(v6 + 32) & 0x80000) == 0 && *(_QWORD *)(v6 + 56) != v5 )
            {
              *(_QWORD *)(v6 + 56) = v5;
              sub_18006B460((PVOID *)v5);
            }
          }
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *((_DWORD *)BaseAddress + 24) );
      v3 = (void *)BaseAddress[11];
    }
    result = RtlFreeHeap(HeapHandle, 0, v3);
  }
  if ( (BaseAddress[4] & 0x8000) != 0 )
    return RtlFreeHeap(HeapHandle, 0, BaseAddress);
  return result;
}
