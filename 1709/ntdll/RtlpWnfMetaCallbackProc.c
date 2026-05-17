/*
 * XREFs of RtlpWnfMetaCallbackProc @ 0x180088720
 * Callers:
 *     <none>
 * Callees:
 *     ZwSetEvent @ 0x1800A0280 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpWnfMetaCallbackProc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  if ( !*(_DWORD *)(a2 + 16) )
  {
    v5 = *(_QWORD *)(a2 + 8);
    *(_DWORD *)a2 = a3;
    if ( v5 )
      ZwSetEvent(v5, 0LL, a3, a4);
    *(_DWORD *)(a2 + 16) = 1;
  }
  return 0LL;
}
