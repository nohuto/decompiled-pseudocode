/*
 * XREFs of KiIncrementConcurrencyCount @ 0x140076388
 * Callers:
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     IoSetIoCompletionEx2 @ 0x1400759E0 (IoSetIoCompletionEx2.c)
 * Callees:
 *     <none>
 */

char __fastcall KiIncrementConcurrencyCount(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  LOBYTE(v2) = *(_BYTE *)a1 & 0x7F;
  if ( (_BYTE)v2 == 21 )
  {
    *(_DWORD *)(a2 + 540) = (unsigned __int8)*(_DWORD *)(a2 + 540);
    v2 = *(unsigned int *)(a2 + 540);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 4 * v2 + 536));
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 40));
  }
  return v2;
}
