/*
 * XREFs of sub_1800123F4 @ 0x1800123F4
 * Callers:
 *     RtlQueueWorkItem @ 0x180012480 (RtlQueueWorkItem.c)
 * Callees:
 *     sub_180017A78 @ 0x180017A78 (sub_180017A78.c)
 *     sub_180018508 @ 0x180018508 (sub_180018508.c)
 */

__int64 __fastcall sub_1800123F4(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  _RTL_SRWLOCK *v5; // rdx
  __int64 *v6; // rcx
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v3 = 0;
  if ( a1 )
  {
    _InterlockedIncrement(a1);
LABEL_6:
    sub_180017A78(v8, a2 + 8, a2 + 12);
    return (unsigned int)v3;
  }
  if ( a3 && (*(_BYTE *)(a3 + 56) & 2) != 0 )
  {
    v5 = (_RTL_SRWLOCK *)&unk_18015C370;
    v6 = &qword_18015C368;
  }
  else
  {
    v5 = &stru_18015C380;
    v6 = (__int64 *)&qword_18015C378;
  }
  v3 = sub_180018508(v6, v5, &v8);
  if ( v3 >= 0 )
    goto LABEL_6;
  return (unsigned int)v3;
}
