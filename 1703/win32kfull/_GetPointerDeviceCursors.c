/*
 * XREFs of _GetPointerDeviceCursors @ 0x1C0134324
 * Callers:
 *     NtUserGetPointerDeviceCursors @ 0x1C01341B0 (NtUserGetPointerDeviceCursors.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

__int64 __fastcall GetPointerDeviceCursors(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 i; // r9

  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
  {
    *(_DWORD *)(a3 + 8 * i) = *(_DWORD *)(*(_QWORD *)(a1 + 1592) + 12 * i + 4);
    *(_DWORD *)(a3 + 8 * i + 4) = *(_DWORD *)(*(_QWORD *)(a1 + 1592) + 12 * i);
  }
  return 1LL;
}
