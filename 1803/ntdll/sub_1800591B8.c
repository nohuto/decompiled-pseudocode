/*
 * XREFs of sub_1800591B8 @ 0x1800591B8
 * Callers:
 *     RtlQueueWorkItem @ 0x180057A90 (RtlQueueWorkItem.c)
 * Callees:
 *     sub_180024854 @ 0x180024854 (sub_180024854.c)
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 */

__int64 __fastcall sub_1800591B8(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 *v5; // rcx
  _RTL_SRWLOCK *v6; // rdx
  __int64 result; // rax
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v3 = 0;
  if ( a1 )
  {
    _InterlockedIncrement(a1);
LABEL_6:
    sub_180024854((__int64)v8, (_DWORD *)(a2 + 8), (BYTE *)(a2 + 12));
    return v3;
  }
  if ( a3 && (*(_BYTE *)(a3 + 56) & 2) != 0 )
  {
    v5 = &qword_18015D3A8;
    v6 = (_RTL_SRWLOCK *)&unk_18015D3A0;
  }
  else
  {
    v5 = (__int64 *)&qword_18015D3B8;
    v6 = &stru_18015D3B0;
  }
  result = sub_180059230(v5, v6, &v8);
  v3 = result;
  if ( (int)result >= 0 )
    goto LABEL_6;
  return result;
}
