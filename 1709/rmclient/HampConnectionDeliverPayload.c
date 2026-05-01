/*
 * XREFs of HampConnectionDeliverPayload @ 0x18000D6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

BOOLEAN __fastcall HampConnectionDeliverPayload(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rcx
  BOOLEAN result; // al
  _QWORD v8[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( a3 )
  {
    v6 = a3;
    a3[1] = a2[7];
  }
  else
  {
    v6 = v8;
    v9 = 0LL;
    v8[0] = a2[6];
    v8[1] = a2[7];
    LODWORD(v9) = 3;
  }
  result = (*(__int64 (__fastcall **)(_QWORD *))(a1 + 80))(v6);
  if ( !a3 )
  {
    a2[6] = -1LL;
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
  return result;
}
