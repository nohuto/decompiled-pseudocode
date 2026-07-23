/*
 * XREFs of sub_18001A8B4 @ 0x18001A8B4
 * Callers:
 *     sub_18001A828 @ 0x18001A828 (sub_18001A828.c)
 *     sub_180086EA8 @ 0x180086EA8 (sub_180086EA8.c)
 * Callees:
 *     sub_18001A950 @ 0x18001A950 (sub_18001A950.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180086EA8 @ 0x180086EA8 (sub_180086EA8.c)
 */

LOGICAL __fastcall sub_18001A8B4(PVOID BaseAddress)
{
  LOGICAL result; // eax
  __int64 i; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // rax

  *(_QWORD *)(*((_QWORD *)BaseAddress + 6) + 176LL) = 0LL;
  result = sub_18001A950();
  if ( *((_QWORD *)BaseAddress + 10) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)BaseAddress + 22); i = (unsigned int)(i + 1) )
    {
      v4 = *(_QWORD **)(*((_QWORD *)BaseAddress + 10) + 8 * i);
      if ( v4 )
      {
        v5 = v4[22];
        if ( v5 )
        {
          if ( (*(_DWORD *)(v5 + 24) & 0x80000) == 0 && *(_QWORD **)(v5 + 48) != v4 )
          {
            *(_QWORD *)(v5 + 48) = v4;
            sub_180086EA8(v4);
          }
        }
      }
    }
    result = RtlFreeHeap(HeapHandle, 0, *((PVOID *)BaseAddress + 10));
  }
  if ( (*((_DWORD *)BaseAddress + 6) & 0x8000) != 0 )
    return RtlFreeHeap(HeapHandle, 0, BaseAddress);
  return result;
}
