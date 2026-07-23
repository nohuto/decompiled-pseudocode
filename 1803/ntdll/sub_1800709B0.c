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

void __fastcall sub_1800709B0(__int64 a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  if ( **(int **)(a1 + 40) >= 0 )
  {
    RtlEnterCriticalSection(&stru_18015C240);
    v2 = (_QWORD *)qword_18015C278;
    v3 = (_QWORD *)(a1 + 64);
    if ( *(__int64 **)qword_18015C278 != &qword_18015C270 )
      __fastfail(3u);
    *(_QWORD *)(a1 + 72) = qword_18015C278;
    *v3 = &qword_18015C270;
    *v2 = v3;
    qword_18015C278 = a1 + 64;
    RtlLeaveCriticalSection(&stru_18015C240);
    if ( Work )
    {
      if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
        TpPostWork(Work);
    }
  }
}
