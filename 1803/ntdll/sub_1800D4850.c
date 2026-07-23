/*
 * XREFs of sub_1800D4850 @ 0x1800D4850
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_1800D4850(__int64 a1, __int64 a2)
{
  struct _PEB *v2; // rax
  __int64 *v5; // rbx
  void (__fastcall *v6)(__int64, __int64); // rax

  v2 = NtCurrentPeb();
  if ( (v2->NtGlobalFlag & 0x100) != 0 && byte_18016F298 )
  {
    RtlEnterCriticalSection(&stru_18015B560);
    v5 = (__int64 *)qword_18015B590;
    while ( v5 != &qword_18015B590 )
    {
      v6 = (void (__fastcall *)(__int64, __int64))v5[8];
      v5 = (__int64 *)*v5;
      if ( v6 )
        v6(a1, a2);
    }
    LODWORD(v2) = RtlLeaveCriticalSection(&stru_18015B560);
  }
  return (int)v2;
}
