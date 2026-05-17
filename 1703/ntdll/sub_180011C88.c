/*
 * XREFs of sub_180011C88 @ 0x180011C88
 * Callers:
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     RtlQueueWorkItem @ 0x180012480 (RtlQueueWorkItem.c)
 * Callees:
 *     sub_180018928 @ 0x180018928 (sub_180018928.c)
 */

__int64 __fastcall sub_180011C88(volatile signed __int32 *a1, __int64 a2)
{
  __int64 v2; // r8
  void *v3; // rdx
  __int64 *v4; // rcx
  __int64 result; // rax

  v2 = qword_18015C378;
  if ( !a1 )
  {
    if ( !a2 || (a1 = (volatile signed __int32 *)qword_18015C368, (*(_BYTE *)(a2 + 56) & 2) == 0) )
      a1 = (volatile signed __int32 *)qword_18015C378;
  }
  if ( a1 == (volatile signed __int32 *)qword_18015C378 )
  {
    v3 = &unk_18015C380;
    v4 = &qword_18015C378;
    return sub_180018928(v4, v3, qword_18015C378);
  }
  if ( a1 == (volatile signed __int32 *)qword_18015C368 )
  {
    v3 = &unk_18015C370;
    v4 = &qword_18015C368;
    return sub_180018928(v4, v3, qword_18015C378);
  }
  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return sub_180082A08(a1, a2, v2);
  return result;
}
