/*
 * XREFs of sub_1800D3CE8 @ 0x1800D3CE8
 * Callers:
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 * Callees:
 *     DbgPrint @ 0x180008590 (DbgPrint.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800D4DBC @ 0x1800D4DBC (sub_1800D4DBC.c)
 *     sub_1800D51CC @ 0x1800D51CC (sub_1800D51CC.c)
 */

int __fastcall sub_1800D3CE8(__int64 a1)
{
  struct _PEB *v1; // rax
  __int64 *v3; // rdi
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD, __int64); // rax

  v1 = NtCurrentPeb();
  if ( (v1->NtGlobalFlag & 0x100) != 0 && byte_18016F298 )
  {
    RtlEnterCriticalSection(&stru_18015B560);
    if ( (unsigned __int8)sub_1800D51CC(*(_QWORD *)(a1 + 48)) )
    {
      DbgPrint("AVRF: AVrfDllUnloadNotification called for a provider (%p) \n", (const void *)a1);
      __debugbreak();
    }
    if ( (int)sub_1800D4DBC(a1) >= 0 )
    {
      v3 = (__int64 *)qword_18015B590;
      while ( v3 != &qword_18015B590 )
      {
        v4 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))v3[7];
        v3 = (__int64 *)*v3;
        if ( v4 )
          v4(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a1);
      }
    }
    LODWORD(v1) = RtlLeaveCriticalSection(&stru_18015B560);
  }
  return (int)v1;
}
