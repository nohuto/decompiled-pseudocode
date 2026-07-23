/*
 * XREFs of sub_1800DA5D0 @ 0x1800DA5D0
 * Callers:
 *     sub_180011E90 @ 0x180011E90 (sub_180011E90.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     DbgPrint @ 0x18005FEF0 (DbgPrint.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800DB608 @ 0x1800DB608 (sub_1800DB608.c)
 *     sub_1800DBA0C @ 0x1800DBA0C (sub_1800DBA0C.c)
 */

int __fastcall sub_1800DA5D0(__int64 a1)
{
  struct _PEB *v1; // rax
  __int64 *v3; // rdi
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD, __int64); // rax

  v1 = NtCurrentPeb();
  if ( (v1->NtGlobalFlag & 0x100) != 0 && byte_18016B281 )
  {
    RtlEnterCriticalSection(&stru_18015A540);
    if ( (unsigned __int8)sub_1800DBA0C(*(_QWORD *)(a1 + 48)) )
    {
      DbgPrint("AVRF: AVrfDllUnloadNotification called for a provider (%p) \n", (const void *)a1);
      __debugbreak();
    }
    if ( (int)sub_1800DB608(a1) >= 0 )
    {
      v3 = (__int64 *)qword_18015A570;
      while ( v3 != &qword_18015A570 )
      {
        v4 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))v3[7];
        v3 = (__int64 *)*v3;
        if ( v4 )
          v4(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a1);
      }
    }
    LODWORD(v1) = RtlLeaveCriticalSection(&stru_18015A540);
  }
  return (int)v1;
}
