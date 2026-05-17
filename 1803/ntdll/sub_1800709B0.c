/*
 * XREFs of sub_1800709B0 @ 0x1800709B0
 * Callers:
 *     sub_18002B4E4 @ 0x18002B4E4 (sub_18002B4E4.c)
 *     sub_180039100 @ 0x180039100 (sub_180039100.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_180070738 @ 0x180070738 (sub_180070738.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     TpPostWork @ 0x180025FD0 (TpPostWork.c)
 */

struct _PEB *__fastcall sub_1800709B0(__int64 a1)
{
  struct _PEB *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8

  result = *(struct _PEB **)(a1 + 40);
  if ( *(int *)&result->InheritedAddressSpace >= 0 )
  {
    RtlEnterCriticalSection((__int64)&unk_18015C240);
    v3 = (_QWORD *)qword_18015C278;
    v4 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_18015C278 != &qword_18015C270 )
      __fastfail(3u);
    *(_QWORD *)(a1 + 72) = qword_18015C278;
    *v4 = &qword_18015C270;
    *v3 = v4;
    qword_18015C278 = a1 + 64;
    result = (struct _PEB *)RtlLeaveCriticalSection((__int64)&unk_18015C240);
    if ( qword_18015C1F0 )
    {
      result = NtCurrentPeb();
      if ( !result->Ldr->ShutdownInProgress )
        return (struct _PEB *)TpPostWork((struct _PEB_LDR_DATA *)qword_18015C1F0, v5, v6);
    }
  }
  return result;
}
