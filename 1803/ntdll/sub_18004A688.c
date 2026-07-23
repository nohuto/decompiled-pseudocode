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

LOGICAL __fastcall sub_18004A688(volatile signed __int32 *BaseAddress, _QWORD *a2, _QWORD *a3)
{
  LOGICAL result; // eax
  __int64 v7; // rcx
  volatile signed __int32 **v8; // rcx
  PVOID *v9; // rdx
  _DWORD *v10; // rdi
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  result = _InterlockedExchangeAdd(BaseAddress + 20, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v7 = *((_QWORD *)BaseAddress + 9);
    if ( v7 )
      sub_18004AD34(v7);
    v8 = (volatile signed __int32 **)*((_QWORD *)BaseAddress + 1);
    if ( v8[1] != BaseAddress + 2 || (v9 = (PVOID *)*((_QWORD *)BaseAddress + 2), *v9 != BaseAddress + 2) )
      __fastfail(3u);
    *v9 = v8;
    v8[1] = (volatile signed __int32 *)v9;
    v10 = (_DWORD *)*((_QWORD *)BaseAddress + 11);
    *a2 = *((_QWORD *)BaseAddress + 13);
    *a3 = *((_QWORD *)BaseAddress + 14);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)BaseAddress);
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
