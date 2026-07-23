/*
 * XREFs of sub_180047138 @ 0x180047138
 * Callers:
 *     sub_180047030 @ 0x180047030 (sub_180047030.c)
 *     RtlQueueWorkItem @ 0x180057A90 (RtlQueueWorkItem.c)
 * Callees:
 *     sub_180047198 @ 0x180047198 (sub_180047198.c)
 */

__int64 __fastcall sub_180047138(volatile signed __int32 *a1, __int64 a2)
{
  _RTL_SRWLOCK *v2; // rdx
  __int64 *v3; // rcx
  __int64 result; // rax

  if ( !a1 )
  {
    if ( !a2 || (a1 = (volatile signed __int32 *)qword_18015D3A8, (*(_BYTE *)(a2 + 56) & 2) == 0) )
      a1 = (volatile signed __int32 *)qword_18015D3B8;
  }
  if ( a1 == qword_18015D3B8 )
  {
    v2 = &stru_18015D3B0;
    v3 = (__int64 *)&qword_18015D3B8;
    return sub_180047198(v3, v2);
  }
  if ( a1 == (volatile signed __int32 *)qword_18015D3A8 )
  {
    v2 = (_RTL_SRWLOCK *)&unk_18015D3A0;
    v3 = &qword_18015D3A8;
    return sub_180047198(v3, v2);
  }
  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return sub_18007E8A0((PVOID)a1);
  return result;
}
