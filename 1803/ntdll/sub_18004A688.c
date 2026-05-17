/*
 * XREFs of sub_18004A688 @ 0x18004A688
 * Callers:
 *     sub_180049E24 @ 0x180049E24 (sub_180049E24.c)
 *     sub_18004A230 @ 0x18004A230 (sub_18004A230.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_18004A8A8 @ 0x18004A8A8 (sub_18004A8A8.c)
 *     sub_18004AD34 @ 0x18004AD34 (sub_18004AD34.c)
 */

__int64 __fastcall sub_18004A688(unsigned __int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _DWORD *v10; // rdi
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v7 = *(_QWORD *)(a1 + 72);
    if ( v7 )
      sub_18004AD34(v7);
    v8 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(v8 + 8) != a1 + 8 || (v9 = *(_QWORD **)(a1 + 16), *v9 != a1 + 8) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    v10 = *(_DWORD **)(a1 + 88);
    *a2 = *(_QWORD *)(a1 + 104);
    *a3 = *(_QWORD *)(a1 + 112);
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
    if ( v10 )
    {
      *v10 = 1;
      _InterlockedOr(v11, 0);
      return sub_18004A8A8(v10, 0LL);
    }
  }
  else
  {
    *a2 = 0LL;
    *a3 = 0LL;
  }
  return result;
}
