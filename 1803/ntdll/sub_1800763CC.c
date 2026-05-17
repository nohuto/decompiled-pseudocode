/*
 * XREFs of sub_1800763CC @ 0x1800763CC
 * Callers:
 *     LdrQueryImageFileExecutionOptionsEx @ 0x18004AFC0 (LdrQueryImageFileExecutionOptionsEx.c)
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 * Callees:
 *     sub_180076424 @ 0x180076424 (sub_180076424.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall sub_1800763CC(__int64 *a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  signed __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = qword_18015D290;
  v4 = qword_18015D290;
  if ( qword_18015D290 )
    goto LABEL_2;
  result = sub_180076424(&v4, 9LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_18015D290, v4, 0LL) )
    {
      ZwClose(v4);
      v1 = qword_18015D290;
    }
    else
    {
      v1 = v4;
    }
LABEL_2:
    *a1 = v1;
    return 0LL;
  }
  return result;
}
