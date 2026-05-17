/*
 * XREFs of sub_18000FF10 @ 0x18000FF10
 * Callers:
 *     sub_18000FFDC @ 0x18000FFDC (sub_18000FFDC.c)
 * Callees:
 *     sub_18000A978 @ 0x18000A978 (sub_18000A978.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180086AA0 @ 0x180086AA0 (sub_180086AA0.c)
 */

signed __int64 __fastcall sub_18000FF10(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  signed __int64 result; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  _DWORD *v9; // rdi
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    if ( *(_QWORD *)(a1 + 72) )
      sub_180086AA0();
    v7 = *(_QWORD *)(a1 + 8);
    v8 = *(_QWORD **)(a1 + 16);
    if ( *(_QWORD *)(v7 + 8) != a1 + 8 || *v8 != a1 + 8 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v9 = *(_DWORD **)(a1 + 88);
    *a2 = *(_QWORD *)(a1 + 104);
    *a3 = *(_QWORD *)(a1 + 112);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
    if ( v9 )
    {
      *v9 = 1;
      _InterlockedOr(v10, 0);
      return sub_18000A978((unsigned __int64)v9, 0);
    }
  }
  else
  {
    *a2 = 0LL;
    *a3 = 0LL;
  }
  return result;
}
