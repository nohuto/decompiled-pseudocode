/*
 * XREFs of HandleAsyncResizeComplete @ 0x1C01F5B1C
 * Callers:
 *     NtUserLayoutCompleted @ 0x1C0104550 (NtUserLayoutCompleted.c)
 * Callees:
 *     zzzSetFMouseMoved @ 0x1C003C3C0 (zzzSetFMouseMoved.c)
 *     FindTimer @ 0x1C00B1F50 (FindTimer.c)
 */

__int64 __fastcall HandleAsyncResizeComplete(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(result + 592);
  if ( v2 )
  {
    if ( *(_QWORD *)v2 == a1 )
    {
      result = FindTimer(a1, 65522LL, 2u, 1, 0LL);
      if ( (*(_DWORD *)(v2 + 180) & 0x100000) != 0 )
      {
        result = *(unsigned int *)(v2 + 184);
        if ( (result & 1) != 0 )
        {
          *(_DWORD *)(v2 + 184) = result & 0xFFFFFFFE;
          return zzzSetFMouseMoved();
        }
      }
    }
  }
  return result;
}
