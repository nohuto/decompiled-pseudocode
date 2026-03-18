/*
 * XREFs of ResetWindowTransform @ 0x1C00C6C18
 * Callers:
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResetWindowTransform(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 288);
  if ( v4 )
  {
    result = Win32FreePool(v4, a2, a3);
    *(_QWORD *)(a1 + 288) = 0LL;
  }
  return result;
}
