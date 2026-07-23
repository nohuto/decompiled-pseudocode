/*
 * XREFs of sub_18000FF10 @ 0x18000FF10
 * Callers:
 *     sub_18000FFDC @ 0x18000FFDC (sub_18000FFDC.c)
 * Callees:
 *     sub_18000A978 @ 0x18000A978 (sub_18000A978.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     sub_180086AA0 @ 0x180086AA0 (sub_180086AA0.c)
 */

LOGICAL __fastcall sub_18000FF10(volatile signed __int32 *BaseAddress, _QWORD *a2, _QWORD *a3)
{
  LOGICAL result; // eax
  volatile signed __int32 **v7; // rdx
  PVOID *v8; // rcx
  _DWORD *v9; // rdi
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  result = _InterlockedExchangeAdd(BaseAddress + 20, 0xFFFFFFFF);
  if ( result == 1 )
  {
    if ( *((_QWORD *)BaseAddress + 9) )
      sub_180086AA0();
    v7 = (volatile signed __int32 **)*((_QWORD *)BaseAddress + 1);
    v8 = (PVOID *)*((_QWORD *)BaseAddress + 2);
    if ( v7[1] != BaseAddress + 2 || *v8 != BaseAddress + 2 )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = (volatile signed __int32 *)v8;
    v9 = (_DWORD *)*((_QWORD *)BaseAddress + 11);
    *a2 = *((_QWORD *)BaseAddress + 13);
    *a3 = *((_QWORD *)BaseAddress + 14);
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)BaseAddress);
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
