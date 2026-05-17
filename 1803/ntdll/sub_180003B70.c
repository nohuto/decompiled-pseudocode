/*
 * XREFs of sub_180003B70 @ 0x180003B70
 * Callers:
 *     sub_180003970 @ 0x180003970 (sub_180003970.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall sub_180003B70(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 432);
  if ( v1 )
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v1);
  if ( *(_QWORD *)(a1 + 440) )
  {
    v4 = 0LL;
    return ZwFreeVirtualMemory(-1LL, a1 + 440, &v4, 0x8000LL);
  }
  return result;
}
